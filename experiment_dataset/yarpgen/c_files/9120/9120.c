/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_18 = (arr_0 [i_0 - 1] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [4] [i_0] [i_3] = (max((arr_8 [i_0 + 1] [i_1 + 1] [i_2] [i_1 + 1]), ((32767 ? 8372224 : -10066))));
                        arr_11 [i_0] [i_0] = (arr_2 [i_2]);
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] = (((((((var_7 ? var_8 : 5275358496083204299))) ? ((var_15 ? 18014123631575040 : (arr_4 [i_2] [i_2]))) : 2580621572)) < (!-1181)));
                    }
                }
            }
        }

        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            var_19 = (-1181 - 18446744073709551612);
            var_20 = (~var_5);
            var_21 = (max(((((arr_7 [i_4] [i_4 - 2]) > var_4))), (((18446744073709551612 ? (arr_2 [i_4]) : 4675888163348669780)))));
        }
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 8;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = ((arr_4 [i_5 + 2] [i_5]) ? var_15 : 10233601197133030343);
        arr_19 [i_5] [i_5] = (arr_1 [i_5] [i_5]);
        var_22 = 3640646931;
        var_23 = -10087;
    }
    for (int i_6 = 2; i_6 < 8;i_6 += 1) /* same iter space */
    {
        var_24 = (min(5749323839801538613, var_0));
        var_25 = var_12;
        arr_22 [i_6 + 3] [i_6] = ((((arr_3 [i_6] [i_6 - 2] [i_6]) ? (arr_3 [i_6] [i_6 - 2] [i_6]) : (arr_3 [i_6] [i_6 - 2] [i_6 - 2]))));
        arr_23 [i_6] [0] = ((0 ? (max(((min(0, var_11))), (min(var_4, -4675888163348669780)))) : var_11));
    }
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        var_26 = (arr_25 [i_7]);
        var_27 -= (((((arr_24 [i_7 + 2]) ? var_3 : ((var_16 ? var_6 : 252)))) <= var_0));

        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 18;i_11 += 1)
                    {
                        {
                            arr_36 [0] [i_10] [0] [19] [i_11] = (min((max(var_10, 1125899906842624)), 16352));
                            arr_37 [i_11] [i_11] [i_9] [12] [i_11 + 2] = (arr_32 [i_9] [i_9] [i_9] [i_8]);
                            arr_38 [i_8] [i_8] = var_6;
                            arr_39 [i_7] [i_7 - 1] [i_7] [i_7] [i_7 - 1] = var_16;
                        }
                    }
                }
            }
            var_28 = (max(var_28, ((((arr_26 [i_7 + 1]) | ((((((arr_35 [i_7] [i_7] [i_7] [i_7] [i_7] [i_8]) << (((arr_35 [i_7] [i_7] [i_7 + 1] [i_7 + 1] [i_7] [i_7]) - 26571))))) ? (arr_30 [i_7] [i_7] [i_8] [i_8]) : ((-4675888163348669803 ? var_5 : (arr_34 [i_7] [i_7] [i_7] [i_8] [14] [i_8]))))))))));

            for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
            {
                var_29 = var_4;
                var_30 = (max(var_30, ((min((31 - 1173), ((4 ? 12 : 18446744073709551611)))))));
                var_31 = -15846;
                var_32 = (min(var_32, (~0)));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
            {
                arr_47 [i_13] [i_8] [8] [8] = (arr_26 [i_13]);
                var_33 = (((arr_46 [14] [14] [i_13] [i_8]) | var_1));
            }
        }
        arr_48 [i_7] = 1184;
    }

    for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
    {
        arr_51 [4] |= 1264743256443018415;
        var_34 = (min(var_34, ((((-119 | var_6) <= 7436500099381101442)))));
        var_35 = ((-(arr_24 [i_14])));
        arr_52 [10] [i_14] = var_0;
    }
    for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
    {
        var_36 = var_13;
        var_37 = (min(var_37, (max(((((max(-1736911439517644068, var_3))) ? (arr_28 [i_15] [i_15]) : (arr_31 [i_15] [i_15] [i_15] [i_15]))), -32743))));
        arr_55 [i_15] [i_15] = ((!(((((max(var_11, 8))) ? 96 : -var_14)))));
    }
    for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
    {
        var_38 = (arr_49 [i_16]);
        var_39 = (min(var_39, ((min(10240, 1)))));
    }
    var_40 = (((-32767 - 1) & -6963905209808074150));
    var_41 = var_12;
    var_42 = var_7;
    #pragma endscop
}
