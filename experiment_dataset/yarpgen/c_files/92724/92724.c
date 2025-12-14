/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (((var_9 - (2200143550 + 30533))));
    var_15 = (min(var_15, (((2200143561 * 30) ? (var_7 + 2200143561) : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = 30;
                var_17 = arr_0 [i_0] [i_0];
                arr_7 [16] [5] = ((((~2535259431952505323) & (arr_2 [i_0] [i_1]))));
            }
        }
    }
    #pragma endscop
}
