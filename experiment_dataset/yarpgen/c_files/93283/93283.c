/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= -3504181017699785959;
    var_14 = var_4;
    var_15 -= (((((var_8 ? (var_1 * var_5) : var_6))) && (((var_7 ? (max(225503876193500197, var_11)) : -var_6)))));

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((((!(arr_2 [i_1]))) ? var_8 : (max(var_7, 4294967293))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            var_16 = (min(var_16, var_4));
                            var_17 += var_4;
                        }
                        var_18 *= ((-((var_3 ? var_0 : (arr_4 [i_3] [i_3])))));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_1] [i_0] [i_0] = ((var_10 & ((((var_10 <= ((var_8 ? var_4 : 0))))))));
                        var_19 |= ((!((((((0 ? (arr_12 [2] [i_1] [i_5]) : (arr_12 [i_0] [i_1] [i_5])))) ? var_6 : (((!(arr_1 [i_5] [i_5])))))))));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] [i_2] [i_6] = (arr_5 [i_0]);

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_25 [18] [i_0] = (i_0 % 2 == 0) ? ((max((((+((var_1 << (((arr_20 [1] [1] [17] [i_0] [i_7] [1]) - 15862))))))), ((var_10 ? (arr_12 [i_0 - 4] [i_0] [i_0]) : (var_10 / -24326)))))) : ((max((((+((var_1 << (((((arr_20 [1] [1] [17] [i_0] [i_7] [1]) - 15862)) - 19288))))))), ((var_10 ? (arr_12 [i_0 - 4] [i_0] [i_0]) : (var_10 / -24326))))));
                            arr_26 [i_0] [21] [i_0] [i_2] [i_0] [15] [i_0] = (min((max((arr_6 [i_0]), 2950)), ((29047 ? (arr_17 [i_0] [i_0 - 3]) : (arr_17 [i_0] [i_0 - 1])))));
                            var_20 = ((min(4294967291, (((~(arr_23 [i_0] [i_0] [i_0] [i_6])))))));
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_21 -= ((((((~(arr_15 [i_6]))))) & (arr_19 [i_0] [i_0 + 1])));
                            var_22 = var_6;
                        }
                        var_23 = (max(var_23, (min((arr_0 [i_6]), (((23353 << (30018 - 30008))))))));
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        var_24 = ((var_4 ? ((~(arr_9 [i_0] [1] [7] [i_9]))) : var_1));
                        var_25 = ((!(((16 >> (49062 - 49054))))));

                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] = (((4294967285 ? (arr_0 [i_0]) : 48050)));
                            var_26 |= var_4;
                        }
                        for (int i_11 = 0; i_11 < 0;i_11 += 1)
                        {
                            arr_37 [6] [i_1] [3] [i_0] [i_0] [i_0] = (arr_36 [i_11] [20] [i_2] [19] [i_1] [i_0]);
                            var_27 = (arr_13 [i_2 + 1] [i_9] [i_2 + 1] [i_11 + 1]);
                            var_28 = ((42203 ? 4294967280 : 1));
                        }
                        for (int i_12 = 4; i_12 < 20;i_12 += 1)
                        {
                            var_29 = var_3;
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_2;
                            var_30 = ((!(arr_17 [i_0] [i_1])));
                            arr_42 [i_0] [i_1] [i_12] [i_9] [i_12] [i_12] [i_2] = -75;
                        }
                        arr_43 [i_0] = 186;

                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_31 = (((arr_18 [i_0] [i_0 - 4] [i_2 - 1] [i_9 - 2]) ? (arr_1 [i_0] [i_9 + 1]) : (arr_1 [i_0] [i_9 + 1])));
                            var_32 ^= (arr_19 [8] [i_1]);
                        }
                    }

                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        var_33 *= -2950;
                        arr_49 [i_0] [i_1] [14] [19] [i_0] = ((!(((var_9 ? (arr_47 [i_0] [19] [21] [i_2] [i_14] [21]) : var_4)))));
                        var_34 = (min(var_34, -1));
                        var_35 -= (arr_11 [i_0] [i_1] [i_2 - 2] [i_14]);
                    }
                }
            }
        }
        var_36 = (arr_3 [i_0] [i_0]);
    }
    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        arr_52 [i_15] [i_15] = ((-((((((arr_50 [i_15]) ? (arr_51 [i_15]) : (arr_51 [5])))) ? ((3845134524 ? 42185 : var_7)) : (arr_51 [i_15])))));
        var_37 = (((var_4 >= var_10) >= (arr_51 [22])));
    }
    var_38 = (((min(((max((-2147483647 - 1), 240))), var_12)) / 801687432));
    #pragma endscop
}
