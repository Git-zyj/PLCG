/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_2 ? var_14 : -6103225650854651860));
    var_20 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = (((-2134553254 | ((var_3 ? (arr_6 [i_0] [i_0] [i_0]) : var_12)))));
                    var_22 += var_1;
                }
            }
        }
    }
    #pragma endscop
}
