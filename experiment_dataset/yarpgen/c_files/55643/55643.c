/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_13 = (arr_1 [i_0 + 1] [i_0]);
        arr_3 [i_0] = (max(var_11, (~1026512781)));
    }
    var_14 += var_3;
    #pragma endscop
}
