/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_sleepycat_db_DbLockTab */

#ifndef _Included_com_sleepycat_db_DbLockTab
#define _Included_com_sleepycat_db_DbLockTab
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_sleepycat_db_DbLockTab
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbLockTab_close
  (JNIEnv *, jobject);

/*
 * Class:     com_sleepycat_db_DbLockTab
 * Method:    detect
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbLockTab_detect
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_sleepycat_db_DbLockTab
 * Method:    finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbLockTab_finalize
  (JNIEnv *, jobject);

/*
 * Class:     com_sleepycat_db_DbLockTab
 * Method:    get
 * Signature: (IILcom/sleepycat/db/Dbt;I)Lcom/sleepycat/db/DbLock;
 */
JNIEXPORT jobject JNICALL Java_com_sleepycat_db_DbLockTab_get
  (JNIEnv *, jobject, jint, jint, jobject, jint);

/*
 * Class:     com_sleepycat_db_DbLockTab
 * Method:    id
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sleepycat_db_DbLockTab_id
  (JNIEnv *, jobject);

/*
 * Class:     com_sleepycat_db_DbLockTab
 * Method:    open
 * Signature: (Ljava/lang/String;IILcom/sleepycat/db/DbEnv;)Lcom/sleepycat/db/DbLockTab;
 */
JNIEXPORT jobject JNICALL Java_com_sleepycat_db_DbLockTab_open
  (JNIEnv *, jclass, jstring, jint, jint, jobject);

/*
 * Class:     com_sleepycat_db_DbLockTab
 * Method:    unlink
 * Signature: (Ljava/lang/String;ILcom/sleepycat/db/DbEnv;)V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbLockTab_unlink
  (JNIEnv *, jclass, jstring, jint, jobject);

#ifdef __cplusplus
}
#endif
#endif
