/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_6, ((((((var_6 ? 57931 : 15571))) > var_8)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (var_8 - -27661);

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_1] = var_1;
                        arr_11 [i_2] [i_2] [i_1] [i_0] [i_0] = (((((-15575 ? var_7 : 134217727))) ? (((((2356271080250025946 ? (arr_0 [i_2] [i_3]) : var_8))) ? ((12 ? (-127 - 1) : var_4)) : 12563)) : 2356271080250025946));
                        var_13 = ((-4703495768025187463 && (arr_2 [i_0] [i_0] [i_0])));
                        arr_12 [9] = 4397;
                        var_14 = (((-1968206927321047867 + 9223372036854775807) >> ((((min(61139, 7585))) - 7551))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_15 = ((var_8 ? (((~(arr_1 [i_2] [i_1])))) : 9223372036854775807));
                        var_16 = (-4 | -var_7);
                    }
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        arr_19 [i_1] [i_5] = var_4;

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_17 = (arr_18 [i_0] [5]);
                            arr_22 [i_6] [8] [1] [i_1] [i_0] = (((arr_5 [i_5 - 3] [i_5 - 2] [i_5 + 1] [i_5 - 3]) ? ((1 ? var_4 : (arr_21 [i_0] [10] [i_2] [i_5] [i_6]))) : (arr_18 [i_0] [i_1])));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_25 [i_7] [i_1] [i_1] [i_1] [i_1] [i_1] = ((var_4 ? (((((max(var_7, (arr_2 [i_1] [7] [i_7])))) <= var_8))) : (((0 > (arr_17 [i_0] [i_0] [i_2] [i_5 - 2] [i_7] [i_2]))))));
                            arr_26 [i_0] [2] [i_2] [11] [i_7] [i_7] [i_7] = max((((((var_8 ? var_5 : (arr_14 [i_0] [3] [3] [i_5])))) ? -7403991051773357650 : var_0)), (((4527 ? -4527 : (4 / var_3)))));
                            var_18 = (max(var_18, ((((max((arr_14 [i_5 - 1] [i_1] [i_5 - 2] [i_5]), var_6)) ^ (((~(arr_14 [9] [i_2] [i_5 - 3] [i_0])))))))));
                        }
                    }
                }
            }
        }

        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            arr_29 [i_0] [i_8] = (max(((((arr_4 [i_0]) / (arr_14 [i_8 + 1] [i_8 + 1] [0] [i_8 + 1])))), ((var_9 ? (((-(arr_7 [i_0] [i_0] [i_0] [i_8 - 1] [i_8 - 1])))) : var_4))));
            arr_30 [i_8] = -32717;
        }
        var_19 = (max(var_19, var_4));
        arr_31 [i_0] [i_0] = var_7;
    }
    for (int i_9 = 2; i_9 < 10;i_9 += 1)
    {
        arr_34 [i_9] [1] = (((min(0, 24)) & (((((arr_20 [i_9 + 1] [10] [i_9] [i_9] [i_9]) < var_4)) ? var_3 : ((-94 ? (arr_13 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 + 1]) : 24941))))));
        var_20 = (min(var_20, ((((((((max(var_10, 1))) - (8366 * 96)))) ? var_8 : ((-(arr_15 [i_9] [i_9] [i_9 - 2]))))))));
        arr_35 [i_9 - 1] = var_0;
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        arr_38 [10] [i_10] = ((((-9223372036854775807 - 1) ? 24 : var_1)));
        var_21 = (((((var_2 ? ((((arr_37 [i_10]) ? 0 : var_9))) : -991012901))) ? (((min(-1882055933, var_7)))) : 1));
        var_22 = ((((((arr_36 [i_10]) / var_0))) ? (((~(-32767 - 1)))) : 17966072824145740090));
    }
    var_23 = var_0;
    #pragma endscop
}
