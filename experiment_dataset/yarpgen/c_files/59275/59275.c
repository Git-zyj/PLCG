/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((min(var_1, (((((arr_2 [i_0]) >> (104 - 101))))))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_13 += -738696670;
                    var_14 = (((!18453) != (12455 && 18453)));
                    var_15 = (max(var_15, (((((((arr_4 [i_0] [i_0] [i_0]) || -738696667))) | -18453)))));
                    var_16 = (127 | 18453);
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_9 [23] [i_1] = (arr_6 [i_1]);

                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        arr_12 [i_1] [i_1] [i_1] = (max((arr_6 [i_1]), (((~var_1) | (min(-738696670, var_7))))));
                        var_17 &= ((((max(1, (arr_5 [i_4 + 3] [i_0] [i_4] [i_4 + 1])))) ? ((((arr_5 [i_4 + 3] [i_0] [i_4] [i_4]) == 18452))) : 151));
                        var_18 = (min(var_18, var_7));
                        var_19 = -738696679;
                    }
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        var_20 = ((((~(var_9 & var_8))) | ((max(38932, (arr_13 [i_0] [i_1]))))));
                        var_21 = (((min(-90, (arr_1 [i_0])))));
                        var_22 *= ((!(65508 != 18452)));
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_17 [i_0] [i_1] = 207;
                    arr_18 [i_1] [i_0] [i_6] = (((((arr_6 [i_1]) ? (arr_11 [11] [i_1] [i_1]) : var_5)) - (arr_15 [i_1] [i_6])));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_23 = (((arr_19 [i_0] [i_7] [i_9 + 1]) ? 1 : var_0));
                                arr_26 [i_0] [i_1] [i_1] [17] [i_8] [i_1] = ((!(arr_16 [i_0] [i_7] [i_8] [i_7])));
                            }
                        }
                    }
                    var_24 += 255;
                }
                var_25 -= (arr_20 [i_0] [i_1]);
                arr_27 [i_1] [i_1] = ((var_2 != (((arr_11 [i_0] [i_0] [i_1]) << (((((-18453 <= (arr_15 [i_1] [i_1])))) - 1))))));
            }
        }
    }
    #pragma endscop
}
