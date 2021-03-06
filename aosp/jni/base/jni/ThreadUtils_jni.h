// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/ThreadUtils

#ifndef org_chromium_base_ThreadUtils_JNI
#define org_chromium_base_ThreadUtils_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kThreadUtilsClassPath[] =
    "org/chromium/base/ThreadUtils";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_ThreadUtils_clazz = NULL;
}  // namespace

// Step 2: method stubs.

static base::subtle::AtomicWord g_ThreadUtils_setThreadPriorityAudio = 0;
static void Java_ThreadUtils_setThreadPriorityAudio(JNIEnv* env, jint tid) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_ThreadUtils_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_ThreadUtils_clazz,
      "setThreadPriorityAudio",

"("
"I"
")"
"V",
      &g_ThreadUtils_setThreadPriorityAudio);

  env->CallStaticVoidMethod(g_ThreadUtils_clazz,
      method_id, tid);
  base::android::CheckException(env);

}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_ThreadUtils_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kThreadUtilsClassPath).obj()));
  return true;
}

#endif  // org_chromium_base_ThreadUtils_JNI
