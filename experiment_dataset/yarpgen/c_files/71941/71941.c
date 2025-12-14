/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_7 ? (((((28 ? 156637920 : var_0))) ? ((28 ? 7704570676140854762 : -1483875072)) : (((max(var_8, 99)))))) : -var_4);
    var_16 = (min(((((var_14 ? 0 : var_5)) / var_1)), ((((((var_3 ? var_13 : -1))) ? var_11 : (var_13 ^ var_8))))));
    var_17 += ((~(((!120) ? (var_14 / var_12) : 16124))));
    var_18 = ((~((~((var_12 ? 4294967286 : -156637918))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = (min((max((arr_3 [i_1 - 2]), 4294967286)), (!10)));
                    arr_7 [i_0] [i_0] = (!4302893147343670750);

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] = ((((var_13 ? (arr_1 [i_0]) : ((max(12096, (arr_4 [i_0])))))) | (arr_1 [i_3])));
                        arr_11 [i_0] [12] [i_2 + 1] [i_0] = var_14;

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] = (max((((arr_14 [i_1 - 2] [1] [i_0]) ? var_7 : 121)), ((((arr_8 [i_2 - 1] [i_1 - 1] [i_1 + 1] [i_1]) == (arr_8 [i_2 + 1] [i_1 - 2] [i_1] [i_1]))))));
                            var_19 = (~((((arr_13 [i_0] [i_1] [i_1] [7] [i_2] [i_1] [i_3]) ? 1 : -156637908))));
                            var_20 += ((0 ? (max((arr_4 [11]), ((var_11 ? 4294967275 : 2576874773)))) : (min(4294967275, 21))));
                            arr_17 [i_4] [i_0] [9] [i_0] [i_0] = (((arr_3 [i_0]) / (((arr_1 [i_1 - 3]) - 1))));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_21 = (99 * 0);
                        var_22 += (arr_18 [i_1 - 3] [i_1 - 2] [i_2 - 2] [i_2 - 1]);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_23 = 54775968;
                        var_24 += ((3 ? ((((-12153 ? 99 : 719315977)))) : (((((arr_15 [i_0] [1] [i_2] [i_6] [i_0] [i_1 + 1]) ? 63 : var_0)) * var_14))));
                        arr_22 [1] [i_0] [i_2] [i_6] = (3974711445 != 1);
                        var_25 = ((-(max((arr_3 [i_2 + 1]), (arr_3 [i_2 - 2])))));
                    }
                    arr_23 [i_0] [1] = (((((-38 ? ((32736 ? (arr_12 [i_0]) : (arr_9 [i_0]))) : 12153))) ? -127 : 3226515104));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_26 = 14143850926365880881;
                                var_27 = (var_9 ? (max(var_5, ((((arr_25 [i_0] [i_2] [i_7] [i_8]) ? (arr_25 [i_8] [i_1] [i_1] [i_1]) : var_11))))) : -22);
                                var_28 = (((((((((-2147483647 - 1) ? var_2 : 17747))) ? (-12158 & var_6) : var_5))) ? (((max((arr_15 [i_7] [i_1 + 1] [i_7] [i_7] [i_8] [i_7]), var_0)) ^ ((((arr_5 [i_0] [i_1 + 1] [i_2]) ? (arr_1 [i_8]) : (arr_28 [5] [i_1 - 2] [i_2 - 1] [i_0] [i_0])))))) : (+-7)));
                                var_29 -= (((((1 - (arr_25 [i_8] [i_7] [i_2 - 2] [i_8]))))));
                                var_30 = (min(var_30, (arr_24 [i_7] [i_7] [i_7])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
