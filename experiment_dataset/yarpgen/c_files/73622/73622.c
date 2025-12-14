/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_4 < ((var_6 ? var_13 : ((var_1 ? var_15 : var_2))))));
    var_18 = var_0;
    var_19 = 17912522083235015200;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = 0;
        arr_3 [i_0] = ((~(((var_12 < (arr_0 [20]))))));
    }
    #pragma endscop
}
