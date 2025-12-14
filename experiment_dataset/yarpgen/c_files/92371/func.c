/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92371
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
    var_20 = var_9;
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = min((3153288797U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) 14986076625198276247ULL))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 3153288797U)) ? (3153288797U) : (4270495338U))))) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 - 1])), (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) 3738889738U)) || (((/* implicit */_Bool) 997482376U)))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_22 ^= ((/* implicit */unsigned char) (-(arr_6 [i_1] [i_1])));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        arr_15 [i_1 + 1] [i_1 + 1] [i_3] [i_4] = ((/* implicit */unsigned int) var_7);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_5] [i_4] [i_3] [i_2] [i_5] = arr_10 [i_1 - 1] [i_1] [i_1 - 1] [i_4];
                            var_23 ^= ((/* implicit */unsigned char) (-(((unsigned long long int) arr_12 [i_4] [i_1] [i_1] [i_1]))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 1) /* same iter space */
                        {
                            var_24 = ((unsigned char) 556077559U);
                            arr_23 [i_1] [i_6] [i_6] [i_3] [i_4] [i_4] [i_6 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((2768629077U) == (24471979U)))) >> (((arr_6 [i_1 - 1] [1U]) - (975979201U)))));
                        }
                    }
                    arr_24 [i_3] [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned long long int) ((((var_19) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [19ULL] [19ULL] [i_3]))))) >= (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned char)8]))) : (var_13))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned char i_8 = 1; i_8 < 18; i_8 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_8] [i_8 + 2])) || (((/* implicit */_Bool) arr_9 [i_7 + 1] [i_8 + 2] [i_8] [i_7 + 2]))));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 556077569U)) ? ((-(((/* implicit */int) (unsigned char)45)))) : (((/* implicit */int) (unsigned char)251))));
        }
        for (unsigned char i_9 = 1; i_9 < 18; i_9 += 1) /* same iter space */
        {
            arr_33 [i_9] [i_9] [i_7] = ((/* implicit */unsigned char) var_1);
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_9 - 1] [i_7] [i_7 + 1] [i_7]))) - (0ULL)))) ? (((/* implicit */int) arr_1 [i_9] [i_9])) : (((/* implicit */int) arr_7 [i_7 - 1] [i_7 - 1] [i_9]))));
            var_28 ^= ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) 0U)))));
        }
        for (unsigned char i_10 = 1; i_10 < 18; i_10 += 1) /* same iter space */
        {
            var_29 -= 1883855165U;
            arr_38 [i_10] [i_7 + 3] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 3738889721U))) ? (var_18) : (arr_32 [i_7 - 1] [i_10])));
            arr_39 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_7])) || (((/* implicit */_Bool) arr_0 [18U]))));
        }
        for (unsigned char i_11 = 1; i_11 < 18; i_11 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned char) 1118772254U);
            arr_43 [i_7] = ((/* implicit */unsigned long long int) (+(997482376U)));
            var_31 = (unsigned char)208;
            var_32 |= ((/* implicit */unsigned int) arr_18 [(unsigned char)0]);
        }
        /* LoopSeq 4 */
        for (unsigned int i_12 = 1; i_12 < 17; i_12 += 4) 
        {
            arr_46 [i_7] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_7])) ? (var_7) : (((/* implicit */unsigned long long int) var_4)))))));
            arr_47 [12U] [i_12 + 3] [i_12] = ((/* implicit */unsigned char) ((unsigned long long int) 783724240U));
        }
        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 3) 
            {
                for (unsigned int i_15 = 4; i_15 < 19; i_15 += 1) 
                {
                    for (unsigned char i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) arr_21 [i_15 - 4]);
                            var_34 ^= ((/* implicit */unsigned char) var_5);
                        }
                    } 
                } 
            } 
            var_35 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85))) - (30ULL));
        }
        for (unsigned int i_17 = 0; i_17 < 20; i_17 += 1) /* same iter space */
        {
            var_36 ^= ((/* implicit */unsigned long long int) 56908590U);
            /* LoopNest 2 */
            for (unsigned char i_18 = 1; i_18 < 19; i_18 += 1) 
            {
                for (unsigned int i_19 = 3; i_19 < 19; i_19 += 4) 
                {
                    {
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) arr_30 [4U] [i_7]))));
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) var_2))))))));
                    }
                } 
            } 
        }
        for (unsigned char i_20 = 2; i_20 < 19; i_20 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_21 = 1; i_21 < 18; i_21 += 4) 
            {
                arr_71 [17ULL] [12U] [i_21] [i_21] |= ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) + (3738889757U));
                var_39 = ((arr_30 [i_20] [i_21 - 1]) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_63 [i_7] [i_20] [i_21]))))));
            }
            for (unsigned long long int i_22 = 1; i_22 < 19; i_22 += 3) 
            {
                var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) var_8))));
                /* LoopSeq 3 */
                for (unsigned long long int i_23 = 1; i_23 < 19; i_23 += 4) 
                {
                    var_41 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_59 [i_7 + 3] [8ULL] [i_22 + 1] [i_20]))));
                    arr_77 [i_7] [i_7] [i_20 - 1] [i_20] [(unsigned char)11] [i_22] = ((/* implicit */unsigned char) arr_59 [i_22] [i_7] [i_7 + 2] [i_22]);
                    arr_78 [i_22] [i_20] [14ULL] [17U] = ((/* implicit */unsigned long long int) ((unsigned int) 1947732248791619775ULL));
                }
                for (unsigned int i_24 = 0; i_24 < 20; i_24 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_25 = 1; i_25 < 18; i_25 += 3) /* same iter space */
                    {
                        arr_83 [i_22] = ((/* implicit */unsigned char) var_4);
                        var_42 = (-(arr_26 [i_7 + 3] [i_7 - 1]));
                        var_43 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [8ULL]))) | (var_14))));
                    }
                    for (unsigned long long int i_26 = 1; i_26 < 18; i_26 += 3) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_7 + 3]))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_7] [i_20] [i_7]))) + (var_3)))));
                        var_45 = ((/* implicit */unsigned char) ((unsigned long long int) 4998082343154729114ULL));
                        var_46 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_37 [i_22] [i_24]))));
                        var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_7] [i_20 + 1] [i_22 - 1] [i_26])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_6 [i_22 - 1] [i_26 + 1])));
                    }
                    for (unsigned long long int i_27 = 1; i_27 < 18; i_27 += 3) /* same iter space */
                    {
                        arr_88 [i_22] [i_20 - 1] [16ULL] [i_24] [i_27] [i_7] = ((/* implicit */unsigned char) ((10376487411533730813ULL) == (var_0)));
                        var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_19)))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_72 [i_20] [i_20] [i_20] [i_24])) || (((/* implicit */_Bool) var_9))))))));
                        arr_89 [i_22] [(unsigned char)8] [i_22] [i_24] [i_24] [i_24] [10ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_20] [10ULL] [(unsigned char)4])) ? (((/* implicit */unsigned long long int) ((arr_31 [i_20] [i_22] [i_27 - 1]) | (2441248682U)))) : (((unsigned long long int) arr_10 [i_24] [i_20] [i_20] [19U]))));
                        arr_90 [i_7] [i_20] [i_22] [i_22] [i_22] [i_27] [i_20] = ((/* implicit */unsigned char) (+(4294967290U)));
                        var_49 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_45 [i_7] [i_20] [i_22 + 1])) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_27 + 2] [i_7 - 1] [i_7 - 1]))) : (var_11)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_28 = 0; i_28 < 20; i_28 += 3) 
                    {
                        var_50 = ((/* implicit */unsigned long long int) (+(0U)));
                        arr_95 [i_7 + 1] [i_7 + 1] [i_22] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_60 [i_7 + 2] [i_7 + 2] [i_22]);
                        arr_96 [i_22] = (+(1389610596635248654ULL));
                        arr_97 [i_7] [i_7 + 1] [i_22] [i_22 + 1] [i_22] [i_24] [i_28] = ((/* implicit */unsigned char) ((unsigned int) arr_5 [i_7 + 1]));
                    }
                    for (unsigned long long int i_29 = 2; i_29 < 18; i_29 += 4) 
                    {
                        var_51 = ((/* implicit */unsigned int) arr_81 [i_7] [i_20 - 1] [i_22] [i_24] [i_29 - 2]);
                        arr_100 [i_29 - 2] [i_22] [i_22] [i_22] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_22 - 1]))));
                        var_52 = ((/* implicit */unsigned long long int) ((arr_67 [i_29 - 2] [i_22 - 1] [i_7 + 1]) == (arr_67 [i_29 - 2] [i_22 - 1] [i_7 + 1])));
                        arr_101 [i_20] [i_20 - 1] [i_22 - 1] [i_22] [i_29] = ((/* implicit */unsigned long long int) var_12);
                    }
                    var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) ((arr_60 [i_7] [i_7 - 1] [i_7 + 3]) << (((1600836329U) - (1600836327U))))))));
                }
                for (unsigned int i_30 = 0; i_30 < 20; i_30 += 3) /* same iter space */
                {
                    arr_105 [i_7 + 1] [i_7] [11U] [i_20] [i_22] [i_30] = ((/* implicit */unsigned char) (-(var_15)));
                    arr_106 [i_7] [i_7] [i_22] [i_30] [i_30] = ((/* implicit */unsigned char) 13480210513460883982ULL);
                    arr_107 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_30] [i_30] [i_22] = (unsigned char)50;
                    var_54 = ((/* implicit */unsigned char) ((556077569U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_31 = 0; i_31 < 20; i_31 += 1) 
                    {
                        var_55 = ((/* implicit */unsigned int) (~(arr_4 [i_22 + 1])));
                        var_56 = ((/* implicit */unsigned char) var_0);
                    }
                }
                arr_110 [i_7 + 1] [i_20] [i_22] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_60 [i_7] [i_20 - 2] [i_22])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4)))) : ((~(12754166030635250436ULL)))));
            }
            var_57 = ((/* implicit */unsigned char) min((var_57), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)126)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))) : (arr_72 [i_7 + 1] [i_7 - 1] [i_20 - 1] [i_20]))))));
        }
        arr_111 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)208))))) | (((unsigned int) arr_40 [i_7] [(unsigned char)13] [i_7 - 1]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_32 = 1; i_32 < 17; i_32 += 4) 
        {
            arr_114 [i_32] [14U] = ((/* implicit */unsigned long long int) ((var_14) % ((-(arr_6 [i_7] [i_32])))));
            arr_115 [i_32] [i_32] = ((unsigned long long int) arr_112 [i_7 + 3] [i_32 - 1] [i_32 - 1]);
        }
        for (unsigned long long int i_33 = 3; i_33 < 17; i_33 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_34 = 1; i_34 < 19; i_34 += 1) 
            {
                arr_122 [i_33] [i_33] [i_33] = ((/* implicit */unsigned int) arr_92 [i_7] [i_7] [i_34] [i_33] [i_33] [i_34 - 1]);
                arr_123 [i_33] [i_7] [i_33] [i_34 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_34])) ? (var_0) : (var_3)))) ? (((((/* implicit */_Bool) var_13)) ? (30ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_7 + 1] [i_7 + 1] [i_34]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((556077595U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113))))))));
                arr_124 [i_33] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || ((!(((/* implicit */_Bool) var_6))))));
            }
            for (unsigned long long int i_35 = 1; i_35 < 18; i_35 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_36 = 0; i_36 < 20; i_36 += 1) 
                {
                    arr_130 [i_33] [i_33] [i_35] [i_36] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_116 [i_7] [i_7])))))) | (arr_99 [i_33])));
                    var_58 = ((/* implicit */unsigned int) min((var_58), (((/* implicit */unsigned int) arr_65 [i_7] [12U] [12U] [i_7]))));
                }
                arr_131 [i_7] [i_33] [i_35] = ((/* implicit */unsigned char) var_18);
            }
            for (unsigned char i_37 = 1; i_37 < 19; i_37 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_38 = 1; i_38 < 18; i_38 += 1) 
                {
                    for (unsigned long long int i_39 = 0; i_39 < 20; i_39 += 4) 
                    {
                        {
                            arr_144 [6U] [i_33] [i_37 + 1] [i_38 - 1] [6U] = ((/* implicit */unsigned char) ((arr_41 [i_33 - 3] [i_33 - 3] [i_33]) >= (((/* implicit */unsigned long long int) arr_32 [i_33 - 3] [i_33]))));
                            var_59 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_62 [i_33] [i_38] [i_37 + 1] [i_33]))));
                        }
                    } 
                } 
                arr_145 [i_33] [i_33 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_1 [i_33] [i_33 + 2]))));
                arr_146 [i_33] = 30ULL;
                arr_147 [12U] &= (unsigned char)18;
            }
            for (unsigned char i_40 = 1; i_40 < 19; i_40 += 4) 
            {
                var_60 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_120 [1ULL] [i_33] [i_33] [i_7 + 2])) ? (((unsigned long long int) (unsigned char)0)) : (((/* implicit */unsigned long long int) (-(var_14))))));
                /* LoopSeq 1 */
                for (unsigned int i_41 = 4; i_41 < 18; i_41 += 3) 
                {
                    arr_152 [12U] [i_7] [i_33 + 1] [i_40] [(unsigned char)11] [i_33] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_7] [7ULL] [3ULL]))) < (arr_99 [i_33])));
                    arr_153 [i_33] [i_33] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_70 [i_7] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_70 [i_7 + 3] [i_7 + 3] [i_7 + 3])) : (((/* implicit */int) arr_70 [i_7] [i_7 + 1] [(unsigned char)1]))));
                    arr_154 [i_7 + 1] [i_33] [i_40 - 1] [i_41 + 2] [i_33] [i_33] = ((/* implicit */unsigned int) (+(8147623580554642015ULL)));
                    arr_155 [19U] [i_33] [i_33] [i_7] = arr_112 [i_7 + 3] [i_7 + 3] [i_7];
                }
            }
            var_61 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_118 [i_7 + 3] [i_7] [i_33 + 3]) : (var_9)))) && (((/* implicit */_Bool) arr_32 [i_7 - 1] [i_33]))));
            var_62 = ((/* implicit */unsigned char) ((arr_141 [i_33]) + (arr_141 [i_33])));
            var_63 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_54 [i_33] [i_7 + 1] [i_33 - 3] [i_7 + 1] [i_33])))) ? (((/* implicit */unsigned long long int) arr_6 [i_33 + 3] [i_33 - 3])) : ((~(arr_121 [i_7] [i_7] [(unsigned char)0] [i_7])))));
            var_64 |= ((/* implicit */unsigned char) 2591334577U);
        }
    }
    var_65 = var_15;
}
