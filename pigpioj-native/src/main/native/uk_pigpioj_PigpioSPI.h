/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class uk_pigpioj_PigpioSPI */

#ifndef _Included_uk_pigpioj_PigpioSPI
#define _Included_uk_pigpioj_PigpioSPI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     uk_pigpioj_PigpioSPI
 * Method:    spiOpen
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioSPI_spiOpen
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     uk_pigpioj_PigpioSPI
 * Method:    spiClose
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioSPI_spiClose
  (JNIEnv *, jclass, jint);

/*
 * Class:     uk_pigpioj_PigpioSPI
 * Method:    spiRead
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioSPI_spiRead
  (JNIEnv *, jclass, jint, jbyteArray, jint);

/*
 * Class:     uk_pigpioj_PigpioSPI
 * Method:    spiWrite
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioSPI_spiWrite
  (JNIEnv *, jclass, jint, jbyteArray, jint);

/*
 * Class:     uk_pigpioj_PigpioSPI
 * Method:    spiXfer
 * Signature: (I[B[BI)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioSPI_spiXfer
  (JNIEnv *, jclass, jint, jbyteArray, jbyteArray, jint);

#ifdef __cplusplus
}
#endif
#endif
