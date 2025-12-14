/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_12 = arr_1 [i_0 - 3] [i_0];
        var_13 = (max((arr_0 [i_0]), (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = 30;
        var_14 = (arr_2 [i_1]);
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_15 *= arr_6 [i_2] [i_2];
        var_16 = (min((arr_7 [i_2]), (arr_7 [i_2])));
        var_17 = var_1;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        arr_10 [i_3] = 94;
        arr_11 [i_3] = (arr_3 [i_3 - 2]);
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_18 = 8434640635504093349;
                                var_19 = arr_21 [i_5] [i_7];
                                arr_25 [i_6] [i_7] [i_6] [i_5] [0] = ((((min((((arr_21 [i_6] [1]) | (arr_7 [i_7]))), ((min((arr_6 [i_8] [i_7]), (arr_16 [i_4] [i_5] [i_6] [i_6]))))))) ? var_10 : ((((arr_15 [i_7] [i_4]) / (arr_15 [i_4] [i_5]))))));
                            }
                        }
                    }
                    var_20 = (arr_22 [i_4] [i_4] [i_4]);
                }
            }
        }

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_21 = (arr_20 [i_4] [i_4] [i_4] [i_4] [i_4]);
            arr_28 [i_9] [i_9] [i_4] = ((var_2 ? (((arr_15 [i_4] [i_4]) - (max(2147483647, (arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))) : (max((arr_22 [i_4] [i_4] [i_4]), (arr_18 [i_4] [i_4] [i_9])))));
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            arr_33 [i_10] [i_10] = arr_12 [i_4] [i_10];

            /* vectorizable */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                var_22 = -9313;
                var_23 = (((arr_16 [1] [i_10] [i_10] [i_10]) ? var_3 : ((8434640635504093349 * (arr_19 [11] [i_10] [i_4])))));
                arr_37 [i_10] [i_10] = (arr_20 [i_4] [i_10] [i_11] [i_4] [i_4]);
            }
            var_24 = (((min((arr_20 [i_4] [i_4] [i_10] [i_10] [i_10]), (min((arr_32 [i_10] [i_10] [i_10]), 0)))) == ((((var_4 ^ 2147483647) ? (arr_20 [i_10] [i_10] [i_10] [i_4] [i_4]) : (arr_15 [6] [1]))))));
            arr_38 [i_10] = var_4;
        }
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            arr_43 [i_4] = (min((arr_14 [i_4] [i_4]), (min((min(10012103438205458267, 100)), (max((arr_39 [i_4] [i_12] [i_12]), (arr_30 [i_4] [i_12] [i_4])))))));
            var_25 |= (arr_29 [i_12]);
            var_26 = 1;
        }
        var_27 = 8434640635504093348;
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
    {
        arr_47 [i_13] = (arr_30 [i_13] [i_13] [i_13]);
        var_28 = (((arr_19 [i_13] [i_13] [i_13]) ? (arr_19 [i_13] [i_13] [i_13]) : 8434640635504093349));
    }
    #pragma endscop
}
