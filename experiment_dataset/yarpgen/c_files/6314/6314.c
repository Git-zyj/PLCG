/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (arr_6 [i_0]);
                    var_17 = (arr_7 [i_0] [i_0] [i_0]);
                }
            }
        }
        var_18 = ((!(arr_4 [i_0] [0])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                {
                    arr_16 [i_0] [i_0] [i_4] = (arr_9 [i_0]);
                    var_19 = (max(var_19, (arr_13 [i_0] [i_3] [i_4] [i_4 - 2])));
                    var_20 = (min(var_20, (arr_9 [i_4 - 1])));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_21 = (arr_19 [i_0] [i_3] [i_0]);
                        arr_20 [i_4 - 2] [i_5] = ((-(((((arr_5 [i_0]) + 2147483647)) << (((arr_11 [i_5]) - 1958933870))))));
                        var_22 = (((var_10 + 2147483647) << (((((arr_5 [i_0]) + 50)) - 14))));
                        var_23 = ((-(arr_14 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1])));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_6] [i_6] = (arr_11 [i_0]);

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_24 ^= var_14;
                            arr_28 [i_7] [i_6] [i_6] [i_4] [i_6] [i_3] [i_0] = (((arr_13 [i_7] [i_4] [i_3] [i_0]) ^ -var_11));
                        }
                        var_25 = var_5;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_26 = var_1;
                        var_27 = ((-((-(arr_22 [9] [i_3] [i_3] [i_3])))));
                        var_28 = (((((var_4 ? (arr_27 [i_0] [i_3] [i_4] [i_8] [i_3] [i_3]) : var_4))) || (arr_5 [i_4 - 2])));
                    }
                }
            }
        }
        arr_31 [i_0] [i_0] = ((((59214 ? 32 : 32)) % (arr_26 [i_0] [10])));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    {
                        var_29 = (((((arr_30 [i_0] [i_11] [i_11] [i_9] [i_11]) + 170)) - (arr_22 [1] [i_9] [i_10] [i_11])));
                        var_30 = var_14;
                    }
                }
            }
        }
    }
    var_31 = (max(var_11, var_14));
    var_32 = (!-1);
    #pragma endscop
}
