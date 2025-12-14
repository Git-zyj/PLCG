/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_19 ? var_18 : ((((max(var_14, var_1)) ^ 35035))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = (((((arr_1 [i_0] [i_0]) ? (var_9 <= 40761) : (((!(arr_2 [i_0])))))) * (((arr_1 [i_0] [i_0]) ? ((max(var_4, 40761))) : (arr_3 [i_0])))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_21 = (max(var_21, ((((arr_1 [i_0] [i_1]) & ((var_14 ? 1 : (arr_2 [i_1]))))))));
            var_22 = ((((max((~12402), 0))) ? -var_1 : ((((((~(arr_3 [i_0]))) + 2147483647)) >> ((((max(var_17, var_1))) - 39332))))));
        }
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            var_23 = ((-((var_2 ? var_18 : (((arr_6 [i_2] [i_2 + 1] [6]) ? var_1 : (arr_7 [i_0])))))));
            var_24 = (max(((((((arr_5 [i_0] [i_2 + 2]) * var_18))) ? (arr_7 [i_0]) : ((var_17 ? 1783338004 : var_15)))), var_18));
            var_25 |= ((var_15 - ((var_3 ? (arr_1 [i_2 + 2] [i_2 + 1]) : (arr_3 [i_2 + 1])))));
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                {
                    var_26 = (max((arr_12 [i_4] [i_3] [i_5 + 1]), ((((arr_12 [i_5] [i_3] [i_5 + 1]) > (arr_12 [i_5] [i_3] [i_5]))))));
                    var_27 -= var_3;
                    arr_15 [i_3] [i_4] [i_3] [i_5] = ((((-(arr_14 [i_5 + 1] [i_5 + 1] [i_5 + 1]))) * (((max((arr_12 [i_5 + 1] [i_3] [i_5 + 1]), (arr_12 [i_5 + 1] [i_3] [i_5 + 1])))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_28 = (max(var_28, 24787));
                                arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_19 [i_6] [i_5 + 1] [i_6] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]);
                                var_29 = ((((max(40761, 1))) / 250));
                            }
                        }
                    }
                }
            }
        }
        var_30 = (arr_12 [i_3] [i_3] [i_3]);
        var_31 = (arr_12 [i_3] [i_3] [i_3]);
        arr_21 [i_3] = ((max((((arr_11 [1] [i_3] [2]) << (236 - 235))), (arr_11 [1] [i_3] [i_3]))));
        arr_22 [i_3] = (max(((~(((arr_14 [i_3] [i_3] [i_3]) ? var_5 : var_5)))), 45));
    }
    var_32 = (((!var_4) - ((max(1, 213)))));
    var_33 = (min(var_33, -var_2));
    #pragma endscop
}
