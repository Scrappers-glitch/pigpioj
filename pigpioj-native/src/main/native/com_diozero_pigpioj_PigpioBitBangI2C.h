/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_diozero_pigpioj_PigpioBitBangI2C */

#ifndef _Included_com_diozero_pigpioj_PigpioBitBangI2C
#define _Included_com_diozero_pigpioj_PigpioBitBangI2C
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_diozero_pigpioj_PigpioBitBangI2C
 * Method:    bbI2COpen
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_diozero_pigpioj_PigpioBitBangI2C_bbI2COpen
  (JNIEnv* env, jclass clz, jint sda, jint scl, jint baud);

/*
 * Class:     com_diozero_pigpioj_PigpioBitBangI2C
 * Method:    bbI2CClose
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_diozero_pigpioj_PigpioBitBangI2C_bbI2CClose
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_diozero_pigpioj_PigpioBitBangI2C
 * Method:    bbI2CZIP
 * Signature: (I[BI[BI)I
 */
JNIEXPORT jint JNICALL Java_com_diozero_pigpioj_PigpioBitBangI2C_bbI2CZIP
  (JNIEnv *, jclass, jint, jbyteArray, jint, jbyteArray, jint);

#ifdef __cplusplus
}
#endif
#endif
