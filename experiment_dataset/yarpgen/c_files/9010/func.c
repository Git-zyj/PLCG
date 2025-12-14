/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9010
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [(unsigned char)8] |= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])), (arr_7 [i_1 + 1] [(_Bool)1] [i_1 - 1] [i_1 + 1])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)21166)), (4294967295U)))) : (((((/* implicit */unsigned long long int) 4875748729855499555LL)) + (arr_5 [i_1 + 1] [i_2] [i_2]))));
                    /* LoopSeq 1 */
                    for (short i_3 = 3; i_3 < 24; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_7 [i_3 - 2] [i_0] [5ULL] [i_3 - 1])) / (((((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_2] [i_3 + 1])) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 - 1])))));
                        arr_11 [i_0] [i_1 + 1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) var_3);
                    }
                    /* LoopSeq 4 */
                    for (short i_4 = 2; i_4 < 24; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */short) arr_6 [i_0]);
                            arr_17 [12U] [i_0] [i_2] [i_0] [10U] = ((/* implicit */unsigned int) var_15);
                            var_22 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((arr_7 [i_4 + 1] [i_4] [i_4] [i_4]), (arr_7 [i_4 - 1] [i_4] [i_2] [i_5])))), (((((/* implicit */_Bool) 4430983197264365697LL)) ? (((/* implicit */unsigned long long int) 2281560185U)) : (16059795026358367762ULL)))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (min((((/* implicit */unsigned int) arr_10 [i_0] [i_0])), (0U)))))) ? ((-(max((var_19), (((/* implicit */unsigned int) var_7)))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((-5501947003639135548LL) != (((/* implicit */long long int) ((/* implicit */int) var_6))))), ((!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_4 - 2] [i_5]))))))))));
                        }
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_1)))) + (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_4 - 2] [(_Bool)1] [i_4] [i_4 + 1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96))))) : (((/* implicit */unsigned long long int) ((((var_16) / (((/* implicit */int) (unsigned short)29303)))) * ((~(((/* implicit */int) arr_4 [i_2] [i_1] [i_0])))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_6])) ? (var_8) : (((/* implicit */long long int) arr_19 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1]))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_2])) ? (arr_10 [i_1 + 1] [i_6]) : (arr_10 [i_1 + 1] [i_1 + 1])));
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 1; i_7 < 23; i_7 += 2) 
                        {
                            arr_23 [i_0] [i_0] [i_2] [i_7 + 1] = ((/* implicit */unsigned int) (~(arr_9 [i_0] [i_7 + 2])));
                            arr_24 [i_0] [0LL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (-4875748729855499555LL) : (((/* implicit */long long int) ((((/* implicit */int) var_13)) / (arr_6 [i_0]))))));
                            var_27 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_19))));
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 1) 
                        {
                            arr_27 [i_0] [i_1] [i_2] [i_6] [i_0] = ((/* implicit */_Bool) arr_9 [i_0] [i_0]);
                            var_28 = ((/* implicit */short) (~(arr_21 [i_0] [i_8 + 3] [i_0] [i_0] [i_8])));
                            arr_28 [i_0] = ((/* implicit */unsigned int) arr_1 [i_2]);
                            arr_29 [i_0] [(short)9] [i_2] = ((/* implicit */short) ((signed char) (-(-4875748729855499555LL))));
                            var_29 ^= ((/* implicit */unsigned int) -4430983197264365697LL);
                        }
                        /* LoopSeq 3 */
                        for (short i_9 = 1; i_9 < 22; i_9 += 1) 
                        {
                            arr_33 [i_9] [i_0] [i_2] [i_6] [i_9] = ((/* implicit */unsigned long long int) ((arr_21 [i_9 + 3] [i_1 + 1] [i_2] [(unsigned short)5] [i_9]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_9 + 2])))));
                            arr_34 [13ULL] [13ULL] [i_0] [13ULL] [i_1 + 1] [i_0] [i_9 - 1] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) < (arr_31 [i_9 + 1] [i_9 + 2] [i_6] [i_1] [i_1 + 1])));
                            arr_35 [(_Bool)1] [(_Bool)1] [10] [i_6] [i_9 - 1] &= ((/* implicit */unsigned int) arr_3 [i_0]);
                            arr_36 [2LL] [i_1 - 1] [i_0] [i_6] [3LL] = ((/* implicit */unsigned long long int) (-(arr_16 [i_0] [i_1 - 1] [i_2] [i_2] [i_9 + 2])));
                            var_30 = ((long long int) var_19);
                        }
                        for (int i_10 = 2; i_10 < 23; i_10 += 2) 
                        {
                            arr_40 [i_0] [i_0] [5U] [17U] [i_0] [i_0] = ((/* implicit */short) ((unsigned int) (~(1517802390U))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((((/* implicit */_Bool) (short)21166)) ? (arr_13 [i_2] [i_1 - 1] [i_10] [i_10] [i_2]) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))));
                            arr_41 [(unsigned char)20] [i_0] [i_2] [i_0] [(unsigned char)20] = ((/* implicit */short) arr_3 [i_10]);
                            var_32 -= ((/* implicit */unsigned int) ((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) var_17);
                            var_34 = (~(((((/* implicit */_Bool) arr_32 [i_6] [i_1] [23U] [i_6] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [4ULL])))));
                            var_35 ^= ((((var_1) && ((_Bool)0))) ? (arr_7 [(unsigned short)6] [i_11] [i_6] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((13830070790934566342ULL) < (((/* implicit */unsigned long long int) 4430983197264365697LL)))))));
                        }
                        arr_44 [i_0] [13ULL] [i_1] [i_0] = ((/* implicit */signed char) ((arr_16 [i_0] [i_1] [i_2] [i_6] [i_6]) >= (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1]))));
                    }
                    for (short i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        arr_47 [i_0] [i_0] = ((/* implicit */short) (signed char)56);
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 3; i_13 < 22; i_13 += 3) 
                        {
                            arr_51 [i_13] [i_13 + 3] [i_0] [i_13] [24U] [11U] [i_13] = ((/* implicit */long long int) (-(((/* implicit */int) arr_37 [i_0] [i_1 - 1] [i_1] [i_2] [i_13] [(unsigned char)11]))));
                            var_36 = ((/* implicit */unsigned long long int) var_6);
                        }
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                        {
                            var_37 += ((/* implicit */short) 1646950443U);
                            var_38 = ((/* implicit */long long int) var_14);
                            var_39 = ((/* implicit */long long int) arr_13 [i_0] [i_1] [i_2] [i_1] [i_14 + 1]);
                            arr_56 [i_0] [i_1 - 1] [i_0] [i_12] [i_1 - 1] [i_12] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (~(576460752301326336ULL)))) ? (((/* implicit */unsigned int) arr_39 [19U] [i_14] [i_14 + 1] [i_14 + 1] [i_2] [i_1 - 1])) : (3446238336U))));
                        }
                        var_40 -= arr_50 [i_0] [2U];
                        var_41 = (+(((((/* implicit */int) arr_0 [i_0])) + (0))));
                    }
                    /* vectorizable */
                    for (unsigned short i_15 = 0; i_15 < 25; i_15 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 1; i_16 < 22; i_16 += 2) 
                        {
                            var_42 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_16] [i_16 + 2] [i_16] [i_16 + 1] [i_16 + 2] [i_16 + 2] [i_16])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))));
                            var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1 + 1] [i_16 - 1] [i_0] [i_16])) ? (arr_16 [i_1] [i_1 + 1] [i_16 + 1] [i_15] [i_16 + 1]) : (((/* implicit */int) arr_54 [i_1 + 1] [i_1 + 1] [i_15] [i_15] [i_16]))));
                            arr_62 [i_0] [4LL] [i_2] [i_15] [14ULL] &= ((/* implicit */unsigned long long int) (~(arr_39 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_16] [i_2] [i_16 + 3])));
                        }
                        var_44 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
                    }
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_17 = 1; i_17 < 24; i_17 += 2) 
                {
                    arr_67 [i_0] [i_17] = ((/* implicit */unsigned long long int) (_Bool)0);
                    /* LoopNest 2 */
                    for (signed char i_18 = 1; i_18 < 23; i_18 += 1) 
                    {
                        for (unsigned long long int i_19 = 1; i_19 < 23; i_19 += 2) 
                        {
                            {
                                arr_73 [i_0] = ((/* implicit */short) max((min((arr_50 [i_18 + 1] [i_0]), (((/* implicit */unsigned int) var_17)))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_17)))))));
                                var_45 = ((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_1] [i_17] [i_18] [i_18] [(signed char)15]);
                            }
                        } 
                    } 
                    arr_74 [i_0] [0ULL] [(_Bool)1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 72943648)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)0)))) % ((((_Bool)1) ? (((/* implicit */int) arr_70 [i_0])) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (short i_20 = 0; i_20 < 25; i_20 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_21 = 2; i_21 < 24; i_21 += 4) 
                        {
                            arr_80 [i_17] [(unsigned short)18] [i_17] [i_17] [i_0] = ((/* implicit */signed char) ((((unsigned long long int) arr_22 [(_Bool)1] [i_1] [i_1] [i_20] [i_21])) % (((/* implicit */unsigned long long int) ((int) arr_66 [i_0] [i_0] [i_0] [i_20])))));
                            arr_81 [i_0] [i_0] [i_17] [i_20] [i_0] = ((/* implicit */short) ((var_15) != (var_16)));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_22 = 3; i_22 < 22; i_22 += 4) 
                        {
                            var_46 = ((((/* implicit */_Bool) arr_68 [i_0] [i_1 + 1] [(short)7] [i_0])) ? (((/* implicit */unsigned int) 4193280)) : (arr_68 [i_0] [i_1 + 1] [i_17 + 1] [i_0]));
                            arr_85 [i_0] [(_Bool)1] [i_20] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_1 + 1] [i_1] [i_20] [i_0]))) / (arr_69 [i_17] [i_17] [(unsigned short)14]))) * (((/* implicit */unsigned int) ((var_15) / (var_16))))));
                            var_47 = ((/* implicit */unsigned char) arr_14 [i_0] [i_17] [i_17] [i_0] [i_17 - 1]);
                            var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_78 [i_0] [i_0] [i_17 + 1] [i_20] [i_20] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_13 [i_22 - 3] [15ULL] [i_17] [12LL] [i_0])));
                        }
                    }
                }
                for (long long int i_23 = 0; i_23 < 25; i_23 += 4) 
                {
                    arr_88 [3ULL] [i_0] [i_23] = ((/* implicit */unsigned int) min(((((((_Bool)1) ? (4193275) : (0))) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) + (-2LL))) != (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))))))));
                    var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) var_7))));
                    /* LoopSeq 3 */
                    for (unsigned int i_24 = 1; i_24 < 24; i_24 += 3) 
                    {
                        var_50 = ((/* implicit */unsigned long long int) (+((~(var_8)))));
                        var_51 = ((/* implicit */unsigned long long int) arr_59 [i_0] [i_1 + 1] [i_1] [i_1]);
                    }
                    for (unsigned long long int i_25 = 2; i_25 < 24; i_25 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (int i_26 = 1; i_26 < 24; i_26 += 2) 
                        {
                            var_52 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) != (arr_60 [i_0] [i_1] [i_0] [i_0] [23U] [i_26 - 1])));
                            arr_100 [i_0] [i_0] [i_0] [i_0] [i_25] [i_26 - 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_10 [i_0] [i_1])) + (2130648341U)))) >= (((unsigned long long int) arr_9 [i_0] [i_0])))))));
                            arr_101 [i_26] [i_25] [i_0] [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) (+((((+(2359837192692401941LL))) + (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0] [i_26] [i_26] [i_26] [i_26 + 1] [i_26])))))));
                        }
                        for (unsigned short i_27 = 0; i_27 < 25; i_27 += 1) /* same iter space */
                        {
                            arr_104 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned int) var_9));
                            var_53 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) var_0)))));
                            arr_105 [i_0] [i_0] [i_23] = ((/* implicit */unsigned long long int) (!((!(var_12)))));
                        }
                        for (unsigned short i_28 = 0; i_28 < 25; i_28 += 1) /* same iter space */
                        {
                            var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_42 [i_0] [i_1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_107 [i_28] [i_28] [i_25] [i_23] [i_1] [i_0] [i_0]))))) >= (min((((/* implicit */unsigned long long int) arr_66 [i_28] [i_1] [i_1] [i_0])), (0ULL)))))) : ((-(((/* implicit */int) ((((/* implicit */int) arr_93 [i_23] [i_0])) != (((/* implicit */int) var_13))))))))))));
                            var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) 4430983197264365697LL))));
                            arr_109 [i_0] [i_0] = ((/* implicit */_Bool) arr_102 [i_23] [i_1] [i_25 - 1] [i_1 - 1] [i_28] [i_0] [i_25 - 1]);
                        }
                        for (unsigned short i_29 = 0; i_29 < 25; i_29 += 1) /* same iter space */
                        {
                            arr_112 [23ULL] [i_0] [i_23] [i_25] [23ULL] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) arr_69 [i_25 - 2] [i_25 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_84 [i_0] [i_25 + 1] [24U] [i_25 - 1] [i_0])) : (((/* implicit */int) arr_84 [i_0] [i_25 - 2] [i_25] [i_25 + 1] [i_0]))))));
                            arr_113 [i_0] = ((((/* implicit */_Bool) arr_95 [i_25 + 1] [i_1 - 1] [23U] [i_1] [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) (+(((/* implicit */int) var_3))))));
                        }
                        arr_114 [i_0] [17U] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (max((var_8), (((/* implicit */long long int) arr_59 [i_0] [i_1 + 1] [i_23] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_59 [i_0] [i_1] [i_23] [i_25 + 1]) < (arr_59 [i_0] [i_23] [i_1 - 1] [i_0])))))));
                    }
                    for (int i_30 = 0; i_30 < 25; i_30 += 3) 
                    {
                        var_56 += ((/* implicit */_Bool) (((~((+(((/* implicit */int) var_9)))))) - (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_31 = 1; i_31 < 24; i_31 += 2) 
                        {
                            var_57 += ((/* implicit */_Bool) arr_90 [i_0] [i_0] [i_0] [i_0]);
                            var_58 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)11627)), (arr_50 [i_0] [i_23])))) ? (2130648341U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))));
                            arr_123 [i_0] [i_1] [i_23] [i_23] [i_31] = ((/* implicit */unsigned int) min((min((arr_53 [i_1 + 1] [i_31 + 1] [i_1]), (arr_53 [i_1 + 1] [i_31 - 1] [i_23]))), (((/* implicit */unsigned long long int) ((unsigned int) arr_53 [i_1 - 1] [i_31 + 1] [i_23])))));
                        }
                    }
                }
                for (unsigned short i_32 = 0; i_32 < 25; i_32 += 2) 
                {
                    arr_127 [i_0] = ((/* implicit */unsigned int) var_15);
                    var_59 = ((/* implicit */unsigned char) (~(2359837192692401941LL)));
                    var_60 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((((((((/* implicit */int) arr_95 [i_32] [i_32] [i_32] [24ULL] [i_1 - 1] [i_0])) + (2147483647))) >> (((((arr_38 [i_0] [i_0]) ? (var_18) : (((/* implicit */unsigned long long int) var_19)))) - (1136121121ULL))))) - (524253)))));
                }
            }
        } 
    } 
    var_61 = ((/* implicit */unsigned int) min((var_61), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_3)))) + ((~(((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) (short)11626)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16732742746854530195ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22137))))))));
}
