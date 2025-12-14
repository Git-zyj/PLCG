/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64758
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((var_2) < (var_9)))) - (((/* implicit */int) var_7))))) : (((((/* implicit */unsigned int) 536870912)) - (0U))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) * (((/* implicit */int) var_5))));
                arr_5 [i_1] [0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_5))))) >> (((((/* implicit */int) var_5)) >> (((var_2) + (1545501226)))))))) ? (arr_3 [i_0] [6]) : ((-(var_3))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] = (-(var_2));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((arr_0 [i_2 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
                    }
                    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_11 |= ((/* implicit */_Bool) ((-31) + (-31)));
                        arr_15 [(_Bool)1] = ((/* implicit */int) arr_8 [0] [i_2 + 1] [0] [i_2 + 1]);
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 2; i_5 < 17; i_5 += 3) 
                        {
                            var_12 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5] [i_5 - 1] [i_2 + 1] [i_2] [i_2 - 1] [i_1])) ? (((/* implicit */int) var_7)) : (arr_14 [i_5] [i_5 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 2] [16])));
                            arr_18 [i_0] [i_1] [i_0] [i_4] [i_5 - 2] = ((/* implicit */int) ((((arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] [i_5 + 1]) + (((/* implicit */int) var_4)))) >= (((/* implicit */int) var_0))));
                            arr_19 [(_Bool)1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -31)) ? (((/* implicit */int) (unsigned short)56357)) : (1247901943)));
                        }
                        arr_20 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 2])) ? (var_9) : (((/* implicit */int) var_6))));
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_2 - 2])) - (((/* implicit */int) arr_1 [i_2 - 2]))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        arr_24 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 2])) ? (((/* implicit */int) arr_2 [i_2 + 1])) : (((/* implicit */int) arr_2 [i_2 - 1]))));
                    }
                    arr_25 [i_0] [i_1] [i_2 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (arr_16 [i_2 + 1] [i_1] [i_1] [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_1]))));
                }
            }
        } 
    } 
}
