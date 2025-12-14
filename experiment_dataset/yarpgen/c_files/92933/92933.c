/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_4 [0] [i_0] = (var_0 * -1416053592);
        var_14 = -1416053594;
        var_15 = ((-(arr_3 [i_0])));
        arr_5 [i_0] [i_0 + 1] = var_3;
        arr_6 [i_0] = ((32 ? (arr_1 [i_0]) : 1416053594));
    }
    var_16 = var_6;

    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = 1416053603;
        arr_11 [i_1] [i_1] = var_8;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                {
                    arr_17 [i_1] [2] = (min((arr_15 [i_3 - 2] [i_3 - 2] [i_1]), -1416053592));
                    arr_18 [i_1] [3] [i_3 + 1] = (arr_14 [i_2] [i_2] [i_3]);
                    arr_19 [i_1] [i_2] [i_1] = (arr_2 [i_1] [i_2]);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_23 [5] = (arr_21 [i_4]);
        var_17 = var_4;
        var_18 = ((min((min((arr_20 [i_4]), var_4)), var_1)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    arr_30 [i_6] [i_5] [8] = var_11;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_35 [i_8] [i_7] [i_6] [i_5] [i_8] = var_7;
                                var_19 = (~93);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_40 [i_4] [2] [i_9] [i_10] = var_5;
                                arr_41 [i_10] [0] [12] [i_5] [i_10] = (arr_27 [i_4]);
                                var_20 = (arr_20 [15]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_21 = 1473939711;
        var_22 = (arr_42 [i_11] [i_11]);
        var_23 = (arr_2 [i_11] [20]);
        arr_44 [i_11] = 1416053586;
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    {
                        var_24 = (min(((min(var_7, (arr_51 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))), -var_13));

                        for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                        {
                            arr_56 [i_15] [i_14] [i_12] [i_12] [i_11] = ((((min(1416053600, var_7))) ? 1416053596 : 30310));
                            arr_57 [i_11] [i_12] [i_13] [i_13] [i_15] = (((((var_7 ? (arr_2 [i_11] [i_11]) : (arr_2 [i_11] [i_11])))) ? (arr_2 [i_11] [i_11]) : (~1416053580)));
                        }
                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
                        {
                            arr_62 [i_16] [i_16] [i_16] [i_16] = (arr_42 [2] [i_14]);
                            arr_63 [19] [i_12] [i_16] [i_16] [i_16] = 323589093;
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
                        {
                            arr_67 [i_11] [i_12] [i_17] [i_14] [i_12] [i_14] [i_17] = (((arr_54 [i_11] [i_12]) * 20));
                            var_25 = ((9223372036854775807 ? var_0 : (arr_52 [i_11] [i_12] [11] [i_13] [i_14] [i_17])));
                        }
                        var_26 = (((~((-7453155967400374291 ? (arr_64 [i_11] [i_12] [i_13] [i_11] [i_14] [16]) : 3373650718)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
