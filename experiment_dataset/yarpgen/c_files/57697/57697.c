/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = var_8;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 -= (var_10 && var_3);
                                var_16 = (min(var_16, 994173671));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_0] = (arr_3 [i_2] [i_2]);
                            }
                        }
                    }
                    arr_12 [i_0] = ((!(arr_6 [i_0] [i_0])));

                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        var_17 |= var_5;
                        var_18 ^= (arr_10 [i_0] [i_0] [i_1] [i_0] [i_5]);
                        var_19 = ((37710 ? (arr_13 [i_5 - 2] [i_5 - 2] [i_5] [i_5] [i_5 + 1]) : (arr_4 [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 1])));
                        var_20 ^= (((arr_9 [1] [i_1] [12] [5] [i_5 - 2]) > var_9));
                        arr_16 [i_5] = (arr_3 [9] [9]);
                    }
                    var_21 ^= (((arr_9 [i_0] [i_0] [i_1] [16] [i_2]) * (arr_9 [i_0] [i_0] [i_1] [i_1] [i_0])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    {
                        arr_25 [i_0] [i_0] [i_0] = (arr_4 [i_8 + 2] [i_8 + 2] [i_7 - 2] [i_7 - 2]);

                        for (int i_9 = 4; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            var_22 = var_12;
                            var_23 = (min(var_23, (((~(~1536208598056941984))))));
                            arr_28 [i_0] [i_9] [i_7] [i_8] [i_0] = var_8;
                        }
                        for (int i_10 = 4; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            arr_33 [i_6] [i_10] [2] [i_6] [i_10] [i_10] [1] = (arr_8 [i_0] [i_0] [i_0]);
                            var_24 = ((((arr_23 [0] [0] [i_0] [i_10] [0] [i_0]) ^ var_9)));
                            var_25 = var_12;
                        }
                        for (int i_11 = 4; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            var_26 -= (arr_7 [i_8 - 2] [i_8 - 2] [i_8 - 2]);
                            var_27 += (arr_17 [i_0] [i_0] [i_11]);
                            var_28 = (min(var_28, ((((arr_10 [i_7 - 1] [1] [1] [i_8 + 2] [i_11 - 4]) + (arr_8 [i_7 - 1] [i_8] [i_8 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
