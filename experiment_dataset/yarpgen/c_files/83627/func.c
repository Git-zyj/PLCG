/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83627
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) (-(((unsigned int) arr_2 [i_0]))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) var_5);
                arr_6 [7U] = ((/* implicit */int) arr_3 [i_0] [i_1]);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-23717))))) & (((/* implicit */long long int) ((/* implicit */int) (short)-23717)))));
                    var_12 = 3120212395U;
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_13 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_2 + 2] [i_2] [i_2 - 1] [i_2] [i_1] [i_2])) * (((/* implicit */int) (short)23716))))) : (((((/* implicit */_Bool) arr_10 [16U] [(short)12] [i_2] [i_3] [i_1] [i_2 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1 + 2] [i_2] [i_3] [i_1] [i_2 + 2]))) : (var_9)))));
                        var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) var_9)))));
                    }
                }
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_7))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (~(max((((((/* implicit */int) var_2)) | (var_0))), (((/* implicit */int) var_2))))));
    var_17 = ((/* implicit */unsigned int) var_4);
    var_18 = ((((var_7) + (2147483647))) << (((((var_0) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)4520)) : (var_4))) - (4515))))) - (42816173))));
}
