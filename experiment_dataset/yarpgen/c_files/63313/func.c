/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63313
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */short) ((((var_12) | (((/* implicit */unsigned long long int) 471693868U)))) == (((((/* implicit */_Bool) 3U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_0 - 2] [i_1]))) : (arr_5 [i_1])))));
                    arr_8 [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_6 [(_Bool)1] [i_0] [i_0 + 2]), (((/* implicit */short) (signed char)88))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 505985809U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0]))) >= (((/* implicit */unsigned long long int) arr_0 [i_0]))))) : ((+(((/* implicit */int) arr_2 [i_0]))))));
                    arr_9 [i_0] [10] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32764)) ^ (((/* implicit */int) (unsigned char)111))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)104)), (var_11))))) : (var_10))) | (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_7);
    var_20 = ((/* implicit */unsigned char) min((min((var_12), (((/* implicit */unsigned long long int) ((var_17) && (((/* implicit */_Bool) var_16))))))), (((/* implicit */unsigned long long int) ((((min((((/* implicit */int) var_4)), (var_13))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_0))))))))));
}
