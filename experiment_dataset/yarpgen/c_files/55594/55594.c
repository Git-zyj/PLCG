/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = arr_2 [i_0];
                var_13 = var_5;
            }
        }
    }
    var_14 = ((((min(var_5, (max(var_4, var_4))))) ? (min(1, (min(1, 2317511344)))) : var_11));
    #pragma endscop
}
