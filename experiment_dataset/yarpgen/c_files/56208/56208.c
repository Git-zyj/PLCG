/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [10] [i_1 + 1] &= -3546522933997452948;
                arr_6 [14] &= arr_0 [2];
            }
        }
    }
    var_20 = var_18;
    #pragma endscop
}
