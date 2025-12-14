/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((max((!var_3), var_7)))));
    var_16 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_17 = ((var_10 ? (arr_0 [i_1 + 1]) : var_7));
                        var_18 = ((var_8 != (arr_2 [i_0] [i_1])));

                        for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_4] [i_1] [i_2] [i_1] [i_0] = ((!((!(arr_10 [i_1] [9] [9] [i_1 + 1] [i_1])))));
                            var_19 |= ((var_6 + 14) ? var_5 : (arr_10 [i_2] [i_2] [i_1] [i_1 - 1] [i_1]));
                            var_20 += 39449;
                            var_21 |= ((!(!121)));
                        }
                        for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = var_0;
                            arr_19 [i_0] [i_5] &= (arr_12 [i_0] [i_1] [i_1] [i_1 - 1] [i_2] [i_2 + 2] [i_5 + 1]);
                        }
                        for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_1] [i_1] [i_1] [i_1] = -4837971825873254918;
                            arr_24 [i_1] [i_0] [i_0] [i_2 + 1] [i_3] [i_6] = (((var_10 / 18958) | (arr_4 [i_2 - 2] [i_2 - 2] [i_1])));
                            var_22 = (min(var_22, (((((((arr_17 [i_1] [1] [i_1] [i_0] [i_1] [i_0] [i_0]) ? var_5 : 65532))) ? var_5 : var_13)))));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_23 *= (!11516093039878219740);
                            var_24 = ((!(17372875337747439433 && 1)));
                        }
                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            arr_35 [i_9] [i_9] [i_1] [i_1] [i_1 - 1] [5] = (arr_10 [i_1] [i_7] [i_2] [i_2] [i_9]);
                            var_25 = var_5;
                            var_26 = (((arr_31 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1]) ? (arr_31 [i_0] [i_1] [11] [i_1 - 1] [i_9] [i_9]) : (arr_20 [i_1 + 1] [i_1] [i_1])));
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_27 = var_6;
                            arr_40 [i_0] [i_0] [i_1] [i_2] [i_1] [i_10] = (((arr_0 [i_1 - 1]) ? var_1 : var_11));
                        }
                        var_28 *= (!26);
                        var_29 = var_7;
                    }
                    var_30 = (((((((!(arr_30 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2] [i_2]))))) + (arr_9 [i_1]))));
                }
            }
        }
    }
    #pragma endscop
}
