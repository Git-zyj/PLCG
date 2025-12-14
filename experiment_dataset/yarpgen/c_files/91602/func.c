/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91602
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
    var_15 = ((/* implicit */unsigned int) var_11);
    var_16 = ((/* implicit */short) var_5);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (short)32767);
        arr_4 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_0])), (((unsigned int) arr_0 [i_0 - 1] [i_0]))));
        var_17 = var_12;
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), ((((~(arr_6 [i_2]))) & (arr_6 [i_2])))));
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (short)-16424))));
                        arr_16 [i_4] [(short)13] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_2 [i_2])))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_11))));
                    }
                    for (unsigned int i_5 = 2; i_5 < 12; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((((/* implicit */_Bool) 641492530U)) ? (669011296U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1])))))));
                        var_22 = min((((/* implicit */unsigned int) arr_15 [i_1] [i_3])), (((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5 - 1] [i_5])) ? (((((/* implicit */_Bool) (short)32767)) ? (arr_9 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (max((((/* implicit */unsigned int) var_6)), (arr_6 [i_5]))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        arr_22 [i_1] [i_2] [i_6] [i_3] [i_6] = ((/* implicit */short) arr_20 [i_3]);
                        arr_23 [i_1] [i_3] [i_2] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_3])))));
                    }
                    var_23 = ((/* implicit */unsigned int) max((var_23), ((+(arr_6 [i_3])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        arr_27 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 1; i_8 < 11; i_8 += 1) /* same iter space */
                        {
                            arr_32 [i_3] [i_3] [i_3] [i_3] [i_3] = ((unsigned int) arr_25 [i_8 + 2] [i_8 + 3] [i_8 + 1] [i_8 + 2]);
                            arr_33 [10U] = ((/* implicit */short) arr_17 [i_1] [i_2] [i_3] [(short)8] [i_8] [i_3]);
                        }
                        for (unsigned int i_9 = 1; i_9 < 11; i_9 += 1) /* same iter space */
                        {
                            arr_36 [i_1] [i_1] [i_3] [i_3] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_28 [i_1] [i_2] [i_2] [(short)11] [i_9 + 2] [(short)4] [(short)4]))));
                            arr_37 [i_1] [i_1] [i_1] [i_1] [i_9] = (-(arr_28 [i_9 + 2] [i_2] [2U] [9U] [(short)3] [i_9 + 1] [i_2]));
                            arr_38 [i_9] = arr_26 [i_3] [i_3] [i_3] [i_3];
                            arr_39 [i_9] [i_2] [(short)4] [i_2] [i_1] &= ((/* implicit */unsigned int) arr_35 [i_2]);
                        }
                        var_24 |= ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) / (arr_9 [7U]));
                    }
                }
            } 
        } 
        arr_40 [i_1] = ((/* implicit */short) 1133705383U);
    }
}
