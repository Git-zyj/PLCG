/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70783
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
    var_11 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((var_0), (var_8)))), (var_7)));
    var_12 -= ((/* implicit */unsigned short) var_2);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_13 -= ((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) ((_Bool) arr_2 [i_0])))));
        /* LoopSeq 4 */
        for (long long int i_1 = 2; i_1 < 8; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                var_14 = ((/* implicit */int) max((min((max((arr_1 [i_0] [(short)0]), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 + 1] [i_2] [i_2])))), (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_5)), (var_9))), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2])))))));
                arr_9 [i_0] [i_1] [i_2] |= ((/* implicit */unsigned char) min((min((((/* implicit */long long int) var_8)), ((+(var_2))))), (((/* implicit */long long int) arr_6 [i_1 + 1] [i_1 - 2] [i_1 - 1]))));
                var_15 = ((/* implicit */int) var_1);
                /* LoopSeq 1 */
                for (unsigned char i_3 = 1; i_3 < 8; i_3 += 1) 
                {
                    var_16 *= ((/* implicit */unsigned char) var_8);
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) 4985616071184767323LL))))))));
                }
            }
            /* LoopNest 2 */
            for (short i_4 = 3; i_4 < 8; i_4 += 2) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_18 -= ((int) var_4);
                        arr_16 [i_0] [i_1] [i_4] [i_5] = ((/* implicit */int) arr_13 [i_4] [i_4]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_6 = 2; i_6 < 8; i_6 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) ((short) arr_3 [i_6 + 1] [i_6 - 1]));
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                var_20 = ((/* implicit */_Bool) (+(var_9)));
                var_21 = ((/* implicit */signed char) arr_17 [i_6 - 2] [0ULL] [i_6 - 1]);
            }
            for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        var_22 += ((/* implicit */unsigned short) ((signed char) (signed char)-60));
                        arr_30 [i_0] [i_8] = ((/* implicit */unsigned long long int) ((int) arr_13 [i_8] [i_10]));
                    }
                    arr_31 [i_8] [i_8] [i_8] [i_0] [i_0] = ((/* implicit */signed char) var_0);
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        arr_34 [i_0] [i_6] [i_8] [i_9] [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_6] [i_6 + 2] [i_6 - 1]))));
                        var_23 = ((/* implicit */unsigned int) arr_17 [i_6 - 1] [i_9] [i_9]);
                        arr_35 [3LL] [i_9] [i_8] [(_Bool)1] [i_11] [i_0] [i_8] = ((/* implicit */long long int) ((signed char) arr_2 [i_6 + 1]));
                    }
                    /* LoopSeq 2 */
                    for (short i_12 = 1; i_12 < 9; i_12 += 1) 
                    {
                        var_24 += ((/* implicit */unsigned short) (+(((long long int) arr_37 [i_12] [i_12 - 1] [i_8] [i_8] [i_6] [i_0]))));
                        var_25 *= ((/* implicit */_Bool) arr_36 [i_0] [i_0]);
                    }
                    for (signed char i_13 = 2; i_13 < 8; i_13 += 1) 
                    {
                        arr_43 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) arr_27 [i_0] [3] [i_8] [i_9] [i_6 + 1]);
                        arr_44 [i_8] [i_6] [i_6] = ((/* implicit */unsigned short) arr_5 [i_0] [i_6]);
                        var_26 -= ((/* implicit */_Bool) var_8);
                        var_27 &= ((/* implicit */_Bool) (-(arr_25 [i_9] [i_6 + 2] [i_0] [i_13 - 1])));
                    }
                }
                for (signed char i_14 = 1; i_14 < 8; i_14 += 2) 
                {
                    var_28 = ((/* implicit */int) arr_13 [i_8] [i_6]);
                    arr_47 [i_0] [i_0] [i_6] [(signed char)4] [i_0] [i_14] &= ((/* implicit */long long int) (+(((/* implicit */int) arr_42 [i_0] [i_0] [i_6 - 1] [i_8] [i_8] [i_0] [i_14]))));
                }
                for (unsigned int i_15 = 3; i_15 < 9; i_15 += 3) 
                {
                    arr_52 [i_8] [1] [i_6] [i_15] = ((unsigned int) var_6);
                    arr_53 [i_0] [(unsigned short)0] [(unsigned short)0] [i_0] [i_0] [i_15] |= ((/* implicit */unsigned int) var_2);
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        arr_57 [i_8] [i_6] [i_0] [i_15] [i_16] = ((/* implicit */short) ((unsigned char) var_1));
                        var_29 ^= ((/* implicit */_Bool) arr_0 [4]);
                        arr_58 [i_8] [i_8] = ((/* implicit */short) var_6);
                    }
                }
                /* LoopSeq 1 */
                for (long long int i_17 = 0; i_17 < 10; i_17 += 3) 
                {
                    /* LoopSeq 3 */
                    for (int i_18 = 0; i_18 < 10; i_18 += 1) 
                    {
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((signed char) arr_48 [i_6 - 2] [i_17])))));
                        var_31 = ((/* implicit */unsigned int) arr_6 [i_0] [i_6] [i_0]);
                    }
                    for (signed char i_19 = 1; i_19 < 8; i_19 += 2) 
                    {
                        arr_67 [i_0] [i_8] [i_8] [i_17] [3ULL] = ((unsigned char) arr_64 [i_8]);
                        arr_68 [i_0] [i_6] [i_8] [i_8] [i_19] = ((/* implicit */int) ((unsigned char) arr_21 [i_19 + 1] [i_19 + 2] [i_8]));
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (~((~(((/* implicit */int) var_6)))))))));
                    }
                    for (short i_20 = 0; i_20 < 10; i_20 += 3) 
                    {
                        var_33 = ((/* implicit */short) var_1);
                        var_34 += ((short) var_7);
                        arr_73 [i_0] [i_8] [i_8] [i_17] [i_20] = ((/* implicit */unsigned short) ((short) arr_24 [i_6 - 2] [i_6] [i_6 - 1] [i_6 + 1]));
                        arr_74 [i_20] [i_17] [i_8] [i_8] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    }
                    var_35 ^= ((/* implicit */unsigned short) arr_20 [i_0]);
                }
            }
        }
        /* vectorizable */
        for (long long int i_21 = 2; i_21 < 8; i_21 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_22 = 1; i_22 < 9; i_22 += 2) 
            {
                for (unsigned int i_23 = 0; i_23 < 10; i_23 += 3) 
                {
                    for (signed char i_24 = 2; i_24 < 8; i_24 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned short) ((unsigned long long int) var_4));
                            arr_87 [i_0] [i_0] [i_21] [i_22] [i_21] [i_23] [i_24 + 1] = ((/* implicit */unsigned char) arr_1 [i_21 - 2] [i_21 - 2]);
                            var_37 = ((/* implicit */unsigned int) ((_Bool) ((short) arr_60 [i_0])));
                            arr_88 [i_24] [i_21] [i_23] [i_22] [i_22] [i_21] [i_0] = ((/* implicit */long long int) ((unsigned short) var_2));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_25 = 0; i_25 < 10; i_25 += 2) 
            {
                for (int i_26 = 0; i_26 < 10; i_26 += 3) 
                {
                    {
                        arr_95 [i_0] [i_21] [i_21] [6U] [i_26] = ((/* implicit */unsigned char) ((_Bool) 5U));
                        var_38 *= ((/* implicit */_Bool) ((short) (~(arr_91 [i_21]))));
                        var_39 = ((/* implicit */signed char) var_4);
                    }
                } 
            } 
        }
        for (unsigned char i_27 = 0; i_27 < 10; i_27 += 1) 
        {
            var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((unsigned int) arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
            var_41 = ((/* implicit */unsigned int) arr_40 [i_0] [i_0]);
            /* LoopNest 2 */
            for (unsigned int i_28 = 1; i_28 < 8; i_28 += 2) 
            {
                for (long long int i_29 = 0; i_29 < 10; i_29 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_30 = 0; i_30 < 10; i_30 += 3) 
                        {
                            arr_105 [i_0] [i_0] [(unsigned char)3] [i_29] [i_28] = ((/* implicit */short) arr_40 [i_0] [i_28]);
                            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)46324)))))));
                        }
                        for (long long int i_31 = 0; i_31 < 10; i_31 += 2) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_71 [i_0] [i_27] [i_28] [i_29] [i_31]))));
                            arr_108 [i_0] [i_27] [i_0] [i_29] [i_0] |= ((/* implicit */signed char) var_9);
                            var_44 *= ((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (min((((/* implicit */unsigned short) arr_54 [i_0] [i_0] [(_Bool)0] [(signed char)2] [i_0])), (arr_93 [i_0] [i_27] [i_28 + 2] [i_27] [i_0])))))), (max((((/* implicit */int) arr_97 [i_0])), ((~(arr_40 [i_27] [i_0])))))));
                            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) arr_59 [i_0] [i_27] [i_0] [i_28]))));
                            arr_109 [i_28] [i_31] [i_28 + 2] [i_31] [i_0] = ((/* implicit */short) max(((unsigned short)19212), ((unsigned short)46324)));
                        }
                        for (signed char i_32 = 1; i_32 < 8; i_32 += 2) 
                        {
                            var_46 = ((/* implicit */unsigned short) ((long long int) arr_102 [i_32] [i_29] [i_28] [i_27] [i_0]));
                            var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) max(((-(((/* implicit */int) ((unsigned char) var_0))))), (((/* implicit */int) arr_107 [i_0] [2U] [i_0] [i_0])))))));
                            arr_113 [i_0] |= ((/* implicit */unsigned short) min((((unsigned int) max(((unsigned short)19193), ((unsigned short)46310)))), (((/* implicit */unsigned int) arr_79 [i_32 - 1] [i_32 - 1] [i_28]))));
                            arr_114 [i_0] [i_0] [i_27] [i_28] [i_0] [7] [(signed char)0] = ((/* implicit */long long int) ((signed char) max((((/* implicit */long long int) min((((/* implicit */int) var_5)), (var_10)))), ((-(var_7))))));
                        }
                        var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) arr_77 [i_29]))));
                        var_49 -= ((/* implicit */signed char) arr_70 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                } 
            } 
            arr_115 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) arr_94 [i_0] [i_0] [i_27] [i_27])), (max((((/* implicit */int) (unsigned short)46312)), (-1524608422)))));
        }
        /* LoopNest 2 */
        for (unsigned short i_33 = 2; i_33 < 8; i_33 += 1) 
        {
            for (short i_34 = 2; i_34 < 9; i_34 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_35 = 3; i_35 < 9; i_35 += 1) 
                    {
                        for (unsigned short i_36 = 3; i_36 < 6; i_36 += 3) 
                        {
                            {
                                arr_125 [i_35] [i_0] [i_33 - 2] [i_34 + 1] [i_34 + 1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_13 [i_35] [i_35])), (var_8)));
                                var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) arr_18 [i_0] [i_34]))));
                                var_51 *= ((/* implicit */long long int) ((_Bool) max((((/* implicit */short) var_1)), (((short) arr_14 [i_36] [i_35] [i_33] [i_0])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_37 = 0; i_37 < 10; i_37 += 2) 
                    {
                        for (unsigned char i_38 = 0; i_38 < 10; i_38 += 3) 
                        {
                            {
                                arr_132 [i_0] [i_33] [i_34] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) ((unsigned long long int) arr_106 [i_0] [i_37] [i_0] [i_37] [i_0])))), (var_3)));
                                var_52 ^= ((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned short) (signed char)-17)), ((unsigned short)46324))));
                                var_53 -= ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) var_10))), ((~((~(((/* implicit */int) (unsigned char)0))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_39 = 0; i_39 < 10; i_39 += 3) 
        {
            for (unsigned short i_40 = 1; i_40 < 6; i_40 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_41 = 0; i_41 < 10; i_41 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_42 = 0; i_42 < 0; i_42 += 1) 
                        {
                            arr_143 [i_42] [i_39] [i_41] [(unsigned char)3] [i_40 + 3] [i_39] [(unsigned short)2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned int) (short)32767))), (var_9)));
                            arr_144 [7LL] [i_39] [i_39] [i_0] = ((/* implicit */unsigned short) var_10);
                            arr_145 [i_42] [i_41] [i_39] [i_39] [i_0] = ((/* implicit */unsigned char) arr_2 [(unsigned char)1]);
                            arr_146 [i_40] [i_40] [i_40] [i_40] [i_39] = ((/* implicit */signed char) arr_23 [i_39] [i_40] [i_41] [i_41]);
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_43 = 3; i_43 < 7; i_43 += 1) 
                        {
                            arr_150 [i_39] [i_40] [i_40] [i_39] [i_39] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_85 [i_43] [i_39])), (min((arr_136 [i_40 + 1] [i_43 - 2] [i_43 + 3]), (arr_136 [i_40 + 3] [i_43 + 1] [i_43 + 2])))));
                            var_54 = ((/* implicit */_Bool) arr_124 [i_0] [i_39] [i_40] [i_41] [i_43 + 2]);
                            arr_151 [i_39] [i_41] [i_40] [i_41] [(signed char)3] = var_5;
                        }
                        for (unsigned short i_44 = 1; i_44 < 9; i_44 += 3) 
                        {
                            arr_154 [i_39] [i_39] [1LL] [i_39] [(unsigned short)3] [i_39] = ((/* implicit */signed char) ((unsigned short) arr_135 [i_44 - 1] [i_39] [i_39]));
                            var_55 = ((/* implicit */long long int) min((((/* implicit */int) max((var_5), (max((((/* implicit */signed char) var_4)), (var_1)))))), (min(((~(((/* implicit */int) var_4)))), (((int) var_5))))));
                            var_56 ^= ((/* implicit */signed char) min((arr_128 [4LL] [i_41] [i_40] [i_39]), (((/* implicit */short) var_5))));
                        }
                        for (long long int i_45 = 1; i_45 < 9; i_45 += 2) 
                        {
                            var_57 = min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)19215))))), (min((((/* implicit */long long int) var_5)), (var_7))));
                            arr_157 [(_Bool)1] [i_39] [i_40] [i_40 + 1] [i_39] [i_39] [i_0] = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) arr_156 [i_39] [i_45 + 1] [i_39] [i_41] [i_40 + 4] [i_41])), (var_3))), (((/* implicit */long long int) ((int) arr_23 [i_39] [i_45 + 1] [(_Bool)1] [i_40])))));
                        }
                        arr_158 [i_0] [i_39] [i_40] [i_39] [(unsigned char)8] [i_40] = ((/* implicit */long long int) ((int) max((arr_11 [i_0] [i_0] [(unsigned short)6] [i_0]), (((/* implicit */unsigned short) arr_41 [i_40] [i_40] [i_40 + 3] [i_39])))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_46 = 0; i_46 < 10; i_46 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_47 = 0; i_47 < 10; i_47 += 3) 
                        {
                            arr_166 [i_39] [i_39] = ((/* implicit */unsigned long long int) arr_60 [i_46]);
                            var_58 = ((/* implicit */unsigned char) var_3);
                            var_59 += ((/* implicit */unsigned short) (~(((/* implicit */int) arr_61 [i_40 + 3] [i_40 + 3] [i_40] [i_40 + 2] [i_40 + 4] [i_46]))));
                        }
                        var_60 -= ((/* implicit */long long int) ((short) max(((unsigned short)19212), ((unsigned short)19200))));
                        /* LoopSeq 4 */
                        for (unsigned short i_48 = 4; i_48 < 6; i_48 += 3) 
                        {
                            var_61 = ((/* implicit */short) ((long long int) min((arr_78 [i_39] [i_46]), (((/* implicit */unsigned short) arr_26 [i_40 + 4] [i_48])))));
                            var_62 = ((/* implicit */signed char) min((var_62), (((/* implicit */signed char) (-(min((arr_106 [i_0] [i_39] [i_40] [(unsigned short)0] [i_0]), (arr_106 [i_46] [(signed char)8] [i_40] [(signed char)8] [i_46]))))))));
                            arr_169 [i_39] = ((int) min((((/* implicit */unsigned int) arr_121 [i_0] [i_39] [i_40])), (((unsigned int) var_9))));
                            var_63 = ((/* implicit */signed char) max((var_63), (((/* implicit */signed char) min((((/* implicit */int) ((_Bool) (signed char)(-127 - 1)))), ((-(((/* implicit */int) var_1)))))))));
                        }
                        for (unsigned short i_49 = 3; i_49 < 7; i_49 += 2) 
                        {
                            var_64 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((/* implicit */signed char) arr_37 [i_40] [i_40] [i_49 + 2] [i_40 + 2] [i_40] [i_40])), (((signed char) arr_76 [i_39] [i_39] [i_49 - 2]))))), (min((arr_118 [4ULL]), (((/* implicit */unsigned int) arr_94 [i_46] [i_40 + 3] [i_0] [i_0]))))));
                            var_65 = ((/* implicit */unsigned int) arr_127 [i_49 - 3] [i_49] [i_46] [i_40 + 1] [i_0] [i_0]);
                            var_66 = ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_124 [i_0] [i_46] [i_40] [i_46] [5LL])), (arr_11 [i_49 + 2] [i_46] [i_0] [i_0]))))));
                        }
                        for (long long int i_50 = 0; i_50 < 10; i_50 += 2) 
                        {
                            var_67 = min((2688565391663938529LL), (((/* implicit */long long int) ((short) (unsigned char)118))));
                            arr_176 [i_39] [i_39] [i_39] [3LL] [i_39] [i_39] = ((/* implicit */unsigned short) (+(arr_27 [i_0] [i_39] [i_39] [i_46] [i_50])));
                            arr_177 [i_39] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_78 [i_46] [i_40]))));
                        }
                        for (int i_51 = 0; i_51 < 10; i_51 += 3) 
                        {
                            var_68 = ((/* implicit */_Bool) min((var_68), (((/* implicit */_Bool) ((signed char) var_10)))));
                            arr_180 [i_0] [i_51] [5U] [i_39] [i_51] = ((/* implicit */signed char) max((arr_65 [2ULL] [5] [5] [i_40] [8LL] [i_46] [7LL]), (((/* implicit */long long int) (short)-4))));
                            var_69 = ((/* implicit */unsigned int) min((var_7), (((/* implicit */long long int) arr_147 [i_0] [i_0]))));
                        }
                        arr_181 [i_0] [i_0] [i_39] [i_0] = ((/* implicit */signed char) arr_64 [i_39]);
                    }
                    for (unsigned long long int i_52 = 0; i_52 < 10; i_52 += 4) /* same iter space */
                    {
                        var_70 = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */short) arr_92 [i_0] [i_0] [i_40 - 1] [i_52])), (arr_5 [i_40 + 1] [i_52]))));
                        arr_184 [i_39] [i_39] [i_52] = ((/* implicit */unsigned short) (+(((unsigned int) ((long long int) arr_127 [i_0] [i_0] [i_0] [i_39] [i_40] [i_39])))));
                        var_71 = ((/* implicit */unsigned char) ((int) var_9));
                    }
                    for (unsigned long long int i_53 = 0; i_53 < 10; i_53 += 4) /* same iter space */
                    {
                        arr_187 [i_0] [i_39] [i_39] [i_40] [i_53] = ((/* implicit */unsigned short) max((((/* implicit */int) var_1)), (var_10)));
                        var_72 &= ((/* implicit */long long int) arr_85 [i_0] [i_53]);
                        arr_188 [i_0] [i_0] [i_40] [i_53] |= ((/* implicit */long long int) ((unsigned char) min((arr_70 [i_40] [i_40 + 1] [i_40 + 1] [i_40 + 4] [i_53] [i_40 - 1] [i_40]), (arr_70 [i_40 + 1] [i_40 + 1] [i_40] [i_40] [i_0] [i_40] [i_40]))));
                    }
                    /* LoopSeq 2 */
                    for (short i_54 = 0; i_54 < 10; i_54 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_55 = 0; i_55 < 10; i_55 += 2) /* same iter space */
                        {
                            arr_194 [i_39] [i_39] [i_39] [i_39] [i_39] [i_39] [i_39] = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) arr_94 [i_55] [i_39] [i_40 + 3] [i_54])))));
                            arr_195 [(short)6] [i_0] [i_54] [i_54] [i_54] [i_39] [i_0] |= ((/* implicit */short) min((((/* implicit */long long int) ((signed char) min((((/* implicit */int) arr_163 [i_0] [i_39] [i_39] [i_54] [i_54] [i_54] [i_54])), (var_8))))), (max((((/* implicit */long long int) var_1)), (max((var_9), (arr_136 [i_40 - 1] [i_40 - 1] [i_55])))))));
                            var_73 = ((/* implicit */unsigned char) ((unsigned int) max((max((arr_72 [i_39]), (var_0))), (min((((/* implicit */int) arr_130 [i_0] [i_39])), (var_0))))));
                        }
                        for (unsigned char i_56 = 0; i_56 < 10; i_56 += 2) /* same iter space */
                        {
                            arr_198 [i_0] [i_39] [i_40] [i_39] [(unsigned char)5] = ((/* implicit */signed char) arr_93 [i_0] [i_39] [i_40] [9] [9U]);
                            arr_199 [i_0] [(signed char)2] [i_0] [i_0] [i_0] [i_39] [i_0] = ((/* implicit */unsigned char) var_9);
                            var_74 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned short)19212));
                            arr_200 [(signed char)3] [i_39] [i_39] [i_54] [i_39] = ((/* implicit */short) ((signed char) min((arr_27 [i_0] [i_0] [i_39] [i_54] [i_0]), (arr_27 [i_0] [i_39] [i_39] [i_0] [i_56]))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_57 = 0; i_57 < 10; i_57 += 1) 
                        {
                            var_75 = ((/* implicit */signed char) var_10);
                            arr_203 [i_39] = ((/* implicit */int) ((long long int) arr_10 [i_54] [i_54] [i_40 + 4] [i_40]));
                            arr_204 [i_0] [i_39] [i_39] [i_54] [i_57] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_107 [i_39] [i_54] [i_39] [i_39])))));
                            arr_205 [i_39] [i_57] [i_39] [i_40] [i_39] [i_0] [i_39] = (+(var_10));
                        }
                        var_76 = ((/* implicit */short) min((var_76), (((/* implicit */short) (~(((unsigned int) min((var_2), (((/* implicit */long long int) arr_19 [6]))))))))));
                    }
                    for (unsigned int i_58 = 1; i_58 < 7; i_58 += 2) 
                    {
                        arr_208 [(short)7] [i_39] [i_40 + 3] [i_58 + 3] = max((var_1), (((/* implicit */signed char) var_4)));
                        var_77 = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) var_6))), (max((arr_159 [i_0] [i_39] [i_40] [i_40] [4LL]), (((/* implicit */unsigned char) var_4))))))), (min((((/* implicit */int) arr_173 [i_58] [(short)6] [i_40 + 4] [i_0] [i_0] [i_0])), ((+(arr_96 [i_39] [i_40] [i_58])))))));
                        arr_209 [i_39] [i_39] [i_39] [i_40] [3LL] = ((/* implicit */short) min((max((arr_136 [i_39] [i_40 - 1] [i_58]), (arr_136 [i_0] [i_40 + 3] [i_58 + 1]))), (((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned int) var_1)), (arr_36 [0U] [i_39])))))));
                    }
                    var_78 = arr_49 [i_39];
                }
            } 
        } 
    }
    for (unsigned char i_59 = 2; i_59 < 10; i_59 += 1) 
    {
        var_79 += ((/* implicit */long long int) var_8);
        /* LoopNest 2 */
        for (_Bool i_60 = 0; i_60 < 0; i_60 += 1) 
        {
            for (signed char i_61 = 0; i_61 < 11; i_61 += 1) 
            {
                {
                    var_80 = ((/* implicit */unsigned short) min((var_80), (((/* implicit */unsigned short) ((long long int) ((unsigned long long int) var_9))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_62 = 0; i_62 < 11; i_62 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_63 = 0; i_63 < 11; i_63 += 2) 
                        {
                            var_81 ^= ((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) var_0)));
                            arr_224 [i_63] [i_62] [i_63] = ((/* implicit */short) (+(var_10)));
                            var_82 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_217 [i_60 + 1] [i_60 + 1] [i_60] [i_60 + 1]))));
                        }
                        arr_225 [i_62] [i_60 + 1] [i_60 + 1] [i_62] = ((/* implicit */unsigned short) ((unsigned char) arr_216 [(short)4] [(short)4] [i_61] [i_62]));
                        /* LoopSeq 1 */
                        for (_Bool i_64 = 0; i_64 < 1; i_64 += 1) 
                        {
                            var_83 ^= ((/* implicit */unsigned short) var_5);
                            var_84 = ((/* implicit */long long int) arr_217 [i_60] [i_64] [i_61] [i_59]);
                            var_85 = ((/* implicit */int) arr_226 [i_59] [i_60] [i_61] [i_60] [i_64] [i_62]);
                        }
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_65 = 0; i_65 < 11; i_65 += 3) 
        {
            for (unsigned char i_66 = 0; i_66 < 11; i_66 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_67 = 0; i_67 < 11; i_67 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_68 = 0; i_68 < 11; i_68 += 4) 
                        {
                            arr_237 [i_59] [i_59] [i_65] [i_66] [i_68] [i_66] |= ((/* implicit */unsigned int) var_3);
                            arr_238 [i_59] [i_65] [i_66] [i_65] [i_68] = ((/* implicit */unsigned int) var_9);
                        }
                        var_86 = (+(min((((/* implicit */long long int) var_8)), (arr_222 [(short)5] [i_59 + 1] [i_59] [i_59] [i_59]))));
                    }
                    for (unsigned long long int i_69 = 0; i_69 < 11; i_69 += 4) /* same iter space */
                    {
                        arr_242 [i_69] [i_69] [i_69] [i_69] [i_65] [i_59] |= ((/* implicit */signed char) arr_212 [i_59 - 2]);
                        arr_243 [i_65] [i_65] [i_65] [i_65] [i_59 - 2] [i_65] = ((/* implicit */unsigned char) var_7);
                        /* LoopSeq 1 */
                        for (long long int i_70 = 1; i_70 < 9; i_70 += 2) 
                        {
                            var_87 -= ((/* implicit */unsigned char) arr_241 [i_59 - 1] [i_59]);
                            arr_247 [(signed char)10] [i_69] [i_66] [i_65] [i_70] = ((/* implicit */long long int) max((((/* implicit */int) max((arr_246 [(short)5] [i_59] [i_70 - 1] [i_70 + 2] [i_70 + 2]), (arr_246 [i_70] [i_70] [i_70 + 2] [i_70] [i_70 + 2])))), ((+(((/* implicit */int) arr_246 [2LL] [i_59] [i_70 - 1] [i_70] [(unsigned short)4]))))));
                            var_88 = ((/* implicit */int) min((var_88), (min((-215073491), (((/* implicit */int) (unsigned short)61906))))));
                        }
                        arr_248 [i_59] [i_65] [i_66] [i_69] = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */int) max((arr_217 [i_59 - 2] [i_59] [i_59 - 1] [(signed char)5]), (arr_229 [i_59 - 2] [i_66] [i_69])))), ((-(((/* implicit */int) var_1)))))));
                        arr_249 [i_65] [i_65] = ((/* implicit */unsigned char) arr_245 [i_66] [i_69]);
                    }
                    /* LoopNest 2 */
                    for (signed char i_71 = 3; i_71 < 9; i_71 += 4) 
                    {
                        for (unsigned short i_72 = 3; i_72 < 10; i_72 += 4) 
                        {
                            {
                                var_89 = ((/* implicit */unsigned char) var_10);
                                var_90 = ((/* implicit */short) max((var_90), (((/* implicit */short) (-(arr_222 [i_59] [i_59 - 2] [i_59] [i_59] [i_59]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_73 = 0; i_73 < 11; i_73 += 1) 
                    {
                        var_91 *= ((signed char) (unsigned short)19195);
                        /* LoopSeq 3 */
                        for (unsigned char i_74 = 0; i_74 < 11; i_74 += 1) 
                        {
                            var_92 ^= ((/* implicit */unsigned char) var_1);
                            arr_258 [(short)6] [i_65] [i_66] [i_65] [(_Bool)0] = ((/* implicit */long long int) (+(arr_254 [i_59 - 1] [i_59] [i_65] [i_59] [i_59] [i_59 - 1])));
                            arr_259 [i_65] [i_65] = ((/* implicit */unsigned short) ((unsigned int) var_3));
                            var_93 = ((/* implicit */_Bool) min((var_93), (((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
                            arr_260 [i_59] [i_59] [i_65] [i_59] [i_59] = ((/* implicit */unsigned long long int) arr_244 [i_74] [i_74] [i_74] [i_74] [i_74]);
                        }
                        for (short i_75 = 3; i_75 < 10; i_75 += 1) 
                        {
                            arr_263 [i_59] [i_59] [i_66] [i_66] [i_65] [i_75 - 2] = ((/* implicit */signed char) ((short) arr_231 [i_59] [i_66]));
                            arr_264 [i_75 + 1] [i_65] [i_65] [i_59 - 2] = ((/* implicit */short) ((unsigned int) arr_222 [i_65] [i_65] [i_65] [i_65] [i_65]));
                        }
                        for (int i_76 = 0; i_76 < 11; i_76 += 3) 
                        {
                            var_94 |= arr_222 [i_59 - 1] [i_59 - 1] [i_66] [i_66] [i_76];
                            arr_267 [i_59 - 2] [i_65] [i_59 - 2] [i_66] [i_65] [i_65] = ((/* implicit */unsigned char) ((unsigned long long int) arr_210 [i_65]));
                            var_95 = ((/* implicit */long long int) var_4);
                            arr_268 [i_76] [i_73] [i_65] [i_65] [9LL] = ((/* implicit */signed char) var_10);
                            var_96 += ((/* implicit */unsigned char) ((long long int) ((unsigned short) arr_234 [i_59] [i_73] [i_73])));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_77 = 0; i_77 < 11; i_77 += 2) /* same iter space */
                        {
                            arr_272 [i_59] [i_65] [i_66] [i_73] [i_77] = ((/* implicit */unsigned short) ((signed char) arr_223 [i_59 - 2] [i_59] [i_59 - 2] [i_59] [i_59]));
                            var_97 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                        }
                        for (unsigned int i_78 = 0; i_78 < 11; i_78 += 2) /* same iter space */
                        {
                            arr_277 [i_59] [i_65] [i_65] [i_66] [i_65] [i_65] [i_78] = ((/* implicit */long long int) var_6);
                            var_98 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_221 [i_59]))));
                            arr_278 [i_59] [i_59] [i_59] [i_65] [i_78] = ((/* implicit */_Bool) var_8);
                            var_99 += ((/* implicit */short) (-(var_2)));
                        }
                        for (unsigned int i_79 = 0; i_79 < 11; i_79 += 2) /* same iter space */
                        {
                            arr_282 [i_65] = ((/* implicit */_Bool) (+(var_8)));
                            arr_283 [i_79] [i_65] [i_66] [i_65] [i_59] = ((/* implicit */unsigned char) arr_262 [i_59] [i_59] [i_59 - 2] [i_59] [i_59 - 2]);
                        }
                        /* LoopSeq 4 */
                        for (short i_80 = 1; i_80 < 10; i_80 += 1) 
                        {
                            var_100 = ((/* implicit */unsigned int) max((var_100), (((/* implicit */unsigned int) ((long long int) var_5)))));
                            var_101 = ((/* implicit */signed char) (+(arr_253 [i_59 - 2] [i_59] [i_59] [i_59] [i_59 - 2] [i_80 + 1])));
                            var_102 ^= arr_281 [(short)4] [i_80] [(unsigned char)10] [(unsigned char)10] [i_80 - 1] [i_80];
                            arr_286 [(unsigned short)3] [i_66] [i_65] [i_73] [i_66] [i_80] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) arr_239 [i_65])))));
                        }
                        for (long long int i_81 = 0; i_81 < 11; i_81 += 4) 
                        {
                            var_103 = ((unsigned char) ((short) var_2));
                            var_104 = ((/* implicit */long long int) (+(((/* implicit */int) arr_244 [i_59] [i_59] [i_66] [i_59] [i_81]))));
                        }
                        for (unsigned short i_82 = 2; i_82 < 9; i_82 += 1) 
                        {
                            arr_293 [i_59] [i_65] [i_66] [i_65] [i_65] = ((/* implicit */short) var_0);
                            var_105 = (~(var_9));
                            arr_294 [i_82 + 1] [i_73] [i_65] [i_65] [i_65] [i_59] = ((/* implicit */unsigned char) arr_289 [i_82 - 2] [i_82 - 2] [i_65] [i_82 - 2]);
                            arr_295 [i_59] [i_66] [i_65] [i_82 + 1] = ((/* implicit */short) ((_Bool) arr_228 [i_65]));
                        }
                        for (int i_83 = 3; i_83 < 10; i_83 += 2) 
                        {
                            var_106 += ((/* implicit */unsigned int) var_7);
                            arr_298 [i_65] [i_65] [i_65] [i_73] [i_83] = ((/* implicit */unsigned char) arr_215 [i_59] [i_59 - 2] [i_59]);
                            arr_299 [i_65] [i_65] [i_73] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_218 [i_59 - 1] [i_59 - 1] [i_83 - 1] [i_73]))));
                            var_107 = ((/* implicit */short) max((var_107), (((/* implicit */short) (-(((/* implicit */int) arr_275 [i_59 - 2] [i_59 + 1] [i_83] [i_83 + 1])))))));
                            var_108 = ((/* implicit */unsigned short) min((var_108), (((/* implicit */unsigned short) ((short) arr_241 [i_59] [i_59 - 1])))));
                        }
                    }
                }
            } 
        } 
    }
    var_109 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (short)-11831)))), (((int) (!(((/* implicit */_Bool) var_3)))))));
    var_110 += ((/* implicit */signed char) min((((/* implicit */long long int) ((short) min((var_9), (var_2))))), (max((((/* implicit */long long int) var_1)), (((long long int) var_10))))));
}
