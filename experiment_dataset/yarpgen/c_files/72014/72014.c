/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = -var_10;
                arr_6 [i_0 - 1] &= ((!(var_7 <= 6969217759474927756)));
            }
        }
    }
    #pragma endscop
}
