/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_5;
        var_19 = (min(var_19, var_2));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_20 = var_15;

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_13 [i_2] [i_1] [i_1] = (min(65535, var_2));
            var_21 ^= var_2;
            arr_14 [3] = var_15;
            arr_15 [i_1 - 1] |= var_8;
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_27 [i_1] [i_5] [i_5] = var_7;
                            arr_28 [i_5] [i_3] = min((min(var_0, var_4)), ((min(var_14, var_12))));
                            var_22 = (max(var_22, var_11));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_23 = (min(((max(var_9, var_16))), var_3));
                            arr_32 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1] [i_5] [i_1 - 1] = (min((min(var_13, var_5)), (min(var_17, var_13))));
                        }
                        for (int i_8 = 3; i_8 < 10;i_8 += 1)
                        {
                            var_24 ^= (max((max(var_9, var_17)), (max(var_8, var_14))));
                            var_25 -= (min((max(var_18, var_0)), ((max(var_11, var_2)))));
                            var_26 = (min(var_26, ((min((max(var_6, var_0)), (min(var_13, var_5)))))));
                            var_27 -= var_14;
                            var_28 = (max(var_28, (min(-4635500182122005791, ((max(2048, var_9)))))));
                        }
                        var_29 = var_2;
                        arr_35 [i_5] [i_5] [i_5] [i_1] = (max(var_1, (max(var_8, var_13))));

                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            arr_39 [i_5] [i_5] = (min(18446744073709551615, 107));
                            var_30 = (max(((max(var_7, var_11))), (max(2843776216, 2097136))));
                        }
                        arr_40 [i_5] [i_5] = var_8;
                    }
                }
            }
        }
        arr_41 [i_1] [i_1 - 1] = (max(((min(var_10, var_12))), (min(var_13, 5711675623389395875))));
    }

    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 18;i_12 += 1)
            {
                {
                    var_31 = (max(var_31, (min(var_16, (min(var_14, var_7))))));

                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        arr_53 [i_10] [i_10] [i_10] [i_10] [i_10] = var_1;
                        var_32 = (max((min(var_18, var_2)), ((min(var_6, var_10)))));
                        var_33 = (max(var_33, ((min((min(var_5, var_8)), var_1)))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            arr_56 [i_14] = var_18;
            /* LoopNest 2 */
            for (int i_15 = 2; i_15 < 20;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    {
                        arr_62 [i_10] [i_14] [i_16] = var_13;
                        arr_63 [i_10] [i_10] [i_10] [i_16] [i_14] = var_12;
                        var_34 ^= var_3;
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {
            var_35 -= var_18;
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 21;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 21;i_19 += 1)
                {
                    {
                        var_36 = var_6;
                        var_37 = var_7;

                        for (int i_20 = 0; i_20 < 21;i_20 += 1)
                        {
                            arr_76 [i_10] [i_17] [i_17] [6] [i_20] = var_16;
                            var_38 = (max(var_38, var_6));
                        }
                        for (int i_21 = 0; i_21 < 21;i_21 += 1)
                        {
                            arr_81 [i_21] [i_10] [i_18] [i_10] [i_10] |= var_6;
                            var_39 = var_2;
                        }
                    }
                }
            }
            arr_82 [i_17] = var_9;
            var_40 = var_15;
        }
    }
    var_41 = var_15;
    #pragma endscop
}
