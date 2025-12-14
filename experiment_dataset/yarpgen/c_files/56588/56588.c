/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1 + 1] [i_0] [i_1] = max(9223372036854775807, (var_10 % var_18));
                    var_20 ^= var_4;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 8;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_21 = var_15;
                                var_22 = var_6;
                                var_23 = -1;
                                arr_20 [i_7] = (var_13 ? ((var_12 ? var_18 : 9223372036854775790)) : (((~-9223372036854775795) >> (9223372036854775790 - 9223372036854775773))));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_8 = 2; i_8 < 7;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 6;i_9 += 1)
                    {
                        var_24 = ((arr_9 [i_3 - 1]) % var_9);
                        var_25 = var_10;
                    }
                    for (int i_10 = 2; i_10 < 7;i_10 += 1)
                    {

                        for (int i_11 = 3; i_11 < 9;i_11 += 1)
                        {
                            var_26 = ((!(arr_29 [i_11] [i_11 - 2] [i_11] [i_11 + 1] [i_11 - 3] [i_11 - 3] [i_11])));
                            var_27 = ((var_8 ? ((((-9223372036854775807 - 1) < var_7))) : (((var_6 || (-9223372036854775807 - 1))))));
                        }
                        arr_30 [i_3 + 1] = ((var_18 >= (arr_18 [i_3] [8] [i_3] [i_3 - 2] [2])));
                        var_28 = 4611686018427387903;
                    }
                    arr_31 [i_3] |= (~var_7);
                    var_29 &= arr_4 [i_3 - 2];
                    var_30 = (arr_29 [i_3 - 1] [i_3] [i_3] [i_4] [i_8] [i_8] [i_8 + 3]);
                }
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {

                    for (int i_13 = 1; i_13 < 6;i_13 += 1)
                    {
                        var_31 = var_5;
                        var_32 &= max((min(((var_11 ? 1099511627775 : var_5)), (arr_18 [i_4 - 2] [i_4 - 1] [i_3] [i_3] [4]))), -131071);
                    }
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        var_33 = (var_0 ? (((((arr_27 [i_3 + 1] [i_4] [i_4 + 2] [i_4] [i_12] [i_12] [i_14]) >= var_16)))) : ((var_2 ? (-9223372036854775807 - 1) : (min(var_2, 9223372036854775807)))));
                        var_34 ^= ((var_1 != 1099511627775) & (min((~0), ((0 & (arr_21 [i_14] [i_14]))))));
                        var_35 = (((1152903912420802560 ^ 4503599627370495) ? var_9 : (max(var_14, var_4))));
                    }

                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 9;i_15 += 1) /* same iter space */
                    {
                        var_36 = (((9 <= (arr_40 [i_3] [i_3] [i_12] [i_15 - 1]))) ? var_0 : var_11);
                        arr_42 [i_15 - 1] [i_15] [i_3] [i_15 - 1] [i_15] &= ((((var_9 ? (arr_36 [i_3] [i_4] [i_12] [0] [i_12]) : var_0))) ? 20 : var_1);
                        var_37 = var_2;
                    }
                    /* vectorizable */
                    for (int i_16 = 1; i_16 < 9;i_16 += 1) /* same iter space */
                    {
                        var_38 = 9223372036854775804;
                        arr_47 [i_3] [i_16] [i_12] [i_16 - 1] = ((arr_36 [i_3 + 1] [i_16] [i_3 + 1] [i_16 + 1] [i_3]) ? (63 & var_15) : var_6);
                        var_39 = (-9223372036854775807 - 1);

                        for (int i_17 = 3; i_17 < 9;i_17 += 1) /* same iter space */
                        {
                            arr_51 [i_3] [i_16] [i_4] [i_3] [i_16] [i_4] = (var_5 << (((((arr_26 [i_3 + 1] [7]) + 8073691513756498572)) - 34)));
                            var_40 = (!8191);
                            var_41 = (~(arr_8 [i_3 - 1]));
                        }
                        for (int i_18 = 3; i_18 < 9;i_18 += 1) /* same iter space */
                        {
                            var_42 = (max(var_42, (((0 ? var_16 : var_11)))));
                            var_43 = var_9;
                            var_44 |= (var_14 ? ((var_11 >> (var_12 + 927128265309351310))) : (63 >= 262143));
                        }
                        for (int i_19 = 3; i_19 < 9;i_19 += 1) /* same iter space */
                        {
                            var_45 = 8796093021184;
                            var_46 = var_1;
                        }
                    }
                    var_47 = (min(var_47, (((9223372034707292160 / var_14) ? (((((var_13 ? 8388608 : var_1))) ? ((~(arr_37 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2]))) : 0)) : var_7))));
                    var_48 = ((var_16 + 9223372036854775807) >> (((arr_33 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_4 - 1]) + 8472009279221980671)));
                }
            }
        }
    }
    #pragma endscop
}
