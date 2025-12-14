/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55810
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
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0 - 1] = ((((/* implicit */_Bool) ((unsigned int) min((1975858982U), (128U))))) ? ((+(min((3U), (4278190080U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 3U)) ? (4294967167U) : (121U))) > (4294967293U))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_10 *= (+(var_2));
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 4; i_4 < 15; i_4 += 1) 
                        {
                            var_11 = ((unsigned int) arr_0 [i_4 + 3]);
                            arr_13 [7U] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1574593512U))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967281U)) ? (var_7) : (arr_10 [i_0] [6U] [i_0] [i_0] [i_0])))))))));
                            arr_18 [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((unsigned int) arr_1 [i_0 - 1]);
                            arr_19 [11U] = (-(arr_15 [i_0 - 2] [i_0 - 3] [i_2] [i_3] [i_5] [i_5] [i_2]));
                            var_13 = ((/* implicit */unsigned int) max((var_13), ((~(arr_0 [i_0 + 1])))));
                            arr_20 [i_0] [14U] [i_0] [11U] [i_0] = ((unsigned int) ((633683999U) / (96U)));
                        }
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
                        {
                            arr_23 [i_0 - 2] = ((((/* implicit */_Bool) 904184285U)) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 - 2]));
                            arr_24 [i_0] [i_2] [i_2] [i_3] [i_2] = ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 - 1] [i_0])) ? (arr_8 [i_0] [2U] [i_0 + 1] [i_0 - 3]) : (63U));
                            var_14 = (+(arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]));
                            arr_25 [15U] [1U] [i_2] [i_2] = ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [8U] [8U])) ? (arr_1 [i_0 - 2]) : (((((/* implicit */_Bool) var_7)) ? (var_5) : (102U))));
                            var_15 += ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 1104743349U)) ? (arr_1 [i_0 - 1]) : (var_1))) : (((((/* implicit */_Bool) var_3)) ? (4068131078U) : (96U))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                        {
                            arr_28 [i_0] [i_3] [i_2] [i_1] [i_7] [i_1] = 4U;
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) (~(arr_21 [i_2] [i_2] [i_2] [4U] [16U] [18U])))) ? (arr_15 [i_0] [14U] [i_0] [i_0 - 3] [i_0] [i_0 - 1] [i_0 - 3]) : (((3168131367U) * (4294967292U)))))));
                            arr_29 [i_0] [i_1] [i_1] [i_3] [i_0] = ((((/* implicit */_Bool) ((var_2) << (16U)))) ? (arr_9 [i_3] [i_0 + 1] [i_2] [i_3] [i_3] [i_3]) : (((((/* implicit */_Bool) 1740655358U)) ? (2885146019U) : (var_1))));
                            arr_30 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 2] = ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [5U]) : (arr_11 [i_0] [i_0] [i_3]));
                        }
                        var_17 = ((1611628977U) & (975495188U));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        arr_34 [i_8] [i_8] [i_8] [i_8] = ((unsigned int) arr_33 [i_8] [i_0] [i_0 + 1] [i_0 - 1]);
                        var_18 = ((unsigned int) (-(2U)));
                    }
                    for (unsigned int i_9 = 2; i_9 < 18; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_10 = 3; i_10 < 17; i_10 += 1) 
                        {
                            var_19 = arr_35 [i_0] [i_0 + 1] [i_9];
                            var_20 = arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0];
                        }
                        arr_40 [i_9] = var_9;
                        var_21 = ((unsigned int) 4294967289U);
                    }
                    var_22 = ((arr_37 [i_2]) ^ (min((((unsigned int) var_4)), (((((/* implicit */_Bool) arr_31 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0])) ? (5U) : (var_3))))));
                    arr_41 [i_0] [i_0] [6U] [i_0] = ((min((((((/* implicit */_Bool) var_7)) ? (var_6) : (var_9))), ((~(var_9))))) % ((((-(10U))) - (var_9))));
                }
                /* vectorizable */
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    var_23 &= ((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 2] [i_0 - 2] [18U])) ? (var_0) : (arr_8 [i_11] [i_1] [i_11] [i_0 - 1]));
                    arr_44 [i_0] [i_0 - 2] [i_0] = (+(arr_38 [6U] [6U] [i_0 - 3] [i_0 + 1]));
                }
                /* LoopSeq 1 */
                for (unsigned int i_12 = 2; i_12 < 18; i_12 += 3) 
                {
                    var_24 += 3944846135U;
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 19; i_14 += 2) 
                        {
                            {
                                arr_54 [14U] [i_1] [i_1] [i_1] [i_12] [i_1] = max((4020195400U), (1914972173U));
                                arr_55 [i_0 + 1] [i_1] [i_1] [i_13] [i_1] &= 8U;
                                var_25 = ((/* implicit */unsigned int) ((((var_2) / (1477834732U))) == (((((/* implicit */_Bool) var_0)) ? (arr_51 [i_12 + 1] [i_0 - 2] [i_13] [i_12 + 1] [i_12]) : (arr_51 [i_12 + 1] [i_0 - 3] [i_12] [i_12 + 1] [i_12])))));
                                var_26 += ((unsigned int) ((1687328211U) - (max((660702387U), (arr_16 [i_0] [i_1] [i_12 - 1] [i_0] [i_14] [i_12])))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                for (unsigned int i_15 = 0; i_15 < 19; i_15 += 4) 
                {
                    var_27 = 4068131078U;
                    var_28 = ((((/* implicit */_Bool) (+(((unsigned int) 565435694U))))) ? (((((((/* implicit */_Bool) var_4)) ? (1319127943U) : (arr_53 [3U] [i_15] [i_15] [i_0 + 1] [i_0]))) - (min((arr_27 [i_0] [i_1] [i_1] [i_0 - 1] [18U] [i_1]), (603304948U))))) : (max((((unsigned int) var_3)), (((unsigned int) 4154650063U)))));
                    var_29 |= var_5;
                }
                for (unsigned int i_16 = 0; i_16 < 19; i_16 += 1) 
                {
                    var_30 = (-(max((arr_31 [7U] [10U] [i_16] [10U] [i_0 + 1] [8U]), (((((/* implicit */_Bool) var_7)) ? (var_1) : (3414203274U))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 0; i_17 < 19; i_17 += 4) 
                    {
                        var_31 = ((unsigned int) min((min((var_1), (arr_4 [i_0 - 1]))), (((/* implicit */unsigned int) ((180142845U) > (3765310763U))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_18 = 0; i_18 < 19; i_18 += 2) 
                        {
                            var_32 += var_1;
                            arr_70 [i_0] [i_1] [i_16] [i_17] [i_18] [i_16] = ((unsigned int) var_4);
                            var_33 = min((((((/* implicit */_Bool) arr_62 [i_0 - 2])) ? (2594343857U) : (var_3))), (max((((unsigned int) var_7)), (((/* implicit */unsigned int) ((arr_21 [i_1] [i_1] [i_16] [i_16] [i_17] [i_18]) >= (2222754928U)))))));
                            var_34 = ((/* implicit */unsigned int) max((var_34), (3286400326U)));
                        }
                        for (unsigned int i_19 = 0; i_19 < 19; i_19 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((unsigned int) ((arr_53 [i_0 + 1] [17U] [8U] [i_17] [i_17]) * (arr_56 [i_0 - 1] [i_0 - 1] [i_0]))))));
                            arr_73 [i_0] [i_1] [i_1] [i_17] [i_1] = ((((/* implicit */_Bool) ((0U) ^ (((((/* implicit */_Bool) var_5)) ? (145741046U) : (var_5)))))) ? (((unsigned int) ((var_7) >> (((arr_33 [i_17] [i_1] [i_1] [2U]) - (3014450928U)))))) : (((unsigned int) ((16777200U) ^ (1029608612U)))));
                            arr_74 [i_0] = ((unsigned int) min((arr_9 [i_0] [i_0] [0U] [i_0] [i_0] [i_0]), (((((/* implicit */_Bool) 939524096U)) ? (4294967295U) : (4253339679U)))));
                        }
                        arr_75 [i_0] [i_0 - 2] [i_0 - 3] [i_0] = 1237364561U;
                        arr_76 [11U] [11U] = 145741076U;
                    }
                    for (unsigned int i_20 = 0; i_20 < 19; i_20 += 3) 
                    {
                        arr_79 [i_20] [i_1] [i_1] = max((((((/* implicit */_Bool) arr_56 [i_0] [i_0 - 1] [i_0 - 3])) ? (var_7) : (var_4))), (min((1021423669U), (arr_56 [i_0] [i_0 - 2] [i_0 - 1]))));
                        /* LoopSeq 3 */
                        for (unsigned int i_21 = 0; i_21 < 19; i_21 += 3) 
                        {
                            var_36 += ((max((2853020227U), (3022284865U))) - (min((3687312107U), (1272682431U))));
                            var_37 += max((1621708008U), (min((4294967295U), (max((3022284886U), (145741055U))))));
                            arr_83 [i_20] = var_5;
                            var_38 = var_5;
                            var_39 = ((unsigned int) var_8);
                        }
                        for (unsigned int i_22 = 0; i_22 < 19; i_22 += 3) 
                        {
                            var_40 |= ((/* implicit */unsigned int) (!(((arr_14 [10U] [i_1] [i_16]) >= (arr_14 [i_0] [i_1] [i_0 + 1])))));
                            arr_86 [i_0 - 3] [i_0] [i_0] [0U] [i_0] [i_20] [i_0] = var_4;
                            var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_7), (((unsigned int) 4149226223U))))) || (((/* implicit */_Bool) arr_66 [i_0] [i_1] [i_1] [14U] [i_22] [i_0])))))));
                            var_42 += (~(((((/* implicit */_Bool) arr_77 [i_0 - 2] [i_0 - 2] [i_16] [i_20])) ? (arr_72 [i_0] [i_0 - 3] [i_0 - 1] [i_0] [16U]) : (arr_52 [i_0 - 3] [i_0 - 3] [i_0]))));
                            var_43 |= var_8;
                        }
                        for (unsigned int i_23 = 1; i_23 < 18; i_23 += 3) 
                        {
                            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_51 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]) : (2190258398U)))) || (((/* implicit */_Bool) max((arr_51 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0]), (4225252561U))))));
                            var_45 = ((unsigned int) min((arr_63 [i_23 - 1] [i_23] [i_23] [i_23 - 1]), (var_7)));
                        }
                    }
                    var_46 = ((/* implicit */unsigned int) max((var_46), (((((/* implicit */_Bool) ((unsigned int) ((unsigned int) 3123942033U)))) ? (((unsigned int) 0U)) : (var_0)))));
                    arr_89 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((unsigned int) arr_4 [i_16])))))));
                }
            }
        } 
    } 
    var_47 = ((unsigned int) (((+(0U))) / (1122658451U)));
}
