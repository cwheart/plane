#include <jni.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>


#define BIT_SET(x, y) x|=(1<<y) //将X的第Y位置1
#define BIT_CLR(x, y) x&=~(1<<y) //将X的第Y位清0

// submit location data to server
// plane_no 机号
// tail_no 尾号
// altitude 海拔
// latitude 经度
// longitude 纬度
// pressure 气压
// pressure_altitude 通过气压计算的海拔
// speed 时速
int post_data(char *plane_no, // 170
    char *tail_no, // TODO
    double altitude, // 140
    double latitude, // 130
    double longitude, // 130
    float pressure, // 无
    double pressure_altitude, // 145
    float speed) // 160或150
{
    // TODO
    // 构造数据结构
    // 发送数据到服务器
    int j, iPos = 0, iFsLen;
    unsigned short int usT1;
    char acFs[6];
    // char plane_no[8];
    unsigned char uacT3[6], uacBuff[1024], uacTemp[1024];

    uacT3[0]=plane_no[0]; //xx000000  uacT3[0]=uacT3[0]<<2; //000000xx  uacT3[0]=uacT3[0]|plane_no[1]>>4; //00000000
    uacT3[1]=plane_no[1] << 4; //00000000 0000  uacT3[1]=uacT3[1]|plane_no[2]>>2;//00000000 00000000
    uacT3[2]=plane_no[2] << 6; //00000000 00000000 0000  uacT3[2]=uacT3[2]|plane_no[3];
    uacT3[3]=plane_no[4];
    uacT3[3]=uacT3[3] << 2;
    uacT3[3]=uacT3[3]|plane_no[5] >> 4;
    uacT3[4]=plane_no[5]<<4;
    uacT3[4]=uacT3[4]|plane_no[6]>>2;
    uacT3[5]=plane_no[6]<<6;
    uacT3[5]=uacT3[5]|plane_no[7];
    for(j=0; j<6; j++) {
        uacTemp[iPos++] = uacT3[j];
    }
    BIT_SET(acFs[2],4);
    BIT_SET(acFs[1],0);
    BIT_SET(acFs[2],0);
    BIT_SET(acFs[3],0);
    uacBuff[0] = 0x15;

    for(j=0;j<6;j++) {
        if(acFs[j]>0) {
            uacBuff[3+j]=acFs[j];
            iFsLen=iFsLen+1;
        }
    }
    usT1 = iPos + 3 + iFsLen;
    usT1 = htons(usT1);
    memcpy(uacBuff + 1, &usT1, sizeof(unsigned short int));
    memcpy(uacBuff + 3 + iFsLen, uacTemp, iPos);

    // 头 0x15
    // 长度 包括头本身数据长度
    // 数据项
    // 各个数据项内容
    return 0;
}

JNIEXPORT jstring JNICALL
Java_com_xinshuaifeng_work_planeloc_AirNav_stringFromJNI( JNIEnv* env,
                                                  jobject thiz )
{
#if defined(__arm__)
    #if defined(__ARM_ARCH_7A__)
    #if defined(__ARM_NEON__)
      #if defined(__ARM_PCS_VFP)
        #define ABI "armeabi-v7a/NEON (hard-float)"
      #else
        #define ABI "armeabi-v7a/NEON"
      #endif
    #else
      #if defined(__ARM_PCS_VFP)
        #define ABI "armeabi-v7a (hard-float)"
      #else
        #define ABI "armeabi-v7a"
      #endif
    #endif
  #else
   #define ABI "armeabi"
  #endif
#elif defined(__i386__)
#define ABI "x86"
#elif defined(__x86_64__)
#define ABI "x86_64"
#elif defined(__mips64)  /* mips64el-* toolchain defines __mips__ too */
#define ABI "mips64"
#elif defined(__mips__)
#define ABI "mips"
#elif defined(__aarch64__)
#define ABI "arm64-v8a"
#else
#define ABI "unknown"
#endif

    return (*env)->NewStringUTF(env, "Hello from JNI !  Compiled with ABI " ABI ".");
}

JNIEXPORT jstring JNICALL
Java_com_xinshuaifeng_work_planeloc_AirNav_submitData( JNIEnv* env,
    jobject thiz,
    jstring plane_no_,
    jstring tail_no_,
    jdouble c_altitude,
    jdouble c_latitude,
    jdouble c_longitude,
    jfloat c_pressure,
    jdouble c_pressure_altitude,
    jfloat c_speed)
{
    int result;
    const char *c_plane_no;
    const char *c_tail_no;
    c_plane_no = (*env)->GetStringUTFChars(env, plane_no_, NULL);
    c_tail_no = (*env)->GetStringUTFChars(env, plane_no_, NULL);

    result = post_data(c_plane_no, c_tail_no, c_altitude, c_latitude, c_longitude, c_pressure, c_pressure_altitude, c_speed);
    return (*env)->NewStringUTF(env, c_plane_no);
}





