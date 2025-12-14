/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96077
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((/* implicit */unsigned short) min((((min((14881309220981739432ULL), (((/* implicit */unsigned long long int) var_7)))) / (min((14881309220981739422ULL), (3565434852727812174ULL))))), (max((((unsigned long long int) var_10)), (max((14881309220981739442ULL), (var_10)))))));
    var_15 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) ((((var_10) << (((((/* implicit */_Bool) 3482348267U)) ? (19ULL) : (13136899260295176646ULL))))) + ((+(var_1)))));
                arr_6 [(signed char)2] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) / (var_4)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)201))))), (((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) var_13)), (var_1))) : (min((3565434852727812206ULL), (14881309220981739432ULL)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(var_9)))) : (14881309220981739432ULL)))) || (((((/* implicit */unsigned long long int) var_12)) <= (min((((/* implicit */unsigned long long int) var_5)), (16554296576437684905ULL)))))));
}
