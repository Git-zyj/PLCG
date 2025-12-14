/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76072
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) & (arr_0 [i_0])))) ? ((-(arr_0 [i_0]))) : (min((arr_1 [i_0] [i_0]), (arr_0 [i_0]))));
        var_20 -= (((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (-478641606)))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_5)) : (((arr_0 [(_Bool)0]) / (arr_0 [(_Bool)1]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
        var_22 |= ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_5 [(_Bool)1] [i_1]))))));
        var_23 = ((int) min((arr_4 [i_1]), (arr_4 [i_1])));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) var_15)) * (((/* implicit */int) var_1)))), (max((arr_4 [i_1]), (var_17)))))) ? (((var_19) ? (((/* implicit */int) var_18)) : (((/* implicit */int) max((var_11), (arr_5 [i_1] [i_1])))))) : (((arr_4 [i_1]) * (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_5))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_25 |= max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_5 [i_2] [i_2]))))), ((-(((/* implicit */int) arr_6 [(_Bool)1])))));
        var_26 *= ((/* implicit */_Bool) min((1931334151), (((/* implicit */int) min((min((((/* implicit */unsigned short) arr_7 [(_Bool)1])), (arr_6 [(unsigned short)14]))), (((/* implicit */unsigned short) arr_7 [(_Bool)1])))))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 2; i_5 < 18; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 18; i_6 += 2) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_27 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)13848)) : (var_7)))) ? (((arr_5 [i_3] [i_4 - 1]) ? (((/* implicit */int) arr_13 [i_5])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_8))))))), (((arr_8 [i_7 - 1]) / (arr_8 [i_7 - 1])))));
                                var_28 = (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_14))))));
                                var_29 = ((/* implicit */_Bool) max((var_29), (((((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_6] [i_5] [i_3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(unsigned short)5] [20] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) var_19)) : (arr_4 [i_3]))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_16 [(_Bool)1] [i_3] [i_5] [i_3]) : (-1123546723)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_7] [i_4] [i_3]))))) : (((((/* implicit */_Bool) 1161404604)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16))))))))));
                                var_30 = ((/* implicit */int) max((((/* implicit */unsigned short) max((arr_11 [i_4] [i_4 - 1] [i_5]), ((_Bool)1)))), (min((((/* implicit */unsigned short) arr_11 [i_4] [i_4] [i_4 - 1])), (arr_19 [i_7 - 1] [i_6 + 3] [i_3 - 1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_8 = 2; i_8 < 20; i_8 += 2) 
                    {
                        var_31 = ((/* implicit */_Bool) max((arr_17 [i_3] [i_4]), (min((((/* implicit */int) (_Bool)1)), (max((var_10), (((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_32 = ((/* implicit */_Bool) ((int) ((_Bool) var_12)));
                            var_33 = arr_8 [i_4 - 1];
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_4 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_5 - 1] [i_4 - 1]))));
                        }
                    }
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        arr_28 [i_10] [i_10] [i_10] [i_4] = ((/* implicit */unsigned short) ((((((var_6) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_1)))) & (min((arr_8 [i_3]), (arr_26 [2] [i_3]))))) | (((((/* implicit */_Bool) arr_13 [i_4])) ? (2147483647) : ((~(((/* implicit */int) var_15))))))));
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((((/* implicit */int) ((_Bool) var_6))) >= (((/* implicit */int) min((((/* implicit */unsigned short) var_16)), (arr_10 [i_10])))))) ? (((/* implicit */int) arr_21 [i_4] [i_4] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1])) : (max((((/* implicit */int) ((((/* implicit */int) arr_11 [i_5] [i_4 - 1] [i_4])) < (1151360610)))), (((((/* implicit */int) var_8)) * (((/* implicit */int) arr_9 [i_4] [i_5])))))))))));
                        arr_29 [i_3 - 1] [i_4] [i_4] [i_5] [(unsigned short)0] [i_10] = ((((/* implicit */int) ((((/* implicit */int) arr_27 [i_4] [i_3 - 1])) < (arr_26 [i_3] [i_4 - 1])))) != (min((((-1161404611) ^ (((/* implicit */int) arr_22 [i_10] [i_10] [i_10] [i_10])))), (((/* implicit */int) arr_13 [i_4])))));
                    }
                    for (int i_11 = 1; i_11 < 18; i_11 += 2) 
                    {
                        var_36 = ((_Bool) ((int) min((((/* implicit */int) arr_21 [i_3] [i_4] [i_5] [i_4] [i_4] [i_4])), (arr_16 [i_3] [(unsigned short)16] [i_4] [i_11]))));
                        var_37 &= min(((+(((/* implicit */int) (!((_Bool)1)))))), (((arr_21 [i_3 - 1] [i_4 - 1] [i_5 + 2] [i_11] [i_11 + 2] [i_11]) ? (arr_14 [i_3 - 1] [i_4 - 1] [i_5]) : (((/* implicit */int) var_1)))));
                    }
                    arr_33 [i_4] = (!(arr_12 [i_5] [i_4] [i_3]));
                    /* LoopSeq 3 */
                    for (int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_38 [i_12] &= ((/* implicit */int) ((_Bool) arr_25 [i_3] [i_4] [i_5] [i_5] [i_12] [i_13]));
                            var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_6)))), (((arr_16 [i_13] [i_4] [i_4] [i_4]) - (((/* implicit */int) var_19)))))))));
                            var_39 = ((/* implicit */int) var_8);
                            var_40 = ((/* implicit */_Bool) max((var_40), (((((arr_31 [i_3] [i_3] [i_3 - 1] [7] [i_4 - 1] [i_5 + 2]) >> (((arr_35 [i_4] [i_5 + 3] [i_5 + 3] [i_4] [i_13] [i_13]) + (1909577536))))) < ((+(arr_35 [i_3 - 1] [i_5 - 2] [i_5] [(_Bool)1] [i_13] [i_5 - 1])))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) (!(((/* implicit */_Bool) ((((2026176373) != (1102985339))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))))))))));
                            var_42 = ((/* implicit */unsigned short) arr_22 [i_3 - 1] [i_4] [i_4] [(unsigned short)4]);
                        }
                        arr_41 [i_4] [(_Bool)1] [(_Bool)1] [i_12] = ((((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 1])), (min(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))))) ? (min((arr_14 [i_3 - 1] [i_4 - 1] [i_4]), (arr_14 [i_3] [i_3 - 1] [i_4]))) : (((((/* implicit */int) max((var_19), (var_13)))) - (max((var_7), (((/* implicit */int) arr_23 [(_Bool)1] [i_4] [i_5] [(_Bool)1] [i_12])))))));
                        var_43 = ((/* implicit */_Bool) min((min((((arr_30 [i_3] [i_4] [i_5] [i_12] [5] [i_12]) ? (((/* implicit */int) arr_9 [i_12] [(unsigned short)3])) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_11)))), ((~(((/* implicit */int) (_Bool)1))))));
                    }
                    for (int i_15 = 2; i_15 < 18; i_15 += 1) 
                    {
                        var_44 &= ((/* implicit */_Bool) ((((int) arr_11 [i_5] [i_3 - 1] [i_15 - 1])) << (((/* implicit */int) ((max((((/* implicit */int) var_3)), (var_10))) == (min((arr_39 [i_4] [i_4] [i_4] [i_3] [i_15 + 1]), (((/* implicit */int) arr_37 [(unsigned short)5])))))))));
                        arr_45 [i_3] [i_3] [i_4] = var_0;
                        var_45 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_4] [i_5] [i_3])) ? (((/* implicit */int) arr_12 [i_4] [i_4] [i_15 + 3])) : (((((/* implicit */int) var_11)) - (((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_5 - 2] [i_15 - 1])))))));
                    }
                    for (int i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        var_46 = ((((arr_23 [i_4 - 1] [i_5] [i_5] [i_5 + 1] [i_5]) ? (((/* implicit */int) arr_23 [i_4 - 1] [i_4 - 1] [i_4] [i_5 + 1] [i_16])) : (((/* implicit */int) (unsigned short)5695)))) & (((/* implicit */int) ((((/* implicit */int) (unsigned short)8237)) < (arr_32 [i_3] [i_4] [(_Bool)1] [i_4 - 1])))));
                        var_47 = min((((arr_12 [i_5 - 2] [i_4] [i_5 + 1]) ? (max((arr_4 [i_3]), (-1161404624))) : (((/* implicit */int) arr_37 [i_3 - 1])))), (arr_40 [i_4] [i_4] [i_5] [i_16] [i_4]));
                        var_48 += ((/* implicit */unsigned short) (-(min((((/* implicit */int) ((arr_31 [i_3] [i_3] [(_Bool)1] [i_5 - 1] [i_3] [i_3]) >= (((/* implicit */int) (_Bool)0))))), (min((var_10), (((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [0] [i_5]))))))));
                        var_49 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((arr_39 [i_3] [i_3] [i_3] [i_3 - 1] [i_3 - 1]), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) arr_23 [5] [i_4] [i_5 + 3] [i_4] [(_Bool)1])) * (1814479516))) : (((/* implicit */int) arr_9 [i_4 - 1] [i_5 + 2])))), (((((/* implicit */_Bool) (unsigned short)31943)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_19 [i_3] [i_3] [i_5]))))));
                    }
                }
            } 
        } 
        var_50 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_14)) - (45651)))))) ? (min((var_2), (arr_8 [i_3]))) : (((/* implicit */int) max((var_16), (var_12))))))));
        var_51 = ((/* implicit */_Bool) var_18);
    }
    var_52 *= ((/* implicit */_Bool) ((((var_2) * (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))) << (((((((/* implicit */_Bool) ((var_19) ? (var_0) : (((/* implicit */int) var_16))))) ? (max((((/* implicit */int) var_5)), (var_0))) : (((((/* implicit */int) var_12)) * (((/* implicit */int) var_1)))))) - (396362986)))));
}
