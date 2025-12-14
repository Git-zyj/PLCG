/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_11;
    var_19 = ((var_9 ? var_2 : (max(var_1, 693614172))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (((((!0) && 16730495338649301864)) ? (arr_1 [i_1 + 2]) : ((20 ? (arr_1 [i_0 - 1]) : var_0))));
                var_21 = ((~((min(var_6, var_12)))));
            }
        }
    }
    #pragma endscop
}
