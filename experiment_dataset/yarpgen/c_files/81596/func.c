/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81596
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned short) var_8);
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) arr_2 [i_1] [i_1]);
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)45758)))))));
    }
    var_18 |= ((/* implicit */unsigned char) var_14);
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            arr_13 [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_8 [i_2]) / (((/* implicit */int) arr_9 [i_2]))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (511U)))), (var_3))) : (((/* implicit */unsigned long long int) arr_8 [i_2]))));
            var_19 = ((/* implicit */int) var_1);
            /* LoopNest 3 */
            for (unsigned short i_4 = 2; i_4 < 23; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 3; i_5 < 23; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        {
                            var_20 |= ((/* implicit */unsigned short) arr_14 [i_2] [i_3]);
                            var_21 |= ((/* implicit */short) var_13);
                            var_22 = (i_2 % 2 == 0) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned char)3)) < (((((arr_8 [i_2]) + (2147483647))) >> (((/* implicit */int) (signed char)12)))))) ? (arr_16 [i_2] [i_3] [i_5]) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_12))))), (((arr_16 [i_3] [i_3] [i_6]) & (((/* implicit */unsigned long long int) arr_7 [i_2] [i_3]))))))))) : (((/* implicit */int) ((((((/* implicit */int) (unsigned char)3)) < (((((((arr_8 [i_2]) - (2147483647))) + (2147483647))) >> (((/* implicit */int) (signed char)12)))))) ? (arr_16 [i_2] [i_3] [i_5]) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_12))))), (((arr_16 [i_3] [i_3] [i_6]) & (((/* implicit */unsigned long long int) arr_7 [i_2] [i_3])))))))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_11 [i_5 - 1] [i_5 - 1]))));
                            arr_22 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_17 [i_4 + 2] [i_5 - 2] [i_5 - 3] [i_5 + 2]))) && (((/* implicit */_Bool) ((((int) arr_9 [i_2])) << (((((((/* implicit */_Bool) (unsigned char)5)) ? (-9223372036854775776LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_2]))))) + (9223372036854775794LL))))))));
                        }
                    } 
                } 
            } 
            var_24 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_3]))) * (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (arr_16 [i_3] [i_2] [i_2]))))), (((/* implicit */unsigned long long int) var_6)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    for (long long int i_9 = 4; i_9 < 24; i_9 += 4) 
                    {
                        {
                            var_25 -= ((/* implicit */unsigned short) arr_19 [i_3] [i_8] [i_9 - 3] [i_9] [i_9 - 1]);
                            var_26 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                            arr_32 [i_2] [i_8] [(unsigned short)18] [i_9] = ((/* implicit */int) arr_30 [i_9] [i_9 - 4] [i_9 - 1] [i_9 - 3] [i_9] [(short)11] [i_9 - 2]);
                            var_27 = ((/* implicit */int) min((var_27), ((~(((/* implicit */int) (signed char)-61))))));
                        }
                    } 
                } 
                var_28 *= ((/* implicit */_Bool) 511U);
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_2] [i_7] [i_7] [i_7])) < (((/* implicit */int) arr_27 [i_7] [i_7] [i_2] [i_2]))));
            }
            /* vectorizable */
            for (signed char i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        arr_41 [i_2] [i_3] [i_10] [i_10] [i_12] &= ((/* implicit */_Bool) ((int) var_2));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_2] [i_10])) ? (arr_16 [i_2] [i_2] [i_2]) : (arr_16 [i_12] [(unsigned char)16] [(unsigned char)16]))))));
                    }
                    var_31 = (~(arr_12 [i_2] [i_3] [i_10]));
                    arr_42 [i_11] [i_11] [i_11] [i_11] [i_2] [i_2] |= ((/* implicit */signed char) ((arr_16 [i_3] [i_10] [i_3]) << (((arr_12 [i_11] [i_11] [i_11]) + (904870830)))));
                }
                for (unsigned int i_13 = 1; i_13 < 24; i_13 += 1) 
                {
                    var_32 = ((/* implicit */unsigned short) ((long long int) arr_20 [i_10] [(unsigned char)2] [i_10] [(unsigned char)2] [i_13 + 1]));
                    arr_46 [i_2] [i_3] [i_10] [i_2] = (~(((arr_43 [i_2] [i_13]) * (((/* implicit */int) var_8)))));
                }
                var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((var_0) - (2801254376U))))))));
                arr_47 [i_2] = ((/* implicit */long long int) ((unsigned short) var_3));
                var_34 += ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_12 [i_10] [i_2] [i_2])) ? (((/* implicit */int) arr_27 [i_2] [(signed char)19] [i_3] [(signed char)19])) : (((/* implicit */int) (unsigned short)59039)))) : (((/* implicit */int) arr_25 [i_10] [i_10] [i_10])));
                /* LoopSeq 3 */
                for (int i_14 = 0; i_14 < 25; i_14 += 2) /* same iter space */
                {
                    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) arr_40 [i_2] [i_2] [i_3] [i_10] [i_14] [i_3]))));
                    /* LoopSeq 4 */
                    for (long long int i_15 = 0; i_15 < 25; i_15 += 1) 
                    {
                        var_36 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_20 [i_2] [2] [(unsigned char)1] [i_2] [i_15]))));
                        arr_55 [i_2] [i_2] [11ULL] [i_10] [i_10] [i_2] [i_15] = ((/* implicit */unsigned int) arr_40 [i_15] [i_15] [i_14] [i_10] [i_3] [i_2]);
                        var_37 ^= ((/* implicit */signed char) ((int) arr_48 [i_15] [i_14] [i_10] [i_14] [(unsigned char)16]));
                    }
                    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned char) (+(arr_49 [i_16] [i_10] [i_10] [i_14])));
                        var_39 = 83154203;
                        arr_58 [i_2] [i_14] [i_10] [i_3] [i_2] = ((/* implicit */signed char) (~(arr_48 [(_Bool)1] [i_3] [i_3] [i_2] [i_16])));
                    }
                    for (long long int i_17 = 0; i_17 < 25; i_17 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned short) var_11);
                        arr_61 [i_2] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [14] [i_2] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) -2147483644)) : (var_3)));
                    }
                    for (long long int i_18 = 0; i_18 < 25; i_18 += 1) /* same iter space */
                    {
                        var_41 ^= ((/* implicit */signed char) ((((_Bool) var_5)) ? (arr_60 [i_2] [(signed char)7] [i_3] [i_18] [(signed char)7]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)65125)) : (((/* implicit */int) arr_14 [i_3] [i_14])))))));
                        arr_64 [i_2] [i_3] [i_3] [i_14] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_2] [i_2] [i_10] [i_2])) & (1610612736)));
                    }
                    var_42 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_56 [i_2] [i_2] [i_2] [i_2] [i_2]))));
                }
                for (int i_19 = 0; i_19 < 25; i_19 += 2) /* same iter space */
                {
                    var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) arr_48 [i_19] [i_10] [i_10] [i_10] [6U]))));
                    var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) (-(((/* implicit */int) arr_31 [i_19])))))));
                }
                for (int i_20 = 0; i_20 < 25; i_20 += 2) /* same iter space */
                {
                    arr_71 [i_2] [i_3] [i_10] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_2])) >> (((((/* implicit */int) arr_9 [i_2])) - (222)))));
                    var_45 = ((/* implicit */int) ((arr_11 [i_2] [1U]) != (((/* implicit */int) arr_31 [i_2]))));
                    arr_72 [i_10] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_56 [i_2] [i_20] [i_10] [i_20] [i_2])) >> (((arr_7 [i_10] [i_2]) + (3709253123859533315LL)))));
                    /* LoopSeq 4 */
                    for (int i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        var_46 = ((/* implicit */int) max((var_46), (((((/* implicit */int) arr_31 [i_20])) * (((/* implicit */int) var_12))))));
                        var_47 = -1304141207;
                    }
                    for (signed char i_22 = 0; i_22 < 25; i_22 += 3) 
                    {
                        arr_78 [i_2] [i_3] [i_2] [i_20] [i_2] [2U] = ((/* implicit */unsigned long long int) arr_28 [i_2] [i_2] [i_3] [i_10] [i_10] [i_20] [i_2]);
                        var_48 *= ((/* implicit */signed char) var_5);
                    }
                    for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                    {
                        arr_81 [(unsigned short)7] [(unsigned short)7] [i_10] [i_2] [i_23 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_69 [i_2] [i_3])) ? (-2147483631) : (((/* implicit */int) arr_31 [i_2]))));
                        arr_82 [i_2] [i_3] [i_10] [i_2] [i_20] [i_23 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_69 [i_2] [i_2]))));
                        var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_56 [i_23 + 1] [i_23] [i_23] [i_20] [i_3])) ? (arr_59 [8] [i_23 + 1] [i_20] [i_10] [i_10] [i_10]) : (-1710627817))))));
                        var_50 = ((/* implicit */short) ((((/* implicit */_Bool) arr_73 [2LL] [i_2])) ? (((/* implicit */unsigned long long int) arr_43 [i_2] [i_2])) : (arr_73 [i_2] [i_2])));
                        var_51 = ((/* implicit */unsigned int) -2147483644);
                    }
                    for (signed char i_24 = 0; i_24 < 25; i_24 += 2) 
                    {
                        var_52 = ((/* implicit */long long int) var_0);
                        arr_86 [i_2] [i_2] [i_20] [i_2] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_65 [i_2] [i_10] [i_2] [i_20])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2] [i_2] [i_2] [(unsigned short)16] [(unsigned short)16] [i_2] [i_2])))))));
                        var_53 = ((/* implicit */signed char) var_3);
                    }
                }
            }
        }
        var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) max((max((((/* implicit */unsigned long long int) (unsigned short)13971)), (arr_73 [i_2] [(unsigned char)22]))), (((/* implicit */unsigned long long int) ((1522721170) ^ (1522721170)))))))));
    }
    for (unsigned char i_25 = 0; i_25 < 25; i_25 += 2) 
    {
        arr_91 [i_25] = ((/* implicit */unsigned short) (+(min((arr_8 [i_25]), (((/* implicit */int) arr_45 [(signed char)6] [i_25] [(signed char)6] [i_25] [i_25]))))));
        arr_92 [i_25] = ((/* implicit */unsigned long long int) var_9);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_26 = 0; i_26 < 25; i_26 += 1) 
        {
            var_55 *= ((/* implicit */unsigned char) (((+(2147483647))) + (var_7)));
            arr_95 [i_25] [i_25] [(unsigned short)15] = ((/* implicit */long long int) (((((-(((/* implicit */int) (unsigned char)11)))) + (2147483647))) >> (((((/* implicit */int) arr_28 [(_Bool)1] [i_25] [i_25] [i_25] [i_25] [i_25] [i_25])) - (52)))));
            /* LoopNest 2 */
            for (signed char i_27 = 1; i_27 < 21; i_27 += 4) 
            {
                for (short i_28 = 0; i_28 < 25; i_28 += 2) 
                {
                    {
                        var_56 += ((/* implicit */unsigned int) var_11);
                        var_57 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)51217)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))) * (var_1)));
                        arr_101 [i_25] [10ULL] [i_26] [i_27] [i_27] [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (arr_34 [i_25] [i_28] [i_28] [i_27 - 1])));
                    }
                } 
            } 
            arr_102 [i_25] = ((/* implicit */unsigned long long int) var_12);
        }
        for (unsigned int i_29 = 4; i_29 < 23; i_29 += 4) 
        {
            var_58 -= ((/* implicit */unsigned int) arr_57 [i_29 + 1] [i_29] [i_25] [i_25] [i_25] [i_29] [i_25]);
            /* LoopNest 2 */
            for (unsigned char i_30 = 0; i_30 < 25; i_30 += 1) 
            {
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_32 = 0; i_32 < 25; i_32 += 2) 
                        {
                            var_59 = ((/* implicit */signed char) min((var_59), (arr_20 [i_25] [i_25] [i_25] [i_25] [19U])));
                            arr_115 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25] [i_25] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) (-(-2035019357)))) || (((/* implicit */_Bool) max((33423360), (1522721170))))))), ((~(((/* implicit */int) arr_112 [i_29 - 1]))))));
                        }
                        for (int i_33 = 0; i_33 < 25; i_33 += 1) 
                        {
                            arr_119 [i_25] [i_25] [i_30] [i_30] [i_25] = ((/* implicit */long long int) max((max((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)55073)))), (((/* implicit */int) var_10)))), (((/* implicit */int) arr_26 [i_29] [i_29]))));
                            var_60 = ((/* implicit */unsigned char) max((var_60), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_24 [21] [21] [i_29 - 1] [i_31]) << (((arr_24 [i_25] [i_29] [i_29 + 1] [i_31]) - (4617278468082211556LL)))))) ? (((arr_24 [i_25] [i_25] [i_29 - 3] [i_29]) % (arr_24 [(signed char)17] [i_29 - 4] [i_29 - 3] [i_31]))) : ((-(arr_24 [i_29 + 1] [i_31] [i_29 - 2] [i_33]))))))));
                            var_61 += ((/* implicit */unsigned long long int) ((unsigned short) ((arr_94 [i_31] [i_30]) - (arr_94 [i_25] [i_25]))));
                        }
                        for (unsigned long long int i_34 = 1; i_34 < 24; i_34 += 2) 
                        {
                            arr_123 [i_25] [i_25] [i_29] [i_30] [i_31] [i_34] = ((/* implicit */signed char) ((max((arr_19 [i_34] [i_29] [6LL] [i_29] [i_29 - 2]), (arr_19 [i_34] [i_25] [i_34] [i_25] [i_29 - 3]))) / ((-(arr_19 [i_34 - 1] [i_25] [i_34] [i_25] [i_29 - 1])))));
                            var_62 = (~(((arr_7 [16] [i_34 + 1]) & (arr_79 [i_25] [i_29 + 1] [i_30] [i_29] [i_34]))));
                            arr_124 [i_29 - 1] [i_34] [i_25] [i_30] [i_29 - 1] [i_29] [i_25] = ((/* implicit */unsigned long long int) max((((2147483647) / (((/* implicit */int) (unsigned char)93)))), (((((/* implicit */int) ((signed char) arr_48 [i_34] [i_25] [(unsigned short)0] [i_25] [i_25]))) / (((/* implicit */int) arr_122 [i_25] [i_25] [i_30] [i_31] [i_31]))))));
                        }
                        arr_125 [i_25] [i_25] [i_25] [(unsigned short)23] [24] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((15776304146712120563ULL), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (min((arr_53 [i_25] [i_29] [i_30] [i_31] [i_31]), (((/* implicit */unsigned long long int) arr_79 [i_25] [i_25] [(short)12] [i_25] [(short)12])))))))));
                    }
                } 
            } 
            var_63 = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) var_6)), (((arr_117 [i_25] [i_29 - 2] [i_25] [i_29 - 3] [i_25]) ? (36028797018963712LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4088)))))))));
        }
        /* LoopNest 3 */
        for (int i_35 = 0; i_35 < 25; i_35 += 1) 
        {
            for (short i_36 = 0; i_36 < 25; i_36 += 4) 
            {
                for (int i_37 = 0; i_37 < 25; i_37 += 1) 
                {
                    {
                        arr_134 [i_25] [i_35] [i_35] [i_35] [i_36] [i_37] = ((/* implicit */signed char) max((max((((/* implicit */int) arr_120 [i_36] [i_25])), (min((arr_132 [i_35] [i_35] [i_36] [i_36] [i_36]), (-2147483614))))), (((-2094851801) - (((/* implicit */int) arr_106 [i_35] [i_36] [i_37]))))));
                        var_64 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (max((376537787), (((/* implicit */int) (unsigned short)32767))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_19 [i_37] [i_35] [i_35] [i_35] [i_25])) ? (2092307776U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) arr_76 [i_25] [i_35])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_25] [i_35]))) : (var_3)))));
                        arr_135 [i_35] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                    }
                } 
            } 
        } 
    }
    for (signed char i_38 = 0; i_38 < 25; i_38 += 1) 
    {
        arr_140 [i_38] [i_38] = ((/* implicit */unsigned char) max((((/* implicit */short) (signed char)127)), (max((((/* implicit */short) (signed char)-125)), (var_14)))));
        var_65 = ((/* implicit */int) ((unsigned long long int) ((unsigned char) arr_107 [i_38] [i_38] [i_38] [i_38])));
        arr_141 [i_38] = min((((/* implicit */int) ((unsigned char) arr_128 [i_38] [i_38] [i_38] [i_38]))), (arr_128 [i_38] [i_38] [i_38] [i_38]));
    }
    var_66 = ((/* implicit */unsigned char) var_1);
    var_67 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_5)))))) != (((/* implicit */int) min(((signed char)-112), (((/* implicit */signed char) var_4)))))));
}
