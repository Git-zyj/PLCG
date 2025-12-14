/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    var_20 = ((((((var_15 ? var_15 : var_4)))) ? (var_13 | var_1) : (var_13 + var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [1] [1] [i_0] = ((var_4 ? (arr_2 [i_1]) : (max(var_9, var_10))));
                var_21 += 1;
            }
        }
    }
    #pragma endscop
}
