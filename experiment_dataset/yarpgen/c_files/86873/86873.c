/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = -114;
        var_15 = (max(var_15, ((((!(((var_10 ? 114 : var_9))))) ? ((255 - ((((arr_1 [4] [4]) && var_1))))) : var_3))));
        var_16 = (((max((arr_0 [i_0]), (arr_0 [i_0]))) | var_7));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_17 *= var_3;
        var_18 -= (((max(434993368, 240)) / (((var_13 ? var_3 : (arr_4 [i_1] [i_1]))))));
        var_19 = (((arr_2 [i_1]) / ((-13 ? (arr_2 [i_1]) : (arr_2 [i_1])))));
        arr_5 [i_1] [i_1] = (((((2 ? var_12 : var_13))) || ((max(var_5, (arr_3 [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_20 = (min(var_20, (arr_2 [i_2])));

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_11 [i_2] [i_2] = (((arr_0 [i_3]) ? var_6 : (arr_0 [i_3])));
            var_21 = (((arr_2 [i_2]) ? ((var_9 ? var_13 : var_8)) : var_0));
            var_22 = (arr_10 [i_3] [i_2]);
        }
        for (int i_4 = 4; i_4 < 9;i_4 += 1)
        {
            var_23 = (min(var_23, ((((arr_4 [i_2] [i_4 + 1]) | (arr_9 [i_4 - 1] [i_4 - 3]))))));
            var_24 = (arr_4 [i_4 - 3] [i_4]);
        }
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            arr_16 [i_2] [i_2] [i_5] = ((-8676 ? (arr_13 [i_2] [i_5] [i_5]) : (((((arr_10 [i_2] [i_5]) + 2147483647)) >> (8095183658530369797 - 8095183658530369778)))));
            var_25 = ((var_4 ? (arr_14 [i_2] [i_5 + 1] [i_5]) : var_9));
        }
        for (int i_6 = 4; i_6 < 10;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
            {
                arr_23 [i_2] [i_6 - 3] = var_2;
                arr_24 [i_7] [i_7] [i_7] [i_7] = ((((var_13 ? (arr_4 [i_2] [i_6]) : 10331)) > 192));
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
            {
                var_26 *= 1;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_32 [i_2] [i_6] [i_8] [i_9] [i_10] = var_8;
                            var_27 = (((arr_17 [i_2] [i_6 - 4]) % 114));
                            arr_33 [i_10] [i_10] [i_9] [i_8] [i_6] [i_2] [i_2] = (19618 / -16);
                        }
                    }
                }
                arr_34 [i_2] [i_6 - 4] [i_8] [i_6] = var_9;
                arr_35 [i_2] [i_6] [i_6] = (var_7 || (arr_7 [i_6 - 4]));
            }
            for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
            {
                arr_38 [i_2] [i_2] [i_6] [i_11] = (arr_8 [i_6]);
                arr_39 [i_2] = (((var_0 % var_5) | 10));
            }
            var_28 -= (((arr_37 [i_6 - 4] [i_6 - 1]) && (arr_37 [i_6 - 3] [i_6 - 4])));
        }
    }
    for (int i_12 = 0; i_12 < 0;i_12 += 1)
    {
        var_29 = ((!(((arr_42 [i_12]) < (arr_42 [i_12])))));
        var_30 -= var_12;
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            {
                var_31 -= (70 < 9);
                arr_50 [i_13] [i_14] [i_14] = ((((((var_13 ? var_12 : var_1)) / (arr_1 [22] [i_14]))) * 28584));
                var_32 = var_11;
            }
        }
    }
    var_33 = var_0;
    var_34 = (max(var_34, (var_2 * var_9)));
    var_35 ^= ((((1 | 4645) ^ -3108)) + 0);
    #pragma endscop
}
