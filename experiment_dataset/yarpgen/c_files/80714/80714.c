/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((var_14 ? (var_15 + 2960816463) : var_12))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 *= ((+((5165512427251081385 ? (arr_1 [i_0]) : ((1334150832 ? (arr_1 [i_0]) : 3))))));
        arr_3 [i_0] [i_0] = (((arr_1 [i_0]) > (min(1334150814, -125))));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_20 = (max(var_20, var_3));
            arr_7 [i_0] [i_0] [i_0] |= (arr_1 [i_0]);
            var_21 = (min(var_21, (((((min(1, var_11))) ? ((((arr_5 [i_1 - 2] [i_1] [i_1]) / (arr_5 [i_1 - 2] [i_1] [i_1])))) : ((var_5 ? (arr_4 [i_0] [i_1] [i_1 + 3]) : var_12)))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_22 = var_13;
                            var_23 *= 923055288223674562;
                            var_24 = (max(var_24, 1));
                        }
                        var_25 = ((((min((arr_11 [i_2] [i_2] [i_2] [i_3 + 1]), 1))) ? (1 && 1) : ((var_13 ? ((var_11 ? var_8 : var_7)) : var_6))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 4; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_26 = (((255 - var_17) ? (min(var_8, (~var_3))) : ((0 ? -1379302320 : (arr_0 [i_1])))));
                            var_27 = 4294967275;
                            var_28 = (((((min(var_14, (arr_5 [i_0] [i_5] [i_1])))) ? (arr_5 [i_7] [i_1 - 2] [i_0]) : (!-15838))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    arr_30 [10] [i_8] [10] [10] |= ((!(arr_2 [i_0])));
                    var_29 = (arr_20 [i_0] [i_9] [i_9] [i_8] [i_8] [8]);
                    var_30 = (((~(arr_8 [i_0] [i_8] [i_9]))) ^ (266338304 || -8724));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    arr_35 [i_11] = -4028628992;
                    var_31 = (min(var_31, ((max(((((var_9 >= (arr_19 [i_0] [i_10] [i_0]))) ? (!var_1) : ((var_13 ? var_14 : var_15)))), (((!(((arr_10 [10]) <= 0))))))))));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_32 = var_8;
        var_33 = (min(var_33, 4));
    }
    #pragma endscop
}
