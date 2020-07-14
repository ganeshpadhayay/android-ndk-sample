#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_android_1ndk_1sample_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jdouble JNICALL
Java_com_example_android_1ndk_1sample_MainActivity_doubleFromJNI(JNIEnv *env, jobject /* this */) {
    return 12.32;
}
