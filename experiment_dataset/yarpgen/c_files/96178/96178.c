/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_20 = var_3;
                        var_21 = -var_13;
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_12 [i_1] = (~-44);
                        arr_13 [i_2] [i_0] [i_2] = var_5;
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_22 = var_7;
                        arr_16 [i_1] [i_1] [i_1] [i_5] = var_10;

                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_1] [i_2] [8] [i_6] [i_5] = var_12;
                            arr_21 [i_6] [i_5] [i_2] [i_2] [i_5] [i_0] = var_9;
                            arr_22 [i_0] [i_1] [i_2] [i_5] [i_0] [i_0] [i_2] = (min((-105 == 0), var_6));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            var_23 = (min(var_15, var_11));
                            var_24 = (~-var_0);
                            arr_25 [i_0] [i_5] [i_2 - 2] [i_5] [i_7] = (min(var_0, var_1));
                            arr_26 [i_5] [i_1] = (var_5 * var_5);
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_5] = var_12;
                            arr_30 [i_5] [9] [9] [i_5] [i_5] [i_8] [i_8] = (var_2 / var_2);
                        }
                        var_25 = (max((var_15 ^ var_2), var_16));
                        arr_31 [i_0] [i_1] [i_2] [i_2 + 1] [i_2 - 3] [i_5] = var_1;
                    }
                    arr_32 [i_2] [i_2 - 2] [i_2] = (max(var_5, (var_18 < var_19)));
                }
            }
        }
    }

    for (int i_9 = 1; i_9 < 8;i_9 += 1) /* same iter space */
    {
        arr_35 [i_9] = var_7;
        var_26 = var_15;
        var_27 = (~var_14);
    }
    for (int i_10 = 1; i_10 < 8;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 7;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                {
                    arr_45 [i_11] [i_11] = var_16;

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        var_28 = var_6;
                        var_29 = var_13;
                    }
                    for (int i_14 = 2; i_14 < 10;i_14 += 1)
                    {
                        var_30 = var_13;
                        var_31 = (min((min(4294967295, 1)), -106));
                    }
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_32 = (min(var_15, var_19));
                        arr_57 [i_10] [6] [i_11] [i_12] [8] [i_15] = var_15;
                    }

                    for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
                    {
                        var_33 = var_17;
                        var_34 = ((min(var_2, ((min(var_0, var_11))))));
                    }
                    for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
                    {
                        arr_66 [i_11] [i_11] [i_11] = var_10;
                        var_35 = (min(7458661450010204610, 0));
                        var_36 = var_12;
                        var_37 = (min(var_9, ((var_12 / (var_14 + var_9)))));
                    }
                    for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
                    {
                        arr_70 [i_10] [i_11] [i_10] [i_10] [5] = var_10;
                        arr_71 [i_11] [i_11] [i_12] [i_18] [i_10] [9] = var_3;

                        for (int i_19 = 0; i_19 < 11;i_19 += 1)
                        {
                            arr_75 [4] [i_11] [6] [1] [i_11] [i_11 + 2] = var_13;
                            arr_76 [i_11] [i_11] [i_12] [i_11] [i_19] = min((var_12 == var_4), var_6);
                            arr_77 [5] [i_10 + 3] [i_11] [i_10 + 1] [i_10 + 1] = var_16;
                        }
                        arr_78 [i_18] [i_18] [i_18] [i_18] [i_18] [i_11] = ((-((min(var_11, var_10)))));
                    }
                    /* vectorizable */
                    for (int i_20 = 3; i_20 < 10;i_20 += 1)
                    {

                        for (int i_21 = 0; i_21 < 11;i_21 += 1)
                        {
                            var_38 = var_17;
                            arr_86 [i_11] [i_11] = var_1;
                            var_39 = var_0;
                            var_40 = (((var_1 + 2147483647) << (((var_15 + 1434822651) - 18))));
                        }
                        arr_87 [i_11] [3] [i_11 + 2] [i_11] = var_17;
                        arr_88 [4] [i_12] [i_11] = var_3;
                        arr_89 [i_20] [i_11] [i_11] [i_10] = (~var_14);
                        var_41 = (~var_18);
                    }
                    arr_90 [i_12] [i_11] [i_11] [i_10] = var_8;
                }
            }
        }
        var_42 = (min(var_8, -var_4));
    }
    var_43 = (max(var_1, var_5));
    #pragma endscop
}
