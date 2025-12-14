/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_15 = (max(var_15, -1));
        arr_2 [i_0] = arr_1 [i_0];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_12 [i_2] = (((arr_11 [i_1] [i_2] [i_1]) ? (arr_11 [i_1] [i_2] [i_3]) : (arr_11 [12] [i_2] [i_1])));
                    var_16 |= (((11 <= var_3) ? (((arr_10 [12]) ? (arr_5 [i_2]) : (arr_4 [i_2]))) : (arr_11 [i_2 - 1] [8] [i_2 + 1])));
                }
            }
        }
        var_17 = (arr_5 [i_1]);
        var_18 = (arr_10 [10]);
    }
    var_19 = var_9;
    #pragma endscop
}
