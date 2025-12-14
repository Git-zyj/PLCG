/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91786
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
    var_14 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) (unsigned short)65278)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) var_2)))), ((+(var_0)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                var_15 = ((/* implicit */signed char) ((arr_2 [i_0] [i_1]) + (((/* implicit */unsigned long long int) 9223372036854775801LL))));
                arr_6 [i_1] |= ((/* implicit */unsigned char) (-(arr_3 [i_0])));
                /* LoopNest 2 */
                for (long long int i_3 = 4; i_3 < 8; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        {
                            arr_12 [i_4] [i_4] [i_2] [(unsigned short)0] [i_2] [i_3] [(unsigned char)8] = ((/* implicit */unsigned long long int) -1776869952);
                            arr_13 [i_0] [i_1] [i_4] [(signed char)9] [4ULL] = ((/* implicit */unsigned long long int) (+(var_0)));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] [9LL] = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
            }
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    var_16 = ((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) ((unsigned short) arr_3 [5LL]))) : (((/* implicit */int) var_13))));
                    var_17 |= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65289)) >> (((((/* implicit */int) var_6)) - (118)))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_23 [i_5] [i_1] [i_5] [i_6] [i_7] [(unsigned char)7] = ((/* implicit */_Bool) var_7);
                        arr_24 [i_0] [i_5] [i_5] [5ULL] [5ULL] = ((/* implicit */unsigned long long int) 4086544311U);
                        arr_25 [i_5] [i_1] [i_1] [9LL] = ((((-9223372036854775806LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_6)) - (101))));
                    }
                    arr_26 [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((unsigned char) 11ULL));
                    var_18 = ((/* implicit */unsigned long long int) ((2844352252839325048ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (-7127264654900621088LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(signed char)6] [i_0] [i_0])))));
                    var_20 |= ((/* implicit */unsigned long long int) (~(var_9)));
                    arr_30 [i_5] = ((/* implicit */unsigned long long int) ((439461953U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                }
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        arr_36 [i_0] [i_1] [i_0] [(_Bool)1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) var_12);
                        arr_37 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9] [i_9] [i_5] [i_5] [i_1] [i_0]))) / (-9223372036854775801LL)));
                    }
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        arr_40 [i_0] [(short)9] [i_5] [(_Bool)1] [i_11] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((15455446416492187424ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_5] [i_9] [i_9]))))))))));
                    }
                    var_22 = ((/* implicit */signed char) (_Bool)1);
                }
                arr_41 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_0] [i_0] [i_5] [i_5])) == (-1509150747)));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        {
                            arr_47 [i_5] = ((/* implicit */unsigned short) var_1);
                            arr_48 [i_0] [i_0] [i_1] [i_0] [i_12] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 12175363184245225966ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (16705413927222051553ULL)));
                        }
                    } 
                } 
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_23 = ((_Bool) (unsigned char)167);
                /* LoopSeq 3 */
                for (unsigned char i_15 = 2; i_15 < 8; i_15 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_16 = 2; i_16 < 7; i_16 += 2) 
                    {
                        arr_55 [i_14] [i_1] [i_16] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((16705413927222051553ULL) * (((/* implicit */unsigned long long int) arr_38 [(signed char)1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_7 [9LL] [9LL] [i_15] [i_15 - 2])));
                        arr_56 [i_16 + 2] [1] [8ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_7)) <= (((((/* implicit */_Bool) (signed char)-64)) ? (3023720518153566264ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125)))))));
                        arr_57 [i_0] [i_15] [i_15] = (-(var_9));
                    }
                    var_24 = ((/* implicit */unsigned short) (-((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_0] [i_0] [i_1] [i_14] [i_0]))) : (var_4)))));
                    arr_58 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(0ULL)))) ? ((+(((/* implicit */int) arr_46 [i_0] [9ULL] [i_14] [i_15 - 2] [i_15] [i_15])))) : ((-(-749348639)))));
                    arr_59 [i_0] [i_0] [0ULL] [i_15] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 68087421373388836ULL))));
                }
                for (unsigned char i_17 = 2; i_17 < 8; i_17 += 4) /* same iter space */
                {
                    var_25 |= ((/* implicit */unsigned int) arr_11 [i_0] [i_17 - 1] [i_1] [i_17 - 1]);
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (arr_9 [i_0] [i_1] [i_17 - 1] [i_17] [i_0]) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (int i_18 = 0; i_18 < 10; i_18 += 1) 
                    {
                        var_27 = ((/* implicit */int) var_4);
                        var_28 = (-(((/* implicit */int) (signed char)49)));
                        var_29 = arr_33 [i_0] [i_1] [i_18] [(unsigned char)5] [i_14] [i_17] [(unsigned char)5];
                    }
                    for (long long int i_19 = 0; i_19 < 10; i_19 += 2) 
                    {
                        var_30 = ((/* implicit */int) (!((!(((/* implicit */_Bool) 209373094))))));
                        arr_69 [i_0] [i_1] [i_14] [i_17 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) -4)) ? (((unsigned long long int) -309196503)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_17 + 1] [i_17 - 1] [i_17 + 2] [i_17 - 1] [i_17 + 1] [i_17])))));
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >= (((((/* implicit */int) var_5)) << (((arr_54 [2] [i_14] [i_19]) - (6575966755253942054LL)))))));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) && (((/* implicit */_Bool) 15734763912008445948ULL))));
                    }
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42447))) % (arr_19 [i_17 + 2] [i_1] [(unsigned char)5] [i_17])));
                }
                for (unsigned int i_20 = 2; i_20 < 8; i_20 += 1) 
                {
                    var_34 = ((/* implicit */int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_21 = 2; i_21 < 7; i_21 += 3) 
                    {
                        arr_75 [i_0] [i_0] [i_1] [i_14] [i_20] [i_20] [i_21] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_20 - 2] [i_21 + 1] [i_21]))));
                        var_35 = ((/* implicit */signed char) arr_34 [i_21] [4U] [i_20] [i_20] [i_1] [i_0]);
                    }
                }
                var_36 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)255))));
                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14339932116683746136ULL)) ? (-259669756666789240LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775795LL)) ? (((/* implicit */int) (unsigned short)65278)) : (2123327190)))) : (-9223372036854775802LL)));
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (signed char i_23 = 0; i_23 < 10; i_23 += 2) 
                    {
                        {
                            arr_81 [i_0] [(unsigned short)9] [i_0] [i_14] = ((/* implicit */long long int) ((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30)))));
                            arr_82 [(_Bool)1] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_61 [(_Bool)1] [i_0] [i_14] [i_22])) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_53 [i_0] [8ULL] [2LL] [i_22] [(unsigned char)3])) : ((+(((/* implicit */int) var_12))))));
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_8)) ? (-2147483644) : (((/* implicit */int) (signed char)-121))))));
                            var_39 = ((/* implicit */short) ((((((/* implicit */int) var_5)) << (((var_9) - (7934830241717251021LL))))) * (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_64 [i_0] [i_1] [i_1] [i_1] [i_22] [(unsigned char)6])))))));
                            var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (18393817234575785562ULL)))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (signed char i_24 = 0; i_24 < 10; i_24 += 1) 
            {
                for (int i_25 = 1; i_25 < 9; i_25 += 1) 
                {
                    {
                        arr_90 [6U] [6U] [i_25] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((13513793395021656615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))))))) : (18446744073709551615ULL)));
                        var_41 = ((/* implicit */long long int) ((32767) <= ((~(((/* implicit */int) var_1))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                for (signed char i_27 = 3; i_27 < 9; i_27 += 2) 
                {
                    {
                        arr_95 [(unsigned char)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_61 [i_27 - 1] [i_27 - 3] [i_27 + 1] [i_27 - 3])) ? (((/* implicit */int) arr_61 [i_27 - 3] [i_27 + 1] [i_27 + 1] [i_27 - 3])) : (((/* implicit */int) var_1))));
                        arr_96 [i_0] [i_27] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2123327190)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-27))) : (var_9)))) + (((unsigned long long int) var_10))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (signed char i_28 = 1; i_28 < 6; i_28 += 4) 
        {
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_31 = 0; i_31 < 10; i_31 += 2) 
                        {
                            var_42 |= ((/* implicit */signed char) ((arr_22 [(unsigned short)3] [i_28] [i_29] [i_30] [i_30] [i_28] [i_31]) * (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            arr_105 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))) : (1030792151040LL)));
                            var_43 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_0] [i_28] [i_29] [(unsigned short)8] [i_31] [i_0])))));
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned char i_32 = 0; i_32 < 10; i_32 += 2) 
                        {
                            var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (12884857028350308397ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                            var_46 |= ((/* implicit */unsigned int) arr_35 [i_0] [(_Bool)1] [(_Bool)1] [i_29] [i_0]);
                            arr_108 [(short)0] [i_28] [i_29] [i_30] [6] [i_29] [i_32] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                            arr_109 [(_Bool)1] [i_30] [i_30] [i_29] [i_29] [i_28 - 1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4932950678687894999ULL)) && (((/* implicit */_Bool) 1449251083)))) ? (((/* implicit */int) arr_10 [i_0] [i_28] [i_29] [i_28 + 1] [i_32] [i_30])) : (((((/* implicit */_Bool) 5663636318006025700ULL)) ? (((/* implicit */int) (_Bool)1)) : (520093696)))));
                        }
                        for (signed char i_33 = 0; i_33 < 10; i_33 += 1) 
                        {
                            arr_114 [i_0] [i_28] [i_29] [(unsigned char)7] [i_30] [i_33] = ((/* implicit */int) var_4);
                            arr_115 [i_0] [i_28 + 2] [i_29] [i_0] [i_0] = ((/* implicit */int) var_3);
                        }
                        arr_116 [i_0] [i_28] [(unsigned char)6] [i_28] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_102 [i_28] [i_30])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5))))));
                    }
                } 
            } 
        } 
        arr_117 [i_0] = var_3;
    }
    /* LoopNest 3 */
    for (signed char i_34 = 1; i_34 < 17; i_34 += 2) 
    {
        for (unsigned char i_35 = 0; i_35 < 18; i_35 += 2) 
        {
            for (int i_36 = 0; i_36 < 18; i_36 += 1) 
            {
                {
                    arr_125 [i_34] [i_34] [i_36] [i_36] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                    arr_126 [i_34] [i_34] [i_35] [i_34] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_122 [i_34] [(short)12] [i_34 + 1])) ? (arr_122 [i_34] [i_34] [i_34 - 1]) : (arr_122 [i_34] [i_34] [i_34 + 1])))) ? (((var_9) / (arr_122 [i_34 - 1] [(signed char)11] [i_34 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_122 [i_34] [i_34] [i_34 - 1]) != (arr_122 [(unsigned char)4] [i_34 - 1] [i_34 - 1])))))));
                }
            } 
        } 
    } 
}
