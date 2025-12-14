/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 += (arr_3 [i_0] [i_0]);
                var_17 = (((arr_4 [i_1]) ? -var_6 : (--1036948067)));
            }
        }
    }
    var_18 = (((~var_14) ? var_1 : ((-((var_14 ? var_12 : 0))))));
    var_19 = var_14;
    #pragma endscop
}
