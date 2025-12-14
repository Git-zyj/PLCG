/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95289
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
    var_20 = ((/* implicit */int) ((signed char) min((var_16), (((/* implicit */unsigned long long int) (signed char)-16)))));
    var_21 = ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)184)), (max((-1), (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)158)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_22 += ((/* implicit */unsigned char) (-(max((var_7), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)7)) / (arr_5 [i_1]))))))));
                    var_23 = ((/* implicit */unsigned long long int) max((max((min((((/* implicit */int) arr_8 [(unsigned char)5])), (var_10))), (((/* implicit */int) min(((unsigned short)65521), (((/* implicit */unsigned short) var_1))))))), (((/* implicit */int) var_13))));
                }
            } 
        } 
    } 
    var_24 ^= ((/* implicit */unsigned char) (signed char)-65);
}
