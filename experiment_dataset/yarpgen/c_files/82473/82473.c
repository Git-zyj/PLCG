/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (((min((arr_2 [i_1 - 1]), (arr_1 [i_1 - 2] [7])))) | ((var_7 ? var_7 : 0)));
                var_12 = ((var_9 ^ ((min((arr_3 [i_1 + 1]), var_1)))));
            }
        }
    }
    #pragma endscop
}
