/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((((((~var_1) & ((-2952568573628789254 ? 1947700691638272791 : 1))))) ? ((var_15 ? (((max(var_1, var_3)))) : (var_12 & var_10))) : (max(2952568573628789253, 54668))));
                arr_5 [23] [23] [i_0] = ((var_12 + (117 + 14680064)));
            }
        }
    }
    var_19 = var_14;
    var_20 = (min(var_20, var_14));
    var_21 = (min(var_21, ((((((!14680064) ? ((1 ? -18933 : 126)) : -534642696))) ? var_17 : ((((max(var_6, var_13))) ? var_0 : (var_10 / var_5)))))));
    #pragma endscop
}
