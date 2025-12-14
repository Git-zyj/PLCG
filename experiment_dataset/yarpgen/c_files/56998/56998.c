/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56998
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
                var_12 = var_6;
                var_13 = (arr_0 [i_0]);
            }
        }
    }
    var_14 = (max((((var_3 ? var_7 : var_4))), var_3));
    var_15 = (min(var_15, -6987702211550546406));
    #pragma endscop
}
