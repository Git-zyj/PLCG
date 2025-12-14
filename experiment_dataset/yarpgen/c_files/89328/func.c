/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89328
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
    var_20 = ((/* implicit */short) min(((~(((((((/* implicit */int) var_19)) + (2147483647))) << (((((((/* implicit */int) (short)-17067)) + (17083))) - (16))))))), ((-(((var_5) + (((/* implicit */int) var_19))))))));
    var_21 = ((((/* implicit */int) var_19)) * (((((/* implicit */_Bool) max(((short)-17067), ((short)31)))) ? (((int) (short)-8991)) : (((/* implicit */int) (short)-19377)))));
    var_22 = max((var_16), (var_14));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483645)) ? (((/* implicit */int) (short)2520)) : (((/* implicit */int) (short)-22170))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_4 [i_0]) : (var_2)))) ? (((/* implicit */int) arr_6 [i_0] [(short)14] [i_0 + 1] [(short)14])) : (((((/* implicit */_Bool) var_13)) ? (1329573149) : (((/* implicit */int) (short)-18100)))))) : (((/* implicit */int) ((short) ((((((/* implicit */int) var_19)) + (2147483647))) >> (((((/* implicit */int) var_9)) + (26199)))))))));
                    arr_7 [i_0] [9] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (short)-392)) < (((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_1] [i_2])))))))) ? (((var_5) >> (((((((/* implicit */int) (short)-32764)) + (2147483647))) >> (((((/* implicit */int) var_10)) - (13556))))))) : (((/* implicit */int) var_10)));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_2] [i_3] = ((/* implicit */short) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) != (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */int) (short)-30180)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1787227485)) ? (((/* implicit */int) (short)388)) : (arr_9 [i_0] [i_0 - 1] [i_1] [i_0] [(short)15])))) ? ((+(((/* implicit */int) arr_1 [i_0 - 1])))) : (-1329573149))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 3; i_4 < 22; i_4 += 1) 
                        {
                            arr_15 [13] [i_1] [i_1] [i_0] [i_1] = ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) arr_1 [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0]))))));
                            var_24 = ((/* implicit */int) max((max((arr_11 [i_1] [i_2 + 2] [3] [i_4]), (arr_11 [i_0] [i_1] [i_2] [i_2 + 1]))), (arr_11 [i_0 - 1] [4] [i_2] [5])));
                            arr_16 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [10] [i_3] [10])) ? (((((/* implicit */_Bool) ((691369924) % (((/* implicit */int) var_19))))) ? (arr_13 [i_0] [i_0] [i_0] [i_2 + 2] [i_3] [i_3] [i_0]) : (((((/* implicit */_Bool) -1787227485)) ? (arr_13 [i_0 + 1] [i_0] [i_2] [i_0 + 1] [i_4] [i_2] [i_1]) : (((/* implicit */int) (short)30180)))))) : (((((arr_8 [i_0] [i_1] [18] [i_3] [i_4]) < (var_5))) ? (max((var_17), (var_4))) : (((/* implicit */int) arr_11 [i_4] [i_2] [i_2] [i_0]))))));
                            arr_17 [i_0 - 1] [i_1] [i_0] [(short)16] [20] [i_0] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [(short)13])) ? ((~(var_5))) : (((/* implicit */int) var_7)))));
                            arr_18 [i_0] [i_0] [i_0] [i_0 - 1] [(short)10] [i_0 - 1] = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (var_13)))) ? (arr_10 [i_0 + 1]) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_13))))))) != (((((/* implicit */int) var_14)) - (((((/* implicit */int) (short)4837)) / (arr_4 [i_0])))))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            arr_22 [9] [9] [9] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_2 - 1] [i_0 - 1] [i_0 + 1])) << (((((((-2147483644) - (-2147483629))) + (32))) - (2)))));
                            arr_23 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)30193)) / (var_15))))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) 943917026))));
                        }
                        /* LoopSeq 3 */
                        for (int i_6 = 2; i_6 < 22; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */int) (short)32767);
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(short)6])) ? (((943917026) / (arr_25 [i_1] [(short)17] [i_3] [i_6]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_0)) : (var_15)))))))))));
                        }
                        for (int i_7 = 2; i_7 < 22; i_7 += 2) /* same iter space */
                        {
                            var_28 = ((int) min((((/* implicit */int) ((short) arr_10 [i_0]))), (((int) arr_0 [i_2] [i_0]))));
                            arr_30 [i_0] [(short)13] [i_0 + 1] [i_0] [i_0] = var_17;
                            arr_31 [i_0 + 1] [i_0] [i_2 - 1] [i_3] [i_2 - 1] [i_2 - 1] [i_2 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (-1716137410) : (-1329573149)))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_11)) ? (-543961344) : (arr_20 [i_0] [i_1] [i_2 - 1] [i_3] [i_7]))))) : (-1197009127)));
                            arr_32 [i_0] [i_0] [i_3] [i_7 + 1] = ((/* implicit */int) (short)-3530);
                        }
                        for (int i_8 = 2; i_8 < 22; i_8 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) ((((2147483647) != (((/* implicit */int) (short)-24032)))) ? (((/* implicit */int) max((arr_33 [i_0 - 1] [(short)18] [i_0 - 1] [i_8] [i_0]), (var_0)))) : (((/* implicit */int) ((-472113679) != (((/* implicit */int) var_14)))))))) ? (((((arr_21 [i_2] [i_2] [i_2 + 1] [i_3] [i_8 - 2] [i_8 + 1]) + (2147483647))) << (((arr_9 [i_0] [i_1] [i_0] [i_8] [i_8 - 2]) - (891569380))))) : (((((/* implicit */_Bool) max((2147483647), (var_15)))) ? (((/* implicit */int) min((arr_1 [i_0]), ((short)15543)))) : (max((((/* implicit */int) (short)-28395)), (arr_20 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [6])))))))));
                            var_30 ^= ((/* implicit */short) ((((/* implicit */int) var_12)) != (((/* implicit */int) ((1186222765) < (((/* implicit */int) arr_5 [i_1] [i_1] [i_8] [i_1])))))));
                            var_31 += ((/* implicit */short) (~(max((arr_29 [i_0 - 1] [3] [i_0 - 1] [i_8 + 1] [i_2 - 1]), (((((/* implicit */_Bool) arr_34 [i_0 + 1])) ? (((/* implicit */int) (short)4074)) : (((/* implicit */int) var_3))))))));
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)23)) ? (1075149181) : (((/* implicit */int) var_16))))))) ? (((/* implicit */int) arr_26 [i_8] [i_3] [2] [i_1] [i_8])) : (arr_8 [(short)9] [i_1] [i_2] [12] [i_8 + 1]))))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (short i_9 = 2; i_9 < 22; i_9 += 1) 
                    {
                        var_33 = ((/* implicit */short) min((var_33), (var_10)));
                        var_34 += ((/* implicit */int) max(((short)15918), (max((var_3), (max((var_9), (arr_5 [i_0] [i_0] [(short)8] [i_9])))))));
                    }
                    for (int i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
                    {
                        arr_41 [i_0 + 1] [i_1] [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */int) arr_14 [(short)19] [(short)19] [i_2 + 2])), (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (-1449056005) : (((/* implicit */int) (short)18752)))), (((/* implicit */int) (short)12))))));
                        var_35 = ((/* implicit */short) min((var_35), (arr_27 [i_0] [i_1] [i_1] [i_2] [i_1] [i_1])));
                    }
                    for (int i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
                    {
                        var_36 = (~(((/* implicit */int) ((1186222765) != (((/* implicit */int) ((((/* implicit */_Bool) (short)5310)) || (((/* implicit */_Bool) 479822696)))))))));
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) max((((/* implicit */int) ((short) ((arr_40 [i_0] [i_0] [i_0] [i_0]) >> (((var_2) - (1402142257))))))), (((((/* implicit */int) var_14)) | (((/* implicit */int) var_6)))))))));
                    }
                }
            } 
        } 
        var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1] [10]))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            for (int i_13 = 4; i_13 < 21; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_14 = 2; i_14 < 20; i_14 += 1) 
                    {
                        for (int i_15 = 2; i_15 < 20; i_15 += 2) 
                        {
                            {
                                var_39 &= ((((/* implicit */_Bool) ((min((var_4), (arr_10 [i_0]))) & (((((/* implicit */int) var_12)) & (((/* implicit */int) arr_1 [i_14 + 2]))))))) ? (((((((/* implicit */int) (short)19306)) & (((/* implicit */int) (short)0)))) | (((((/* implicit */_Bool) arr_10 [i_0])) ? (arr_19 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_15]) : (((/* implicit */int) arr_1 [i_14])))))) : (((((((/* implicit */int) var_0)) ^ (((/* implicit */int) (short)17089)))) & (((((/* implicit */_Bool) (short)24031)) ? (((/* implicit */int) (short)17756)) : (((/* implicit */int) (short)30310)))))));
                                arr_58 [i_0] [i_13] [i_0] [i_15] = ((/* implicit */int) (short)-18100);
                                var_40 &= var_17;
                            }
                        } 
                    } 
                    arr_59 [i_0] [i_0] = ((((((/* implicit */_Bool) (short)1306)) ? (((((((/* implicit */int) (short)-15336)) + (2147483647))) >> (((((/* implicit */int) (short)15336)) - (15316))))) : (((((/* implicit */_Bool) -124499218)) ? (((/* implicit */int) arr_55 [i_0 - 1] [i_0] [i_0])) : (((/* implicit */int) (short)-10066)))))) >> (((((/* implicit */int) var_7)) - (6540))));
                    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((int) arr_24 [i_0] [i_12] [i_13 + 1] [i_13] [i_13 + 1]))))) ? (max((329819606), (((/* implicit */int) (short)28395)))) : (((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_13 - 1] [i_13 - 2] [i_13])) ? (((/* implicit */int) (short)3386)) : (((/* implicit */int) arr_6 [i_0 - 1] [i_13 - 3] [i_13 - 4] [i_0 - 1]))))));
                }
            } 
        } 
    }
    for (short i_16 = 1; i_16 < 10; i_16 += 2) 
    {
        arr_63 [i_16] = var_16;
        var_42 |= var_8;
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 24; i_17 += 2) 
    {
        arr_66 [i_17] = ((arr_64 [21]) % (((((/* implicit */int) (short)8436)) % (-329819606))));
        var_43 |= ((/* implicit */short) ((((/* implicit */int) var_3)) / (arr_65 [i_17])));
        var_44 = ((/* implicit */short) (-(((/* implicit */int) (short)14192))));
        arr_67 [i_17] [i_17] &= ((/* implicit */int) ((short) var_11));
        arr_68 [i_17] |= ((/* implicit */short) 2056049445);
    }
}
