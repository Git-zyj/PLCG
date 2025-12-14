/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_2 ? (((max(-7454270078827571501, -52)))) : ((((!var_3) && var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (((max(var_5, var_1)) > (arr_0 [i_1])));
                arr_6 [i_0] [i_1] = var_3;
                arr_7 [i_0] [i_1] = var_4;
            }
        }
    }
    var_13 = ((((var_6 / (var_4 + var_6))) | var_4));
    var_14 = (!-7454270078827571519);
    #pragma endscop
}
