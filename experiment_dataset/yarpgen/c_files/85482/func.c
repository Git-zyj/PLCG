/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85482
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) arr_7 [i_0] [i_2] [i_0] [i_2]);
                                arr_13 [i_1] [i_1] [i_2] [18LL] [(signed char)12] [i_4] [i_2] |= arr_9 [i_4] [0U] [i_4 + 2] [i_4] [i_4] [i_4 + 2];
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_9 [i_0] [i_0] [(short)20] [16LL] [16LL] [i_0]))));
                /* LoopSeq 3 */
                for (short i_5 = 4; i_5 < 22; i_5 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) min((arr_6 [i_1] [i_1] [i_5 - 3]), (arr_6 [i_0] [i_5] [i_5 - 2])));
                    var_19 -= ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_5 - 4] [i_0] [i_1]);
                }
                /* vectorizable */
                for (short i_6 = 4; i_6 < 22; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (signed char i_7 = 3; i_7 < 20; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) (~(((/* implicit */int) arr_21 [i_6] [i_6] [i_7] [i_6 + 1] [i_6] [i_7]))));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */int) arr_7 [7] [i_7 + 4] [i_6 - 4] [i_7 - 1]);
                            var_22 = ((((/* implicit */_Bool) arr_18 [(signed char)22] [i_6 - 4] [i_7 - 1])) ? (((/* implicit */int) arr_14 [i_7 - 1] [i_7] [i_7 + 2] [i_7 - 2])) : (((/* implicit */int) (short)-26622)));
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? ((+(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_6] [i_1])))));
                        }
                        for (signed char i_9 = 3; i_9 < 21; i_9 += 1) 
                        {
                            var_24 &= ((/* implicit */short) var_3);
                            arr_27 [i_0] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */short) ((long long int) arr_24 [i_6 - 2] [i_6] [i_9 + 1] [i_9]));
                        }
                        var_25 = ((/* implicit */signed char) arr_3 [i_1]);
                    }
                    for (signed char i_10 = 1; i_10 < 21; i_10 += 2) 
                    {
                        arr_31 [12LL] = ((/* implicit */unsigned int) ((signed char) arr_21 [i_1] [i_1] [i_0] [i_6 - 2] [i_1] [i_10 + 2]));
                        arr_32 [i_0] [i_0] [i_1] [i_0] [(short)9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (short)3371)) ? (((/* implicit */int) (short)-3371)) : (((/* implicit */int) (short)-3371))));
                    }
                    for (signed char i_11 = 1; i_11 < 23; i_11 += 2) 
                    {
                        arr_36 [i_0] [(short)20] [i_6] [i_11 - 1] [i_11 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_35 [i_11 - 1] [i_11] [i_11] [i_11] [(signed char)9] [i_11]))));
                        /* LoopSeq 1 */
                        for (long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) arr_24 [i_11] [i_11 - 1] [i_11] [i_11 + 1])) : (((/* implicit */int) arr_24 [i_11] [i_11 + 1] [i_11 + 1] [i_11 - 1]))));
                            var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6 - 4] [i_6 - 1] [i_6])) && (((/* implicit */_Bool) arr_6 [i_0] [i_6 - 2] [i_6 - 3]))));
                        }
                        /* LoopSeq 1 */
                        for (short i_13 = 1; i_13 < 21; i_13 += 2) 
                        {
                            arr_43 [i_0] [i_13] [i_13] = arr_7 [i_6 + 2] [i_6 - 2] [i_11 - 1] [i_11 + 1];
                            var_28 *= ((/* implicit */short) (-(((/* implicit */int) arr_33 [i_6 - 3] [i_6 - 2] [i_6 - 3] [i_6]))));
                            var_29 = var_11;
                        }
                        var_30 = ((/* implicit */long long int) ((signed char) arr_22 [i_6 - 3] [i_6 + 2] [(signed char)11] [i_6 - 1] [i_6] [i_6 - 3]));
                    }
                    for (int i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (signed char)-95))));
                        arr_46 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_5);
                    }
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_6 - 3] [i_0] [(short)0] [i_6 - 3] [i_6 + 1])) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)58)))));
                }
                for (signed char i_15 = 0; i_15 < 24; i_15 += 2) 
                {
                    var_33 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_15] [i_1] [i_1])) ? (((/* implicit */int) arr_40 [i_0] [i_0] [i_15] [i_0] [i_15] [i_0] [i_1])) : (((/* implicit */int) (signed char)40))))) ? (((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0])))), (((/* implicit */int) ((signed char) arr_9 [i_1] [i_15] [i_15] [i_15] [18LL] [i_1])))));
                    arr_49 [i_0] [7LL] [i_0] |= ((/* implicit */signed char) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22727)) ? (arr_23 [i_15] [i_1] [i_15] [i_15] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)94)))))) ? (((/* implicit */int) min((var_13), ((signed char)-40)))) : (((/* implicit */int) (signed char)113))))));
                    var_34 = ((/* implicit */long long int) max((var_34), (var_4)));
                }
                var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-51))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_16 = 1; i_16 < 22; i_16 += 2) 
    {
        for (int i_17 = 2; i_17 < 23; i_17 += 2) 
        {
            {
                var_36 = ((/* implicit */short) ((signed char) max((((/* implicit */int) (signed char)-40)), (((((/* implicit */int) arr_50 [i_16])) / (((/* implicit */int) arr_38 [i_16] [i_16] [i_16] [9] [i_16] [(signed char)7] [i_16 - 1])))))));
                var_37 = ((/* implicit */unsigned int) max((var_37), (var_3)));
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) var_7))));
}
