/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94775
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
    var_12 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            arr_5 [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
            arr_6 [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_1 + 2]);
        }
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (((/* implicit */int) arr_2 [i_2 + 2] [i_2 - 1] [i_2 + 2])) : (((/* implicit */int) arr_3 [i_2 + 2]))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (unsigned char i_4 = 1; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_13 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_4] [i_0] [i_4] [i_4] [i_0]))));
                        var_14 ^= ((/* implicit */unsigned long long int) arr_7 [i_2 + 2] [i_2 + 2]);
                        arr_16 [i_0] [i_3] [i_4 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (var_0)));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) == ((-(16465322554437870681ULL)))));
            var_16 = ((/* implicit */unsigned short) (~(var_11)));
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_5)) : (var_3)));
            arr_20 [i_0] [i_5] = ((/* implicit */signed char) var_1);
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_0))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_10))));
            arr_24 [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_6])) == (((/* implicit */int) arr_23 [i_6]))));
        }
        var_20 = ((/* implicit */unsigned int) (~((~(var_2)))));
    }
    /* vectorizable */
    for (signed char i_7 = 3; i_7 < 15; i_7 += 2) 
    {
        /* LoopSeq 4 */
        for (signed char i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */int) 4026531840U);
            /* LoopSeq 2 */
            for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                var_22 = ((/* implicit */int) var_10);
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 268435456U)) ? (871807668U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)17)))))) >= ((-(16465322554437870673ULL)))));
            }
            for (unsigned int i_10 = 2; i_10 < 13; i_10 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    arr_39 [i_10 + 4] [i_10] [i_10 - 2] [i_10 - 1] [i_7] = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned char)230)))) > (((/* implicit */int) arr_1 [i_7 - 3]))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        arr_42 [i_7] = ((/* implicit */unsigned int) ((_Bool) ((288230376151711743ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                        var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_11] [i_10 - 1] [i_10 - 1] [i_7 - 3] [i_7 - 3] [i_7 - 3]))));
                    }
                    for (signed char i_13 = 1; i_13 < 14; i_13 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_4 [i_7 + 1] [i_7 + 1] [i_7 + 1]))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (arr_13 [i_7] [i_7] [i_7 - 1] [i_7 + 2] [i_7 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (short)-12615))))))));
                    }
                    for (signed char i_14 = 1; i_14 < 14; i_14 += 4) /* same iter space */
                    {
                        arr_47 [i_7] [i_7] [i_10 + 3] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3157747180U)) ? (((/* implicit */int) (signed char)-115)) : (760015201)));
                        arr_48 [i_7] [i_8] [i_8] [i_11] [i_7] = ((/* implicit */unsigned short) (unsigned char)230);
                        var_27 = ((/* implicit */unsigned char) ((arr_46 [i_7 + 1] [i_7] [i_10 + 1]) == (((/* implicit */unsigned int) arr_21 [i_7 - 1] [i_14 + 1]))));
                    }
                }
                arr_49 [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7])))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 2) 
            {
                for (signed char i_16 = 0; i_16 < 17; i_16 += 4) 
                {
                    {
                        arr_56 [i_7] [i_8] [i_15] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_7 - 2] [i_8] [i_15] [i_15] [i_7 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 576460202547609600LL)) ? (((/* implicit */int) arr_34 [i_7] [i_7] [i_7])) : (((/* implicit */int) (signed char)-21))))) : (((((/* implicit */_Bool) (signed char)17)) ? (var_4) : (var_0)))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)22123)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (unsigned short)58948))));
                        var_29 = ((/* implicit */unsigned int) ((arr_45 [i_7 - 2] [i_7 - 1] [i_7 - 1] [i_7 - 2] [i_7 - 1]) >= (((/* implicit */int) var_9))));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) arr_52 [i_7] [i_7 - 1] [i_7 + 2] [i_7 + 2])))))));
        }
        for (signed char i_17 = 0; i_17 < 17; i_17 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (signed char i_19 = 0; i_19 < 17; i_19 += 2) 
                {
                    {
                        var_31 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_19] [i_18] [i_7 - 1]))));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_7] [i_7 - 2] [i_7])) == ((+(((/* implicit */int) arr_60 [i_17]))))));
                        arr_65 [i_7] [i_7 + 2] [i_7] [i_18] [i_19] = ((arr_11 [i_7 + 2] [i_7 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_19] [i_7] [i_7] [i_7 - 1]))) : (var_6));
                        arr_66 [i_19] [i_18] [i_17] [i_19] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7 + 2] [i_7 + 2]))) >= (arr_30 [i_7 + 2] [i_19] [i_7 - 1])));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_20 = 0; i_20 < 17; i_20 += 1) 
            {
                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (~(arr_62 [i_7 + 2] [i_17] [i_17] [i_7 + 2]))))));
                /* LoopSeq 1 */
                for (unsigned int i_21 = 0; i_21 < 17; i_21 += 3) 
                {
                    var_34 = ((/* implicit */signed char) (~(((/* implicit */int) arr_33 [i_7 - 3] [i_7] [i_7] [i_7 - 3]))));
                    var_35 = ((/* implicit */unsigned char) ((((arr_23 [i_7]) ? (arr_61 [i_7] [i_7] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_20] [i_20]))))) / (arr_36 [i_7] [i_7 + 2] [i_7 - 1] [i_7] [i_7 + 2] [i_7])));
                }
            }
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
            {
                arr_77 [i_7] [i_17] [i_22 - 1] = ((/* implicit */signed char) arr_32 [i_7] [i_22 - 1] [i_22 - 1]);
                /* LoopNest 2 */
                for (unsigned long long int i_23 = 1; i_23 < 13; i_23 += 2) 
                {
                    for (signed char i_24 = 0; i_24 < 17; i_24 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */short) (~(((/* implicit */int) var_10))));
                            arr_84 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1981421519271680935ULL)) ? (arr_46 [i_24] [i_7] [i_23 + 3]) : (arr_46 [i_23 + 4] [i_7] [i_23 + 4])));
                        }
                    } 
                } 
                arr_85 [i_7 + 2] [i_7] [i_7] [i_22 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_40 [i_22] [i_22 - 1] [i_22 - 1] [i_22] [i_22 - 1])));
            }
            for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_26 = 1; i_26 < 16; i_26 += 2) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned short) (+(10479960721353367069ULL)));
                            arr_96 [i_7] = ((/* implicit */unsigned short) ((var_11) << (((arr_73 [i_26 - 1] [i_26 - 1] [i_26 - 1] [i_26 - 1] [i_26 + 1]) - (58067413U)))));
                            var_38 = ((/* implicit */signed char) arr_36 [i_7] [i_7 - 1] [i_17] [i_25] [i_26 + 1] [i_27]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                {
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        {
                            var_39 = ((((/* implicit */_Bool) arr_37 [i_7 + 1] [i_25 + 1] [i_28 + 1])) && (((/* implicit */_Bool) arr_37 [i_7 - 1] [i_25 + 1] [i_28 + 1])));
                            var_40 = ((/* implicit */long long int) arr_82 [i_7] [i_25 + 1] [i_7] [i_28] [i_28] [i_28 + 1]);
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_30 = 0; i_30 < 17; i_30 += 3) 
        {
            var_41 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_7 + 2] [i_7 + 2] [i_7 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6)));
            var_42 = ((/* implicit */int) ((arr_102 [i_7] [i_7] [i_7 + 2] [i_7 - 2] [i_7 + 2]) ? (((((/* implicit */_Bool) arr_53 [i_7 - 3] [i_7 - 3] [i_7 - 3] [i_30] [i_7 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_30] [i_30] [i_30] [i_7] [i_7 - 3] [i_7]))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_7 + 1] [i_7 - 1])))));
            arr_106 [i_7] [i_30] = ((/* implicit */int) (short)8188);
        }
        for (unsigned int i_31 = 1; i_31 < 15; i_31 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_32 = 0; i_32 < 17; i_32 += 3) 
            {
                for (unsigned short i_33 = 0; i_33 < 17; i_33 += 3) 
                {
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        {
                            arr_118 [i_7] [(unsigned short)6] [(unsigned short)6] [i_7 + 2] [i_7 - 2] [i_7 + 2] [i_7 + 2] &= ((/* implicit */unsigned int) var_5);
                            arr_119 [i_34] [i_32] [i_7] [i_7] [i_7] [i_7 - 2] [i_7 - 2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25))) == (var_4))))) > (arr_104 [i_7 - 3])));
                        }
                    } 
                } 
            } 
            var_43 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
            /* LoopSeq 1 */
            for (unsigned short i_35 = 0; i_35 < 17; i_35 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_36 = 0; i_36 < 17; i_36 += 3) 
                {
                    var_44 = (~(((((/* implicit */int) arr_92 [i_31 + 2] [i_31 + 1])) >> (((((/* implicit */int) (unsigned short)3968)) - (3948))))));
                    var_45 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -1893355146)) >= (var_11)));
                }
                for (unsigned short i_37 = 0; i_37 < 17; i_37 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_38 = 0; i_38 < 17; i_38 += 3) 
                    {
                        arr_130 [i_7] [i_37] [i_31] [i_35] [i_31] [i_7] = ((/* implicit */signed char) ((arr_97 [i_7 - 2] [i_31] [i_7] [i_37]) && (((/* implicit */_Bool) (-(arr_63 [i_7] [i_7 + 1] [i_7] [i_35] [i_7] [i_38]))))));
                        var_46 = ((/* implicit */int) ((((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_11))) << (((((/* implicit */int) var_10)) - (77)))));
                        arr_131 [i_7] [i_7] [i_7 - 1] [i_7 - 3] [i_7] [i_7] [i_7 + 2] = ((/* implicit */long long int) ((arr_97 [i_7 - 2] [i_7 - 1] [i_7] [i_31 - 1]) || (((/* implicit */_Bool) var_9))));
                    }
                    var_47 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_103 [i_31] [i_35] [(unsigned short)4])) ? (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) arr_7 [i_31 - 1] [i_35]))));
                }
                for (signed char i_39 = 0; i_39 < 17; i_39 += 2) 
                {
                    var_48 = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6582))) | (3423159601U)))));
                    arr_134 [i_7] [i_31 + 1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)6)) && (((/* implicit */_Bool) arr_74 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 2]))));
                    /* LoopSeq 1 */
                    for (short i_40 = 1; i_40 < 14; i_40 += 3) 
                    {
                        var_49 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)255))));
                        var_50 = ((/* implicit */long long int) var_7);
                    }
                }
                /* LoopSeq 2 */
                for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_42 = 0; i_42 < 17; i_42 += 3) 
                    {
                        arr_142 [i_7] [i_31 + 2] [i_31 + 2] [i_7] [i_42] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_8) : (var_8)));
                        arr_143 [i_42] [i_7] [i_7] = ((/* implicit */signed char) ((arr_97 [i_42] [i_7] [i_7] [i_7 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_97 [i_7] [i_7] [i_7] [i_42]))) : (3157747198U)));
                        var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (536870911) : (((/* implicit */int) arr_11 [i_31 + 2] [i_31 - 1]))));
                        var_52 = ((((/* implicit */_Bool) var_6)) ? (arr_113 [i_7] [i_7 + 2] [i_7 - 1] [i_7]) : (arr_113 [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_7 - 3]));
                    }
                    arr_144 [i_7 - 3] [i_7] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 63)))))));
                    arr_145 [i_31 + 2] [i_31 - 1] [i_31 + 1] [i_31 - 1] [i_7] [i_31 + 1] = ((/* implicit */long long int) ((arr_34 [i_7] [i_31 + 2] [i_35]) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_108 [i_7])))))) : ((-(var_6)))));
                }
                for (unsigned int i_43 = 0; i_43 < 17; i_43 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_44 = 0; i_44 < 17; i_44 += 1) 
                    {
                        arr_151 [i_7] [i_31 + 1] [i_35] [i_43] [i_44] = ((/* implicit */int) var_10);
                        var_53 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)31887))))) ? (arr_107 [i_31 + 1] [i_43]) : ((-(((/* implicit */int) arr_150 [i_44] [i_43] [i_43] [i_43]))))));
                    }
                    arr_152 [i_7] [i_35] [i_31] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_31 + 2] [i_31 + 2])) ? (arr_7 [i_31 + 2] [i_31 + 2]) : (((/* implicit */int) arr_37 [i_31 + 1] [i_31 - 1] [i_31 + 2]))));
                    /* LoopSeq 1 */
                    for (short i_45 = 2; i_45 < 15; i_45 += 3) 
                    {
                        var_54 = ((/* implicit */unsigned char) (_Bool)1);
                        arr_156 [i_31] [i_31] [i_7] [i_43] [i_45 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_89 [i_7])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)192)) ? (arr_88 [i_7] [i_7] [i_7] [i_7]) : (var_8)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (7845161499503549318ULL)))));
                    }
                }
            }
        }
        var_55 = ((/* implicit */unsigned int) ((1311173677) % (-74)));
        /* LoopNest 2 */
        for (long long int i_46 = 2; i_46 < 15; i_46 += 1) 
        {
            for (signed char i_47 = 0; i_47 < 17; i_47 += 3) 
            {
                {
                    var_56 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53146)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) : (18014398509481856LL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_7] [i_7] [i_7]))))) : (((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */unsigned long long int) var_4)) : (var_11)))));
                    var_57 = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_7 - 2] [i_7 - 2] [i_46 + 1])) != (((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) >= (var_11))))));
                }
            } 
        } 
        arr_162 [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_101 [i_7 - 1]))));
    }
}
