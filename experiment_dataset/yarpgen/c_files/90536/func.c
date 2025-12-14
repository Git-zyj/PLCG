/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90536
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
    var_18 = max((min((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_6))))), (var_14))), (min((min((((/* implicit */unsigned int) var_0)), (var_16))), (var_14))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 += ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_7))) - (((unsigned int) var_4)))), (((1076720218U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1])))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 2; i_2 < 8; i_2 += 4) 
                {
                    arr_7 [(unsigned char)6] [i_1] [i_2] = arr_4 [i_0] [i_1] [(unsigned char)3];
                    var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_16)) ? (arr_5 [3U] [3U] [(unsigned char)0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [6U] [i_2 - 1] [i_0 + 1])))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_21 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (arr_0 [i_1])))), (min((var_14), (var_8))))))));
                        arr_10 [i_0] [(unsigned char)10] [i_2] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)250)) | (((/* implicit */int) arr_4 [i_0 + 2] [i_0] [8U])))))));
                        var_22 += ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (arr_3 [i_3]))) / (min((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_2 - 1] [1U])) << (((((/* implicit */int) var_2)) - (129)))))))));
                        arr_11 [8U] [i_0 + 1] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 2] [i_1] [i_2 + 2] [i_3]))) : (593421925U)))) ? (max((var_16), (((/* implicit */unsigned int) var_11)))) : (min((var_7), (var_4)))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 1; i_5 < 10; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) var_10)), (arr_1 [i_0 + 1] [i_2 + 2])))));
                            arr_18 [(unsigned char)3] [(unsigned char)3] [i_2 + 3] [1U] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) >> ((((+((~(var_16))))) - (1999179988U)))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((1403386458U) | (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), ((unsigned char)157))))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            arr_22 [i_0] [i_1] [i_2 - 2] [i_6] = ((/* implicit */unsigned char) min(((~(1678690090U))), (arr_14 [i_0] [i_0 + 1] [i_2 + 1] [i_4] [i_2])));
                            arr_23 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (~(((((((/* implicit */int) arr_15 [i_1] [i_2] [i_1] [i_6] [i_2])) << (((((/* implicit */int) var_3)) - (221))))) - (((/* implicit */int) arr_9 [i_1] [i_2 - 1] [i_1] [i_2 - 2] [i_4] [(unsigned char)8]))))));
                            arr_24 [5U] [i_4] [(unsigned char)4] = ((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (var_1) : (((unsigned int) arr_16 [i_6] [i_1] [i_2] [i_0] [10U] [(unsigned char)3] [4U])))) - (((/* implicit */unsigned int) max((((/* implicit */int) var_2)), ((~(((/* implicit */int) var_10))))))));
                            var_25 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (arr_5 [10U] [i_2] [i_4] [(unsigned char)3]))))) ^ ((-(arr_19 [i_0] [i_1] [i_2] [i_4] [0U]))))));
                            var_26 = ((((/* implicit */unsigned int) (+(((((/* implicit */int) var_3)) >> (((((/* implicit */int) (unsigned char)74)) - (52)))))))) % (min((((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [8U] [i_2 + 1] [8U]))))), (var_16))));
                        }
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), (arr_5 [i_4] [i_1] [i_2 + 2] [5U])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)98))) : (arr_0 [i_0 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [8U] [i_1] [i_2 - 1] [i_2 - 1])) && (((/* implicit */_Bool) arr_12 [i_0] [3U] [i_4] [i_4]))))))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            var_28 += ((/* implicit */unsigned char) ((var_15) <= (var_14)));
                            arr_31 [i_7] [i_1] [(unsigned char)8] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0 + 1] [i_1] [i_2] [i_7] [i_8])))))) < (((((/* implicit */_Bool) 1052552725U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_14 [i_0] [i_1] [i_2 + 3] [i_7] [i_7])))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            arr_34 [i_0 - 1] [i_7] = (~(((((/* implicit */_Bool) min((var_10), (var_10)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_0 + 2] [(unsigned char)2] [9U] [4U] [i_7] [i_9]))))) : (((unsigned int) var_3)))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (var_15)))))) & ((~(arr_20 [i_0 + 1])))));
                        }
                        for (unsigned int i_10 = 1; i_10 < 9; i_10 += 4) 
                        {
                            arr_37 [i_0] [i_1] [(unsigned char)3] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned int) 2344246775U)), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)2)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) : (((min((((/* implicit */unsigned int) (unsigned char)3)), (var_14))) | (max((((/* implicit */unsigned int) var_12)), (var_7)))))));
                            arr_38 [(unsigned char)3] [i_1] [i_7] [i_7] [(unsigned char)7] [(unsigned char)7] = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) arr_5 [(unsigned char)1] [(unsigned char)9] [0U] [10U])) ? (298775304U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) >= (min((var_17), (arr_20 [2U]))))), (((((/* implicit */_Bool) arr_19 [i_0 + 2] [(unsigned char)10] [i_2] [8U] [1U])) && (((((/* implicit */_Bool) (unsigned char)252)) && (((/* implicit */_Bool) var_8))))))));
                        }
                    }
                    for (unsigned char i_11 = 2; i_11 < 10; i_11 += 2) 
                    {
                        var_30 = max((max((var_17), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_29 [i_0] [i_0] [i_0 - 1] [8U] [(unsigned char)0] [(unsigned char)8] [i_0 - 1]))))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1] [i_2 + 2])) / ((+(((/* implicit */int) var_12))))))));
                        var_31 += (~((+(var_7))));
                    }
                }
                for (unsigned char i_12 = 2; i_12 < 7; i_12 += 1) 
                {
                    arr_43 [i_0 + 1] [i_12] [i_12 + 4] = ((((/* implicit */_Bool) 1237222001U)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))));
                    var_32 = ((/* implicit */unsigned int) var_10);
                }
                for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    var_33 = ((/* implicit */unsigned int) min((var_33), ((~(arr_36 [i_0 + 1] [i_1] [(unsigned char)2] [(unsigned char)8] [i_13])))));
                    arr_46 [i_0] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_13] [i_13] [i_13]))))) ^ (var_14)))) ? (max((((/* implicit */int) var_5)), ((+(((/* implicit */int) var_11)))))) : (((/* implicit */int) ((max((var_4), (arr_40 [i_0 - 1] [i_1] [i_13] [(unsigned char)8] [i_0 - 1]))) >= (((((/* implicit */_Bool) (unsigned char)19)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    arr_49 [i_0 + 2] [i_1] [i_1] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_48 [(unsigned char)10] [i_0 + 1] [5U])) >> ((((~(((/* implicit */int) arr_47 [1U] [i_1] [9U] [i_14])))) + (2)))));
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 11; i_16 += 3) 
                        {
                            {
                                arr_54 [i_0 - 1] [i_1] [i_14] [i_0 - 1] [i_0 - 1] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)86)) ? (((arr_27 [i_15] [i_15] [i_14] [i_15] [i_16]) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)180)) && (((/* implicit */_Bool) var_4))))))));
                                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((unsigned int) var_13)))));
                                var_35 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_35 [i_0] [i_0] [(unsigned char)0] [i_14] [i_15] [i_15])))));
                                var_36 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_16)));
                            }
                        } 
                    } 
                    arr_55 [i_0] [0U] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0 + 2] [i_0])) << (((((/* implicit */int) arr_48 [i_0] [i_1] [i_14])) - (55)))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_17 = 1; i_17 < 10; i_17 += 3) 
                {
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [(unsigned char)7] [i_1] [i_1] [i_0 + 1] [i_0] [i_0]))) : (var_13)))) ? (((((/* implicit */int) var_12)) << (((((/* implicit */int) var_2)) - (118))))) : (((/* implicit */int) ((3939385126U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [10U]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 2; i_18 < 9; i_18 += 1) 
                    {
                        for (unsigned int i_19 = 0; i_19 < 11; i_19 += 1) 
                        {
                            {
                                var_38 = ((unsigned char) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_6))));
                                var_39 = var_9;
                                var_40 = ((/* implicit */unsigned char) ((((var_7) * (543593526U))) >= (var_15)));
                            }
                        } 
                    } 
                    var_41 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((3653053657U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [(unsigned char)8] [i_0] [9U] [i_0] [i_1] [i_17 - 1] [i_17]))))))) * ((-(var_8)))));
                }
                for (unsigned int i_20 = 0; i_20 < 11; i_20 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 0; i_21 < 11; i_21 += 4) 
                    {
                        for (unsigned char i_22 = 0; i_22 < 11; i_22 += 2) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_71 [(unsigned char)9] [2U] [i_20] [i_21] [i_21] [(unsigned char)6] [(unsigned char)1]))));
                                arr_73 [(unsigned char)6] [i_1] [i_1] [(unsigned char)6] [1U] [i_21] [(unsigned char)3] = (~(var_1));
                            }
                        } 
                    } 
                    var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((arr_20 [i_0 + 1]) ^ (arr_20 [i_0 + 2]))) : (((arr_5 [i_0 + 2] [i_0 + 2] [(unsigned char)5] [i_0 + 2]) << (((var_7) - (2786397116U)))))));
                    var_44 = ((/* implicit */unsigned char) ((min((arr_50 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_0 + 1]), (arr_20 [i_0 + 2]))) != (var_14)));
                }
                arr_74 [i_1] = ((/* implicit */unsigned char) (+(arr_69 [i_0] [(unsigned char)10] [i_0] [i_0] [(unsigned char)9] [i_1])));
            }
        } 
    } 
}
