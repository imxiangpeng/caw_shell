// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/app/ChildProcessService

#ifndef org_chromium_content_app_ChildProcessService_JNI
#define org_chromium_content_app_ChildProcessService_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kChildProcessServiceClassPath[] =
    "org/chromium/content/app/ChildProcessService";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_ChildProcessService_clazz = NULL;
}  // namespace

namespace content {

static void InitChildProcess(JNIEnv* env, jclass clazz,
    jobject applicationContext,
    jobject service,
    jintArray extraFileIds,
    jintArray extraFileFds,
    jint cpuCount,
    jlong cpuFeatures);

static void ExitChildProcess(JNIEnv* env, jclass clazz);

static void ShutdownMainThread(JNIEnv* env, jobject obj);

// Step 2: method stubs.

static base::subtle::AtomicWord
    g_ChildProcessService_establishSurfaceTexturePeer = 0;
static void Java_ChildProcessService_establishSurfaceTexturePeer(JNIEnv* env,
    jobject obj, jint pid,
    jobject surfaceObject,
    jint primaryID,
    jint secondaryID) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_ChildProcessService_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_ChildProcessService_clazz,
      "establishSurfaceTexturePeer",

"("
"I"
"Ljava/lang/Object;"
"I"
"I"
")"
"V",
      &g_ChildProcessService_establishSurfaceTexturePeer);

  env->CallVoidMethod(obj,
      method_id, pid, surfaceObject, primaryID, secondaryID);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_ChildProcessService_getViewSurface = 0;
static ScopedJavaLocalRef<jobject>
    Java_ChildProcessService_getViewSurface(JNIEnv* env, jobject obj, jint
    surfaceId) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_ChildProcessService_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_ChildProcessService_clazz,
      "getViewSurface",

"("
"I"
")"
"Landroid/view/Surface;",
      &g_ChildProcessService_getViewSurface);

  jobject ret =
    env->CallObjectMethod(obj,
      method_id, surfaceId);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_ChildProcessService_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kChildProcessServiceClassPath).obj()));
  static const JNINativeMethod kMethodsChildProcessService[] = {
    { "nativeInitChildProcess",
"("
"Landroid/content/Context;"
"Lorg/chromium/content/app/ChildProcessService;"
"[I"
"[I"
"I"
"J"
")"
"V", reinterpret_cast<void*>(InitChildProcess) },
    { "nativeExitChildProcess",
"("
")"
"V", reinterpret_cast<void*>(ExitChildProcess) },
    { "nativeShutdownMainThread",
"("
")"
"V", reinterpret_cast<void*>(ShutdownMainThread) },
  };
  const int kMethodsChildProcessServiceSize =
      arraysize(kMethodsChildProcessService);

  if (env->RegisterNatives(g_ChildProcessService_clazz,
                           kMethodsChildProcessService,
                           kMethodsChildProcessServiceSize) < 0) {
    LOG(ERROR) << "RegisterNatives failed in " << __FILE__;
    return false;
  }

  return true;
}
}  // namespace content

#endif  // org_chromium_content_app_ChildProcessService_JNI
