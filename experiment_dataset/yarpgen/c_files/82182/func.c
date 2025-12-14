/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82182
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
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((((((/* implicit */int) var_11)) <= (((/* implicit */int) var_11)))) ? (((/* implicit */int) var_1)) : (((((((/* implicit */int) var_2)) + (2147483647))) >> (((/* implicit */int) var_11))))))))))));
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(var_12)))) ^ (max((((/* implicit */unsigned long long int) 2215199421138128734LL)), (min((var_6), (((/* implicit */unsigned long long int) var_9))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2 - 2] [i_3] [(unsigned char)8] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [6ULL] [i_3])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_4] [i_3] [i_2] [i_1]))))) : (((((arr_4 [i_0] [i_1] [i_2] [i_2]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_5 [i_1] [i_2] [i_3] [i_4])) - (147))))))));
                                var_15 = arr_1 [i_2];
                                var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (var_7)))) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_0 + 1] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-30))) >= (2147481600U))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) arr_5 [i_0] [18ULL] [i_0] [i_0])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_1] [(unsigned char)4] [i_1] [(short)17] [i_1] [i_0])) : (((/* implicit */int) arr_6 [16ULL])))))) > (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_9))));
    var_19 = ((/* implicit */unsigned int) ((var_12) < (((/* implicit */unsigned int) (~(((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_11))))))))));
}
