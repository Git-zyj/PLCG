/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 &= 2240967839803694024;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = (((arr_10 [i_0] [i_2 + 2] [i_2 + 3] [i_4] [i_1 - 3] [i_2 + 1]) * var_11));
                                var_19 = ((!(((~(~var_6))))));
                                arr_17 [9] [i_1] [i_1] = (arr_10 [i_4] [i_1] [i_1] [8] [i_1] [12]);
                                arr_18 [i_3] = ((var_14 ? 14 : var_10));
                            }
                        }
                    }
                    var_20 += (min(var_14, var_16));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] = -324577050588987104;
                        arr_23 [i_0] [i_1 - 2] [i_2] [i_5] = (max(2240967839803694024, ((min(-2021958982, (-2147483647 - 1))))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_21 = (min(var_21, (((~(((-1 >= (min(-3775216289975743273, 0))))))))));
                        arr_26 [i_0] [i_6] [i_2] [1] = (((arr_25 [i_6] [i_1 + 1] [i_1] [i_1]) / (arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 2])));
                        var_22 = (~var_10);
                        arr_27 [7] [i_6] [i_6] [i_0] = (max(35184372088831, (max(-43086383, (arr_13 [i_0] [20] [i_2])))));
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_23 = (max(var_23, (!var_2)));
        arr_31 [i_7] = (max(15, 68));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 9;i_8 += 1)
    {
        var_24 += -1;
        var_25 = (((arr_0 [i_8]) ? var_3 : var_4));
        var_26 = var_7;
        arr_34 [i_8] = 1476838410;
        var_27 = (((((1927691582732815354 ? (arr_24 [i_8] [20] [12]) : 44373))) ? (arr_6 [i_8] [14] [i_8]) : 12495309663281339330));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    {
                        var_28 &= (arr_36 [i_9] [i_9]);
                        arr_46 [i_9] [i_9] [19] [i_9] = var_15;
                    }
                }
            }
        }
        var_29 = 116;
        var_30 = (max(var_30, ((-((((arr_35 [i_9] [22]) != 85)))))));
    }
    #pragma endscop
}
