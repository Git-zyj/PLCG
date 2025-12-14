/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = var_0;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_15 += (arr_3 [i_0]);
        arr_4 [i_0 + 2] = (arr_0 [i_0]);

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_16 = (arr_11 [i_0 + 2] [i_3] [i_4]);
                            var_17 = (arr_12 [i_1] [i_1]);
                        }
                    }
                }
            }
            var_18 &= (arr_11 [i_0] [i_0] [i_0]);
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = (arr_16 [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 13;i_8 += 1)
                {
                    {
                        var_19 = (min(var_19, (arr_16 [i_5])));
                        arr_29 [3] [i_6] [i_8] [i_8] = (arr_7 [i_5] [i_6] [i_6]);
                    }
                }
            }
        }
        var_20 = (arr_12 [i_5] [i_5]);
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                {
                    arr_37 [4] [i_9] [i_10] = (arr_20 [i_9] [i_10]);
                    var_21 -= (arr_25 [i_5]);
                }
            }
        }
        arr_38 [i_5] [i_5] = (arr_11 [i_5] [i_5] [i_5]);
    }
    #pragma endscop
}
