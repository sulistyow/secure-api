//
// Created by me on 4/6/21.
//

#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_securityapp_MainActivity_getApi(JNIEnv *env, jclass clazz) {
    // TODO: implement getApi()
    std::string api_key = "this is api key";
    return env->NewStringUTF(api_key.c_str());
}
