/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_8;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((var_9 ? var_10 : var_4)));
        arr_3 [i_0] = var_6;

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_12 = var_3;
            var_13 = var_0;
            var_14 = var_6;
        }
        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            arr_9 [0] [0] [i_2] = (16153679335063127397 % 1);
            var_15 = (max(var_15, var_1));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_3] = var_4;
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_16 += (~var_0);
                            var_17 = (min(var_17, (((var_1 ? (var_4 - var_4) : (-31797 != 16153679335063127397))))));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        arr_26 [i_7] = var_0;
        var_18 = ((var_5 ? var_10 : var_8));
    }
    #pragma endscop
}
