/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((var_3 ? (((var_10 ? 28411 : var_5))) : (((((var_6 ? var_0 : var_0))) ? (~var_5) : var_7)))))));
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1 - 1] = ((~((min(37114, ((max(-6248, 1))))))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] [1] [i_1] [i_0] = (arr_5 [i_0] [i_2 - 1] [i_2 + 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((-(((arr_9 [i_0] [i_0] [i_0] [i_0]) ? 18027488436199035039 : (arr_7 [i_0] [i_1 + 4] [8])))))));
                                arr_17 [i_0] [i_0] [i_1] [17] [1] [i_3] [i_0] = ((0 ? ((((arr_3 [i_0] [i_0]) | 1))) : (arr_2 [i_0] [10])));
                                arr_18 [i_4] [i_3] [i_4] [i_3] &= arr_7 [1] [i_3] [i_3];
                            }
                        }
                    }
                    var_15 += (arr_14 [i_2 - 1]);
                    arr_19 [i_0] [i_1] = ((~(arr_12 [i_2 - 1])));
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    arr_24 [i_1] [i_1] = ((((min((((arr_14 [i_0]) / var_2)), (max((arr_14 [1]), (arr_2 [i_5] [14])))))) ? (arr_9 [1] [i_1] [i_1] [i_5]) : (((((~29468) <= (((arr_5 [i_0] [i_0] [i_5 - 1]) ? 627487781385546096 : (arr_7 [i_0] [i_1 + 4] [i_5])))))))));
                    var_16 |= ((!(((-(arr_6 [i_0] [i_0]))))));
                }
                arr_25 [i_0] [i_1] = (arr_10 [i_0] [i_0] [i_1 + 1] [i_1]);

                for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_17 = ((((1 > (((arr_2 [i_8] [i_7]) ? (arr_11 [i_0] [11]) : (arr_12 [i_8]))))) ? 28425 : ((min((arr_16 [i_0] [i_0] [i_6] [i_8 + 2] [i_1 - 1] [i_0] [i_6]), (arr_16 [i_0] [i_1] [i_6] [i_8 + 2] [i_1 - 1] [i_6] [i_0]))))));
                                var_18 = (min((min(((~(arr_7 [12] [i_7] [i_8]))), ((((arr_20 [i_0] [i_0] [i_7]) ? var_2 : 1))))), (arr_2 [9] [i_7])));
                                arr_36 [i_8] [i_6] [3] [i_7] [i_1] = (max((~121), (~11549958471718094020)));
                                var_19 = (min(var_19, (((0 ? (max(13039697181272234239, 30339)) : 0)))));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_20 = (max(var_20, (((((arr_35 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_0]) ? 1 : (arr_7 [i_0] [i_0] [i_0]))) - (((((arr_7 [i_0] [i_0] [i_1 + 4]) != (arr_35 [i_1] [i_1] [i_1 + 4] [i_1] [i_1] [i_1 + 3] [i_1])))))))));
                            var_21 = (max(var_21, (max((arr_3 [i_1 - 1] [i_1 - 1]), (((arr_28 [i_10] [i_10] [i_9] [1]) >> ((max(1, 1)))))))));
                        }
                        var_22 = ((28420 ? var_2 : (arr_37 [i_6] [i_1 - 1])));
                    }
                    arr_42 [i_0] [10] [i_1] [1] = ((0 & (((1 != (1 >> 1))))));
                }
                for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                {
                    arr_46 [i_1] = (((((arr_7 [i_1 + 3] [i_1 + 1] [i_1 + 3]) ? 7852008677272846059 : (arr_7 [i_1 + 1] [i_1 + 3] [i_1 + 4]))) | (((~((((arr_9 [i_0] [i_0] [i_0] [i_11]) || 0))))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 20;i_13 += 1)
                        {
                            {
                                arr_51 [i_0] [i_11] [i_13 - 1] [i_12] [i_1] = (((1649952485151844229 ? 26 : 1)));
                                var_23 = (25467 <= 0);
                                arr_52 [i_1] [5] = (arr_47 [i_12] [i_1]);
                                arr_53 [i_1] [i_12] [i_12] [i_11] [11] [i_1] = (0 < 395074425217107886);
                            }
                        }
                    }
                    arr_54 [i_0] [i_1] = (min(5995, -25467));
                }
            }
        }
    }
    var_24 = var_4;
    #pragma endscop
}
