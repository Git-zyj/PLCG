/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((((~var_8) ? 484089167 : (max((-2147483647 - 1), var_7)))));
    var_21 = -2147483641;
    var_22 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = var_16;
                var_23 *= ((min(((var_15 / (arr_2 [i_0] [i_0]))), (((-3268910300154262594 ? 2734 : -3268910300154262596))))));
                var_24 = (min(((2684161126611608088 ? (((min((arr_5 [i_0] [i_0] [i_0]), 39)))) : var_15)), 57));
                var_25 = (arr_2 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
