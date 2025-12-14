/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((170 ? var_5 : var_5)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = var_9;
                var_15 += (~-89);
                var_16 &= (!47226);
                arr_5 [i_1 + 2] = max((((arr_2 [i_1 + 2]) ? -2230029765 : var_0)), 7783);
            }
        }
    }
    #pragma endscop
}
