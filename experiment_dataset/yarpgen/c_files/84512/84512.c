/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 17976;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = arr_2 [i_1 - 2] [i_0];
                var_12 = (~((255 ? 17976 : 47559)));
            }
        }
    }
    var_13 = var_6;
    #pragma endscop
}
