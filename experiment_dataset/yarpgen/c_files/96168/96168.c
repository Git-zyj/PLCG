/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_19 = var_1;
                    arr_9 [i_0] = (arr_1 [i_1 + 1]);
                    var_20 -= ((((!((max(-26440, (arr_7 [i_2 + 3])))))) ? ((((((arr_2 [24]) ? (arr_0 [i_0]) : 186)) * 26451))) : (arr_4 [i_1 + 1])));
                    var_21 = ((!(((((((arr_3 [i_0] [i_0]) ? -10 : var_12))) ? ((min(var_6, -22792))) : 26450)))));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_0] [i_1 + 1] = (max(-var_18, (~var_5)));
                    var_22 = ((~(arr_1 [i_0])));
                }
                for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [i_0] = ((((+(((arr_7 [i_0]) ? (arr_2 [i_0]) : (arr_4 [i_0]))))) << ((((arr_2 [i_0]) == 15078423324396154743)))));
                    var_23 |= (arr_13 [i_0] [i_1] [i_4 + 1]);
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_24 -= (arr_5 [i_0] [i_1 + 1]);
                                var_25 = ((-(arr_26 [i_1 + 1] [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_6 + 1])));
                                arr_27 [i_0] [i_1 + 1] [i_0] [i_6] [i_7] = ((var_13 ? var_2 : 2735239788446104158));
                                var_26 = (arr_6 [i_0] [i_5 + 2] [i_6 + 2] [i_7]);
                            }
                        }
                    }

                    for (int i_8 = 4; i_8 < 23;i_8 += 1)
                    {
                        var_27 = ((~(~var_13)));
                        arr_30 [i_0] = (((!var_10) ? (((arr_7 [i_1 + 1]) ? 20848 : (arr_22 [i_0] [i_0] [i_0] [i_0]))) : (arr_10 [i_1 + 1] [i_0] [i_5 + 1] [i_8 - 3])));

                        for (int i_9 = 1; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            arr_33 [i_0] [i_0] [i_5] [i_8 - 1] [i_9] = ((!(((-(arr_3 [i_9] [i_0]))))));
                            var_28 = (((arr_0 [i_1 + 1]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 1])));
                        }
                        for (int i_10 = 1; i_10 < 23;i_10 += 1) /* same iter space */
                        {
                            var_29 &= ((+(((arr_24 [i_0] [i_1 + 1] [i_0] [i_8 - 4] [i_10]) ? (arr_28 [i_0] [i_8] [i_8 - 4] [i_10]) : 16156094667233236108))));
                            var_30 = var_12;
                            arr_36 [i_0] [i_1 + 1] [i_0] [i_8] [i_10 + 2] = (~-69);
                        }
                        var_31 = ((((~(arr_1 [i_1 + 1]))) >= (-65 | 1)));
                    }
                    var_32 -= ((~((1877959346 ? var_2 : (arr_7 [i_0])))));
                    var_33 = ((-(arr_4 [i_0])));
                }
                var_34 = (((((-var_3 ? var_15 : ((var_18 / (arr_34 [i_0] [i_0] [i_1])))))) ? ((((((arr_5 [i_0] [i_1]) ? (arr_22 [i_0] [i_0] [i_1 + 1] [i_1 + 1]) : (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (~var_14) : var_0)) : ((~(var_8 & var_14)))));
            }
        }
    }
    var_35 = (min(var_35, (((var_5 ? (((var_15 ? var_11 : var_11))) : var_15)))));
    var_36 = ((var_15 ? (((max(var_4, var_2))) : 553244714280997691)));
    var_37 &= var_7;
    #pragma endscop
}
