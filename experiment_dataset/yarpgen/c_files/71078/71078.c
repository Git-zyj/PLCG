/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~0);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = 245;
            arr_5 [i_0] = var_11;
        }
        var_17 = (arr_4 [1] [i_0] [i_0]);
        arr_6 [i_0] [i_0] = 1;
        var_18 = (!(arr_4 [i_0 + 1] [7] [i_0 + 1]));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_19 = (!(((-(1 < 250)))));
                    var_20 = ((-((max(153, 249)))));
                    arr_14 [1] [i_3] [i_3] [i_3] = (((arr_9 [i_2] [i_3]) / ((max((max((arr_12 [i_2] [i_2] [i_3] [i_3]), 0)), var_10)))));
                    var_21 = (max(var_21, (((((!(1 & 1))) ? ((1 * (arr_9 [i_2] [i_2]))) : ((-(((arr_12 [i_2] [i_2] [i_2] [i_2]) / 202)))))))));
                }
            }
        }
        arr_15 [i_2] = 1;
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_22 = (((arr_16 [i_5] [15]) ? 1 : (((arr_17 [i_5]) ? (arr_17 [i_5]) : var_7))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    arr_22 [i_5] [i_5] [17] [i_7] = max((arr_21 [i_7 + 1] [i_6] [i_6]), ((((-(arr_20 [i_5] [i_6]))) <= 1)));
                    arr_23 [i_5] [i_6] [i_6] [i_5] = arr_18 [i_5];
                }
            }
        }
        var_23 *= ((-((max(1, (arr_16 [i_5] [i_5]))))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_24 ^= ((68 ? 114 : ((-(arr_17 [i_8])))));
        var_25 = arr_7 [1] [i_8];
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 12;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 11;i_13 += 1)
                        {
                            {
                                var_26 = max((max(198, 94)), (arr_0 [i_10 + 1]));
                                var_27 *= (max(((1 ^ (arr_39 [12] [12] [i_13 - 2]))), 254));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        {
                            arr_47 [i_9] [i_14] [i_10] [i_9] = (arr_10 [1] [i_10]);
                            var_28 = 1;
                        }
                    }
                }
                var_29 = (max(var_29, (((((!(arr_7 [i_10 + 1] [i_10 - 3])))) < 1))));
            }
        }
    }
    #pragma endscop
}
