/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90649
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_19 = arr_2 [i_1] [i_1] [i_3];
                        var_20 = ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3]);
                    }
                    for (unsigned char i_4 = 1; i_4 < 6; i_4 += 1) 
                    {
                        arr_12 [i_4] [i_1] [4LL] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_11 [i_0] [0] [i_2])))))));
                        var_21 = ((/* implicit */unsigned char) var_8);
                    }
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_22 *= ((/* implicit */unsigned int) var_10);
                        var_23 = ((/* implicit */long long int) (unsigned char)155);
                        arr_17 [i_0] [(unsigned short)4] [i_1] [i_1] = ((((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0]))) > (arr_7 [i_0] [i_1] [i_2] [i_5]))))) ? (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_1])) : (4294965248U));
                        var_24 = ((/* implicit */short) (~(((/* implicit */int) arr_15 [i_1]))));
                    }
                    var_25 *= ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) >> (((((/* implicit */int) arr_9 [i_0] [0] [(short)4] [i_1])) - (157))))) & (((/* implicit */int) ((((/* implicit */_Bool) (~(9913387391686803286ULL)))) || (((/* implicit */_Bool) ((int) arr_7 [0U] [0] [i_2] [i_2]))))))));
                    var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -139432486)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_1 [i_1])))))));
                }
                /* vectorizable */
                for (unsigned int i_6 = 3; i_6 < 8; i_6 += 2) 
                {
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1]))) - (var_17)));
                    arr_21 [i_1] [i_0] [0] [(unsigned short)8] = ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_6 - 1])) ? (arr_11 [i_0] [i_1] [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (var_7))))));
                    /* LoopSeq 4 */
                    for (int i_7 = 1; i_7 < 7; i_7 += 1) 
                    {
                        arr_24 [2ULL] [i_1] [i_6] [i_7] = ((((/* implicit */int) arr_9 [i_0] [i_1] [i_6] [i_7])) * (((/* implicit */int) arr_9 [(_Bool)1] [i_1] [(unsigned short)1] [3ULL])));
                        arr_25 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_11 [i_6 + 2] [9ULL] [i_6]) >= (((/* implicit */unsigned int) arr_19 [i_0] [i_1] [i_0]))));
                        var_28 ^= ((/* implicit */unsigned char) (((~(arr_19 [i_7 - 1] [6LL] [(short)8]))) + (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) != (((/* implicit */int) arr_4 [i_1] [(unsigned short)3])))))));
                    }
                    for (int i_8 = 3; i_8 < 9; i_8 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) arr_2 [i_1] [i_1] [i_8]);
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 2; i_9 < 6; i_9 += 2) 
                        {
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (-(arr_30 [i_0] [i_1] [(unsigned char)8] [i_9] [(unsigned short)6] [i_9]))))));
                            var_31 |= ((/* implicit */int) (-(((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_6] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26486))) : (arr_5 [i_9] [i_1] [i_1] [i_1])))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            arr_35 [i_0] [7] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(arr_8 [i_0] [i_0] [i_0] [i_6 - 3] [i_1])));
                            var_32 = ((/* implicit */unsigned short) (((_Bool)1) ? (650239272U) : (2601758315U)));
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_6 - 2])) <= (((/* implicit */int) arr_3 [2U] [i_1] [i_6 - 2]))));
                            var_34 *= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_34 [(unsigned char)2] [i_1] [i_10] [i_1] [(unsigned char)2]));
                        }
                    }
                    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        var_35 = ((/* implicit */int) arr_36 [i_0] [(signed char)6] [i_6 - 1]);
                        var_36 *= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)70))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        var_37 = ((/* implicit */long long int) var_7);
                        var_38 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-18414)) != (((/* implicit */int) (unsigned short)0))));
                        /* LoopSeq 1 */
                        for (signed char i_13 = 2; i_13 < 8; i_13 += 3) 
                        {
                            var_39 = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [1] [1] [4] [i_1])) ? (((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (9913387391686803277ULL))) : (((/* implicit */unsigned long long int) ((arr_10 [i_0]) ? (arr_38 [(short)9] [i_1] [(short)9] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))))))));
                            var_40 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_12] [6ULL] [i_12]))) : (2305843009213693936LL))))));
                            arr_43 [i_0] [i_0] [i_1] [i_12] [i_12] [i_13] = ((/* implicit */unsigned int) (+(arr_40 [i_0] [i_0] [i_1] [i_12])));
                        }
                    }
                    var_41 = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_6] [i_6 + 2] [4U])) ? (((long long int) arr_6 [i_0] [i_1] [(unsigned short)9] [i_6])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_0] [(unsigned char)2] [(signed char)6] [i_0]))))))));
                    arr_44 [i_0] [(unsigned char)4] [i_6] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_34 [i_6 + 1] [i_6 + 1] [2U] [(unsigned char)2] [(unsigned char)2]))));
                }
                for (unsigned short i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        arr_50 [1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(4007746800U)))) ? (((/* implicit */long long int) ((arr_7 [i_0] [i_1] [i_14] [(_Bool)1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (arr_37 [i_0] [i_0] [i_0] [(signed char)9] [3ULL])));
                        /* LoopSeq 2 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_42 = arr_10 [i_15];
                            arr_53 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_0] [(unsigned char)7] [i_14] [i_15] [i_16])) ? (arr_37 [i_0] [i_0] [(unsigned char)1] [i_0] [i_0]) : (arr_37 [i_16] [i_15] [i_14] [i_1] [i_0])));
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (arr_27 [i_17] [i_14] [i_1] [i_0])));
                            var_45 = ((/* implicit */int) var_0);
                        }
                        var_46 = ((/* implicit */unsigned int) arr_33 [i_0] [2] [i_1] [(unsigned char)7]);
                    }
                    var_47 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_2)) ? (arr_11 [i_0] [i_1] [i_14]) : (((/* implicit */unsigned int) var_14))))));
                    var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_45 [i_1] [i_1] [i_1] [i_1])), (var_10)))) ? (arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] [1U]) : (((/* implicit */int) ((((/* implicit */int) arr_26 [i_14] [(unsigned short)3] [i_1] [i_0])) >= (((/* implicit */int) arr_42 [i_0] [i_0] [i_1])))))));
                }
                for (int i_18 = 0; i_18 < 10; i_18 += 1) 
                {
                    var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_18] [i_1] [i_0])) ? (arr_19 [i_0] [i_1] [i_18]) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_18]))) : ((~(arr_38 [i_0] [i_1] [i_0] [i_18])))));
                    arr_60 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_3)) * (((/* implicit */int) max((((((/* implicit */int) var_13)) > (((/* implicit */int) arr_10 [i_0])))), ((!(((/* implicit */_Bool) 4294967278U)))))))));
                }
                var_50 += ((((/* implicit */int) (unsigned short)14352)) == ((~(((/* implicit */int) arr_14 [i_0])))));
            }
        } 
    } 
    var_51 += ((/* implicit */int) var_1);
}
