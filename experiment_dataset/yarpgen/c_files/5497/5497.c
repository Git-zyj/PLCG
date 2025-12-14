/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (max(var_13, 11));
        var_14 = min((((((~(arr_0 [i_0])))) ? ((var_1 ? var_9 : 858729864)) : (~1))), var_2);
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_15 = var_0;
                                arr_17 [i_1] [i_2] [16] [i_4 + 1] [i_5 - 3] [i_3] [i_5 - 2] = min((((arr_8 [i_3]) | (arr_6 [i_1 + 1] [i_1 + 1]))), (((arr_9 [i_2 + 1] [i_3] [i_4 - 1] [22]) ? (arr_9 [i_2 - 2] [i_3] [i_4 - 1] [i_5 + 1]) : (arr_9 [i_1] [i_3] [i_4 - 1] [i_5]))));
                                arr_18 [i_3] [i_3] [i_4] [14] [i_3] = (arr_3 [i_1] [i_4 + 2]);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_16 = (var_0 ? 858729857 : 0);
                        var_17 = var_3;
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_18 = ((+(max((arr_26 [i_3] [i_2 - 1]), var_0))));
                            var_19 |= arr_7 [i_7] [i_8];
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_20 = (min(var_20, (((!((min((((arr_22 [i_1] [i_2 + 1] [i_2 + 1] [i_3] [13] [i_9]) ? var_11 : (arr_22 [i_1] [i_2] [9] [i_1] [i_7] [i_9]))), var_8))))))));
                            var_21 = (min(var_21, (((!((!(((53 ? (arr_1 [i_2]) : 1))))))))));
                        }
                        for (int i_10 = 2; i_10 < 21;i_10 += 1) /* same iter space */
                        {
                            var_22 = (var_9 | (((-64 ? 8388592 : var_4))));
                            arr_32 [i_3] [i_3] = (arr_24 [i_1] [i_2 - 1] [i_3] [i_7] [i_3] [i_10 + 1] [i_10]);
                        }
                        for (int i_11 = 2; i_11 < 21;i_11 += 1) /* same iter space */
                        {
                            var_23 = (((((var_0 ? 1 : (arr_33 [i_1 + 1] [i_2 - 1] [i_3] [i_7] [i_7] [i_3])))) >= var_6));
                            arr_37 [i_11] [i_3] [i_11] [i_11] [i_11] = ((!(((-12 ? 53 : 1005993595)))));
                            var_24 = (arr_28 [1] [i_2] [i_2] [i_2] [i_3] [i_3] [i_11 + 2]);
                            arr_38 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (~-17);
                            var_25 = (max(var_25, (((~((-((22032 ? var_9 : (arr_15 [i_11] [i_11] [i_11 + 3] [i_11] [i_11]))))))))));
                        }
                        arr_39 [i_3] = (max((((arr_22 [i_1 - 1] [i_2 + 1] [i_1 - 1] [i_1 - 1] [i_3] [i_2 + 1]) ? (arr_22 [i_1] [i_1 - 1] [i_2] [i_3] [i_7] [i_7]) : 1)), ((+((max((arr_30 [i_3] [i_3] [i_1]), 0)))))));
                        var_26 = min((max(var_8, 1)), var_12);
                    }
                    for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                    {
                        var_27 = (min(var_27, (((arr_24 [i_1 - 1] [i_1 + 1] [1] [i_12] [i_2] [22] [i_12]) ? (arr_7 [i_2] [9]) : (~-1005993595)))));
                        arr_42 [i_3] = (!(((var_11 ? (min(11, var_0)) : ((var_10 ? var_8 : var_5))))));
                    }
                    var_28 = ((((((max(var_11, var_6)) >> ((-63 ? 1 : 1))))) == (min((arr_1 [i_1]), ((min(0, var_12)))))));
                }
            }
        }
    }
    var_29 = var_8;
    var_30 = ((var_3 + (max(var_9, var_2))));
    #pragma endscop
}
