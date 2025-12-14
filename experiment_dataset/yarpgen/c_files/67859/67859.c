/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_10 [i_2] [i_1] [i_0] [i_0] &= (arr_3 [i_0] [i_0]);
                    var_17 = (arr_5 [i_2] [11] [i_0 + 3]);
                    var_18 = (arr_9 [i_2] [i_2] [15] [i_0]);
                    var_19 = (arr_7 [i_2] [i_0] [i_1] [i_0]);

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_20 = (arr_2 [i_3] [i_2]);
                        var_21 = (arr_5 [i_3] [i_0] [i_0]);
                    }
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_22 = (arr_6 [i_4] [i_1] [i_1] [i_0]);
                    arr_16 [11] [i_1] = (arr_9 [i_4] [i_1] [15] [1]);

                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_23 = (arr_9 [i_5] [i_4] [i_1] [12]);
                        var_24 = (max(var_24, (arr_13 [i_5] [i_1] [12])));
                        var_25 = (arr_3 [i_0] [i_0]);
                        arr_20 [i_5] = arr_3 [i_5] [i_4];
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_26 ^= (arr_21 [6] [i_4] [15] [12]);
                        arr_24 [i_6] [i_4] [i_1] [1] [i_1] [i_6] = (arr_19 [i_6] [1] [i_4] [i_0] [i_0]);
                        var_27 = (max(var_27, (arr_11 [i_6] [i_4] [i_0] [i_0] [i_0])));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_27 [i_6] [i_6] [i_1] [i_1] [i_0] [i_1] [i_6] = (arr_12 [5] [i_4] [12] [12]);
                            arr_28 [i_6] [i_6] [i_4] [i_6] [i_0] = (arr_22 [i_7] [i_0] [i_0]);
                        }
                        var_28 = (max(var_28, (arr_17 [i_6] [0] [i_1] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        arr_32 [i_0 + 3] [i_4] [i_8] [i_0 + 3] [i_0 + 3] = (arr_11 [11] [i_1] [i_1] [i_0 - 2] [i_0]);
                        arr_33 [i_8] [i_8] [i_8] [i_0] = (arr_15 [i_8] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                        var_29 ^= (arr_29 [i_8] [i_0]);
                    }
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {

                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            var_30 += arr_25 [i_10] [14] [i_1] [i_1] [i_1] [i_0] [i_0];
                            var_31 = arr_26 [i_10] [i_9 - 1] [i_4] [2] [2];
                            var_32 = (arr_17 [i_10 - 2] [i_9] [14] [3]);
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            var_33 = (arr_42 [i_11] [i_9 + 2] [i_4]);
                            arr_43 [i_11] [i_9] [i_4] [i_4] [i_1] [i_11] = (arr_36 [i_9 + 2]);
                            var_34 = (arr_25 [i_11] [6] [i_11] [i_9] [i_11] [6] [6]);
                            arr_44 [i_11] [i_9 - 1] [i_4] [i_1] [i_11] = (arr_31 [i_11] [i_11] [i_0]);
                        }
                        var_35 = (arr_38 [10] [i_0]);
                    }
                }
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    var_36 = (max(var_36, (arr_40 [11])));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            {
                                arr_53 [1] [i_13] [i_12] [i_1] [11] = (arr_9 [i_13] [i_12] [i_1] [i_0 + 3]);
                                var_37 ^= (arr_29 [i_13] [i_12]);
                                var_38 = arr_50 [i_14] [i_0] [i_1] [i_0];
                                arr_54 [i_1] [i_13] [17] [i_0] [i_1] [i_0] = (arr_37 [i_13] [i_12]);
                                arr_55 [i_14] [0] [i_0] [15] [i_0] = (arr_13 [3] [i_1] [i_0]);
                            }
                        }
                    }
                }
                var_39 = (arr_14 [i_0]);
                var_40 = (arr_11 [i_1] [i_0] [i_0 - 2] [i_0 - 2] [i_0]);
            }
        }
    }
    var_41 = var_9;
    #pragma endscop
}
