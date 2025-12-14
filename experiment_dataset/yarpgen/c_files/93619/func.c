/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93619
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (!(((/* implicit */_Bool) var_0)))))));
        var_12 -= ((/* implicit */short) (+(8029966890953246153LL)));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    var_13 |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) var_6))))));
                    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
                    var_15 = ((/* implicit */long long int) (-(arr_2 [i_0] [i_0] [i_1])));
                    var_16 = ((/* implicit */short) arr_2 [i_0] [i_1] [i_1]);
                }
            } 
        } 
    }
    var_17 = ((/* implicit */short) (+((-(((/* implicit */int) var_6))))));
    var_18 = ((/* implicit */long long int) var_6);
    /* LoopSeq 3 */
    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_3] [(signed char)10] [i_3])) ? (((((/* implicit */_Bool) min((1340840037U), (((/* implicit */unsigned int) (unsigned short)3432))))) ? (var_0) : (min((((/* implicit */unsigned int) (short)-31227)), (var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((min((((/* implicit */signed char) var_7)), (arr_10 [i_3] [i_3]))), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3] [(signed char)13])) && (((/* implicit */_Bool) arr_9 [i_3] [i_3])))))))))));
            var_20 ^= ((/* implicit */unsigned short) var_1);
            var_21 += ((/* implicit */short) arr_13 [i_3] [(unsigned short)2] [i_4]);
            var_22 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_10 [i_3] [i_4])) ? (((/* implicit */int) ((_Bool) var_2))) : (((/* implicit */int) min((arr_9 [i_3] [i_3]), (((/* implicit */unsigned short) var_1))))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [(_Bool)1] [i_3] [i_3])) << (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_13 [i_3] [i_3] [i_4]))))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    {
                        var_23 = ((/* implicit */int) ((((max((var_8), (((/* implicit */unsigned int) var_5)))) << (((((/* implicit */int) arr_15 [i_3])) - (37))))) << (((min((((var_2) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)31227)))), (((/* implicit */int) var_9)))) - (75)))));
                        var_24 = (+(((((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) / ((+(var_8))))));
                        arr_19 [i_3] = var_3;
                    }
                } 
            } 
        }
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            var_25 = ((/* implicit */signed char) arr_13 [i_3] [i_3] [i_3]);
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((/* implicit */long long int) arr_8 [i_3] [i_3])) : (max((((/* implicit */long long int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_11 [i_7] [i_3] [i_7]))))), (max((((/* implicit */long long int) arr_14 [i_3] [i_7] [(unsigned short)12])), (arr_12 [i_3] [8ULL] [(unsigned short)14]))))))))));
        }
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_3] [i_3] [i_3])) | (((/* implicit */int) arr_11 [i_3] [i_3] [i_3]))))) ? (min(((+(1309216379U))), (((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) arr_11 [i_3] [i_3] [i_3])) : (((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((((/* implicit */int) var_3)) >= (((/* implicit */int) var_9)))), (((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20410)))))))))));
        var_28 = ((/* implicit */unsigned char) ((unsigned short) var_0));
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) 16976128188953606762ULL))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        var_30 = ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
        /* LoopSeq 2 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            arr_27 [i_8] [i_8] = ((/* implicit */unsigned char) var_0);
            var_31 = (!((!(((/* implicit */_Bool) (~(((/* implicit */int) (short)20410))))))));
            /* LoopNest 3 */
            for (short i_10 = 1; i_10 < 18; i_10 += 2) 
            {
                for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    for (short i_12 = 2; i_12 < 21; i_12 += 1) 
                    {
                        {
                            arr_37 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (((~(arr_24 [i_8]))) >> (((arr_31 [i_12 - 1] [i_8] [i_8]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_6))))))) : ((~(1992036419634045731ULL)))));
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1528671247)) ? (3496433284U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_13 = 1; i_13 < 21; i_13 += 2) 
        {
            var_33 &= ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8] [i_8] [(_Bool)1])))))) | (arr_8 [i_8] [i_13]))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (arr_21 [i_8] [i_13]))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_14 = 3; i_14 < 21; i_14 += 3) 
            {
                var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((arr_12 [i_13 - 1] [i_13 - 1] [i_14 + 1]) & (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))))))));
                var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) & ((~(((/* implicit */int) arr_26 [i_14 - 1] [(short)19] [19]))))));
                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_0))))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 2; i_15 < 21; i_15 += 3) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_17 = 3; i_17 < 20; i_17 += 2) 
                        {
                            var_37 = ((/* implicit */long long int) var_2);
                            var_38 = var_7;
                            var_39 = ((/* implicit */int) ((((/* implicit */unsigned int) (-(arr_49 [(short)1] [(unsigned short)19] [i_15 - 2] [i_16])))) + (((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                        }
                        /* vectorizable */
                        for (short i_18 = 0; i_18 < 22; i_18 += 2) 
                        {
                            var_40 = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_2))))));
                            arr_58 [i_8] [i_13] [i_15] [i_16] [i_18] = ((/* implicit */unsigned char) ((arr_55 [i_13 + 1] [i_13 + 1] [i_15 + 1]) ? (((/* implicit */int) ((_Bool) (short)(-32767 - 1)))) : (((/* implicit */int) arr_35 [i_8] [16ULL] [i_15] [i_13] [(short)14]))));
                            var_41 = ((((/* implicit */_Bool) arr_35 [2LL] [i_13] [2LL] [i_13] [i_15])) ? (((/* implicit */int) arr_35 [(unsigned short)17] [i_13] [i_16] [i_13] [i_8])) : (((/* implicit */int) arr_35 [i_15 + 1] [i_13] [i_15 + 1] [i_13] [15U])));
                            var_42 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_8] [i_13 + 1] [i_8] [i_18])) ? (((/* implicit */int) arr_42 [i_13] [i_13 + 1] [i_16] [12ULL])) : (((/* implicit */int) arr_53 [i_13] [i_13 + 1] [(_Bool)1]))));
                            var_43 = ((/* implicit */long long int) var_5);
                        }
                        arr_59 [i_8] [i_8] [i_8] [i_15] [i_13] [i_16] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_0) : (var_8)))))) ? (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned char)75)))), (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (-(arr_17 [i_8] [i_8] [i_13] [i_16] [i_8])))) ? (((((/* implicit */_Bool) arr_25 [i_8] [i_13] [i_8])) ? (((/* implicit */unsigned long long int) arr_39 [(unsigned short)13] [(unsigned short)13])) : (arr_25 [i_8] [i_13 + 1] [i_15 - 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_13])) ? (4644672303320707412LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                        var_44 = ((/* implicit */unsigned int) min((var_44), (var_0)));
                    }
                } 
            } 
        }
        var_45 = ((/* implicit */_Bool) min((var_45), ((!(((/* implicit */_Bool) (short)-32754))))));
    }
    /* vectorizable */
    for (long long int i_19 = 0; i_19 < 23; i_19 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_20 = 0; i_20 < 23; i_20 += 4) 
        {
            for (short i_21 = 0; i_21 < 23; i_21 += 4) 
            {
                {
                    var_46 = ((/* implicit */signed char) arr_9 [i_19] [i_19]);
                    /* LoopNest 2 */
                    for (signed char i_22 = 0; i_22 < 23; i_22 += 4) 
                    {
                        for (int i_23 = 0; i_23 < 23; i_23 += 3) 
                        {
                            {
                                var_47 = ((var_0) | (arr_65 [2ULL] [i_21] [i_19]));
                                var_48 = ((/* implicit */unsigned int) arr_60 [i_19]);
                            }
                        } 
                    } 
                    var_49 = ((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned short)50172))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            for (unsigned int i_25 = 0; i_25 < 23; i_25 += 1) 
            {
                {
                    var_50 *= ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_16 [i_19] [i_19]))))));
                    /* LoopNest 2 */
                    for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
                    {
                        for (unsigned long long int i_27 = 3; i_27 < 22; i_27 += 3) 
                        {
                            {
                                var_51 ^= arr_79 [i_27] [i_24] [i_24];
                                var_52 *= ((/* implicit */_Bool) var_5);
                            }
                        } 
                    } 
                    var_53 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_63 [(signed char)2] [i_24]))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_29 = 2; i_29 < 21; i_29 += 2) 
            {
                var_54 = ((/* implicit */short) var_4);
                var_55 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
                var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_70 [i_19] [i_28 - 1] [i_29 + 2])) ? (((/* implicit */int) arr_74 [4LL] [i_28 - 1] [i_29 - 2])) : (arr_70 [(_Bool)1] [i_28 - 1] [i_29 + 1])));
                var_57 = ((/* implicit */short) ((((/* implicit */_Bool) arr_69 [i_19] [i_19] [i_29 + 2] [i_29] [i_29])) ? (((/* implicit */int) arr_61 [i_28 - 1])) : (((/* implicit */int) var_4))));
                /* LoopSeq 1 */
                for (unsigned int i_30 = 0; i_30 < 23; i_30 += 4) 
                {
                    var_58 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)31227))) : (-2926275308657392476LL)));
                    arr_93 [i_19] [i_28 - 1] [i_29] [i_30] = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
                }
            }
            for (int i_31 = 0; i_31 < 23; i_31 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_32 = 0; i_32 < 23; i_32 += 2) 
                {
                    for (short i_33 = 0; i_33 < 23; i_33 += 2) 
                    {
                        {
                            arr_101 [2U] [i_28 - 1] [i_28 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_98 [i_19] [13ULL] [i_19] [i_19])) ? (arr_98 [i_33] [i_31] [19ULL] [19ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            var_59 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_99 [i_19] [i_19] [i_31] [i_19])))) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)(-32767 - 1))))))));
                        }
                    } 
                } 
                var_60 = ((/* implicit */short) var_8);
                /* LoopSeq 1 */
                for (signed char i_34 = 2; i_34 < 22; i_34 += 3) 
                {
                    var_61 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (var_6))))));
                    var_62 = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)-31227)))) ? (((/* implicit */int) var_6)) : ((+(arr_70 [i_31] [i_28 - 1] [i_19])))));
                    arr_104 [i_34] [i_34] [i_31] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_1)) ? (10U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))))) : ((~(var_0)))));
                    var_63 = (-(((/* implicit */int) (!(arr_96 [i_19] [i_19])))));
                }
                var_64 = ((/* implicit */unsigned long long int) (-((-(var_0)))));
                var_65 = ((/* implicit */signed char) min((var_65), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_96 [i_19] [11ULL]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))));
            }
            for (int i_35 = 0; i_35 < 23; i_35 += 4) 
            {
                var_66 *= ((/* implicit */unsigned int) var_1);
                var_67 = ((/* implicit */signed char) ((_Bool) var_8));
                /* LoopSeq 3 */
                for (_Bool i_36 = 1; i_36 < 1; i_36 += 1) 
                {
                    arr_109 [i_19] [i_35] [i_28] [i_28] [i_35] [i_28] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [9ULL] [9ULL]))));
                    var_68 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_77 [i_36 - 1] [i_19] [i_28 - 1] [i_19]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(var_7))))));
                    var_69 = ((/* implicit */short) ((((/* implicit */int) var_3)) & (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                    var_70 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_81 [i_19] [i_36 - 1] [i_19] [i_36 - 1] [i_35]))));
                }
                for (signed char i_37 = 2; i_37 < 22; i_37 += 3) 
                {
                    var_71 ^= ((signed char) ((((/* implicit */int) arr_60 [i_19])) & (((/* implicit */int) var_7))));
                    var_72 = ((/* implicit */unsigned short) (+(arr_86 [i_19] [i_28 - 1] [i_37 + 1])));
                    arr_112 [i_37] [i_28] [i_35] [i_37 - 2] = ((/* implicit */_Bool) ((unsigned long long int) var_5));
                }
                for (unsigned int i_38 = 1; i_38 < 20; i_38 += 1) 
                {
                    var_73 = ((/* implicit */short) (!(var_2)));
                    var_74 = ((/* implicit */short) ((arr_8 [i_28 - 1] [i_38 + 2]) >> (((arr_8 [i_28 - 1] [i_38 - 1]) - (2673637478U)))));
                }
            }
            /* LoopNest 2 */
            for (unsigned long long int i_39 = 1; i_39 < 21; i_39 += 4) 
            {
                for (unsigned long long int i_40 = 3; i_40 < 22; i_40 += 1) 
                {
                    {
                        arr_122 [i_19] [i_19] [i_19] &= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_9))))));
                        var_75 = ((/* implicit */_Bool) arr_94 [i_19] [8LL] [i_39 + 1] [i_40 - 3]);
                        var_76 = ((/* implicit */_Bool) var_3);
                    }
                } 
            } 
            var_77 = ((/* implicit */_Bool) max((var_77), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_118 [i_28 - 1] [i_28 - 1] [i_19] [i_19])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))))));
            var_78 = (!(((/* implicit */_Bool) arr_68 [i_28 - 1] [i_28] [i_28] [i_28 - 1])));
        }
        for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
        {
            var_79 = ((/* implicit */unsigned short) ((signed char) arr_108 [i_19] [i_41]));
            arr_126 [i_19] [i_19] &= ((/* implicit */_Bool) var_9);
        }
        for (short i_42 = 0; i_42 < 23; i_42 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_43 = 0; i_43 < 23; i_43 += 2) 
            {
                var_80 = ((/* implicit */unsigned long long int) var_5);
                var_81 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_63 [i_19] [i_42])) >= ((-(((/* implicit */int) var_6))))));
                var_82 = (!(((/* implicit */_Bool) (signed char)31)));
                var_83 = var_4;
            }
            for (long long int i_44 = 0; i_44 < 23; i_44 += 2) 
            {
                var_84 = ((/* implicit */_Bool) var_5);
                var_85 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_125 [i_19] [i_19])))))));
                /* LoopNest 2 */
                for (int i_45 = 0; i_45 < 23; i_45 += 4) 
                {
                    for (unsigned long long int i_46 = 0; i_46 < 23; i_46 += 2) 
                    {
                        {
                            arr_140 [17] [i_42] [17] [i_42] [17] [17] [i_42] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_22 [i_19] [i_19]))))));
                            var_86 *= ((/* implicit */short) ((int) arr_75 [i_19] [i_19] [i_19]));
                        }
                    } 
                } 
            }
            arr_141 [i_19] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_138 [i_19] [i_19] [i_42] [i_19] [i_19]))));
            var_87 = ((/* implicit */int) min((var_87), (((/* implicit */int) var_2))));
            /* LoopNest 3 */
            for (unsigned long long int i_47 = 3; i_47 < 22; i_47 += 4) 
            {
                for (signed char i_48 = 0; i_48 < 23; i_48 += 2) 
                {
                    for (unsigned char i_49 = 0; i_49 < 23; i_49 += 4) 
                    {
                        {
                            var_88 = ((/* implicit */_Bool) (unsigned char)48);
                            var_89 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) arr_64 [i_19] [i_48])))) : ((-(((/* implicit */int) arr_71 [22U] [22U] [i_47 - 3] [13LL] [22U] [i_47 - 3]))))));
                            var_90 = ((/* implicit */_Bool) (+(arr_132 [i_19] [i_19] [5ULL])));
                            var_91 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_100 [i_42] [i_42] [i_47 - 3] [i_42] [i_47])) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) var_5))))));
                            var_92 = ((/* implicit */_Bool) arr_94 [i_47 - 3] [i_47 - 2] [i_47 - 2] [i_47 - 2]);
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned int i_50 = 0; i_50 < 23; i_50 += 1) 
        {
            for (short i_51 = 1; i_51 < 22; i_51 += 3) 
            {
                {
                    var_93 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                    var_94 = ((/* implicit */long long int) (+(((var_6) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))));
                }
            } 
        } 
    }
    var_95 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)32746))));
}
