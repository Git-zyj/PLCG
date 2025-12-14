/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(var_4, var_1))) * var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (min(var_14, 4294443008));

        for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_15 = (arr_5 [i_0] [i_0] [19]);
            var_16 = (!1);
            arr_6 [i_1 + 2] [17] [5] &= ((0 ? (arr_0 [i_0] [i_1 - 1]) : 0));
            var_17 = 1;
            var_18 = var_11;
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_19 ^= var_4;
            var_20 = ((384 < ((var_5 * (arr_0 [i_0] [i_0])))));
            var_21 = (max(var_21, (arr_3 [i_0] [i_0])));
            var_22 = ((18446744073709551613 ? (var_8 < 45934) : (!var_9)));
            var_23 = var_3;
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_24 = ((18446744073709551615 ? (arr_3 [1] [i_3]) : (((0 ? var_12 : var_5)))));
            var_25 = (((arr_7 [i_3] [i_0]) ? (arr_2 [i_0]) : (arr_4 [i_0])));

            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                arr_14 [i_0] [i_3] [i_4] = 382;
                arr_15 [i_0] = ((19601 ? 18446744073709551613 : 401));
                arr_16 [i_0] [i_0] [i_0] [i_0] = ((var_7 ? (arr_5 [18] [11] [i_4]) : var_12));

                for (int i_5 = 3; i_5 < 23;i_5 += 1)
                {
                    arr_20 [i_5] [6] [i_4] [23] = (~var_3);
                    var_26 = (arr_19 [i_5] [i_5] [i_4] [i_3] [i_0]);
                    var_27 = (((arr_11 [i_5] [i_5] [i_5 - 1] [14]) ? (arr_19 [i_0] [i_0] [i_4] [i_4 - 1] [i_4 - 1]) : var_0));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    arr_23 [1] [1] = (((arr_13 [i_0] [8] [i_4 - 1]) >> (((arr_13 [i_0] [5] [i_4 - 2]) - 3372423144))));
                    var_28 = arr_5 [i_4 - 2] [i_4 - 1] [i_4 - 1];
                    var_29 = 19590;

                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_30 = (max(var_30, ((((arr_8 [1] [i_4 - 1] [i_4]) ? ((var_11 ? 101 : (arr_8 [i_0] [11] [0]))) : (arr_18 [i_7] [i_3] [i_0] [6] [i_3] [i_0]))))));
                        var_31 = (((45917 ? (arr_2 [i_0]) : var_6)));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        var_32 = (((((54979 >> (2751 - 2730)))) ? (arr_26 [18] [22] [i_4] [i_6]) : -0));
                        arr_30 [i_0] = ((((-1 ? 4294443008 : (arr_2 [i_0]))) >> (((arr_22 [i_3] [i_3] [i_4] [i_6]) ? var_1 : 9223372036854775807))));
                    }
                    arr_31 [i_0] [i_3] [18] [i_6] [i_0] = 0;
                }
                for (int i_9 = 2; i_9 < 23;i_9 += 1)
                {
                    var_33 = (arr_7 [i_0] [i_9 - 2]);
                    arr_34 [i_0] [i_3] [i_0] [i_4] [13] [11] = (((arr_21 [i_0] [14] [i_4 - 1] [i_9 - 1] [i_9] [i_4]) ? 15832 : (arr_5 [i_0] [i_0] [i_4 - 2])));
                    arr_35 [i_0] [i_0] [i_0] = var_7;
                }
            }
            var_34 = (arr_29 [i_3] [17]);
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            var_35 = var_2;
            arr_40 [i_0] [i_0] [i_10] = (((arr_12 [i_10]) < (arr_12 [i_10])));
            var_36 = (((!28672) ? var_1 : (arr_33 [i_0] [1] [i_0])));
        }
        var_37 = (arr_3 [i_0] [i_0]);
    }
    var_38 = ((((var_1 ? 50092 : 246))));
    var_39 = (max(var_39, var_9));
    var_40 *= var_2;
    #pragma endscop
}
