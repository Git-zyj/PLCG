/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88874
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))) ? (max(((-(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) arr_4 [i_0] [i_1] [11U] [i_3])))))) : ((~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                            arr_10 [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [(_Bool)1]);
                        }
                    } 
                } 
                var_17 |= ((((/* implicit */_Bool) var_4)) ? ((-(arr_5 [i_0]))) : (min((((/* implicit */unsigned int) (_Bool)1)), (min((15U), (((/* implicit */unsigned int) (_Bool)1)))))));
                var_18 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0]))))) ? (arr_8 [i_0] [i_1]) : ((+(var_4)))))) ? (arr_8 [i_1] [i_1]) : (max((((/* implicit */unsigned int) ((var_4) < (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [11U])))))), (arr_6 [i_0] [i_0] [i_1] [i_1]))));
                arr_11 [i_1] = ((/* implicit */unsigned int) (!(((arr_6 [i_1] [6U] [i_1] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (((-(max((var_7), (((/* implicit */unsigned int) (_Bool)1)))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        for (unsigned int i_5 = 4; i_5 < 6; i_5 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 9; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_19 -= ((/* implicit */unsigned int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) 1716769072U)))))))));
                            arr_24 [i_6] [i_6 + 1] [8U] [i_6] = ((/* implicit */unsigned int) var_0);
                            var_20 = ((/* implicit */unsigned int) (!(((_Bool) var_7))));
                            arr_25 [i_7] = ((min((arr_13 [i_5 - 3] [i_5 + 1]), (((/* implicit */unsigned int) arr_17 [i_5 + 3])))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_5 - 1])) * (((/* implicit */int) arr_16 [i_6 - 1] [i_5] [i_5 + 3]))))));
                            var_21 -= ((/* implicit */_Bool) min((((arr_13 [i_5 + 3] [i_5 - 1]) << (((var_8) - (3074261945U))))), (((((/* implicit */_Bool) 1103839958U)) ? (arr_6 [i_5 + 1] [i_5 - 1] [i_6 - 1] [(_Bool)1]) : (arr_13 [i_5 - 4] [i_5 - 2])))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((unsigned int) var_12)), (max((var_9), (((/* implicit */unsigned int) var_0))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_10] [i_8 + 1])), (var_2))))))) : (((((/* implicit */int) ((_Bool) var_14))) << ((((+(arr_20 [i_4] [i_5 + 4] [1U] [(_Bool)1]))) - (3469276746U))))))))));
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_2 [i_4] [i_4]))));
                                arr_32 [i_5] [(_Bool)0] [i_9] [i_4] [i_5] [(_Bool)1] [i_4] &= ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) / (((/* implicit */int) ((_Bool) arr_29 [i_5 + 4] [i_8 + 1] [i_8 + 1] [i_9] [i_9 - 1])))));
                                arr_33 [i_4] [i_5] [i_8] [9U] [i_9] = ((_Bool) ((_Bool) (+(var_7))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (((((_Bool)1) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_8 + 1]))))) != (min((((/* implicit */unsigned int) (_Bool)1)), (arr_28 [i_4] [(_Bool)1] [i_8] [i_4])))))), (max((((/* implicit */unsigned int) ((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))), (min((((/* implicit */unsigned int) arr_23 [i_8 + 1] [i_8] [i_8] [i_4] [i_5 - 1] [i_8])), (var_2)))))));
                }
                for (unsigned int i_11 = 1; i_11 < 6; i_11 += 3) 
                {
                    var_25 = ((/* implicit */_Bool) ((unsigned int) 1103839968U));
                    arr_36 [i_11] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) << ((+(((/* implicit */int) var_12)))))), (((max(((_Bool)1), (arr_16 [0U] [(_Bool)1] [i_11]))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
                }
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    arr_39 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_5 - 2]))));
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_26 += (+(2963835343U));
                        arr_42 [i_5 - 2] [i_13] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */_Bool) 0U);
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            arr_48 [i_4] [i_5 + 4] [i_12] [4U] [i_14] [i_15] [i_15] = ((/* implicit */_Bool) ((1735026433U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_4] [i_4] [i_4] [i_5 - 2]))));
                        }
                        var_29 = arr_43 [i_4] [i_5] [i_12] [i_12] [i_12] [i_14];
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_5 + 3] [i_5 + 4] [i_5 - 4] [i_5 + 1])))))));
                    }
                }
                for (unsigned int i_16 = 1; i_16 < 8; i_16 += 1) 
                {
                    var_31 = (_Bool)1;
                    var_32 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [(_Bool)1] [4U] [i_16 + 1] [i_16] [i_16]))) : (arr_20 [i_4] [2U] [i_4] [7U])))))) ? ((+(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [1U])) ? (((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) (_Bool)1))))))))));
                }
                arr_51 [i_5] [i_5 - 4] [i_4] = ((/* implicit */unsigned int) (_Bool)1);
                var_33 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << (((/* implicit */int) max(((_Bool)1), ((_Bool)0))))))), (max((((3658305748U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 558768797U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2643548994U)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
    {
        for (unsigned int i_18 = 0; i_18 < 22; i_18 += 1) 
        {
            for (unsigned int i_19 = 0; i_19 < 22; i_19 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 0; i_20 < 22; i_20 += 2) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                arr_65 [3U] [i_18] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(arr_3 [i_17])))), ((+(var_2)))));
                                var_34 = ((_Bool) (((((_Bool)1) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) < (((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) arr_54 [i_17])) : (((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_68 [i_18] [i_18] [5U] [i_22] = arr_2 [7U] [i_19];
                        arr_69 [i_18] [i_19] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((var_8) / (var_8)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_66 [i_17 + 1] [i_18] [i_19] [i_22] [(_Bool)1] [7U])))), (max(((+(((/* implicit */int) var_10)))), (((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned int i_23 = 0; i_23 < 22; i_23 += 2) 
                    {
                        var_35 -= max((((unsigned int) max((((/* implicit */unsigned int) var_6)), (arr_6 [i_17] [i_17 + 1] [i_17 + 1] [3U])))), (((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_58 [i_23] [i_18] [i_23])))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (arr_7 [i_19])))))));
                        var_36 = ((unsigned int) (+(712239714U)));
                    }
                    /* vectorizable */
                    for (unsigned int i_24 = 0; i_24 < 22; i_24 += 3) 
                    {
                        var_37 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_14)))))));
                        var_38 = (-(712239714U));
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_13))));
                    }
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_40 *= ((/* implicit */_Bool) arr_59 [i_17 + 1] [i_19] [i_17 + 1]);
                        var_41 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_2 [i_17 + 1] [i_17 + 1])))), (((/* implicit */int) min((arr_71 [i_17 + 1] [i_18] [(_Bool)1] [(_Bool)1]), ((_Bool)1))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        for (unsigned int i_27 = 2; i_27 < 21; i_27 += 1) 
                        {
                            {
                                arr_82 [i_17] [i_17] [i_18] [i_17] = min((((/* implicit */unsigned int) var_16)), (max((4284759462U), (((/* implicit */unsigned int) arr_78 [i_17 + 1] [i_17 + 1] [15U] [i_27 + 1] [i_18])))));
                                arr_83 [5U] [i_17 + 1] [i_18] [i_19] [(_Bool)1] [i_26] [i_27] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_17 + 1] [i_19] [(_Bool)1] [i_27 - 1]))))) / (arr_7 [i_18])));
                                arr_84 [i_27] [10U] [i_17 + 1] [10U] [i_18] = ((/* implicit */_Bool) max((max((arr_53 [i_17 + 1]), (arr_5 [i_27 - 1]))), (((/* implicit */unsigned int) ((_Bool) var_5)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
