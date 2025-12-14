/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_0 ? var_10 : (((((28 ? 0 : var_8)) * -1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = ((((((arr_2 [i_0 - 1]) ? ((min(109, 32))) : (arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 2])))) ? ((-110 ? (arr_2 [i_0 + 1]) : (((arr_0 [i_0]) ? (arr_2 [i_0 + 1]) : (arr_0 [i_0]))))) : ((max((max((arr_0 [i_0]), 44)), (arr_3 [i_0 + 3] [i_0 + 2] [i_0 - 1]))))));
                var_16 |= (max((arr_1 [13]), (arr_1 [i_0 + 2])));
                var_17 = max((arr_2 [i_1]), (((arr_0 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_0 + 2]))));
            }
        }
    }
    #pragma endscop
}
