/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96173
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_10 = var_1;
                            arr_10 [i_3] [i_3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) max((arr_6 [i_1]), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_0] [i_1] [i_0])))))) ? (min((2780485402U), (((/* implicit */unsigned int) arr_7 [i_3] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-3570)), (arr_0 [i_0])))))));
                            var_11 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [(_Bool)1]);
                            arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (+(arr_6 [i_1])))) && (((/* implicit */_Bool) ((unsigned char) arr_6 [i_1]))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min(((+(((/* implicit */int) max((((/* implicit */unsigned short) (short)3570)), ((unsigned short)47686)))))), (((((/* implicit */_Bool) max((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */unsigned char) var_0))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-3571)) && (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])))))))));
                arr_13 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned short) arr_4 [i_0] [(unsigned char)5] [i_0] [i_0])))))));
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (long long int i_5 = 3; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_21 [(short)11] [i_6] [i_1] [(unsigned short)1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                                arr_22 [i_6] [i_6] [i_6] [i_6] [i_6] [i_1] [i_6] = ((/* implicit */unsigned char) arr_17 [(signed char)2] [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 - 1]);
                                arr_23 [i_6] [i_6] [i_1] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) arr_17 [i_0] [i_1] [i_4] [i_5] [i_6]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (short i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */short) arr_25 [i_7]);
        arr_26 [i_7] = ((/* implicit */short) max((max((((((/* implicit */_Bool) 2876757746833308499ULL)) ? (((/* implicit */int) (short)3550)) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_24 [i_7] [i_7])))), ((~(((/* implicit */int) ((unsigned short) (short)-3556)))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [17ULL] [17ULL])) ? (((/* implicit */long long int) ((((/* implicit */int) ((arr_25 [i_7]) >= (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7] [i_7])))))) % (((/* implicit */int) ((arr_25 [i_7]) <= (((/* implicit */long long int) ((/* implicit */int) (short)-3577))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (short)3548))) : (arr_25 [i_7])))) ? (((/* implicit */long long int) var_3)) : (arr_25 [i_7])))));
        arr_27 [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((arr_25 [i_7]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135)))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_7] [i_7])) && (((/* implicit */_Bool) var_5))))))) & (((/* implicit */int) arr_24 [i_7] [i_7]))));
        var_14 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_24 [i_7] [i_7])))) >> (((/* implicit */int) ((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_24 [i_7] [i_7])))) >= (((/* implicit */int) max((arr_24 [i_7] [(unsigned char)2]), (arr_24 [i_7] [i_7])))))))));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)4374))) >= (arr_25 [i_8])));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) (unsigned short)47686)) : (((/* implicit */int) (short)3542))));
    }
    for (signed char i_9 = 0; i_9 < 12; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            for (signed char i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                {
                    arr_38 [(unsigned char)8] [(unsigned char)8] [i_10] = (short)26784;
                    var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (-6519727434968056792LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned char)8] [i_11] [i_11])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)199))) : (((576460752303423488ULL) >> (((/* implicit */int) (_Bool)1))))))) ? (2876757746833308499ULL) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)42793)))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)7156)))))));
                    arr_39 [4LL] [4LL] [i_11] [i_11] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_11])) ? (((((/* implicit */_Bool) arr_18 [i_9] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52309))) : (arr_2 [i_9] [i_10] [(short)11]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))) ? (var_2) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_11] [i_10] [i_10] [i_9])) && (((/* implicit */_Bool) min((-831919871), (((/* implicit */int) (short)-3542))))))))));
                }
            } 
        } 
        var_18 *= ((/* implicit */signed char) 10103249144009780873ULL);
        var_19 = ((/* implicit */long long int) arr_15 [i_9] [i_9]);
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_13 = 1; i_13 < 17; i_13 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_13 + 1] [i_13])) ? (arr_44 [i_13 - 1] [i_13 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_13 - 1] [i_13])))))) ? (arr_40 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_44 [i_13] [i_13])) ? (2876757746833308499ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3952))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-16080)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-3542))))))))))))));
            var_21 = ((/* implicit */long long int) min((var_21), (67108863LL)));
        }
        arr_47 [i_12] = arr_43 [i_12];
        var_22 = ((/* implicit */int) (unsigned short)45473);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            var_23 -= ((((/* implicit */_Bool) ((long long int) (signed char)-99))) ? (((((/* implicit */_Bool) arr_42 [4ULL] [4ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11928))) : (var_3))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0))))));
            arr_50 [i_14] = ((/* implicit */unsigned char) (signed char)113);
            /* LoopSeq 4 */
            for (unsigned char i_15 = 0; i_15 < 18; i_15 += 4) /* same iter space */
            {
                arr_54 [i_14] [i_14] [i_15] = ((/* implicit */long long int) ((10ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                arr_55 [i_12] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_12] [i_15])) ? (((/* implicit */int) arr_42 [i_15] [i_12])) : (((/* implicit */int) arr_42 [i_12] [i_14]))));
            }
            for (unsigned char i_16 = 0; i_16 < 18; i_16 += 4) /* same iter space */
            {
                arr_59 [i_14] [i_14] [i_16] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)45263))));
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 18; i_17 += 2) 
                {
                    for (unsigned int i_18 = 0; i_18 < 18; i_18 += 4) 
                    {
                        {
                            var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_12])) ? (((/* implicit */unsigned int) arr_28 [i_14])) : (arr_41 [i_17])));
                            arr_64 [i_17] [i_14] [(_Bool)1] [i_14] [i_14] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))) >= (704040333U))))) < (((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_19 = 0; i_19 < 18; i_19 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned char) ((arr_40 [i_19]) ^ (arr_40 [i_19])));
                /* LoopNest 2 */
                for (signed char i_20 = 2; i_20 < 17; i_20 += 4) 
                {
                    for (unsigned char i_21 = 0; i_21 < 18; i_21 += 3) 
                    {
                        {
                            arr_72 [i_12] [i_14] [i_19] [i_21] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_14] [i_14] [i_14] [i_20 + 1])) ? (((/* implicit */int) arr_57 [i_21] [i_14] [i_14] [i_20 - 2])) : (((/* implicit */int) arr_57 [i_20] [i_14] [i_14] [i_20 - 2]))));
                            arr_73 [i_14] = ((/* implicit */unsigned char) (short)30562);
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned short) var_1);
                arr_74 [i_14] = ((/* implicit */unsigned int) ((_Bool) var_7));
            }
            for (unsigned char i_22 = 0; i_22 < 18; i_22 += 4) /* same iter space */
            {
                arr_77 [i_22] &= ((/* implicit */short) ((((/* implicit */int) arr_66 [i_12])) ^ (((/* implicit */int) (signed char)0))));
                arr_78 [i_14] [(unsigned short)13] [(signed char)1] [i_22] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_12] [i_14] [i_22]))) - (6ULL))) >= (((/* implicit */unsigned long long int) (+(var_3))))));
                /* LoopNest 2 */
                for (signed char i_23 = 1; i_23 < 15; i_23 += 4) 
                {
                    for (signed char i_24 = 0; i_24 < 18; i_24 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_81 [i_12] [i_23] [0ULL] [i_23 + 3] [i_24] [i_22]))));
                            var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                            arr_84 [i_14] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_62 [i_23] [i_23 + 2] [i_23 + 1])) : (((/* implicit */int) var_8))));
                        }
                    } 
                } 
            }
            arr_85 [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_69 [i_14] [i_12] [i_12])) ? (arr_41 [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
            /* LoopSeq 1 */
            for (unsigned short i_25 = 0; i_25 < 18; i_25 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_26 = 0; i_26 < 18; i_26 += 1) 
                {
                    for (int i_27 = 0; i_27 < 18; i_27 += 4) 
                    {
                        {
                            arr_93 [i_26] [i_26] [14LL] [i_14] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) arr_57 [i_12] [i_14] [i_12] [(unsigned short)5])) : (((/* implicit */int) (unsigned short)20272))))) : (18446744073709551600ULL)));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) arr_92 [14U] [i_14] [i_25] [0ULL] [i_27]))));
                            arr_94 [i_12] [i_14] = (i_14 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) arr_86 [i_12] [i_14])) >> (((((/* implicit */int) arr_86 [i_12] [i_14])) - (32306)))))) : (((/* implicit */signed char) ((((/* implicit */int) arr_86 [i_12] [i_14])) >> (((((((/* implicit */int) arr_86 [i_12] [i_14])) - (32306))) - (19997))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_28 = 0; i_28 < 18; i_28 += 1) 
                {
                    var_30 |= ((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_25] [i_28])) ^ (((/* implicit */int) (unsigned short)10491))));
                    arr_97 [i_14] [i_14] [i_14] [i_14] [(unsigned char)14] = ((/* implicit */unsigned char) (signed char)123);
                    /* LoopSeq 2 */
                    for (unsigned int i_29 = 0; i_29 < 18; i_29 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) 2147483647))));
                        arr_100 [i_14] [i_25] [i_25] [i_29] = ((/* implicit */unsigned long long int) var_3);
                    }
                    for (unsigned short i_30 = 0; i_30 < 18; i_30 += 2) 
                    {
                        var_32 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_63 [i_12] [i_14] [i_30] [i_12] [i_28])) - (var_7)))) ? (((((/* implicit */_Bool) arr_69 [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_46 [i_12] [i_12])) : (((/* implicit */int) (signed char)-125)))) : (((/* implicit */int) arr_91 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))));
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_89 [i_12] [i_25] [i_28] [i_30])) ? (2601178962U) : (4163818943U)))))))));
                    }
                }
                for (unsigned int i_31 = 1; i_31 < 17; i_31 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_90 [i_12] [i_14] [i_25] [i_31] [i_14]))));
                    arr_107 [i_12] [i_14] [i_12] [i_14] = ((/* implicit */unsigned long long int) var_0);
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_92 [i_31 + 1] [i_31] [i_31 - 1] [i_31 - 1] [i_31 - 1])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_95 [i_12] [i_14] [i_25]))))) : (((/* implicit */int) (unsigned char)75))));
                    arr_108 [i_12] [i_12] [i_12] [i_14] [i_12] = ((/* implicit */int) ((arr_69 [i_31 - 1] [i_12] [i_14]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_31 + 1] [i_31 + 1])))));
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_101 [i_12] [i_12] [i_14] [i_12] [i_12] [i_31])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_101 [(short)14] [i_14] [i_14] [i_14] [i_14] [i_14]))));
                }
                for (unsigned int i_32 = 1; i_32 < 17; i_32 += 3) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned long long int) (unsigned short)17777);
                    var_38 = ((/* implicit */short) var_2);
                }
                var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)3547)) ? (((/* implicit */int) (unsigned short)47764)) : (((/* implicit */int) arr_68 [(unsigned char)8] [(unsigned char)8] [16ULL])))))));
                var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) arr_61 [0U]))));
            }
        }
        /* vectorizable */
        for (unsigned char i_33 = 0; i_33 < 18; i_33 += 3) 
        {
            var_41 = ((arr_45 [i_12] [i_12]) >> (((((((/* implicit */_Bool) 2411372667U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26786))) : (var_3))) - (26765U))));
            arr_117 [(_Bool)1] [i_33] = ((/* implicit */unsigned char) arr_113 [i_33] [i_12] [i_12]);
            var_42 -= ((/* implicit */unsigned int) (short)3542);
        }
        arr_118 [i_12] = ((/* implicit */_Bool) arr_45 [i_12] [i_12]);
    }
    /* LoopNest 2 */
    for (signed char i_34 = 0; i_34 < 10; i_34 += 4) 
    {
        for (int i_35 = 1; i_35 < 9; i_35 += 4) 
        {
            {
                arr_123 [i_35] = (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45658))) : (arr_41 [i_34]))));
                var_43 &= ((/* implicit */unsigned int) (short)-3550);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_36 = 0; i_36 < 24; i_36 += 2) 
    {
        for (short i_37 = 0; i_37 < 24; i_37 += 2) 
        {
            for (short i_38 = 0; i_38 < 24; i_38 += 3) 
            {
                {
                    var_44 = var_2;
                    /* LoopNest 2 */
                    for (unsigned short i_39 = 0; i_39 < 24; i_39 += 3) 
                    {
                        for (unsigned char i_40 = 1; i_40 < 23; i_40 += 4) 
                        {
                            {
                                arr_136 [i_40 - 1] [i_39] [i_38] [i_38] [i_37] [i_36] [i_36] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((2411372669U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-3549)))))) ? (((/* implicit */int) arr_131 [i_40 - 1] [i_37] [i_37] [(unsigned short)10] [i_40 - 1])) : (((/* implicit */int) arr_133 [i_36] [i_37] [i_38] [i_39])))) % ((-(arr_126 [i_40 + 1])))));
                                var_45 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (short)-3529)), (max((min((((/* implicit */unsigned int) arr_132 [i_36] [i_37] [i_36] [i_36] [i_37] [i_37])), (1883594631U))), (((/* implicit */unsigned int) var_6))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
