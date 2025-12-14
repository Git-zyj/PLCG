/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((((var_0 * (arr_0 [i_0])))) ? (var_4 + 1111754806) : (arr_0 [i_0])));
        var_14 |= (((var_11 ^ var_5) <= ((var_5 ? var_3 : (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [i_0] [1] = (1111754806 | -1111754810);
                    arr_13 [i_0] [i_1] [i_2] [23] = var_2;
                }
                for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    var_15 += (((((~(arr_6 [i_1])))) || 2947422772));
                    arr_16 [i_0] [i_1] [i_4] [i_4] = var_10;
                    var_16 = 1347544503;
                }
                for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_5] [i_1] = (arr_3 [i_0] [i_1] [i_5 - 1]);
                    var_17 ^= ((((((arr_0 [i_1]) != (arr_15 [0] [i_0] [i_2] [i_0])))) + ((var_8 ? 114 : (arr_1 [i_1])))));
                }

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_18 = 5497189749790235905;
                    arr_23 [2] [i_2] [i_6] &= (((arr_17 [8] [i_6] [i_0] [i_1] [i_0] [5]) / (arr_8 [i_0])));
                    var_19 = 4398046511103;
                    arr_24 [i_6] [i_0] [i_0] = (((arr_8 [9]) <= 2947422765));
                }
                var_20 = (min(var_20, (var_7 != 90)));
            }
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 22;i_9 += 1)
                    {
                        {
                            arr_31 [1] [i_7] [i_7] [i_8] [i_9 + 2] [i_7] [i_0] = (i_8 % 2 == 0) ? (((((arr_29 [i_9 - 3] [i_9 + 1] [17] [i_9] [i_8] [i_9]) + 2147483647)) << (((arr_26 [i_0] [i_1] [i_8 - 1]) - 2642)))) : (((((((arr_29 [i_9 - 3] [i_9 + 1] [17] [i_9] [i_8] [i_9]) - 2147483647)) + 2147483647)) << (((arr_26 [i_0] [i_1] [i_8 - 1]) - 2642))));
                            arr_32 [i_8] = var_3;
                            var_21 = -2947422760;
                        }
                    }
                }
                var_22 &= ((var_1 ? var_10 : var_10));
            }
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                arr_36 [i_0] [i_0] [2] = ((1347544520 ? ((var_12 ? var_6 : (arr_29 [i_0] [i_0] [i_1] [i_1] [i_10] [i_10]))) : (arr_29 [i_0] [i_0] [i_0] [i_10] [i_10] [i_10])));
                arr_37 [i_10] [9] [7] |= (arr_21 [10] [i_1] [i_10] [6]);
                arr_38 [i_10] [20] [20] = (arr_28 [i_0] [i_1] [i_10] [i_0] [i_10] [1]);

                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    var_23 -= var_0;
                    var_24 = (arr_28 [i_0] [i_0] [i_0] [11] [i_0] [i_0]);
                    var_25 = (((((var_1 | (arr_15 [i_11] [i_10] [20] [i_11])))) ? (arr_22 [i_0] [i_1] [12] [i_11]) : (var_1 + 75)));
                }
                for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                {
                    var_26 = (arr_14 [i_10]);
                    var_27 = (3 * 2947422760);
                    arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (2947422772 + 55907);
                }
                for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                {
                    arr_49 [i_13] = var_4;
                    var_28 = (((55902 > 5221) % ((2947422755 ? var_11 : (arr_17 [i_0] [i_1] [i_1] [i_13] [i_1] [i_0])))));
                }
            }
            var_29 = (!var_2);
        }
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 21;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                {
                    arr_55 [i_0] [i_14] [i_14] [i_0] = (arr_28 [11] [11] [i_0] [i_14] [i_15] [i_15]);
                    var_30 = ((1347544510 ? -672239137 : ((-(arr_20 [i_0] [i_0] [i_14] [i_0] [i_0] [i_0])))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_16 = 3; i_16 < 9;i_16 += 1)
    {
        var_31 ^= 755503120;
        var_32 = (min(var_32, (arr_40 [i_16 - 1] [1])));
        var_33 -= 96;
        arr_59 [10] &= arr_6 [i_16 + 2];
    }
    var_34 = var_13;
    #pragma endscop
}
