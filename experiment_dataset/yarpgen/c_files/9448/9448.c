/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((21 ? var_10 : (((var_0 + 2147483647) >> (var_4 + 56)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [1] [8] &= ((((((arr_1 [i_0]) * (((((arr_0 [2]) == var_7))))))) ? ((var_2 - (var_8 / var_10))) : (~28986)));
                arr_6 [i_0] = ((((((var_9 && var_8) ? (36550 && 1) : (64 || 1480336059141751457)))) ? (min(var_0, var_8)) : var_7));
            }
        }
    }
    #pragma endscop
}
