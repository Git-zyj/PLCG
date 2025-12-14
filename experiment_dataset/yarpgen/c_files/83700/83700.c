/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1 + 3] [i_1 + 3] = -1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_13 = arr_0 [i_0 + 3];
                            var_14 *= (((((-(arr_9 [i_2] [i_2] [i_3 + 1])))) ? (((arr_2 [i_0 + 3]) | var_7)) : ((max((min(248, -1)), (arr_0 [i_3]))))));
                            var_15 = (max(var_15, (max(((((arr_9 [i_2] [i_1 - 1] [i_1 + 1]) || -16898))), (arr_7 [i_0] [i_1 - 3] [i_3 + 1])))));
                        }
                    }
                }
                var_16 = 10;
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_17 = (min(var_17, (arr_16 [i_6] [i_1 - 1])));
                                arr_19 [i_1] [i_1] = ((!((max((arr_12 [i_1 + 1] [i_4] [i_4] [i_6]), (arr_13 [i_0] [i_0] [i_4 + 3] [11]))))));
                                var_18 &= ((((max(1920, var_7))) ? ((((max((arr_7 [i_5] [i_0] [i_0]), (arr_14 [i_0 + 1] [9] [9])))) ? ((max((arr_9 [i_5] [i_1 - 3] [i_5]), -27))) : (((arr_11 [22] [i_5] [i_5] [i_6]) ? (arr_9 [i_5] [i_1] [i_1]) : (arr_17 [i_6] [i_1] [10] [i_6] [i_6] [i_0]))))) : (((((32767 ? var_0 : 9132))) ? -24576 : ((9 ? (arr_5 [i_6]) : -32750))))));
                                var_19 -= (!0);
                            }
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    arr_22 [i_7] [i_1] [i_1] [i_0] = (max((((29197 >= -1921) + ((max((-32767 - 1), -27595))))), (((min(-11179, (arr_11 [i_0] [i_1] [i_1] [i_0])))))));
                    arr_23 [i_0] [i_0] [i_0] [i_1] = min(-30982, 5529);
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    var_20 = (-32767 - 1);
                    arr_26 [i_1] [i_1] = (((!var_6) + ((24576 ? (arr_7 [i_0 + 1] [i_1] [i_1]) : 21126))));
                }
            }
        }
    }
    var_21 -= (((max(((max(var_7, -2994))), (var_12 - 27756))) / (((-1603 / var_1) ? -29643 : var_9))));
    #pragma endscop
}
