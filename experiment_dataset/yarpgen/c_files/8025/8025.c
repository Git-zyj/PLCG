/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_14 * var_11) ? ((225 ? 0 : var_10)) : (min(300199415, 8172))));

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_19 = (arr_1 [i_0 + 2] [i_0]);
        var_20 = (max((var_5 & var_9), ((((max(36, -3962))) ? var_14 : 41108))));
    }
    #pragma endscop
}
