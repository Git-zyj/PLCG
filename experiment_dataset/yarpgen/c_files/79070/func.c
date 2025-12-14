/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79070
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
    var_13 = ((/* implicit */unsigned char) (_Bool)0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (unsigned char)151))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_15 -= ((/* implicit */unsigned long long int) var_11);
                        arr_14 [i_0] [(_Bool)1] [(_Bool)1] [i_3] [i_3] [i_1] = ((/* implicit */unsigned int) var_3);
                        arr_15 [i_0] [i_0] [(unsigned char)0] [i_2] [i_3] = ((/* implicit */_Bool) -1356485755);
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) -46211135)) && (arr_11 [i_0] [i_1] [i_0] [i_3] [3] [i_3])));
                        arr_16 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_13 [(short)8] [i_2]))));
                    }
                } 
            } 
            arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)-1260);
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)28469)) << (((((((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_1])) + (107))) - (12)))));
            var_18 += ((/* implicit */unsigned short) ((((var_6) & (((/* implicit */int) (unsigned char)250)))) | (((/* implicit */int) var_4))));
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((arr_5 [i_0] [i_1]) <= (((/* implicit */int) (unsigned short)37067)))))));
        }
        for (short i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        {
                            arr_26 [(short)2] [i_6] [3LL] [i_4] [3LL] = ((/* implicit */unsigned char) 961613525);
                            var_20 = ((/* implicit */long long int) arr_9 [i_0] [i_0]);
                            arr_27 [i_0] [i_7] |= ((arr_2 [i_6] [(signed char)4]) % (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
                            var_21 = -961613510;
                            arr_28 [i_4] [i_4] [i_7] [i_7] [i_7] [i_4] = ((/* implicit */unsigned short) (short)-11368);
                        }
                    } 
                } 
                arr_29 [i_5] [i_4] [i_0] = ((/* implicit */long long int) 961613556);
                arr_30 [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) >= (((var_6) - (((/* implicit */int) (short)-21484))))));
                arr_31 [(signed char)10] = ((/* implicit */unsigned int) arr_24 [i_0] [5LL] [5LL] [i_0] [i_0]);
                var_22 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -3980025224700448681LL)) == (9202536249523961860ULL)));
            }
            var_23 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) (unsigned short)37067))))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) == (arr_5 [i_0] [i_4])));
        }
        for (short i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    {
                        var_25 |= ((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) arr_7 [i_0] [i_0] [i_9]))));
                        arr_40 [i_10] = (unsigned char)105;
                        var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_39 [i_8])) <= (((/* implicit */int) arr_39 [i_0]))));
                        var_27 -= ((/* implicit */unsigned long long int) ((-8750026992640961184LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4)))));
                        var_28 += ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)7094))));
                    }
                } 
            } 
            var_29 = arr_11 [i_0] [i_0] [i_0] [i_8] [i_8] [i_8];
            arr_41 [i_8] |= ((/* implicit */unsigned short) arr_21 [i_0] [i_8] [i_0]);
            var_30 = ((/* implicit */short) (((((~(((/* implicit */int) (signed char)98)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */unsigned long long int) -974914483)) >= (4513880594704204811ULL)))) - (1)))));
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                arr_44 [i_11] = ((/* implicit */unsigned long long int) var_12);
                /* LoopNest 2 */
                for (long long int i_12 = 2; i_12 < 10; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */signed char) arr_12 [i_12 - 1] [i_12 + 2] [i_12 - 2] [i_12 - 2] [i_12 - 1] [i_12 - 2]);
                            arr_51 [i_0] [i_11] = ((/* implicit */unsigned char) (-(-1)));
                        }
                    } 
                } 
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (unsigned short)61513))));
                arr_52 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */long long int) arr_18 [i_11] [i_8] [(unsigned char)6]);
            }
        }
        for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                for (long long int i_16 = 3; i_16 < 11; i_16 += 4) 
                {
                    {
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))) + (arr_49 [i_14] [i_16 - 2] [i_16 - 1] [i_16 + 1]))))));
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) var_7))));
                        arr_63 [i_0] [i_14] [i_0] [i_14] [i_0] [(unsigned char)9] = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_50 [i_0] [i_0] [(unsigned char)4])) < (((/* implicit */int) (_Bool)1))))));
                        var_35 = (~(((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned short)58441)) - (58422))))));
                    }
                } 
            } 
            arr_64 [i_0] [i_0] [i_14] = ((/* implicit */long long int) (~(((/* implicit */int) arr_13 [(unsigned char)0] [(unsigned char)0]))));
            arr_65 [i_0] [i_14] [i_14] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        }
    }
    for (unsigned short i_17 = 0; i_17 < 12; i_17 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_18 = 3; i_18 < 10; i_18 += 4) 
        {
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                {
                    arr_73 [i_17] [i_18] [i_19] = ((((/* implicit */int) var_12)) >> (((((/* implicit */int) (signed char)-96)) + (105))));
                    arr_74 [i_17] |= ((/* implicit */unsigned short) arr_37 [i_17] [i_19] [i_19] [9LL] [i_18]);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */int) ((-6069806882841934271LL) != (-5854425779117173614LL)))) >> (((((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_11)))) - (29496))))))));
                        var_37 &= ((arr_2 [i_18 + 2] [i_18 + 1]) - (arr_2 [i_18 + 1] [i_18 - 2]));
                    }
                    for (unsigned int i_21 = 1; i_21 < 10; i_21 += 2) 
                    {
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */int) (short)-14133)) + (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                        arr_81 [i_17] [i_18] [i_19] [2LL] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_11))));
                    }
                    for (unsigned char i_22 = 0; i_22 < 12; i_22 += 4) /* same iter space */
                    {
                        arr_84 [i_17] [i_17] [(_Bool)1] [i_17] = ((/* implicit */signed char) arr_77 [i_22] [(short)4] [i_18] [i_17]);
                        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)239)) || (((/* implicit */_Bool) max((11327592036279902737ULL), (((/* implicit */unsigned long long int) var_11)))))));
                        arr_85 [i_17] [i_18] [i_17] [i_22] [i_18] [i_19] = ((/* implicit */unsigned short) max((((/* implicit */short) min(((unsigned char)167), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 9223372036854775800LL)))))))), (var_12)));
                    }
                    for (unsigned char i_23 = 0; i_23 < 12; i_23 += 4) /* same iter space */
                    {
                        var_40 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) min((var_12), (((/* implicit */short) var_0))))) > (((/* implicit */int) var_5))))), (((((min((var_8), (((/* implicit */long long int) (signed char)22)))) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_25 [i_23] [i_17])) + (22))) - (4)))))));
                        var_41 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (max((min((((/* implicit */unsigned int) var_6)), (4294967295U))), (((/* implicit */unsigned int) var_7))))));
                    }
                    arr_90 [i_19] [i_18 + 2] [i_17] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-45)), (-7633435725869884938LL)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_18] [i_18 - 3])), (741085779638166032LL))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_24 = 2; i_24 < 9; i_24 += 4) 
                    {
                        var_42 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)92))))), (4294967295U)));
                        var_43 += ((/* implicit */long long int) 276882683);
                        var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_19] [i_19] [i_18 + 2])) * (((((/* implicit */int) var_5)) * (((/* implicit */int) arr_50 [i_17] [(unsigned short)9] [i_17]))))));
                        var_45 -= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || ((_Bool)1))))));
                        arr_94 [i_17] [i_19] [i_24 - 2] = ((/* implicit */long long int) (+(((/* implicit */int) (((~(((/* implicit */int) var_9)))) <= (((1539858895) * (((/* implicit */int) (unsigned char)0)))))))));
                    }
                    for (short i_25 = 0; i_25 < 12; i_25 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) (unsigned char)0))));
                        /* LoopSeq 1 */
                        for (int i_26 = 0; i_26 < 12; i_26 += 2) 
                        {
                            var_47 -= ((/* implicit */long long int) 961613501);
                            arr_101 [i_18] = min((((/* implicit */int) (signed char)-38)), (((((((/* implicit */int) (short)-21175)) / (961613525))) * (((/* implicit */int) min(((unsigned short)9386), (((/* implicit */unsigned short) (short)15429))))))));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_27 = 0; i_27 < 12; i_27 += 4) 
        {
            var_48 = ((/* implicit */signed char) var_3);
            /* LoopNest 2 */
            for (long long int i_28 = 3; i_28 < 10; i_28 += 4) 
            {
                for (unsigned char i_29 = 0; i_29 < 12; i_29 += 2) 
                {
                    {
                        var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) arr_20 [i_28 - 2]))));
                        var_50 = ((/* implicit */int) max((var_50), (((/* implicit */int) var_10))));
                        arr_112 [(_Bool)1] [i_28] [i_28] [i_27] = ((/* implicit */unsigned int) min((var_0), (((/* implicit */unsigned char) var_4))));
                    }
                } 
            } 
        }
        for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
        {
            arr_117 [i_17] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)16)), (-607230650)))))))));
            var_51 *= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) arr_50 [i_17] [i_17] [i_17])), (2494961180U))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))));
        }
        for (unsigned int i_31 = 4; i_31 < 11; i_31 += 2) 
        {
            var_52 = ((/* implicit */unsigned long long int) min((var_52), (((/* implicit */unsigned long long int) min((var_6), (((((/* implicit */int) ((((/* implicit */_Bool) 4513880594704204811ULL)) || (((/* implicit */_Bool) (unsigned char)12))))) >> (((/* implicit */int) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91)))))))))))));
            var_53 = ((/* implicit */unsigned short) arr_34 [i_31 + 1] [i_17] [i_17]);
        }
        arr_122 [i_17] [i_17] = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)15410)) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)202))))))) < ((-(((/* implicit */int) (unsigned char)172))))));
    }
    /* vectorizable */
    for (unsigned int i_32 = 2; i_32 < 24; i_32 += 2) 
    {
        var_54 |= ((/* implicit */unsigned short) var_5);
        var_55 = ((/* implicit */unsigned long long int) ((arr_124 [i_32 - 2] [11U]) & (((/* implicit */unsigned int) arr_123 [i_32 - 2] [i_32 - 2]))));
        arr_126 [i_32] = ((/* implicit */int) ((var_8) % (((/* implicit */long long int) ((((((/* implicit */int) (short)-32750)) + (2147483647))) << (((var_2) - (1227355526U))))))));
        /* LoopSeq 2 */
        for (unsigned char i_33 = 3; i_33 < 24; i_33 += 2) 
        {
            var_56 = ((var_8) - (((/* implicit */long long int) 2671893915U)));
            arr_129 [i_32] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_123 [i_33 - 1] [(_Bool)1])) ^ (arr_128 [i_33 + 1] [i_33 + 1])));
            arr_130 [i_32] = ((/* implicit */short) var_0);
        }
        for (long long int i_34 = 0; i_34 < 25; i_34 += 4) 
        {
            var_57 -= arr_132 [i_32] [i_32];
            /* LoopNest 3 */
            for (unsigned int i_35 = 0; i_35 < 25; i_35 += 2) 
            {
                for (int i_36 = 0; i_36 < 25; i_36 += 4) 
                {
                    for (short i_37 = 0; i_37 < 25; i_37 += 2) 
                    {
                        {
                            arr_140 [i_32] [i_32] [i_32] [i_36] [(unsigned short)1] [i_36] [i_32] = ((/* implicit */short) ((((/* implicit */_Bool) arr_134 [i_32 - 1])) && (((/* implicit */_Bool) var_7))));
                            arr_141 [i_32] [15U] [i_32] [24U] [i_32] [5LL] = ((/* implicit */unsigned char) ((arr_125 [i_32 + 1] [i_32 - 1]) && (((/* implicit */_Bool) arr_124 [i_32 + 1] [i_32 + 1]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_38 = 1; i_38 < 21; i_38 += 4) 
            {
                for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                {
                    {
                        arr_146 [24LL] [24LL] [i_34] [24LL] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) / (((var_6) - (((/* implicit */int) (unsigned char)1))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_40 = 0; i_40 < 25; i_40 += 4) 
                        {
                            var_58 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) 0)) | (-1LL)));
                            var_59 = ((/* implicit */long long int) 1017618568U);
                            var_60 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_142 [i_32 - 2] [i_32 - 2] [i_32 - 2])) - (((/* implicit */int) arr_142 [i_32 - 1] [i_32 - 2] [i_32 - 1]))));
                            arr_149 [i_32] [i_32] [i_38 + 2] [i_39] [i_39] = ((/* implicit */unsigned char) (signed char)124);
                        }
                        for (int i_41 = 0; i_41 < 25; i_41 += 4) 
                        {
                            arr_152 [i_41] [i_32] [i_32] [i_34] [i_32] = (~(((/* implicit */int) (short)-15413)));
                            arr_153 [i_32 - 2] [i_32 - 2] [i_32] [i_32 - 2] [i_32] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) var_11))))) + (arr_134 [i_32 + 1])));
                        }
                        for (unsigned char i_42 = 3; i_42 < 23; i_42 += 2) 
                        {
                            var_61 = ((/* implicit */short) max((var_61), (((/* implicit */short) ((((17) >> (((((/* implicit */int) (unsigned char)214)) - (199))))) & (((/* implicit */int) var_12)))))));
                            arr_157 [i_32] [i_34] [i_38 + 2] [i_38 + 2] [i_38 + 2] [i_42 - 3] [19LL] |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)15413)) > (var_6))))) + (8094882279215810225LL)));
                        }
                        for (unsigned long long int i_43 = 1; i_43 < 24; i_43 += 4) 
                        {
                            var_62 = ((/* implicit */short) min((var_62), (((/* implicit */short) -16))));
                            var_63 = ((/* implicit */unsigned int) min((var_63), (((/* implicit */unsigned int) var_4))));
                            arr_160 [i_32] [i_32] [i_34] [i_34] [i_39] [i_43] = ((/* implicit */long long int) arr_131 [i_32 - 1] [i_32]);
                            arr_161 [i_32] [i_32] [i_34] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 1678831956U)) + (arr_136 [i_32] [i_32 - 2] [i_32 - 1] [i_38 + 3] [i_43 - 1])));
                        }
                        var_64 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)83))) != (arr_158 [(unsigned short)24] [i_34] [i_39] [i_34] [i_39]));
                        arr_162 [i_32 - 1] [i_34] [i_38] [i_39] |= ((/* implicit */short) (+(((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                        var_65 = ((((/* implicit */int) arr_147 [i_32 - 1] [i_32 - 1] [i_32 - 1] [i_32] [i_32 + 1] [i_32 - 2] [i_32])) << (((((/* implicit */int) (unsigned short)3837)) - (3811))));
                    }
                } 
            } 
        }
        var_66 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_143 [i_32] [i_32 + 1] [i_32 + 1] [i_32]))));
    }
    var_67 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 3 */
    for (unsigned int i_44 = 1; i_44 < 21; i_44 += 2) 
    {
        for (signed char i_45 = 0; i_45 < 25; i_45 += 2) 
        {
            for (short i_46 = 2; i_46 < 23; i_46 += 2) 
            {
                {
                    var_68 = ((((arr_158 [(unsigned char)16] [(unsigned char)16] [i_44] [i_44 + 4] [i_44]) ^ (arr_158 [i_44] [i_44] [i_44] [i_44 + 1] [i_44 - 1]))) ^ (min((arr_158 [i_44] [17] [13U] [i_44 - 1] [i_44 - 1]), (((/* implicit */long long int) (signed char)(-127 - 1))))));
                    var_69 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_144 [i_44] [i_44] [i_44] [i_44 + 3] [i_45])) || (((/* implicit */_Bool) 5869371577078234837ULL))))) + (((((/* implicit */int) arr_144 [i_44] [0U] [i_44 + 1] [i_44 + 3] [i_46])) + (((/* implicit */int) arr_144 [i_44] [i_44] [i_44] [i_44 + 3] [22])))));
                    arr_170 [i_44] [i_45] [i_44] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
                    arr_171 [i_44] [(unsigned short)7] [i_46 - 1] [(unsigned short)7] = ((/* implicit */short) min((((((/* implicit */int) arr_165 [i_46 - 2] [i_44 + 4])) >> (((((/* implicit */int) arr_165 [i_46 + 1] [i_44 + 3])) - (145))))), ((-(((/* implicit */int) var_0))))));
                    arr_172 [i_46 + 1] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1))))) == (((/* implicit */int) (unsigned char)19))))), ((-(((/* implicit */int) (signed char)112))))));
                }
            } 
        } 
    } 
}
