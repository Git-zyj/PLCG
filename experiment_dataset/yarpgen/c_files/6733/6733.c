/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(0, -15));
    var_16 |= (min(var_12, 28406));
    var_17 = (~var_13);
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = ((~(((((max(var_9, 39))) && var_5)))));
                var_20 = (((min(var_14, (var_0 + var_11)))) ? var_13 : (var_1 | var_3));
                var_21 = ((min(var_3, (arr_2 [i_0]))));
            }
        }
    }
    #pragma endscop
}
