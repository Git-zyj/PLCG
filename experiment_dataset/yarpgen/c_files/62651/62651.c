/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((((((((var_6 ? var_18 : (arr_2 [i_0 + 2] [i_0 + 2] [i_0 + 2])))) ? var_1 : (arr_1 [i_2 + 1] [i_0 - 2])))) ? (var_16 - var_0) : var_12)))));
                    var_21 = arr_0 [i_2];
                    var_22 = var_18;
                }
            }
        }
    }
    var_23 = (min(var_8, (((((var_12 ? -28599 : 28598)) & var_14)))));
    var_24 -= ((var_10 || (((((max(var_2, var_18))) ? -28598 : (~-5302517433944182346))))));
    var_25 = var_13;
    #pragma endscop
}
