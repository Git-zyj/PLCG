/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] = 61;

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            var_15 = (min(var_15, (arr_10 [i_4] [i_1] [4] [i_3])));
                            var_16 *= ((~(arr_3 [1] [i_3] [1])));
                            arr_15 [i_0] [10] [i_2 + 1] [i_1] |= 99;
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_2 - 1] [i_3] [i_5] [i_3 - 1] = (((arr_10 [i_2 + 2] [i_0] [i_0] [1]) ^ (min((arr_10 [i_2 + 2] [i_0] [i_0] [i_2]), (arr_14 [i_3] [i_3 + 1] [i_2 + 2] [0] [i_1] [i_1])))));
                            arr_20 [i_0] [i_5] [i_0] [i_1] [i_5] = (arr_3 [i_0] [i_0] [i_0]);
                            var_17 = ((!(((((((arr_1 [i_0]) ? (arr_13 [i_0] [i_0] [i_3 - 1]) : (arr_13 [i_0] [i_0] [i_2])))) ? (arr_12 [i_2 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]) : ((-49 ? 10652 : 4290772992)))))));
                        }
                        arr_21 [i_3] [i_0] [i_0] [i_0] = (((((!(arr_13 [i_0] [i_2 + 1] [i_2])))) << (((arr_5 [i_3 + 1] [i_0] [i_0] [i_2 - 1]) + 123))));
                        var_18 = (min(var_18, (arr_11 [11] [i_1] [i_2] [i_3])));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_19 = (arr_5 [i_0] [i_0] [i_0] [i_0]);
                        var_20 = (((arr_18 [i_2 + 2] [i_2 - 1] [15] [i_2 - 1]) ? (arr_18 [i_2 + 2] [i_2 - 1] [i_2] [i_2]) : (arr_18 [i_2 + 2] [i_2 - 1] [i_2 - 1] [14])));

                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            var_21 = ((2752775075 ? 17297 : 17297));
                            var_22 ^= (((arr_9 [i_7] [i_2 - 1] [i_2] [i_2] [0]) ? var_2 : (arr_9 [i_0] [i_2 + 2] [i_2 + 2] [i_6] [i_7])));
                        }
                    }
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        var_23 = (((max((arr_2 [i_0] [i_8 + 3] [i_2 - 1]), (arr_2 [i_1] [i_8 + 3] [i_2 - 1])))) ? ((((1165562700 ? (arr_2 [i_1] [i_2] [i_1]) : (arr_28 [i_0] [9] [i_2] [i_8] [i_0]))) & (((~(arr_9 [i_8] [0] [i_2] [i_8] [10])))))) : (((17265 ? -630988014 : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_2 + 2] [i_2 + 2])))));
                        var_24 = (min(var_24, ((min((((!(arr_24 [4] [1] [1] [i_0])))), -409955204)))));
                        arr_29 [i_0] [i_8] [i_2] [i_0] [i_1] [i_0] = ((!(arr_5 [i_8] [i_0] [14] [i_8])));
                        arr_30 [i_0] [i_0] = (arr_12 [i_8] [i_2 + 2] [1] [i_0]);
                    }
                    arr_31 [i_0] = -469762048;
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        arr_35 [i_9] = var_4;
        arr_36 [i_9] [i_9] = (max((max((((-(arr_23 [i_9] [i_9] [i_9] [i_9])))), var_12)), ((max(((-(arr_7 [i_9] [i_9] [i_9]))), (~var_0))))));
        arr_37 [i_9] = (((arr_10 [i_9] [i_9] [i_9] [i_9]) - 65535));
    }
    #pragma endscop
}
