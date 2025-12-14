/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83649
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 7; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [(short)8] [i_3] [i_2 + 1] [9] [i_4 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned char)253))))))) ? (((long long int) (-(((/* implicit */int) arr_9 [i_3]))))) : (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [0ULL] [i_2 - 1] [i_1 + 1] [i_0]))) : (arr_3 [i_0] [i_1] [3LL]))), (((/* implicit */long long int) arr_4 [i_3 + 1] [i_3 + 3] [i_3 - 2]))))));
                                var_18 = ((/* implicit */unsigned long long int) arr_0 [i_4]);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) min((var_19), (arr_10 [i_0] [i_2 + 1] [i_1 + 1] [i_2])));
                }
            } 
        } 
    }
    var_20 -= ((/* implicit */unsigned int) (-(8624085595356217940ULL)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned int) arr_16 [i_5] [i_5]);
        arr_18 [i_5] = ((/* implicit */short) (-(((int) arr_16 [i_5] [5U]))));
    }
    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] [i_6] = min((((/* implicit */int) arr_21 [i_6])), (((((/* implicit */int) arr_21 [i_6])) + (((/* implicit */int) arr_21 [i_6])))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 1; i_7 < 24; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                {
                    var_21 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_28 [i_6] [i_7] [i_7] [(_Bool)1])))) ? (((/* implicit */int) arr_26 [i_6] [5LL] [i_7] [i_8])) : (((/* implicit */int) (_Bool)1))));
                    arr_29 [i_6] = ((/* implicit */unsigned char) (+(var_0)));
                    arr_30 [i_6] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_24 [i_6] [i_7 - 1])))))), (arr_24 [i_6] [(_Bool)1])));
                    var_22 = min((((/* implicit */unsigned int) (~(arr_22 [i_6])))), ((+(1625826566U))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 2; i_9 < 24; i_9 += 3) 
        {
            for (unsigned long long int i_10 = 3; i_10 < 24; i_10 += 3) 
            {
                {
                    arr_36 [i_6] [i_6] [i_6] [i_9] = ((/* implicit */unsigned short) arr_31 [19ULL] [i_9 - 2] [i_9 - 1]);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
                    {
                        arr_40 [i_9] = ((/* implicit */short) ((unsigned int) ((int) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_25 [i_9 - 2] [(unsigned char)21])))));
                        arr_41 [i_6] [i_9 + 1] [i_10 - 3] [i_9] [i_11] = ((/* implicit */int) arr_32 [i_9] [i_9] [i_9]);
                        arr_42 [i_6] [i_9] [i_6] [i_6] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) (short)(-32767 - 1))), ((~(((/* implicit */int) arr_28 [i_6] [i_6] [23ULL] [i_11]))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
                    {
                        arr_45 [i_9] = ((/* implicit */unsigned int) arr_22 [i_9 - 2]);
                        arr_46 [i_9] [i_12] = ((unsigned long long int) arr_38 [i_10 - 2] [i_10 - 2] [i_10 + 1] [23ULL]);
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 1) /* same iter space */
                    {
                        arr_50 [i_13] [i_9] [i_10 - 2] [(unsigned char)2] [i_9] = ((/* implicit */unsigned short) 4008175036U);
                        var_23 *= ((unsigned long long int) max((arr_33 [i_9 + 1] [18LL]), (arr_33 [i_9 - 2] [(short)8])));
                    }
                    /* vectorizable */
                    for (long long int i_14 = 4; i_14 < 22; i_14 += 4) 
                    {
                        arr_53 [i_6] [i_9 + 1] [i_10] [i_10 + 1] [i_14] [i_9] = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_47 [i_9]))))));
                        var_24 = ((/* implicit */long long int) arr_52 [i_10 - 2] [15] [i_10 + 1] [i_10 - 3]);
                        /* LoopSeq 1 */
                        for (long long int i_15 = 4; i_15 < 24; i_15 += 2) 
                        {
                            arr_57 [i_6] [i_9] [21LL] [i_14 - 1] [i_6] [7U] = ((/* implicit */unsigned long long int) arr_44 [i_10] [i_14]);
                            arr_58 [i_15 - 3] [i_9] [i_10] [i_9 - 2] [i_9] [i_6] = ((/* implicit */long long int) ((int) arr_27 [i_15 - 3] [(unsigned char)18] [i_9 - 2]));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 3) 
                    {
                        for (int i_17 = 0; i_17 < 25; i_17 += 3) 
                        {
                            {
                                arr_67 [i_17] [i_16] [i_9] [i_9 - 2] [i_6] = ((/* implicit */unsigned char) arr_61 [i_6] [i_9] [i_10 + 1] [i_16]);
                                arr_68 [i_6] [i_9] [i_6] [i_10] [i_16] [i_17] = ((/* implicit */unsigned int) 10277811983328289483ULL);
                                var_25 *= ((/* implicit */unsigned char) min(((-((~(2648573976U))))), (((/* implicit */unsigned int) ((short) (short)-23876)))));
                                arr_69 [i_9] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_21 [i_9 + 1]))))));
                            }
                        } 
                    } 
                    arr_70 [i_6] [i_9] [i_10] [i_9] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_32 [i_6] [i_9] [i_10 + 1])) ? (arr_32 [i_6] [i_9] [i_10 - 3]) : (arr_32 [i_6] [i_9] [i_10 - 2])))));
                    /* LoopNest 2 */
                    for (int i_18 = 3; i_18 < 22; i_18 += 1) 
                    {
                        for (long long int i_19 = 0; i_19 < 25; i_19 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) min((arr_62 [i_6] [i_9 + 1] [i_9 - 1]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_28 [(unsigned char)1] [i_9] [i_9 - 1] [i_9])))))));
                                arr_76 [i_9] [i_9 + 1] [i_9 + 1] [i_18 - 2] [i_19] = ((/* implicit */unsigned short) min((max((min((arr_52 [i_10 - 1] [i_10 - 1] [i_10 - 2] [i_10]), (((/* implicit */unsigned long long int) arr_48 [i_6])))), (((/* implicit */unsigned long long int) ((long long int) 1646393318U))))), (((/* implicit */unsigned long long int) arr_43 [i_9 + 1] [i_10 + 1] [i_9 + 1] [i_9]))));
                                arr_77 [i_6] [i_9] [i_9] [i_9] [9] = ((/* implicit */_Bool) arr_27 [i_19] [i_10] [i_10]);
                                arr_78 [i_18 + 2] [i_9] [i_18 + 2] [i_18] [7U] [i_9] [i_6] = arr_59 [i_6] [i_6] [i_6] [i_18] [i_6];
                                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_44 [6U] [6U]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_79 [i_6] [i_6] = (~((~(((long long int) arr_33 [i_6] [2U])))));
        /* LoopSeq 1 */
        for (long long int i_20 = 1; i_20 < 22; i_20 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (unsigned long long int i_22 = 4; i_22 < 23; i_22 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_23 = 0; i_23 < 25; i_23 += 3) 
                        {
                            arr_93 [i_21] = 1646393319U;
                            arr_94 [i_6] [i_6] [i_6] [i_6] [(signed char)12] [i_21] [i_6] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) 2158246407U)))))))), ((~(((/* implicit */int) arr_55 [(unsigned short)16] [(unsigned short)16] [(unsigned short)16] [i_23]))))));
                            arr_95 [i_22] [i_21] [i_21] [i_6] = ((/* implicit */unsigned long long int) (-((-(arr_34 [i_21])))));
                        }
                        arr_96 [i_21] = ((/* implicit */int) (unsigned char)39);
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((short) arr_48 [i_6])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 25; i_24 += 4) 
            {
                for (signed char i_25 = 1; i_25 < 21; i_25 += 1) 
                {
                    {
                        var_29 *= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_59 [i_20 + 2] [i_20 + 1] [i_20 + 1] [i_25 + 4] [i_20 + 1])), (min((((/* implicit */unsigned long long int) (unsigned char)132)), (arr_19 [i_6]))))), (((/* implicit */unsigned long long int) arr_54 [i_6] [i_20 + 1] [i_24] [i_25 + 4] [i_6] [i_6]))));
                        arr_103 [i_6] [i_6] [i_25] [i_25] = ((/* implicit */unsigned short) arr_31 [i_6] [i_20] [i_24]);
                        arr_104 [i_6] [i_20] [(unsigned short)1] [i_24] [i_25] = ((/* implicit */long long int) max((var_17), (((/* implicit */int) (short)(-32767 - 1)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_26 = 3; i_26 < 23; i_26 += 4) 
            {
                for (unsigned char i_27 = 0; i_27 < 25; i_27 += 1) 
                {
                    {
                        arr_110 [i_27] [i_27] = ((/* implicit */long long int) ((signed char) var_11));
                        arr_111 [i_27] [i_20 - 1] [(unsigned char)11] [i_27] = ((/* implicit */unsigned short) min(((+(arr_102 [i_27] [(short)20] [i_26 - 2] [i_27]))), (((/* implicit */unsigned long long int) var_9))));
                    }
                } 
            } 
            arr_112 [i_6] [i_6] [i_20 + 2] = ((/* implicit */int) (-(((unsigned int) arr_87 [i_20 - 1] [18] [i_6]))));
            arr_113 [i_6] [i_6] = (~(arr_43 [(unsigned char)22] [i_6] [i_6] [(signed char)8]));
        }
    }
    for (unsigned int i_28 = 0; i_28 < 25; i_28 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_116 [i_28] [i_28])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_29 = 0; i_29 < 25; i_29 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_30 = 1; i_30 < 24; i_30 += 1) 
            {
                arr_123 [i_30] = ((/* implicit */unsigned char) ((arr_117 [24ULL] [i_30 + 1] [i_30 - 1]) & (arr_117 [i_30 - 1] [i_30 - 1] [i_30 + 1])));
                arr_124 [i_30] = arr_26 [i_28] [i_28] [i_28] [i_28];
                /* LoopSeq 2 */
                for (long long int i_31 = 1; i_31 < 24; i_31 += 1) 
                {
                    arr_127 [i_28] [i_28] [i_29] [i_30] [i_30] = ((/* implicit */long long int) (+(arr_63 [i_28] [i_30] [(signed char)6])));
                    arr_128 [i_31 + 1] [i_30] [i_30] [i_28] = ((/* implicit */short) arr_54 [i_31 + 1] [i_31] [i_31 - 1] [i_31] [i_31 + 1] [i_31 + 1]);
                    var_31 = ((/* implicit */signed char) (+(arr_65 [i_29] [i_30] [i_30] [i_30 - 1] [i_31 + 1])));
                    arr_129 [i_28] [i_30] = ((/* implicit */unsigned char) arr_34 [i_30]);
                    arr_130 [i_28] [i_30] [i_30 + 1] [(signed char)4] [i_30] [i_28] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_82 [i_29]))));
                }
                for (unsigned char i_32 = 0; i_32 < 25; i_32 += 1) 
                {
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) arr_131 [i_28] [i_28] [i_29] [(unsigned short)18])) ? (((/* implicit */int) var_5)) : (arr_49 [(signed char)9] [i_30 + 1] [i_30 + 1] [i_30 - 1]))))));
                    arr_134 [i_32] [i_29] [i_29] [i_28] |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_97 [i_30 + 1] [i_30 + 1] [i_30 - 1]))) + (arr_98 [i_30 + 1] [i_30] [i_30] [i_30 + 1])));
                }
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_33 = 0; i_33 < 25; i_33 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_34 = 0; i_34 < 25; i_34 += 1) 
                {
                    for (_Bool i_35 = 0; i_35 < 0; i_35 += 1) 
                    {
                        {
                            arr_145 [(short)7] [i_34] [10U] [i_29] [i_28] = ((/* implicit */signed char) arr_101 [i_33] [i_35 + 1] [i_35 + 1] [i_35 + 1] [i_35]);
                            var_33 = ((((/* implicit */_Bool) arr_101 [i_33] [i_33] [i_35 + 1] [i_35] [24ULL])) ? ((~(arr_73 [i_28] [i_28]))) : (((/* implicit */unsigned int) arr_49 [(unsigned short)12] [16] [i_33] [i_33])));
                        }
                    } 
                } 
                arr_146 [i_28] [i_28] [(signed char)19] [i_33] = ((/* implicit */long long int) (signed char)-93);
                /* LoopNest 2 */
                for (unsigned char i_36 = 1; i_36 < 23; i_36 += 3) 
                {
                    for (int i_37 = 4; i_37 < 24; i_37 += 1) 
                    {
                        {
                            arr_151 [i_28] [i_28] [i_28] [i_28] [24U] [i_28] [24ULL] = arr_27 [12ULL] [i_29] [i_33];
                            var_34 = ((/* implicit */unsigned long long int) arr_106 [i_28] [i_29] [i_33] [i_37]);
                        }
                    } 
                } 
                arr_152 [i_33] |= ((/* implicit */unsigned long long int) (((~(1340187041U))) >> (((-3349304629861465373LL) + (3349304629861465393LL)))));
            }
            for (unsigned long long int i_38 = 0; i_38 < 25; i_38 += 3) /* same iter space */
            {
                arr_155 [i_28] [i_38] [2U] [i_38] = ((/* implicit */unsigned short) ((int) arr_73 [i_29] [i_38]));
                var_35 = ((/* implicit */unsigned int) (signed char)-88);
                var_36 = ((/* implicit */signed char) arr_141 [i_29]);
            }
        }
        for (unsigned long long int i_39 = 4; i_39 < 21; i_39 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_40 = 3; i_40 < 23; i_40 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_41 = 0; i_41 < 25; i_41 += 1) 
                {
                    for (long long int i_42 = 0; i_42 < 25; i_42 += 2) 
                    {
                        {
                            var_37 -= ((/* implicit */unsigned char) (+(((unsigned int) (short)32767))));
                            var_38 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_51 [10ULL] [i_39] [(_Bool)1] [10ULL]))));
                            var_39 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(arr_32 [i_39 + 1] [i_42] [i_40 + 2])))), ((+((-9223372036854775807LL - 1LL))))));
                        }
                    } 
                } 
                arr_165 [i_40] [i_28] [i_39 - 2] [i_28] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) arr_90 [i_28] [i_28] [i_28] [i_28])));
            }
            arr_166 [i_39] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_56 [i_39 - 4] [i_39 + 4] [i_39 + 2] [i_39 - 4] [i_39 + 1])) ? (((/* implicit */long long int) 1646393320U)) : (arr_56 [i_39] [i_39 + 4] [i_39 + 2] [i_39 + 4] [i_39 + 1]))) - (((/* implicit */long long int) ((/* implicit */int) arr_108 [(_Bool)1] [i_39] [(signed char)12] [i_39] [i_39 - 3])))));
        }
        /* vectorizable */
        for (signed char i_43 = 0; i_43 < 25; i_43 += 2) 
        {
            var_40 ^= arr_25 [i_28] [i_43];
            arr_170 [i_28] = var_17;
        }
        /* LoopSeq 3 */
        for (unsigned char i_44 = 0; i_44 < 25; i_44 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_45 = 0; i_45 < 25; i_45 += 3) 
            {
                for (unsigned int i_46 = 0; i_46 < 25; i_46 += 3) 
                {
                    {
                        arr_179 [i_28] [i_44] [i_28] [i_45] [i_46] [i_46] = ((/* implicit */signed char) min((arr_52 [i_46] [i_45] [i_44] [i_28]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(3040239016U)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)132))))) : (-3274576421179395684LL))))));
                        arr_180 [i_28] [(signed char)16] [i_45] [i_45] [i_46] [(short)22] = ((/* implicit */short) arr_173 [i_45] [i_44] [i_28]);
                        arr_181 [i_45] [i_45] [(unsigned char)21] [i_45] = ((/* implicit */short) min((max((((((/* implicit */_Bool) arr_64 [i_45] [i_28] [i_44] [i_45] [i_46])) ? (((/* implicit */unsigned long long int) arr_148 [i_28])) : (arr_149 [i_28] [i_28] [i_45] [i_46] [i_44]))), (max((arr_33 [i_28] [i_45]), (0ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_121 [(unsigned char)11] [i_45] [i_45] [i_46])), ((short)-23469))))));
                    }
                } 
            } 
            arr_182 [i_44] [i_28] = ((/* implicit */unsigned char) arr_101 [i_28] [i_44] [i_44] [i_44] [i_44]);
        }
        for (unsigned char i_47 = 0; i_47 < 25; i_47 += 3) /* same iter space */
        {
            arr_186 [i_47] [i_47] [i_47] = ((/* implicit */unsigned int) arr_158 [i_28] [i_28] [i_28] [i_47]);
            arr_187 [i_28] [i_47] = ((/* implicit */unsigned char) arr_64 [i_47] [12LL] [i_28] [(_Bool)1] [i_47]);
            arr_188 [i_28] [i_47] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_28] [i_47] [i_28] [0U]))))) ? ((-(((/* implicit */int) arr_38 [i_28] [i_28] [i_47] [(_Bool)1])))) : (((((/* implicit */int) arr_38 [i_28] [i_28] [i_28] [i_47])) - (((/* implicit */int) arr_38 [i_47] [i_28] [i_28] [i_28]))))));
        }
        for (unsigned char i_48 = 0; i_48 < 25; i_48 += 3) /* same iter space */
        {
            arr_191 [i_28] = ((/* implicit */short) var_7);
            arr_192 [i_28] = ((/* implicit */unsigned long long int) (short)-6266);
        }
    }
}
