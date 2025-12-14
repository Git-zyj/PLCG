/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99961
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
    var_16 = ((/* implicit */short) (+(((unsigned long long int) (+(9223372036854775807LL))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [13] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) max((var_15), (((/* implicit */signed char) var_5)))))));
                arr_6 [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((14ULL) >= (var_10)))), (((((/* implicit */_Bool) var_1)) ? (-6485647210828174922LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))), (7440191772875297450ULL)));
                arr_7 [i_0 + 2] [i_1] [i_1] &= ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)22846)) | (((/* implicit */int) arr_2 [i_0 + 2] [i_1]))))));
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((2147483646), ((+((-2147483647 - 1))))))) ? (((((/* implicit */unsigned long long int) ((var_8) / (2147483646)))) / (var_2))) : (((unsigned long long int) var_9))));
            }
        } 
    } 
}
