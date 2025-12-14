/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((((((((var_9 ? var_7 : var_14))) ? var_9 : ((var_13 ? var_13 : var_5))))) ? (((var_14 ? var_5 : ((var_9 ? var_0 : var_6))))) : (((var_1 ^ var_6) - var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0 + 1] = ((((var_2 ? var_12 : var_1))) ? ((var_5 ? var_0 : var_10)) : (max(var_4, var_4)));
                arr_6 [2] [7] = var_10;
                arr_7 [i_1] [i_1] [7] = (((var_9 && var_5) >= (var_5 == var_11)));
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
