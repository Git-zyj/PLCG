/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90190
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
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((/* implicit */int) var_7)) + (2147483647))) << ((((+(((/* implicit */int) ((var_1) < (((/* implicit */int) var_7))))))) - (1))))))));
    var_19 = ((/* implicit */int) ((min((7216093484689322618ULL), (((/* implicit */unsigned long long int) (signed char)84)))) & (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)84)) && (((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_13)), ((unsigned char)22)))))))));
    var_20 -= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) 413310323U)) && (((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) var_7))))) % (((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */long long int) (-(var_2)))) : (var_10)))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(min((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1]))))))));
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 16; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((long long int) arr_5 [i_2] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) ((var_11) >= (((/* implicit */long long int) var_15)))))))) - (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                                var_23 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) << (((arr_10 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_2 - 3]) - (6667282432392101051ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_2 - 3])) && (((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 - 1])))))) : (min((arr_10 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_2 + 2]), (((/* implicit */unsigned long long int) var_8)))));
                            }
                        } 
                    } 
                } 
                var_24 ^= max((((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_11 [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 413310323U)) ? (((/* implicit */int) (short)17869)) : (((/* implicit */int) (signed char)-84))))));
                arr_12 [i_0] [i_1] = ((/* implicit */signed char) ((arr_8 [i_0 - 1]) + (((arr_8 [i_0 - 1]) * (((/* implicit */unsigned int) var_1))))));
            }
        } 
    } 
}
