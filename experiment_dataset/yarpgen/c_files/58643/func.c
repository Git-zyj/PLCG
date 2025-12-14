/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58643
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1408863205))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) min((arr_10 [16ULL] [i_1] [i_1] [i_3]), (((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_2] [22ULL])) ? (arr_10 [i_1] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_3] [i_2] [i_3])))))));
                            var_13 = ((/* implicit */short) ((((/* implicit */int) (short)-32166)) / (-1408863223)));
                            arr_14 [i_0] [i_2] [i_3] |= ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
                            arr_15 [i_0] [i_0] = ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) ((short) (short)-31179)))))) ? (((/* implicit */int) (short)-31179)) : (var_6));
                            arr_16 [i_0] = ((/* implicit */long long int) (short)31193);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        {
                            var_14 = (+(((((/* implicit */_Bool) arr_20 [i_0] [i_1] [(short)13] [i_5])) ? (((/* implicit */int) min((arr_1 [i_1]), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_5])))));
                            /* LoopSeq 4 */
                            for (int i_6 = 0; i_6 < 25; i_6 += 3) 
                            {
                                var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) 502763129)), (364387427U)));
                                arr_28 [i_0] [(unsigned short)11] [i_0] [i_0] [i_6] [i_6] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1]))))));
                                var_16 = ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-11199)));
                            }
                            for (int i_7 = 1; i_7 < 22; i_7 += 3) 
                            {
                                arr_32 [i_0] [i_1] [i_0] [i_5] [i_7] = ((/* implicit */_Bool) (short)26336);
                                var_17 = ((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_0]);
                            }
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-64))));
                                var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) - (5ULL)));
                                arr_35 [i_0] [(short)17] [i_1] [i_4] [i_5] [i_0] [10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)26336))))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_5 [i_0])), (var_9)))) : (((((/* implicit */int) arr_29 [i_5] [i_0] [i_4] [16] [i_5])) - (arr_26 [i_5] [(short)2] [i_0])))))) ? (min((((/* implicit */int) ((unsigned short) arr_24 [i_0] [i_1] [(signed char)23] [i_5] [i_8]))), (((((/* implicit */_Bool) arr_12 [i_8] [(short)6] [i_5] [2] [i_1] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_4] [i_5])) : (((/* implicit */int) (short)-31179)))))) : (((((/* implicit */int) ((unsigned char) (_Bool)0))) | ((+(2116396182)))))));
                            }
                            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                            {
                                var_20 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)220))) * (31525197391593472LL)));
                                var_21 = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_3))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_22 [(short)24]))));
                /* LoopSeq 2 */
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    arr_46 [i_12 - 1] |= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)63))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_13 = 3; i_13 < 9; i_13 += 2) 
                    {
                        arr_51 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (short)11199))) ? (arr_31 [(short)15] [(short)15] [i_12] [i_13 + 3] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31179)))));
                        arr_52 [i_10] [i_11] [i_12] [i_13] = ((/* implicit */_Bool) var_7);
                    }
                    /* vectorizable */
                    for (unsigned char i_14 = 2; i_14 < 9; i_14 += 1) 
                    {
                        arr_56 [i_10] [i_11] [i_12] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [20ULL] [20ULL] [i_12 - 1] [20ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))) : (var_5)))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_10] [i_14] [i_12 - 1] [i_14 + 3] [(short)11] [i_10])) <= (((/* implicit */int) arr_53 [i_10] [i_11] [(_Bool)1] [i_12] [i_14 + 1]))))) : ((((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))))));
                        arr_57 [i_12] [i_14 - 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)63))));
                        arr_58 [6] [i_11] [i_11] [10U] [i_14] = var_0;
                        arr_59 [i_11] [i_14] = ((/* implicit */int) arr_1 [i_11]);
                    }
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_8))));
                    arr_60 [i_10] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)68)) && (((/* implicit */_Bool) (unsigned char)13))));
                    /* LoopSeq 3 */
                    for (short i_15 = 2; i_15 < 11; i_15 += 4) /* same iter space */
                    {
                        arr_64 [i_10] [i_11] [(_Bool)1] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) (-(arr_38 [i_12])))))));
                        arr_65 [i_10] [i_10] [i_11] [i_12] [i_11] [(_Bool)0] = ((/* implicit */unsigned char) ((700386079) - (2147483647)));
                        var_25 = ((/* implicit */unsigned int) ((_Bool) min((((((/* implicit */_Bool) (short)11959)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5128538201979081101LL))), (((/* implicit */long long int) arr_7 [i_10] [i_11] [i_15])))));
                    }
                    for (short i_16 = 2; i_16 < 11; i_16 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 3 */
                        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 3) 
                        {
                            var_27 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32767))));
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) min((max((((/* implicit */int) (short)-5796)), ((-2147483647 - 1)))), ((+(((/* implicit */int) (short)-32764)))))))));
                        }
                        for (short i_18 = 0; i_18 < 12; i_18 += 4) 
                        {
                            arr_74 [(unsigned short)8] [i_18] [(unsigned char)3] [i_16 - 1] [i_18] [i_16] = ((/* implicit */int) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_30 [i_10] [i_16] [i_12] [i_16 + 1] [i_11] [i_10])) : (((/* implicit */int) arr_7 [22] [22] [22]))))))) - (var_10)));
                            var_29 *= arr_50 [i_10] [i_11] [i_16] [i_18];
                        }
                        for (unsigned char i_19 = 1; i_19 < 11; i_19 += 3) 
                        {
                            var_30 = ((/* implicit */short) (~(((arr_2 [i_19 - 1] [i_19 + 1]) / (arr_2 [(short)13] [i_16 - 1])))));
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_47 [i_12] [i_12] [i_12] [i_12 - 1])) == (((/* implicit */int) arr_47 [i_10] [(short)10] [i_10] [i_12 - 1])))) || (((/* implicit */_Bool) arr_72 [i_10] [i_11] [i_10] [i_10] [i_10] [i_16 - 1] [i_19 + 1])))))));
                            arr_78 [i_19] [i_11] [i_12] [i_11] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_12] [2U] [18ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned char)71)))), (arr_48 [i_19] [(unsigned short)1] [i_11]))))) : (arr_20 [(short)13] [i_11] [i_11] [13LL])));
                            arr_79 [i_10] [i_19] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) min((((/* implicit */long long int) 1408863205)), (var_2)))))));
                        }
                        arr_80 [i_10] [i_10] [(unsigned short)0] [i_16] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_10] [i_11])) ? (((/* implicit */int) (unsigned char)183)) : (arr_73 [i_11] [i_11] [i_12] [i_16])))))) ? (var_0) : ((-(((/* implicit */int) (signed char)-32))))));
                    }
                    /* vectorizable */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_21 = 2; i_21 < 9; i_21 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)186)) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (var_4))))));
                            arr_88 [i_21] [i_20] [i_20] [i_11] = ((/* implicit */int) ((_Bool) arr_25 [i_21] [i_21] [(_Bool)1] [i_21] [i_20] [i_21] [i_21 + 2]));
                        }
                        arr_89 [i_20] [0] [i_11] [i_20] [i_10] [i_20] = ((/* implicit */unsigned char) ((-1963447809516228542LL) & (((/* implicit */long long int) 1718767014))));
                        /* LoopSeq 1 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            arr_94 [i_10] [i_11] [i_12 - 1] [i_20] [(unsigned char)3] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)171)) && (((/* implicit */_Bool) 1678904386897529202ULL))));
                            arr_95 [i_10] [i_10] [i_20] = ((/* implicit */_Bool) ((short) (unsigned short)47998));
                        }
                        arr_96 [i_10] [i_20] [i_11] [i_11] [1] = arr_62 [i_12 - 1];
                    }
                }
                /* vectorizable */
                for (int i_23 = 0; i_23 < 12; i_23 += 3) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_24 = 1; i_24 < 11; i_24 += 2) 
                    {
                        arr_104 [(_Bool)1] [(signed char)5] [i_24] [i_24] [i_11] [i_10] = ((/* implicit */long long int) var_7);
                        var_33 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)182))))));
                        var_34 = ((/* implicit */long long int) arr_101 [i_10] [4U] [i_10] [0] [i_10] [0]);
                    }
                    for (unsigned int i_25 = 0; i_25 < 12; i_25 += 3) /* same iter space */
                    {
                        var_35 *= ((/* implicit */unsigned char) arr_33 [(short)7] [i_23] [(_Bool)1]);
                        var_36 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)20)) : (((/* implicit */int) (short)0))));
                    }
                    for (unsigned int i_26 = 0; i_26 < 12; i_26 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)161))));
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((1807127057) - (((/* implicit */int) (unsigned char)40))))) > (arr_87 [i_10] [i_11] [i_11] [i_23] [i_26] [i_26])));
                    }
                    var_39 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_100 [i_23] [i_11] [i_11] [i_23]))) != (arr_49 [i_10] [i_11] [i_23] [i_23])));
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_42 [i_10] [i_10])) - (((/* implicit */int) arr_53 [i_10] [i_11] [5U] [i_10] [i_23]))));
                }
                arr_111 [8LL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1566491769)) ? (-1) : (-1807127057)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_10]))))) : (((long long int) (!(((/* implicit */_Bool) arr_1 [i_10])))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_27 = 1; i_27 < 11; i_27 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_28 = 0; i_28 < 12; i_28 += 4) 
                    {
                        arr_117 [i_27] [i_11] [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4)) ? (-1811801208665675521LL) : (((/* implicit */long long int) 1620915834))));
                        arr_118 [i_28] [i_27] [i_27] [i_10] = ((/* implicit */signed char) arr_20 [i_10] [i_10] [i_27] [i_28]);
                    }
                    for (int i_29 = 0; i_29 < 12; i_29 += 4) 
                    {
                        arr_121 [i_27] [i_11] [i_27 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [18U] [i_27] [i_11] [i_10]))) < (var_5)));
                        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) arr_84 [i_29] [i_29] [i_27] [i_10] [i_29] [i_11]))));
                    }
                    /* vectorizable */
                    for (long long int i_30 = 1; i_30 < 11; i_30 += 3) 
                    {
                        arr_126 [i_10] [i_11] [i_27] [i_27] [i_30] = ((/* implicit */unsigned char) 4281957555U);
                        var_42 += ((/* implicit */unsigned long long int) arr_50 [i_10] [i_10] [i_27] [i_10]);
                        arr_127 [i_10] [i_10] [i_27] = ((/* implicit */signed char) (short)-23106);
                    }
                    /* LoopSeq 2 */
                    for (short i_31 = 2; i_31 < 8; i_31 += 3) 
                    {
                        arr_130 [i_11] &= (unsigned char)40;
                        var_43 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3605)) ? (-4331087393562133782LL) : (((/* implicit */long long int) 1914751540U))))) ? (((-4331087393562133783LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) (+(((((/* implicit */int) arr_53 [i_27] [i_11] [i_27 - 1] [i_27] [i_10])) - (((/* implicit */int) arr_48 [i_10] [(unsigned short)11] [i_31])))))))));
                    }
                    for (signed char i_32 = 0; i_32 < 12; i_32 += 3) 
                    {
                        var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((arr_68 [i_10] [i_11] [i_27] [i_10] [i_32]) && (((((/* implicit */_Bool) -673699698)) || (((/* implicit */_Bool) (signed char)3)))))))));
                        var_45 = ((/* implicit */_Bool) ((signed char) 1522487016));
                    }
                    arr_133 [i_27] [i_11] [i_27] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) max(((short)32767), ((short)33)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_40 [i_27 + 1] [i_10]))))) : (min((-4331087393562133777LL), (((/* implicit */long long int) 911995852)))))));
                }
                for (unsigned long long int i_33 = 1; i_33 < 11; i_33 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_34 = 0; i_34 < 12; i_34 += 1) 
                    {
                        for (unsigned short i_35 = 4; i_35 < 10; i_35 += 2) 
                        {
                            {
                                var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((unsigned short) arr_115 [i_11] [i_11] [i_11])))));
                                var_47 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-30303))));
                                arr_143 [i_10] [i_10] [i_10] [i_33] [(_Bool)1] [i_33] = ((/* implicit */unsigned short) arr_73 [i_35 - 1] [i_34] [2LL] [i_11]);
                                var_48 = ((((/* implicit */_Bool) (short)30303)) ? (((/* implicit */int) (unsigned short)26477)) : (((/* implicit */int) (unsigned short)18228)));
                                var_49 = ((/* implicit */int) min((var_49), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_101 [i_33 + 1] [i_33] [i_33 - 1] [i_33 + 1] [i_35 - 4] [1LL])) : ((~(((/* implicit */int) arr_101 [i_33 + 1] [i_33] [i_33 - 1] [i_33 + 1] [i_35 - 4] [i_35]))))))));
                            }
                        } 
                    } 
                    var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_5)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_33] [i_11] [i_11] [i_10]))))))))));
                    /* LoopSeq 1 */
                    for (int i_36 = 1; i_36 < 10; i_36 += 3) 
                    {
                        var_51 -= ((/* implicit */short) (+((+((~(((/* implicit */int) (unsigned short)3))))))));
                        arr_146 [i_33] = ((/* implicit */unsigned int) (!((_Bool)1)));
                    }
                }
            }
        } 
    } 
    var_52 = ((/* implicit */unsigned char) -5975096857354003108LL);
    var_53 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_37 = 0; i_37 < 0; i_37 += 1) /* same iter space */
    {
        arr_150 [i_37] = ((/* implicit */short) arr_37 [i_37] [i_37] [i_37 + 1] [i_37 + 1] [i_37 + 1] [i_37 + 1]);
        arr_151 [i_37] [i_37] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_147 [i_37] [i_37])) - (arr_36 [i_37] [i_37 + 1] [i_37] [i_37] [i_37] [i_37]))))));
    }
    for (_Bool i_38 = 0; i_38 < 0; i_38 += 1) /* same iter space */
    {
        var_54 = arr_153 [i_38];
        arr_155 [i_38] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((_Bool)1), ((_Bool)0)))) - ((-(((/* implicit */int) arr_21 [i_38 + 1] [(short)24] [i_38 + 1]))))));
        var_55 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 250222084U)))) ? (((/* implicit */int) (short)32767)) : (((int) (unsigned char)5))));
        var_56 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((673699697) != (((/* implicit */int) (_Bool)0)))))) | (((((/* implicit */_Bool) arr_12 [1ULL] [i_38] [i_38] [i_38] [i_38] [9U])) ? (arr_24 [20U] [20U] [i_38] [i_38] [20U]) : (((/* implicit */unsigned int) var_6))))));
        arr_156 [i_38] [i_38] = ((/* implicit */unsigned short) (short)16984);
    }
    for (short i_39 = 3; i_39 < 19; i_39 += 3) 
    {
        arr_161 [i_39] [i_39] = ((/* implicit */int) (+((~(arr_20 [i_39] [i_39] [(_Bool)1] [i_39])))));
        arr_162 [i_39] [i_39] = ((/* implicit */int) (unsigned char)16);
        var_57 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)0))));
    }
}
