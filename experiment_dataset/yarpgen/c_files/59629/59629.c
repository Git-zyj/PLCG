/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = max((arr_3 [i_0]), 70368744177663);
                var_17 = ((+(((arr_2 [i_0 + 1] [i_1 - 1] [i_1]) ? (arr_2 [i_0 + 1] [i_1 - 1] [i_0]) : var_8))));
                var_18 ^= (min((((var_4 ? (arr_3 [24]) : (arr_3 [8])))), ((var_3 ? (arr_1 [i_1 - 1]) : var_3))));
            }
        }
    }
    var_19 = ((var_6 * (((var_2 * var_6) ? (var_9 - var_16) : var_12))));
    #pragma endscop
}
