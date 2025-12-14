/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = var_2;
        var_15 = (((arr_2 [i_0] [i_0]) + -var_2));
    }
    #pragma endscop
}
