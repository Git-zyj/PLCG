/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61649
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
    var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((var_9) - (856267983U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)(-127 - 1)), (var_12)))))))));
    var_17 = ((/* implicit */short) max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) max((((/* implicit */unsigned short) (short)-26339)), (var_13)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) ((max((2827028680807524578ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)26338)) ^ (((/* implicit */int) (short)26339))));
        var_20 -= ((/* implicit */unsigned char) var_0);
    }
    for (short i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (short)-26335))) ? (((/* implicit */int) (short)26339)) : (((/* implicit */int) (short)-17582))))) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */int) ((short) (short)26339))) - ((+(((int) arr_6 [i_1])))))))));
                    var_22 = ((/* implicit */unsigned long long int) var_14);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_23 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2742146420U)) ? (arr_10 [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)26339)))))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_3 - 1])) : (((/* implicit */int) var_0)))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        arr_14 [i_5] [i_5] [i_2] [i_2] [i_5] [i_1 - 1] = ((/* implicit */long long int) var_11);
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_25 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_0)), (var_5)));
                            var_26 *= arr_6 [i_5];
                            var_27 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)26353))) ^ (((long long int) (+(((/* implicit */int) var_6)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */short) ((arr_15 [i_3] [i_3 - 1] [i_3] [i_3] [i_3] [i_3 - 1] [(short)8]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_3 - 1] [i_3 - 1] [i_3] [(signed char)9] [i_3] [i_3] [i_3]))));
                            var_29 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_7)) ? (arr_12 [(_Bool)1] [(_Bool)1] [3] [i_5] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_3] [9] [i_7] [i_7])))))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_3] [i_2] [i_7])) ? (((/* implicit */int) (short)-26357)) : (((/* implicit */int) (short)-26357))))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_5] [i_7])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7] [(signed char)4])))))));
                            var_31 -= ((/* implicit */_Bool) (short)26331);
                            arr_19 [i_5] [i_2] [i_3] [(short)9] [i_7] = ((/* implicit */unsigned char) var_6);
                        }
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            var_32 = ((/* implicit */signed char) ((unsigned int) ((short) arr_2 [i_5])));
                            arr_24 [i_2] [i_5] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_23 [(_Bool)1] [i_3 - 1] [i_2] [i_5])))) ? (((((/* implicit */_Bool) arr_23 [i_1] [i_3 - 1] [i_3] [0LL])) ? (((/* implicit */long long int) ((/* implicit */int) (short)10071))) : (6008767640709246285LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_23 [i_1] [i_3 - 1] [i_8] [i_5])) : (((/* implicit */int) arr_23 [i_1] [i_3 - 1] [(_Bool)1] [1ULL])))))));
                            var_33 = ((/* implicit */short) var_14);
                        }
                        var_34 = ((/* implicit */unsigned int) (((~(((/* implicit */int) (_Bool)1)))) > (((int) arr_21 [i_5] [i_3] [i_3 - 1] [i_3] [i_3] [i_2] [i_5]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 4; i_9 < 7; i_9 += 3) 
                    {
                        var_35 = ((/* implicit */long long int) var_9);
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_11 [i_1] [i_3 - 1] [i_9]))) ? (((/* implicit */int) arr_1 [i_3 - 1])) : (((/* implicit */int) arr_18 [i_2] [i_2] [i_3])))))));
                    }
                }
            } 
        } 
    }
    var_37 = ((/* implicit */short) var_6);
    var_38 = ((/* implicit */_Bool) max((((/* implicit */int) (short)-26364)), (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))), (((/* implicit */int) var_11))))));
}
