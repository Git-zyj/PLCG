/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (arr_1 [5] [i_0]);
        var_13 -= var_2;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_14 = var_0;
        var_15 = var_11;
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        var_16 = (arr_7 [10]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                {
                    arr_13 [12] [i_2] [i_4 + 1] [i_4] = 1;
                    var_17 -= (arr_9 [i_3]);
                    var_18 = (min(var_18, var_9));
                }
            }
        }
    }
    var_19 = var_8;
    #pragma endscop
}
