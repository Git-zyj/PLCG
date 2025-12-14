/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69262
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
    var_17 = ((/* implicit */long long int) var_3);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_18 -= var_7;
                        var_19 = var_15;
                        var_20 = ((/* implicit */long long int) arr_5 [i_1] [i_1] [i_3]);
                    }
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0] [i_0 + 2])) ? (max((arr_5 [i_0 + 2] [9ULL] [i_0 + 1]), (((/* implicit */unsigned long long int) var_9)))) : (max((arr_5 [i_0 - 1] [6U] [i_0 - 2]), (((/* implicit */unsigned long long int) var_0))))));
                        var_22 = ((/* implicit */short) 96066328U);
                        arr_11 [3U] [i_2] [i_2] [i_1] [17U] [17U] = (short)7;
                        var_23 = ((/* implicit */unsigned long long int) arr_3 [4U]);
                    }
                    for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        var_24 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (-(min((arr_5 [i_0] [i_0] [(short)2]), (((/* implicit */unsigned long long int) var_2)))))))));
                        arr_14 [10] [14LL] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_5] [i_0 + 1])) ? (((unsigned long long int) var_15)) : (arr_7 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [9U])) : (max((arr_7 [i_0 + 2]), (((/* implicit */unsigned long long int) arr_2 [i_0 - 3]))))));
                    }
                    var_25 -= ((/* implicit */long long int) max((min((arr_2 [i_0 - 4]), (arr_2 [i_0 - 1]))), (min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 4])))));
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((short) max((2147483647), (((/* implicit */int) var_9))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) max((((unsigned int) (-2147483647 - 1))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (short)4420)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_8) : (((/* implicit */long long int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (max((var_4), (((/* implicit */long long int) var_14))))))));
}
