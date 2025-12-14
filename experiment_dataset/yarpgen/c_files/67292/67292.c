/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = ((((arr_5 [16] [16] [16]) * (arr_5 [i_0] [i_0] [i_1]))));
                var_17 = ((~(9360761112705314875 != var_0)));
                arr_6 [9] [i_1] [i_1] = (9360761112705314875 / (((9360761112705314849 ? var_1 : (!9085982961004236757)))));
                arr_7 [i_0] [i_1] [i_1] = ((min((min((arr_3 [1]), (arr_5 [8] [18] [i_0]))), ((((arr_0 [20]) && var_14))))));
            }
        }
    }
    #pragma endscop
}
