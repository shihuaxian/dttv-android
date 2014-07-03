#ifndef DTP_NATIVE_H
#define DTP_NATIVE_H

#include <jni.h>
#include <string.h>

int native_ui_init(JNIEnv * env, jobject this, jint w, jint h);
int native_disp_frame(JNIEnv * env, jobject this);
int native_ui_stop(JNIEnv * env, jobject this);

int native_playerStart(JNIEnv * env, jobject this, jstring url);
int native_playerPause(JNIEnv * env, jobject this);
int native_playerResume(JNIEnv * env, jobject this);
int native_playerSeekTo(JNIEnv * env, jobject this, jint pos);
int native_playerStop(JNIEnv * env, jobject this);

#endif
