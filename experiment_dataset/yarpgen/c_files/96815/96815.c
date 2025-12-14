/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 -= (max((((18446744073709551615 ? -1651953813 : -1651953797))), 0));
                    var_12 = (~-1651953805);
                }
            }
        }
    }
    var_13 = min((((1651953825 ? var_6 : var_2))), (!var_9));
    var_14 = var_9;
    #pragma endscop
}
