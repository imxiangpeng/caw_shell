// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/DownloadController

#ifndef org_chromium_content_browser_DownloadController_JNI
#define org_chromium_content_browser_DownloadController_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kDownloadControllerClassPath[] =
    "org/chromium/content/browser/DownloadController";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_DownloadController_clazz = NULL;
}  // namespace

namespace content {

static void Init(JNIEnv* env, jobject obj);

// Step 2: method stubs.

static base::subtle::AtomicWord g_DownloadController_getInstance = 0;
static ScopedJavaLocalRef<jobject> Java_DownloadController_getInstance(JNIEnv*
    env) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DownloadController_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_DownloadController_clazz,
      "getInstance",

"("
")"
"Lorg/chromium/content/browser/DownloadController;",
      &g_DownloadController_getInstance);

  jobject ret =
    env->CallStaticObjectMethod(g_DownloadController_clazz,
      method_id);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_DownloadController_newHttpGetDownload = 0;
static void Java_DownloadController_newHttpGetDownload(JNIEnv* env, jobject obj,
    jobject view,
    jstring url,
    jstring userAgent,
    jstring contentDisposition,
    jstring mimeType,
    jstring cookie,
    jstring referer,
    jlong contentLength) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DownloadController_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_DownloadController_clazz,
      "newHttpGetDownload",

"("
"Lorg/chromium/content/browser/ContentViewCore;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"J"
")"
"V",
      &g_DownloadController_newHttpGetDownload);

  env->CallVoidMethod(obj,
      method_id, view, url, userAgent, contentDisposition, mimeType, cookie,
          referer, contentLength);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_DownloadController_onDownloadStarted = 0;
static void Java_DownloadController_onDownloadStarted(JNIEnv* env, jobject obj,
    jobject view,
    jstring filename,
    jstring mimeType) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DownloadController_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_DownloadController_clazz,
      "onDownloadStarted",

"("
"Lorg/chromium/content/browser/ContentViewCore;"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V",
      &g_DownloadController_onDownloadStarted);

  env->CallVoidMethod(obj,
      method_id, view, filename, mimeType);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_DownloadController_onDownloadCompleted = 0;
static void Java_DownloadController_onDownloadCompleted(JNIEnv* env, jobject
    obj, jobject context,
    jstring url,
    jstring mimeType,
    jstring filename,
    jstring path,
    jlong contentLength,
    jboolean successful,
    jint downloadId) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DownloadController_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_DownloadController_clazz,
      "onDownloadCompleted",

"("
"Landroid/content/Context;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"J"
"Z"
"I"
")"
"V",
      &g_DownloadController_onDownloadCompleted);

  env->CallVoidMethod(obj,
      method_id, context, url, mimeType, filename, path, contentLength,
          successful, downloadId);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_DownloadController_onDownloadUpdated = 0;
static void Java_DownloadController_onDownloadUpdated(JNIEnv* env, jobject obj,
    jobject context,
    jstring url,
    jstring mimeType,
    jstring filename,
    jstring path,
    jlong contentLength,
    jboolean successful,
    jint downloadId,
    jint percentCompleted,
    jlong timeRemainingInMs) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DownloadController_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_DownloadController_clazz,
      "onDownloadUpdated",

"("
"Landroid/content/Context;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"J"
"Z"
"I"
"I"
"J"
")"
"V",
      &g_DownloadController_onDownloadUpdated);

  env->CallVoidMethod(obj,
      method_id, context, url, mimeType, filename, path, contentLength,
          successful, downloadId, percentCompleted, timeRemainingInMs);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_DownloadController_onDangerousDownload = 0;
static void Java_DownloadController_onDangerousDownload(JNIEnv* env, jobject
    obj, jobject view,
    jstring filename,
    jint downloadId) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DownloadController_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_DownloadController_clazz,
      "onDangerousDownload",

"("
"Lorg/chromium/content/browser/ContentViewCore;"
"Ljava/lang/String;"
"I"
")"
"V",
      &g_DownloadController_onDangerousDownload);

  env->CallVoidMethod(obj,
      method_id, view, filename, downloadId);
  base::android::CheckException(env);

}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_DownloadController_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kDownloadControllerClassPath).obj()));
  static const JNINativeMethod kMethodsDownloadController[] = {
    { "nativeInit",
"("
")"
"V", reinterpret_cast<void*>(Init) },
  };
  const int kMethodsDownloadControllerSize =
      arraysize(kMethodsDownloadController);

  if (env->RegisterNatives(g_DownloadController_clazz,
                           kMethodsDownloadController,
                           kMethodsDownloadControllerSize) < 0) {
    LOG(ERROR) << "RegisterNatives failed in " << __FILE__;
    return false;
  }

  return true;
}
}  // namespace content

#endif  // org_chromium_content_browser_DownloadController_JNI
