/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, -1226632749));
                        var_21 = (arr_2 [i_1] [i_1]);
                    }
                }
            }
        }
        var_22 = var_12;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_23 += ((((var_7 ? var_12 : (arr_11 [i_4]))) <= (((var_4 ? 2047 : var_1)))));
        arr_12 [i_4] = (arr_2 [i_4] [i_4]);
        var_24 = var_5;
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_15 [i_5] = 1226632748;
        var_25 = (max(var_9, (arr_13 [7])));
    }
    #pragma endscop
}
