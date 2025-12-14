/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80707
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) ((18446744073709551615ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 3 */
                for (short i_3 = 2; i_3 < 23; i_3 += 3) 
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) var_15)))))));
                    arr_9 [i_0 - 2] [i_1] [i_1 - 1] [i_2] [(unsigned short)18] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_5 [i_0] [i_0 - 3] [(unsigned short)0] [i_0]))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_1)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_2))));
                        arr_12 [i_0] [i_2] [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3 - 2])) * (((/* implicit */int) arr_6 [i_3 - 2] [i_3 + 1] [i_3 - 1] [i_3 - 2]))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) 0ULL))));
                        var_22 = ((/* implicit */signed char) arr_8 [i_0] [i_2]);
                    }
                }
                for (unsigned int i_6 = 1; i_6 < 23; i_6 += 4) 
                {
                    var_23 &= ((/* implicit */unsigned short) (-2147483647 - 1));
                    var_24 |= ((/* implicit */unsigned int) arr_7 [i_0 - 3] [i_0 - 3] [i_1 + 2] [i_6 - 1] [i_6]);
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_0 - 3])) : (((/* implicit */int) var_15))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 - 1] [i_2])) ? (((/* implicit */int) arr_14 [i_0 - 2] [i_0 - 3] [i_2])) : (((/* implicit */int) var_11))));
                }
                for (int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) arr_1 [i_0 - 3]))));
                    arr_22 [i_0 - 1] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (arr_11 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_7] [i_2])));
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */short) arr_15 [i_0 - 3] [i_2 - 1] [i_1 + 1]);
                        arr_25 [i_0] [i_2] [i_2] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) 18446744073709551615ULL))) * (((0ULL) * (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((2147483635) & (((/* implicit */int) var_12)))) >= (var_2))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        var_30 &= ((/* implicit */unsigned short) ((signed char) (_Bool)0));
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */int) var_16)))))))));
                    }
                    var_32 = arr_7 [i_0] [i_1] [i_2] [i_2] [i_7];
                }
                var_33 = ((/* implicit */short) var_1);
            }
            for (unsigned char i_10 = 4; i_10 < 23; i_10 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((((/* implicit */_Bool) arr_26 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 4])) ? (arr_26 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0]) : (arr_26 [i_0 + 1] [(unsigned char)14] [i_0 - 1] [(unsigned char)14] [i_0 - 2] [i_0])))));
                    arr_32 [i_0] [i_11] [i_11] = ((/* implicit */unsigned int) arr_14 [i_0 - 4] [i_0] [i_11]);
                }
                var_35 -= ((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 + 2] [i_10] [i_10 + 1]);
                arr_33 [i_0] [i_1] [(unsigned char)21] [i_0] = ((/* implicit */unsigned char) var_3);
            }
            arr_34 [i_0 + 1] [i_0 - 3] = ((/* implicit */_Bool) var_10);
            arr_35 [(_Bool)1] [12] [i_0 + 1] = ((/* implicit */int) ((-828307467) == (((/* implicit */int) (unsigned char)193))));
            /* LoopSeq 1 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [i_1 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 2])) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)26897)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                {
                    for (short i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        {
                            arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_21 [(signed char)10] [i_1 + 1] [i_1] [i_1 + 1])) - (((/* implicit */int) var_11)))));
                            var_37 += ((/* implicit */short) ((unsigned int) var_3));
                            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((arr_2 [i_0 + 1] [i_1 + 1]) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) var_4)))))));
                            var_39 = ((/* implicit */_Bool) max((var_39), (arr_2 [i_0] [i_0])));
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_16 = 0; i_16 < 24; i_16 += 3) 
            {
                var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) 736826433))));
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 22; i_17 += 3) 
                {
                    for (short i_18 = 4; i_18 < 23; i_18 += 1) 
                    {
                        {
                            var_41 *= ((/* implicit */unsigned char) (~(arr_16 [i_18 - 2] [(unsigned short)12] [(unsigned short)12] [i_15])));
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_0]))))) && (((/* implicit */_Bool) arr_10 [i_15] [i_15] [i_0 - 2]))));
                            arr_54 [i_0] [i_0 - 3] [i_0] [i_0 - 4] [i_0] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_5))))));
                            var_43 = ((/* implicit */unsigned long long int) arr_48 [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                arr_55 [i_16] [i_16] [i_0 + 1] [i_0 + 1] = (!(arr_46 [i_0 - 1]));
            }
            for (short i_19 = 4; i_19 < 22; i_19 += 2) 
            {
                var_44 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_17 [(_Bool)1] [(_Bool)1] [i_19 - 1] [i_19])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_16)))));
                var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
                var_46 = ((/* implicit */short) ((arr_23 [i_15] [i_15 + 1]) < (arr_23 [i_0] [i_19])));
            }
            for (int i_20 = 3; i_20 < 22; i_20 += 3) 
            {
                /* LoopSeq 4 */
                for (int i_21 = 0; i_21 < 24; i_21 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 2) 
                    {
                        var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_22] [i_20 + 2] [i_20]))) : (var_3))))));
                        var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -828307470)) || ((_Bool)0)));
                        arr_67 [i_0] [i_0] [i_0] [i_0] [8] = ((/* implicit */signed char) ((long long int) arr_16 [i_0] [i_0] [i_22] [i_20 + 2]));
                    }
                    for (unsigned int i_23 = 0; i_23 < 24; i_23 += 3) 
                    {
                        arr_70 [i_0] [i_15 - 1] [2] [i_23] = ((/* implicit */_Bool) arr_31 [i_20 - 1] [i_15 + 1] [i_0 - 3]);
                        var_49 = ((/* implicit */unsigned int) arr_1 [i_0 - 2]);
                    }
                    var_50 &= ((((/* implicit */unsigned int) -828307476)) != (arr_44 [i_20 + 2] [i_15 - 1]));
                }
                for (unsigned char i_24 = 0; i_24 < 24; i_24 += 1) 
                {
                    var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4)) | (((/* implicit */int) (unsigned short)65528)))))));
                    var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [i_0 - 3] [(unsigned char)0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))) ? (arr_11 [i_0 - 2] [i_0 - 3] [i_15] [i_20 - 3] [i_20 + 2] [i_24] [i_24]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_0 - 3]))))))));
                }
                for (unsigned short i_25 = 1; i_25 < 22; i_25 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_26 = 0; i_26 < 24; i_26 += 1) 
                    {
                        var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) arr_74 [i_15 + 2] [i_20 + 2] [i_25]))));
                        var_54 *= ((/* implicit */unsigned long long int) (~(arr_65 [i_25] [i_25] [i_25 - 1] [i_25] [i_26] [i_26] [i_26])));
                    }
                    for (signed char i_27 = 3; i_27 < 23; i_27 += 3) 
                    {
                        var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned char)128)))))));
                        arr_79 [i_0] [i_15] [i_20] [i_25] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_71 [i_0 - 2] [i_0 - 4] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) arr_71 [i_0] [i_0 - 3] [i_0 - 3] [7])) : (((/* implicit */int) arr_71 [i_0] [i_0 - 3] [i_0 - 1] [i_0]))));
                    }
                    var_56 = ((/* implicit */unsigned short) max((var_56), (((/* implicit */unsigned short) var_7))));
                }
                for (unsigned short i_28 = 0; i_28 < 24; i_28 += 3) 
                {
                    var_57 = ((/* implicit */unsigned char) min((var_57), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_4)) ? (arr_26 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_81 [20ULL] [i_15 + 2] [i_15] [i_15]))))))))));
                    arr_82 [i_0] [i_0] [i_15] [i_28] [i_20] [i_28] = ((/* implicit */unsigned short) ((2147483647) * (((((/* implicit */_Bool) arr_21 [i_0] [i_15] [i_20] [(short)16])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))));
                    var_58 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_46 [i_15 + 1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)22)) - (((/* implicit */int) arr_76 [9ULL] [i_15 - 1] [i_15] [i_15] [i_15 + 2])))))));
                    var_59 -= ((/* implicit */short) ((_Bool) arr_20 [i_15] [i_15] [i_15 + 2] [0ULL]));
                }
                arr_83 [i_0] [i_0] [i_15] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) << (((/* implicit */int) arr_60 [i_15 + 1] [i_15] [i_15 + 1]))));
                /* LoopSeq 2 */
                for (unsigned char i_29 = 3; i_29 < 23; i_29 += 4) 
                {
                    arr_86 [i_0 + 1] [i_15] [i_29] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) (unsigned short)65535)))));
                    /* LoopSeq 4 */
                    for (long long int i_30 = 0; i_30 < 24; i_30 += 4) 
                    {
                        arr_89 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483637)) ? (((/* implicit */int) arr_72 [i_15] [i_15] [i_15 + 1] [i_29 - 2])) : (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_14 [i_0 + 1] [i_15 + 2] [i_30])) - (53932)))))));
                        arr_90 [i_0] [i_0 - 4] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -457462134)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (unsigned char)15))));
                    }
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        var_60 -= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_91 [i_0] [i_0] [i_20] [i_29 - 3])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) : (arr_44 [i_0 - 4] [8ULL])));
                        arr_95 [i_0] [i_0 - 3] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_0 - 4] [i_15 + 2] [i_20 + 1]))));
                    }
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        var_61 = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (68719476736LL) : (((/* implicit */long long int) 563444092))));
                        var_62 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_42 [i_29] [i_15 + 2] [i_20])) * (((/* implicit */int) arr_81 [i_32] [i_15 - 1] [i_20] [i_29 + 1]))));
                    }
                    for (int i_33 = 0; i_33 < 24; i_33 += 3) 
                    {
                        var_63 = ((/* implicit */unsigned short) max((var_63), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_98 [(unsigned char)20])) << (((((/* implicit */int) arr_61 [i_0] [i_0] [i_20 + 2] [i_33])) - (193))))) * (((/* implicit */int) (unsigned short)55447)))))));
                        arr_101 [i_0] [i_15] [i_20] [i_29 + 1] [i_33] [i_0] = ((/* implicit */int) arr_24 [(unsigned char)0]);
                    }
                }
                for (unsigned char i_34 = 0; i_34 < 24; i_34 += 4) 
                {
                    var_64 = ((/* implicit */short) ((((/* implicit */_Bool) arr_52 [i_0 - 4])) ? (((((/* implicit */_Bool) (unsigned short)65519)) ? (arr_31 [i_0 - 4] [i_15 - 1] [i_34]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_100 [i_0] [i_15] [i_20] [i_34] [i_20 - 1]))))) : (((((/* implicit */_Bool) arr_91 [i_0] [i_0 + 1] [i_0] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_3))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_35 = 2; i_35 < 23; i_35 += 2) 
                    {
                        arr_108 [i_0 - 4] [i_0 - 4] [i_34] [i_35] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_14)))) || (((var_13) && (((/* implicit */_Bool) (unsigned char)62))))));
                        var_65 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_65 [i_0] [i_15 + 2] [i_0] [i_0 - 1] [i_15 + 1] [i_0 - 3] [i_20 + 1])) ? ((~(arr_31 [i_0] [i_15] [i_20]))) : (arr_31 [i_35 - 2] [i_20 - 1] [i_0])));
                        arr_109 [i_34] [i_35 - 2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_99 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)194))))) + (((var_17) ? (11855455850107330783ULL) : (((/* implicit */unsigned long long int) arr_47 [i_0]))))));
                    }
                }
                arr_110 [i_0] [i_15 - 1] [i_20] = ((/* implicit */unsigned short) (((~(-2147483641))) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (var_2)))));
                var_66 = ((/* implicit */signed char) arr_85 [i_20] [14ULL] [i_0] [i_0 - 3]);
            }
            /* LoopNest 2 */
            for (short i_36 = 0; i_36 < 24; i_36 += 3) 
            {
                for (unsigned char i_37 = 3; i_37 < 20; i_37 += 4) 
                {
                    {
                        var_67 *= ((/* implicit */unsigned int) arr_105 [i_0] [i_0] [i_15] [i_15 + 2] [i_0] [i_37]);
                        var_68 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_80 [i_0 - 4] [i_15 + 2] [(short)13])))) ? (((var_2) - (((/* implicit */int) arr_93 [i_15])))) : (((/* implicit */int) (unsigned short)33617))));
                    }
                } 
            } 
        }
        var_69 = ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_38 = 1; i_38 < 22; i_38 += 3) 
        {
            for (int i_39 = 0; i_39 < 24; i_39 += 1) 
            {
                {
                    var_70 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_119 [i_0 - 4] [i_0] [i_0 - 1]))));
                    arr_122 [i_0] [i_39] = ((/* implicit */short) (+(18446744073709551615ULL)));
                    /* LoopNest 2 */
                    for (unsigned short i_40 = 0; i_40 < 24; i_40 += 3) 
                    {
                        for (unsigned char i_41 = 0; i_41 < 24; i_41 += 3) 
                        {
                            {
                                arr_127 [i_0] [i_0] [i_0] [i_39] [i_0] = ((/* implicit */unsigned short) arr_40 [i_38] [i_39] [i_40] [i_41]);
                                var_71 += ((/* implicit */_Bool) ((unsigned long long int) var_8));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_128 [i_0 - 1] = ((/* implicit */_Bool) var_5);
    }
    var_72 = ((/* implicit */unsigned long long int) ((unsigned char) var_8));
}
