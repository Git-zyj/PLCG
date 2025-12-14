/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66146
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((int) var_6)))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((859500619U) - (((/* implicit */unsigned int) 1940604648))))) % ((-(arr_5 [i_0] [i_1] [i_1] [i_2]))))))));
                var_15 = (-(((/* implicit */int) ((arr_1 [i_1] [i_2]) == (((/* implicit */long long int) var_0))))));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (+(arr_6 [i_0] [i_1] [i_2] [i_2]))))));
                arr_7 [18U] [i_0] [i_1] [i_0] = ((/* implicit */int) ((arr_1 [i_2] [i_0]) < (arr_1 [i_1] [i_0])));
                var_17 = ((/* implicit */int) var_6);
            }
            arr_8 [i_0] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */int) var_4)) << (((((/* implicit */int) var_9)) - (157)))))));
        }
        arr_9 [i_0] [i_0] = (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) < (var_7)))));
    }
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) max(((-(arr_11 [i_3]))), (((/* implicit */long long int) ((arr_11 [i_3]) > (arr_11 [i_3]))))));
        var_18 += ((/* implicit */int) min((min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_10 [i_3])), (var_3)))), (((long long int) arr_11 [i_3])))), (((/* implicit */long long int) arr_10 [i_3]))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_4 = 2; i_4 < 16; i_4 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((3435466697U) + (2304032565U))))));
            var_20 = min((max((((/* implicit */long long int) ((342786146861926871LL) == (var_7)))), ((+(arr_16 [i_4] [i_4] [i_5]))))), (((/* implicit */long long int) arr_0 [i_4])));
        }
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 413830036)) < (2662184337556624844LL))))) != (min((var_12), (((/* implicit */long long int) var_10)))))), (((((/* implicit */long long int) (-(arr_3 [i_6] [i_6])))) < (min((((/* implicit */long long int) var_0)), (var_12)))))));
            /* LoopSeq 3 */
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                arr_22 [i_7] [i_4] [i_6] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) / (max((((((-1389415258) + (2147483647))) << (((1673405896U) - (1673405896U))))), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 1116312232)))))))));
                arr_23 [i_4 + 4] [i_4 + 4] [i_4 + 4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_13 [0LL])) < (var_8)))) : (((/* implicit */int) var_4))))), (arr_1 [i_4] [i_7])));
            }
            for (int i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    var_22 = ((/* implicit */int) min((var_22), ((-(arr_19 [i_4] [i_4 + 2] [i_4] [i_9])))));
                    arr_29 [i_4] [i_4] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 3395179208U)) && (((/* implicit */_Bool) 1328936638U))));
                    var_23 = ((/* implicit */long long int) min((var_23), (arr_28 [i_6] [i_8] [i_8] [i_4] [i_4 + 3])));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_4 - 1] [i_4 + 4])) ? (((((/* implicit */int) arr_0 [i_8])) + (var_10))) : (arr_14 [i_6])));
                    arr_30 [i_4] [i_8] [i_8] [i_8] [0U] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_25 [i_4] [i_4]) + (((/* implicit */unsigned int) arr_24 [i_8]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0))))) : (arr_25 [i_4 + 3] [i_4 - 2])));
                }
                var_25 += ((/* implicit */long long int) (-(1131695902U)));
                arr_31 [i_4] [i_6] [i_8] [8] &= ((/* implicit */long long int) arr_2 [i_4] [i_4] [4]);
                var_26 = ((/* implicit */unsigned int) min((var_26), (min(((+(1673405868U))), (((/* implicit */unsigned int) ((unsigned char) 1389415252)))))));
            }
            for (int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                var_27 = ((/* implicit */int) arr_6 [i_10] [i_6] [i_4 + 1] [5U]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        var_28 = (~(arr_32 [i_6] [i_4 - 2]));
                        arr_38 [i_11] [i_11] [9U] [i_11] [i_11] = ((/* implicit */long long int) ((arr_3 [i_11] [i_11]) << (((((/* implicit */int) var_6)) - (74)))));
                        var_29 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) var_11)) * (132503792U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                    }
                    for (long long int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned char) ((arr_14 [i_4 + 4]) < (arr_14 [i_4 + 2])));
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((unsigned int) var_4)) >= ((-(var_1))))))));
                        arr_42 [i_4 + 1] [i_6] [10U] [10U] [i_11] = (i_11 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_11])) << (((((/* implicit */int) arr_0 [i_11])) - (76)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_11])) << (((((((/* implicit */int) arr_0 [i_11])) - (76))) - (19))))));
                    }
                    for (unsigned char i_14 = 1; i_14 < 19; i_14 += 3) 
                    {
                        arr_45 [i_11] [i_6] [i_4 + 2] [0U] = ((/* implicit */int) 1328936650U);
                        var_32 &= ((/* implicit */long long int) (-(3163271404U)));
                        arr_46 [i_4] [i_11] [i_4] [i_10] [i_14] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_34 [i_11] [i_10] [i_11])) ? (arr_19 [i_4] [i_6] [i_10] [i_11]) : (var_2)))));
                    }
                    var_33 = ((long long int) (+(var_7)));
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) % (((/* implicit */int) ((((/* implicit */int) arr_2 [i_4] [i_11] [13])) != (((/* implicit */int) var_6)))))));
                    arr_47 [i_4] [i_4] [i_6] [i_4] [i_11] [i_11] = ((/* implicit */long long int) ((unsigned char) arr_16 [i_4 - 1] [i_4 + 1] [i_4 + 4]));
                    arr_48 [i_4 - 2] [i_11] [i_11] = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_11] [i_6] [i_11] [i_11] [i_4] [i_4]))) < (var_12))) ? (((var_3) + (((/* implicit */unsigned int) var_0)))) : (arr_44 [i_4 + 1] [i_4 - 2] [i_11] [i_4 + 1] [i_4 + 4])));
                }
            }
            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) -1236689975)) < (arr_1 [i_6] [i_4 + 2])))) > (((/* implicit */int) ((unsigned char) arr_1 [i_4] [i_4 - 2])))))) < (((((/* implicit */int) (unsigned char)16)) / (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_4] [i_6])) || (((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4]))))))))))));
            var_36 += (+(max((((/* implicit */long long int) ((3571448687407719568LL) > (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (min((arr_5 [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4 + 2]), (((/* implicit */long long int) arr_40 [i_4] [i_4] [i_4] [i_6] [i_6] [i_6])))))));
        }
        for (unsigned int i_15 = 0; i_15 < 20; i_15 += 4) 
        {
            var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) var_11))));
            var_38 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_4])) && (((/* implicit */_Bool) arr_41 [i_15])))))) + ((+(arr_4 [i_4] [i_4 + 2] [i_4 + 4])))));
        }
        var_39 = ((/* implicit */unsigned char) ((unsigned int) var_11));
        /* LoopSeq 3 */
        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            var_40 = ((/* implicit */int) min((var_40), (2147483642)));
            var_41 = ((/* implicit */unsigned int) 1236689974);
            arr_56 [i_4 - 1] |= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((arr_44 [i_4 + 2] [i_4 - 2] [i_4] [i_4 + 2] [i_4 + 2]) < (arr_44 [i_4 + 2] [i_4 - 2] [i_4] [i_4 + 2] [i_4 + 2])))), (((((unsigned int) arr_25 [i_4 + 3] [i_16])) << (((min((-1644184772924701667LL), (((/* implicit */long long int) arr_6 [i_16] [i_4] [i_4] [i_4])))) + (1644184772924701684LL)))))));
        }
        for (long long int i_17 = 0; i_17 < 20; i_17 += 2) 
        {
            var_42 |= ((/* implicit */int) (+((~(max((((/* implicit */long long int) arr_24 [19])), (arr_54 [i_17])))))));
            var_43 = ((/* implicit */unsigned int) (((-((~(((/* implicit */int) var_6)))))) / (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_27 [i_4 - 1] [i_4] [i_4 + 4])))))));
            arr_61 [i_17] = (~(((((/* implicit */int) arr_20 [i_4 + 3] [i_4 + 2] [i_4 + 4])) / (arr_3 [i_4] [i_4]))));
            arr_62 [i_17] [i_4 - 1] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((min((var_8), (arr_32 [i_4 + 2] [i_4 + 2]))) != (((/* implicit */unsigned int) (-2147483647 - 1)))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) min((2328711826U), (((/* implicit */unsigned int) arr_13 [i_17]))))))))));
            arr_63 [i_4] [i_17] [i_17] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) (unsigned char)169)))) : (var_10)))));
        }
        /* vectorizable */
        for (unsigned int i_18 = 0; i_18 < 20; i_18 += 3) 
        {
            var_44 = ((/* implicit */unsigned int) (-(arr_26 [7LL] [i_4 - 2] [4])));
            var_45 = ((/* implicit */unsigned int) min((var_45), (arr_59 [i_18])));
            arr_66 [i_4 + 4] = ((/* implicit */long long int) ((arr_44 [i_4] [i_4] [i_4] [i_4 + 2] [i_4 - 2]) * (arr_44 [14LL] [12] [i_4] [i_4 + 2] [i_4 - 2])));
        }
        /* LoopSeq 1 */
        for (int i_19 = 4; i_19 < 18; i_19 += 2) 
        {
            var_46 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217))) + (859500619U)))), (arr_57 [i_4 + 3] [i_4 + 3]))) % (((/* implicit */long long int) max((var_10), (arr_3 [i_19] [i_19 + 1]))))));
            /* LoopSeq 3 */
            for (int i_20 = 0; i_20 < 20; i_20 += 1) /* same iter space */
            {
                var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) ((min((((((/* implicit */long long int) ((/* implicit */int) var_4))) / (arr_1 [5] [5]))), (max((arr_16 [19U] [14LL] [i_4 + 1]), (arr_54 [i_4 + 3]))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_4] [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_70 [i_4] [i_19 + 1] [i_20])))))) : (var_5)))))))));
                arr_73 [i_20] [i_19 - 3] [i_20] = ((/* implicit */long long int) var_11);
            }
            for (int i_21 = 0; i_21 < 20; i_21 += 1) /* same iter space */
            {
                var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) ((((int) var_0)) > (min((((/* implicit */int) arr_21 [i_4 + 2] [i_4 + 4] [i_4] [i_19 - 1])), (var_11))))))));
                var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_24 [i_21]) : (var_11)))) ? (arr_54 [i_19 - 2]) : (((((/* implicit */long long int) arr_4 [i_19] [i_19 - 2] [i_19 - 2])) / ((-9223372036854775807LL - 1LL)))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_22 = 0; i_22 < 20; i_22 += 3) 
                {
                    arr_79 [i_21] [i_21] [i_21] = ((/* implicit */unsigned char) arr_32 [i_22] [(unsigned char)4]);
                    var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))))));
                    var_51 -= ((((/* implicit */unsigned int) (~(arr_19 [i_4 + 4] [i_19] [i_21] [i_22])))) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_75 [i_4] [i_4] [i_4] [i_4]))) : (arr_25 [i_22] [8LL]))));
                }
                arr_80 [i_4 + 1] [i_21] [i_19 - 4] [i_21] = ((/* implicit */int) (+(min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)52)) / (var_2)))), ((~(arr_1 [i_4 + 1] [i_4 + 1])))))));
            }
            /* vectorizable */
            for (unsigned int i_23 = 0; i_23 < 20; i_23 += 1) 
            {
                var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_4 + 3] [i_19 - 2])) ? (((/* implicit */int) arr_10 [i_4 + 4])) : (((/* implicit */int) arr_10 [i_4 + 4])))))));
                var_53 &= ((/* implicit */unsigned char) (~(arr_17 [i_4] [i_4 - 2])));
                /* LoopSeq 2 */
                for (unsigned int i_24 = 1; i_24 < 17; i_24 += 3) 
                {
                    var_54 = ((/* implicit */unsigned char) (~(arr_72 [i_19 + 2] [i_24] [i_24 - 1])));
                    arr_87 [i_4 - 2] [i_4 + 4] [i_24] [i_23] [i_24 - 1] = ((/* implicit */long long int) ((arr_35 [i_4] [i_19] [(unsigned char)14] [i_19 + 2] [i_23] [i_24 + 3]) < (((/* implicit */unsigned int) arr_15 [i_23]))));
                    arr_88 [i_24] [i_19] [i_19] [i_24 + 3] [i_19] = ((/* implicit */long long int) (+((-(286370775)))));
                }
                for (long long int i_25 = 2; i_25 < 17; i_25 += 2) 
                {
                    arr_91 [i_19 - 4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((1236689980) > (((/* implicit */int) (unsigned char)215))))) > (((/* implicit */int) (unsigned char)203))));
                    arr_92 [i_19 + 1] [i_23] [i_25 - 1] = ((/* implicit */int) arr_26 [i_4 + 2] [i_4 + 2] [i_4 + 2]);
                    var_55 = 899788078U;
                }
                /* LoopSeq 2 */
                for (unsigned int i_26 = 0; i_26 < 20; i_26 += 2) 
                {
                    var_56 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_10 [i_4])) != (var_0))))));
                    arr_97 [i_4 - 1] [i_4 + 4] [i_4 + 3] [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned char) ((var_11) >= (((/* implicit */int) arr_67 [7LL] [7LL])))));
                }
                for (int i_27 = 0; i_27 < 20; i_27 += 1) 
                {
                    var_57 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_55 [i_4 + 3] [i_4 + 3] [i_19 - 3])) / ((~(arr_13 [i_19])))));
                    arr_100 [9U] [i_23] [i_19 + 2] [i_19 + 2] [i_4 + 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_4 + 4] [i_19]))));
                }
                arr_101 [i_4 + 4] [i_4 + 4] [(unsigned char)8] = ((/* implicit */int) ((((/* implicit */long long int) (+(var_3)))) < ((~(arr_28 [i_4 - 1] [i_4] [i_19] [i_19] [i_23])))));
            }
            var_58 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)194)) >= (((/* implicit */int) (unsigned char)207))));
        }
    }
    /* vectorizable */
    for (int i_28 = 1; i_28 < 16; i_28 += 3) /* same iter space */
    {
        var_59 = ((/* implicit */long long int) ((int) var_2));
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 19; i_29 += 1) 
        {
            for (int i_30 = 0; i_30 < 19; i_30 += 2) 
            {
                {
                    var_60 = ((/* implicit */unsigned char) max((var_60), (((/* implicit */unsigned char) ((var_5) / (arr_96 [i_28 + 1] [i_28 - 1]))))));
                    arr_109 [i_29] [i_29] [i_28] [i_30] = (-(3395179208U));
                    var_61 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_28 - 1] [i_29] [i_30] [i_30])) || (((/* implicit */_Bool) var_6))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    arr_110 [i_28] [i_29] [i_28] = ((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_28] [i_29] [i_28] [i_30] [i_29]))) / (arr_57 [i_28] [i_29]));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_31 = 1; i_31 < 16; i_31 += 3) /* same iter space */
    {
        var_62 -= arr_107 [i_31 + 1] [i_31 + 1] [i_31 + 3];
        var_63 = ((/* implicit */int) max((var_63), (((/* implicit */int) ((((/* implicit */_Bool) arr_57 [i_31] [i_31 + 2])) && (((/* implicit */_Bool) arr_84 [i_31 + 3] [i_31 + 2] [i_31 - 1] [i_31 + 2])))))));
        var_64 = ((/* implicit */unsigned char) (((~(var_3))) | (((/* implicit */unsigned int) arr_50 [i_31 + 3] [i_31 + 2]))));
    }
    var_65 = ((/* implicit */unsigned char) ((int) 6496919639969702103LL));
}
