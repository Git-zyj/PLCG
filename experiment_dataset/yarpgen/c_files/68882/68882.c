/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [0] [i_0] = var_10;
                arr_6 [i_0] [i_0] = ((((arr_4 [i_0] [i_0]) ? (((arr_0 [i_0]) | var_4)) : (arr_2 [1]))));
            }
        }
    }
    var_19 = ((var_10 ^ ((var_4 ? ((min(var_3, var_0))) : var_13))));
    #pragma endscop
}
