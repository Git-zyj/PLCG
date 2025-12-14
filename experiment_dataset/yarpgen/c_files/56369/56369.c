/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    var_21 = var_17;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_22 = (arr_0 [i_0]);
        arr_3 [i_0] = (arr_0 [i_0]);
        var_23 = (arr_2 [i_0] [5]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_6 [18] [i_1] = (arr_5 [19]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_12 [i_3] [i_2] [i_3] = (arr_9 [i_1] [i_2] [i_3]);

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_24 = (arr_11 [i_4] [21] [i_3] [i_4]);
                        var_25 ^= (arr_9 [i_1] [i_1] [i_2]);
                        var_26 = (arr_9 [i_1] [i_2] [i_3]);
                    }
                    arr_15 [i_1] [i_3] = (arr_4 [i_1]);
                    arr_16 [i_3] = (arr_7 [i_1]);
                }
            }
        }
        var_27 = (arr_5 [i_1]);

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_21 [i_1] [i_1] [16] = (arr_5 [i_1]);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_28 = (arr_4 [i_7]);
                            var_29 += arr_18 [i_7] [i_5] [i_1];
                            var_30 |= (arr_14 [i_8] [i_5] [i_8] [i_8]);
                            arr_28 [i_6] [i_6] [i_6] [4] [i_8] = (arr_17 [i_8] [i_6]);
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
    {
        var_31 = (max(var_31, (arr_8 [i_9] [i_9] [i_9])));
        var_32 = (arr_5 [22]);
        var_33 += (arr_14 [i_9] [i_9] [i_9] [i_9]);
        var_34 += (arr_23 [i_9] [i_9] [16]);
        var_35 = (min(var_35, (arr_10 [i_9] [i_9] [i_9])));
    }
    #pragma endscop
}
