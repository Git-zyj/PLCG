/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 97;
        var_12 = (min(var_12, ((((arr_1 [i_0]) | (arr_1 [i_0]))))));
    }
    var_13 = var_9;
    var_14 -= 70;
    #pragma endscop
}
