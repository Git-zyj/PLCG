/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0 + 3] [i_0 + 3] = max(-97, (((!2582008740) ? (max(26, 4555245704671264014)) : 1071644672)));
        var_10 = (min(var_10, ((max((max(2304352339646325092, var_1)), (arr_0 [i_0 + 2]))))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_11 = -var_6;

            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {
                arr_9 [i_2] [i_2] [i_2] = ((arr_3 [i_1] [i_2 - 2]) != var_9);
                arr_10 [i_1] [i_2 + 2] [i_3] &= -var_6;
                var_12 = (max(var_12, (!0)));
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
            {
                var_13 *= (var_8 != 2304352339646325092);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            arr_18 [i_1] [i_2 - 1] [i_4] [i_5] [i_6] |= (((0 & 104) == (((-127 - 1) | 2304352339646325100))));
                            arr_19 [i_1] [i_2 + 2] [15] [i_5] [i_6] = ((!(arr_6 [i_2 - 2] [22])));
                        }
                    }
                }
                var_14 = (min(var_14, 2582008745));
            }
        }
        for (int i_7 = 2; i_7 < 23;i_7 += 1) /* same iter space */
        {
            var_15 = (min(var_15, (((!(arr_15 [i_7 + 2] [i_7 + 2] [i_7 - 2] [i_7] [i_7 + 1]))))));
            arr_23 [i_7] [i_1] [i_1] = (arr_16 [i_1] [i_1] [i_7 - 1] [i_7 - 2] [i_7 + 1]);
        }

        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_16 *= (((((32 > (-127 - 1)))) >= (arr_22 [i_8])));
            var_17 = (((arr_8 [i_1] [i_1] [i_8] [i_8]) ? (arr_8 [3] [i_8] [i_8] [3]) : (arr_8 [i_1] [i_1] [i_1] [i_8])));
            var_18 = (min(var_18, var_3));

            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                arr_28 [i_1] [10] = ((var_1 ? -1071644652 : (arr_12 [i_1] [i_8] [i_8])));
                arr_29 [i_1] [i_8] [23] [i_8] = (arr_25 [i_1] [i_8] [i_9]);
            }
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                arr_33 [i_8] [i_8] [i_8] [i_8] = ((~(arr_5 [i_8])));

                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    var_19 = var_5;
                    var_20 = (((arr_30 [i_1] [i_1] [i_1] [i_1]) / ((1779089489 ? var_2 : var_5))));
                    arr_36 [i_11] [i_11] [i_10] [i_10] [i_1] [i_1] = var_3;
                    arr_37 [i_10] [i_1] = (!-var_8);
                }

                for (int i_12 = 4; i_12 < 23;i_12 += 1)
                {
                    var_21 = var_8;
                    arr_40 [1] [i_8] [i_8] [i_10] [i_12] = (((((-(arr_8 [i_1] [i_8] [i_10] [i_12 - 1])))) / ((-(arr_14 [i_12 - 4] [i_10] [i_1] [i_1])))));
                }
                for (int i_13 = 3; i_13 < 22;i_13 += 1)
                {
                    arr_44 [i_13] [i_10] [i_8] [i_1] |= var_1;

                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        var_22 = 1;
                        arr_49 [i_1] [i_1] [i_1] [9] [i_1] [15] [i_1] |= (((arr_16 [i_10] [i_13 - 3] [i_13 + 2] [i_13 + 2] [i_13 + 2]) == var_2));
                        var_23 = ((((var_4 ? var_4 : var_3))) ? ((var_2 ? 0 : var_3)) : ((((arr_21 [i_8] [i_10] [2]) & (arr_41 [i_1] [i_10] [i_13] [i_14])))));
                        var_24 = (((~var_2) ? (arr_8 [i_13] [i_13 - 2] [20] [i_13 + 3]) : 1071644672));
                    }
                    for (int i_15 = 2; i_15 < 24;i_15 += 1) /* same iter space */
                    {
                        arr_53 [i_1] = var_2;
                        var_25 = (min(var_25, (arr_52 [i_1] [i_13 + 2] [i_15 - 2] [i_1] [i_15])));
                    }
                    for (int i_16 = 2; i_16 < 24;i_16 += 1) /* same iter space */
                    {
                        var_26 = (!var_8);
                        var_27 = (-23 != 14);
                        arr_56 [i_1] [i_1] [i_1] [i_13] [i_16] = (((((arr_3 [i_16] [i_8]) ? (arr_12 [i_1] [i_1] [i_13]) : (arr_3 [17] [17])))) ? (var_0 / var_4) : ((1 ? 1 : (-2147483647 - 1))));
                        var_28 = (min(var_28, (arr_11 [i_1] [i_8] [i_10])));
                    }
                }
                var_29 += 1712958558;
            }
        }
        for (int i_17 = 1; i_17 < 23;i_17 += 1)
        {
            var_30 = (min(var_30, (((~1712958550) > (((arr_12 [i_17] [i_17] [1]) ? (arr_57 [i_1] [i_1]) : (arr_45 [i_1] [i_1] [i_1] [i_1] [4] [i_17] [i_17])))))));
            var_31 ^= var_7;
        }
        var_32 = (max(var_32, -59));
    }
    for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
    {
        var_33 = -1071644673;
        var_34 ^= (((arr_41 [i_18] [1] [23] [i_18]) ? 4212541118 : 0));
        var_35 = (max(var_35, (((((((4212541118 ? 82426180 : 1712958550) == 22))))))));
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 22;i_19 += 1) /* same iter space */
    {
        var_36 = (-((1 ? 497 : 1071644672)));
        var_37 = ((~1) ? (arr_58 [i_19] [i_19]) : (arr_11 [i_19] [i_19] [i_19]));
    }
    var_38 = (max(var_38, ((max(var_3, (((var_5 ? var_6 : (max(0, 202182013737909013))))))))));
    var_39 = (min(var_39, (((((var_1 ? var_4 : (235443683 & -235443683))) > (!255))))));
    #pragma endscop
}
