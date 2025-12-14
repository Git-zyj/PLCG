/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (max(var_15, 1));
                arr_5 [5] [7] = (arr_0 [i_0] [i_1]);
            }
        }
    }
    var_16 = (((((var_3 ? ((var_8 << (11461605923389357822 - 11461605923389357805))) : var_6))) ? ((((var_5 ? 636697638 : var_7)) >> (var_5 + 123))) : (((min(3658269685, var_4)) + (8318 | var_14)))));
    var_17 = var_11;
    #pragma endscop
}
