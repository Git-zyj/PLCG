/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_18 = ((((((var_4 ? var_16 : var_14)))) ? ((65531 ? ((max(65531, var_14))) : (2407060664155154609 <= 12168))) : (((-(arr_0 [i_0 + 1]))))));
        arr_2 [8] [i_0] = (!var_2);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    {
                        var_19 = (((-29 ^ (arr_0 [i_1]))));
                        arr_13 [i_1] [i_2] [i_3] = (((~var_4) ? 30155 : ((54891 ? var_8 : var_12))));
                    }
                }
            }
        }
        var_20 = (max(var_20, (arr_1 [i_1 - 1])));
        var_21 = (max(var_21, (arr_5 [i_1 - 1] [i_1] [14])));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_22 = var_17;
        var_23 = (min(var_23, (((22 ? 18446744073709551615 : -20)))));

        for (int i_6 = 2; i_6 < 23;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    {
                        var_24 = var_9;

                        for (int i_9 = 1; i_9 < 23;i_9 += 1)
                        {
                            var_25 = (min(var_25, ((((((var_1 ? var_14 : 54881))) ? ((var_13 ? var_12 : (arr_24 [i_5] [i_6] [i_7] [i_5] [i_8] [i_9]))) : 40618)))));
                            var_26 |= (-(1873106722366786131 & 0));
                            var_27 = (min(var_27, (((var_5 ? -28 : (54892 && var_3))))));
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_28 = (((arr_22 [i_5 + 1] [i_6] [i_7] [i_8 - 1] [i_6 - 2]) == ((9971 ? (arr_22 [i_10] [i_6] [i_7] [i_6] [i_10]) : (-127 - 1)))));
                            var_29 |= ((!(arr_26 [i_10] [i_8 + 2] [5] [i_5] [i_5])));
                        }
                        var_30 += ((!((((arr_10 [i_8 - 1] [11] [i_6] [i_5 + 2]) ? 54868 : (arr_11 [i_5] [i_5 + 2] [i_5 - 1] [i_5] [i_5]))))));
                    }
                }
            }
            var_31 = (((arr_14 [i_5 - 1]) ? 55564 : (arr_26 [i_5] [i_6 + 1] [i_5] [i_5] [i_5 - 1])));
        }
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 22;i_11 += 1) /* same iter space */
    {
        arr_30 [3] = ((13436486658808562306 ? var_4 : (arr_3 [i_11 + 1])));
        var_32 |= (arr_20 [i_11 + 2] [i_11 + 2] [i_11]);
        var_33 *= (arr_20 [i_11 - 1] [i_11 + 2] [i_11]);

        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            var_34 = (((arr_9 [i_11] [i_12]) ? 15638255412674704553 : (arr_4 [i_11 - 1] [i_11 - 1])));
            var_35 = (!var_6);
        }
        for (int i_13 = 2; i_13 < 21;i_13 += 1)
        {
            var_36 = (arr_0 [22]);
            var_37 = (min(var_37, (((var_11 + 15765113134589549310) - (((arr_15 [i_13 - 1]) ^ var_11))))));
        }
    }
    var_38 = ((((((var_15 ^ var_1) & (~var_7)))) ? ((((59341 ? 9 : 18446744073709551615)) - var_6)) : ((18446744073709551615 | (var_2 | var_12)))));
    #pragma endscop
}
