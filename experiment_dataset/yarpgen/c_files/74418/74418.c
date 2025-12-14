/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = ((((((arr_2 [i_0] [i_0 - 1]) ? 28 : 2014669854))) ? ((((arr_0 [i_0] [i_0 - 3]) / (arr_2 [i_0] [i_0 - 3])))) : ((var_1 * (arr_0 [i_0] [i_0 + 1])))));
                var_15 = var_7;
            }
        }
    }
    var_16 = (var_3 / ((min(var_0, (min(var_5, var_4))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            {
                var_17 = ((((((min(var_6, (arr_6 [i_2]))) ? (min(var_6, var_7)) : ((3 ? var_7 : var_12))))) ? ((32424 - ((var_4 ? -11982 : var_1)))) : (arr_5 [i_3 + 1] [i_3 - 2])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_18 = (0 % 1);
                            arr_13 [i_2] [i_3] [i_4] = ((-(!-7281256540875141400)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {

                            for (int i_8 = 0; i_8 < 22;i_8 += 1)
                            {
                                arr_22 [i_6] [i_3 - 2] [i_6] [i_6] [i_8] = (((arr_12 [i_6 + 1] [i_6 + 1] [i_3 - 2]) ? (((arr_12 [i_8] [i_6 + 1] [i_3 - 2]) ? (arr_12 [i_6] [i_6 + 1] [i_3 - 2]) : 28)) : ((((arr_12 [7] [i_6 + 1] [i_3 - 2]) != (arr_12 [i_6 + 1] [i_6 + 1] [i_3 - 2]))))));
                                arr_23 [i_2] [11] [i_2] [i_2] [i_6] = (min((~var_5), (~65529)));
                            }

                            for (int i_9 = 0; i_9 < 22;i_9 += 1)
                            {
                                var_19 = (min((arr_11 [i_3 - 3] [i_3 + 1] [i_3 - 3] [15]), ((((arr_11 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) || (arr_11 [i_3 + 1] [i_3 - 3] [i_3 - 1] [i_3]))))));
                                arr_27 [i_2] [i_6] = ((24797 ? 1 : 0));
                            }
                            for (int i_10 = 0; i_10 < 1;i_10 += 1)
                            {
                                var_20 = (min(var_20, (((-(arr_30 [1] [i_3 + 1] [i_3] [i_3] [19]))))));
                                var_21 = ((((min(var_2, (arr_19 [i_2] [7] [i_2] [i_3] [i_3 + 1])))) ? var_11 : ((((arr_19 [i_3] [i_3] [i_3] [i_3] [i_3 + 1]) - (arr_19 [i_3] [i_3] [i_3] [0] [i_3 + 1]))))));
                                var_22 = 65535;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (min((var_9 && var_13), (min(24, 45967))));
    #pragma endscop
}
