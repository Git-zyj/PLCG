/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((~0) ? var_10 : var_14))) || var_15));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0] [i_1] [i_2] = var_12;
                    arr_9 [10] [i_1] [i_2] &= (((arr_5 [i_1 + 1] [i_1] [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])));
                    arr_10 [i_1] [i_2] [i_1] [i_1] = (1 ^ var_2);
                    arr_11 [11] [i_1] [i_0] = (((arr_6 [i_1] [i_1] [i_1 - 1]) & 16382));
                    arr_12 [0] = (arr_7 [i_0]);
                }
            }
        }
        arr_13 [i_0] = (((arr_0 [i_0]) + var_12));
        arr_14 [i_0] = (((arr_6 [8] [i_0 - 1] [8]) || (arr_6 [6] [i_0] [i_0 - 1])));
        arr_15 [i_0] [i_0] = ((((var_9 ? 2147483647 : (arr_2 [0] [i_0] [0]))) >> (((arr_1 [i_0]) - 3431839718))));
        arr_16 [i_0] [i_0] = (1 ^ var_9);
    }
    var_18 = 0;
    #pragma endscop
}
