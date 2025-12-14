/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71800
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
    var_12 = ((var_9) & (var_6));
    var_13 = ((/* implicit */int) var_5);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_4 [12] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) var_4))));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) arr_3 [6LL]);
        arr_6 [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        var_14 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_15 = ((/* implicit */unsigned short) ((arr_2 [i_0]) / (arr_2 [i_0])));
    }
    for (short i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_1 + 3] [i_1 + 3]), (((/* implicit */long long int) var_9))))) ? (((((/* implicit */_Bool) arr_1 [10] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_11))))) ? (arr_8 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_1])) : (arr_2 [i_1]))) != (((((((/* implicit */int) arr_9 [i_1])) + (2147483647))) >> (((((/* implicit */int) var_7)) - (29067)))))))))));
        arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 - 2])) ? (((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 + 2] [i_1 - 1]))))) | (((31457280U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)13338)))))));
        var_17 = ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_1)))) ? (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_1])))), (((1514752716) / (((/* implicit */int) (unsigned short)8502)))))) : (arr_2 [i_1]));
    }
    for (short i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2183740845681125146LL)) ? (1514752744) : (((/* implicit */int) (unsigned short)30309))));
        arr_14 [i_2] [i_2] = arr_12 [i_2 + 3];
    }
    var_19 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 15; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            {
                var_20 = ((/* implicit */short) var_11);
                arr_19 [i_3 + 1] [i_3 + 1] [9U] = arr_15 [i_3];
                /* LoopSeq 3 */
                for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    var_21 = ((/* implicit */short) arr_20 [i_3 - 1] [i_3 + 1]);
                    arr_24 [i_3] [i_4] [i_5] [i_5] = ((/* implicit */long long int) arr_23 [i_3]);
                }
                for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_22 [i_3])) : (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_25 [i_3 + 1] [(unsigned char)9])) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_4))))));
                    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (arr_16 [i_4]) : (var_3))) | (((/* implicit */long long int) var_0))));
                    var_24 = ((/* implicit */int) ((((/* implicit */int) arr_25 [i_3 - 1] [i_3 - 1])) >= (var_9)));
                }
                for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_8 = 1; i_8 < 12; i_8 += 1) 
                    {
                        var_25 = var_3;
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))));
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 3; i_9 < 12; i_9 += 4) 
                        {
                            var_27 = ((/* implicit */short) arr_26 [i_8] [i_4]);
                            arr_35 [i_8] [i_4] [i_4] [i_4] [i_8] [i_9 - 2] = ((/* implicit */short) var_8);
                            var_28 = ((/* implicit */long long int) ((((/* implicit */int) arr_31 [(unsigned char)6] [(signed char)13] [i_4] [(unsigned char)6])) == (((/* implicit */int) arr_13 [i_3 + 1]))));
                            var_29 = ((/* implicit */int) var_10);
                        }
                        for (int i_10 = 0; i_10 < 16; i_10 += 1) 
                        {
                            arr_38 [i_3 - 1] [3LL] [i_8] = ((/* implicit */long long int) ((var_0) < (((arr_28 [i_4] [i_4] [i_7]) / (((/* implicit */unsigned int) var_6))))));
                            arr_39 [i_3 + 1] [i_4] [i_3 + 1] [i_8] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8506)) ? (1150669704793161728LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46230)))));
                            var_30 = ((/* implicit */long long int) var_8);
                            arr_40 [i_3] [i_8] [i_3] [5LL] [i_3 - 1] [i_3 + 1] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_3 + 1])) - (((/* implicit */int) arr_12 [i_3 + 1]))));
                        }
                        for (signed char i_11 = 1; i_11 < 13; i_11 += 4) 
                        {
                            var_31 = ((/* implicit */int) ((var_0) - (((/* implicit */unsigned int) var_6))));
                            var_32 = var_4;
                            arr_45 [i_3 + 1] [i_4] [i_7] [13U] [i_8] = arr_22 [i_3];
                        }
                    }
                    for (short i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        var_33 = ((/* implicit */int) min((((/* implicit */unsigned int) min((arr_22 [i_3 + 1]), (arr_22 [i_3 - 1])))), (min((((/* implicit */unsigned int) (short)13254)), (960144594U)))));
                        arr_48 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_21 [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 1])), (var_1))))));
                    }
                    for (short i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        arr_53 [i_3 - 1] = ((/* implicit */long long int) arr_49 [i_3] [i_3] [i_4] [i_4] [i_4] [i_13]);
                        var_34 = ((/* implicit */unsigned char) var_11);
                        var_35 = ((/* implicit */unsigned char) var_3);
                    }
                    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 1) 
                    {
                        var_36 = ((/* implicit */short) var_5);
                        arr_56 [i_3] [i_3] = ((((/* implicit */_Bool) 31457277U)) ? (8736549929118533443LL) : (((/* implicit */long long int) -473884461)));
                        arr_57 [i_3] [i_3] [i_3] [i_7] [i_14] [i_4] = ((/* implicit */unsigned short) var_1);
                    }
                    arr_58 [i_3] [i_3] [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((((var_6) - (var_9))) + (((var_6) / (arr_30 [i_3 - 1])))))));
                }
                arr_59 [i_3] [(signed char)7] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1514752741)), (4852410893473536480LL)))) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) min((((/* implicit */int) var_5)), (var_6)))) : (arr_33 [i_3] [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1])))));
            }
        } 
    } 
}
