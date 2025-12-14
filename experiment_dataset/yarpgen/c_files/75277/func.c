/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75277
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            arr_12 [i_4] [i_3] [i_2] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) var_8);
                            var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_2] [i_2 - 2] [i_4] [i_4] [i_4] [i_4] [i_4])) >> (((((/* implicit */int) arr_5 [i_1])) - (12014)))));
                        }
                    } 
                } 
                var_11 -= ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 3] [i_2])) != (((/* implicit */int) arr_6 [i_2 + 3] [i_2 + 1] [i_2 + 3]))));
                arr_13 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) * (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned short i_5 = 1; i_5 < 22; i_5 += 4) 
            {
                var_12 *= ((/* implicit */unsigned int) ((signed char) 4294967295U));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    for (unsigned short i_7 = 1; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */short) (unsigned short)1);
                            var_14 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-113)) ? (var_3) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_20 [i_1])))));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_15 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_0 - 1])) : (((/* implicit */int) var_6))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 1; i_8 < 23; i_8 += 1) 
                {
                    for (unsigned char i_9 = 1; i_9 < 21; i_9 += 1) 
                    {
                        {
                            arr_31 [i_8] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) - (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)10))))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned short)65518))))) ? ((-(((/* implicit */int) var_5)))) : ((+(((/* implicit */int) var_6))))));
                        }
                    } 
                } 
            }
            for (int i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_10] [(signed char)11] [i_0 + 1])) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) var_5))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) arr_28 [i_10] [i_0] [i_1] [i_1] [i_0] [i_0])) | (((/* implicit */int) arr_22 [i_0] [i_1] [i_10] [i_0] [i_1])))) : (((/* implicit */int) arr_5 [i_0 + 1]))));
                arr_34 [i_1] [i_1] [i_1] = ((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (((/* implicit */int) (unsigned short)65518))))) | (arr_23 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 1]));
            }
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)18)) != ((-(((/* implicit */int) (unsigned short)18))))));
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 1) 
            {
                for (unsigned char i_12 = 1; i_12 < 23; i_12 += 2) 
                {
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_21 [i_12] [i_1] [i_12] [i_12 + 1] [i_12 + 1] [i_1] [i_12 - 1]))));
                        arr_40 [i_0] [i_1] [i_1] [i_12] = ((/* implicit */long long int) ((short) arr_26 [i_11 + 2] [i_1] [i_0 - 2] [i_1] [i_1]));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)1)) - (((/* implicit */int) (unsigned short)65518)))))));
                    }
                } 
            } 
            var_22 &= ((/* implicit */unsigned char) (~(arr_27 [i_0] [i_0] [i_0] [i_0 + 1] [i_1])));
            /* LoopNest 2 */
            for (short i_13 = 4; i_13 < 20; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    {
                        arr_46 [i_0] [i_0] [i_0] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_1])) ? ((+(((/* implicit */int) (unsigned short)9)))) : (((/* implicit */int) ((signed char) (unsigned short)9)))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [12U] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_27 [i_1] [i_13 - 1] [(short)12] [i_13 + 3] [i_1]))))));
                        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)18)) * (((/* implicit */int) (unsigned short)22)))) + (((/* implicit */int) var_0))));
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 3; i_15 < 22; i_15 += 1) 
                        {
                            arr_50 [i_0] [i_1] [16U] [i_13] [i_14] [i_14] [i_15] = ((/* implicit */int) ((_Bool) arr_21 [i_14] [i_1] [i_15 + 1] [i_14] [i_14] [i_15] [i_1]));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_15 + 1] [i_15] [i_13] [i_13 - 2])) ? (((/* implicit */int) arr_3 [i_13 + 1] [i_1])) : (((/* implicit */int) arr_42 [i_0 - 2] [i_0] [i_15 + 2] [i_13 + 4]))));
                            var_26 = ((/* implicit */unsigned short) arr_47 [i_15] [i_0 + 1] [i_13 + 1] [i_13 + 2] [i_13 + 1] [i_13 + 1]);
                            var_27 = ((/* implicit */int) ((short) (unsigned short)65527));
                        }
                        for (short i_16 = 2; i_16 < 23; i_16 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((arr_15 [i_0 - 1] [i_0 + 1] [i_0] [i_0]) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65522)))) : (((/* implicit */int) (unsigned short)21))));
                            arr_53 [i_0] [i_1] [i_13] [i_13 + 3] [i_14] [i_0] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_49 [i_0] [i_1] [i_13 + 4] [i_13 - 3] [i_13 - 4] [i_13 + 3])) : (((/* implicit */int) arr_49 [i_1] [i_13] [i_1] [i_13] [i_13 + 1] [i_1]))));
                        }
                    }
                } 
            } 
        }
        for (short i_17 = 0; i_17 < 24; i_17 += 1) 
        {
            var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
            arr_56 [i_17] [i_17] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((var_9) > (((/* implicit */int) var_7))))) : (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_1)))))));
        }
        for (long long int i_18 = 3; i_18 < 21; i_18 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_19 = 0; i_19 < 24; i_19 += 3) 
            {
                for (short i_20 = 0; i_20 < 24; i_20 += 2) 
                {
                    for (short i_21 = 0; i_21 < 24; i_21 += 2) 
                    {
                        {
                            arr_66 [i_0] [i_18] [i_0] [i_0 - 2] = ((/* implicit */long long int) ((arr_57 [i_18 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65518)))));
                            var_30 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65527))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) <= ((~(((/* implicit */int) arr_15 [i_0] [i_0] [(short)20] [i_0])))))))));
        }
        for (long long int i_22 = 0; i_22 < 24; i_22 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_23 = 3; i_23 < 22; i_23 += 4) 
            {
                arr_71 [i_23] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)1))));
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_58 [i_23 - 2] [i_23 - 1])) : (((/* implicit */int) arr_58 [i_23 - 2] [i_23]))));
            }
            for (short i_24 = 1; i_24 < 22; i_24 += 1) 
            {
                arr_75 [i_24] [i_22] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_39 [i_24 + 1] [i_24 + 1] [i_24 - 1] [i_0 + 1]))));
                var_33 = ((/* implicit */short) (~((~(((/* implicit */int) var_8))))));
                var_34 -= ((/* implicit */unsigned char) ((arr_70 [i_24] [i_0 + 1] [i_24 + 1]) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65513)) : (((/* implicit */int) (unsigned short)65535)))))));
                arr_76 [i_0] [i_0] [i_22] [i_22] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) arr_73 [i_24] [12U] [i_24 + 2])))));
            }
            for (unsigned int i_25 = 2; i_25 < 22; i_25 += 4) 
            {
                var_35 = ((/* implicit */unsigned short) arr_42 [i_0] [i_0] [i_25 - 2] [i_25]);
                arr_80 [i_0] = ((/* implicit */int) ((signed char) arr_16 [i_0 + 1] [i_25 + 2] [i_25 - 2]));
                /* LoopNest 2 */
                for (signed char i_26 = 2; i_26 < 23; i_26 += 4) 
                {
                    for (unsigned int i_27 = 3; i_27 < 21; i_27 += 3) 
                    {
                        {
                            arr_88 [i_26] [i_26] [i_26] [i_26] [i_26] [(unsigned short)4] = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)65518))));
                            var_36 = (unsigned short)35;
                        }
                    } 
                } 
                arr_89 [i_22] [i_22] [i_22] [i_22] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)65530))));
            }
            /* LoopNest 2 */
            for (int i_28 = 0; i_28 < 24; i_28 += 2) 
            {
                for (signed char i_29 = 0; i_29 < 24; i_29 += 1) 
                {
                    {
                        arr_96 [i_0] [i_29] [i_22] [i_28] [i_29] [i_29] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65527)) ? (var_9) : (((/* implicit */int) arr_6 [i_28] [i_0 - 1] [i_0 - 2]))));
                        arr_97 [i_29] [i_29] [i_29] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)8)) / ((+(((/* implicit */int) var_5))))));
                    }
                } 
            } 
        }
        arr_98 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_0 - 2] [i_0] [(_Bool)0] [(_Bool)0] [i_0] [i_0 - 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)65526))));
        arr_99 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
        arr_100 [i_0 - 1] = ((/* implicit */long long int) var_2);
        var_37 += ((arr_27 [i_0] [i_0 - 1] [i_0 - 2] [i_0] [(unsigned short)16]) / (((/* implicit */long long int) var_9)));
    }
    for (long long int i_30 = 0; i_30 < 10; i_30 += 4) 
    {
        var_38 = ((/* implicit */int) (unsigned short)65533);
        arr_104 [i_30] [i_30] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_16 [i_30] [i_30] [i_30])) ? (arr_16 [i_30] [i_30] [i_30]) : (arr_16 [i_30] [i_30] [i_30])))));
        arr_105 [i_30] &= ((/* implicit */short) ((((((/* implicit */int) arr_15 [i_30] [i_30] [i_30] [i_30])) << (((/* implicit */int) (unsigned short)9)))) ^ (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_69 [i_30] [i_30] [i_30])) : (((/* implicit */int) arr_69 [i_30] [i_30] [i_30]))))));
        /* LoopNest 2 */
        for (int i_31 = 0; i_31 < 10; i_31 += 2) 
        {
            for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
            {
                {
                    arr_110 [i_32] [i_31] [i_32] [i_32] = min((min((((/* implicit */long long int) var_5)), (arr_18 [i_30] [i_31]))), (((/* implicit */long long int) min((var_9), ((~(((/* implicit */int) (unsigned short)65514))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_33 = 3; i_33 < 9; i_33 += 2) 
                    {
                        for (int i_34 = 0; i_34 < 10; i_34 += 1) 
                        {
                            {
                                arr_117 [i_32] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_30] [i_31] [i_30] [i_33] [i_34])) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) var_1))))) | (min((4294967295U), (arr_19 [i_30] [i_30] [i_32] [i_30] [i_34])))))) ? (((((/* implicit */_Bool) arr_20 [i_32])) ? (min((((/* implicit */long long int) var_7)), (arr_73 [i_34] [i_34] [i_34]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_85 [i_34] [i_32] [(signed char)14]))))))) : (((/* implicit */long long int) ((/* implicit */int) min((min(((unsigned short)4), (((/* implicit */unsigned short) var_2)))), ((unsigned short)1)))))));
                                var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65518)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_26 [i_30] [i_31] [i_30] [i_33] [i_33])) : ((+(((/* implicit */int) (unsigned short)4))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_35 = 0; i_35 < 12; i_35 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_36 = 0; i_36 < 12; i_36 += 2) 
        {
            for (int i_37 = 2; i_37 < 10; i_37 += 4) 
            {
                {
                    arr_125 [i_35] [i_35] = ((/* implicit */short) var_7);
                    arr_126 [i_35] [i_36] [i_35] = ((/* implicit */short) (-(((/* implicit */int) var_7))));
                    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_119 [i_36] [(_Bool)0]))))) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (((-(((/* implicit */int) (unsigned short)4)))) >= (((/* implicit */int) var_7)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_64 [i_36] [i_35] [i_38])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        var_42 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                    }
                    var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) arr_11 [i_36] [i_36] [i_36] [i_36] [i_36] [i_36] [i_36]))));
                }
            } 
        } 
        var_44 ^= ((/* implicit */int) var_1);
        /* LoopNest 3 */
        for (short i_39 = 0; i_39 < 12; i_39 += 1) 
        {
            for (unsigned short i_40 = 2; i_40 < 9; i_40 += 4) 
            {
                for (unsigned short i_41 = 3; i_41 < 9; i_41 += 3) 
                {
                    {
                        var_45 = ((/* implicit */signed char) ((((/* implicit */int) arr_127 [i_41 - 1] [i_40 + 3] [i_40 - 1] [i_40 + 1] [i_35])) * (((/* implicit */int) min((((/* implicit */unsigned short) arr_127 [i_41 + 1] [i_40 + 1] [i_40 - 2] [i_40 + 2] [i_39])), ((unsigned short)65535))))));
                        /* LoopSeq 2 */
                        for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) 
                        {
                            var_46 = ((/* implicit */unsigned char) min((min(((unsigned short)65527), ((unsigned short)65526))), (((/* implicit */unsigned short) ((arr_27 [i_40 + 1] [i_40 + 3] [i_40 + 3] [i_40 + 1] [i_35]) >= (((/* implicit */long long int) 4294967295U)))))));
                            var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) (-(((var_4) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) arr_83 [i_40] [21U] [i_40] [i_40 - 2] [i_41 - 1] [13LL])))))))));
                        }
                        for (_Bool i_43 = 0; i_43 < 1; i_43 += 1) 
                        {
                            var_48 = ((/* implicit */_Bool) min(((-(arr_70 [i_35] [i_39] [i_39]))), (((/* implicit */long long int) ((_Bool) (unsigned short)9)))));
                            arr_143 [i_35] [i_35] [i_35] [i_41 - 2] [i_41 - 2] [i_43] = ((/* implicit */signed char) var_2);
                            var_49 = ((/* implicit */unsigned char) (((!(arr_137 [i_35] [i_41 + 1] [i_35]))) ? (((/* implicit */int) (!(arr_137 [i_35] [i_41 + 3] [i_35])))) : (((/* implicit */int) arr_137 [i_35] [i_40] [i_35]))));
                            var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65516)), (var_3)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_70 [i_35] [i_40] [i_41]))))) != (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_41 + 3] [i_39] [i_35]))))))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_0)) : (min((var_9), (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (unsigned short)10)) * (((/* implicit */int) (unsigned short)9)))) : (((/* implicit */int) var_7)))) : (((/* implicit */int) min((var_6), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)65527))))))))));
}
