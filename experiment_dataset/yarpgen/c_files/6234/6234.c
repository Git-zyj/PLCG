/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 ^= ((((((arr_2 [i_0]) ? 0 : 58)) * var_14)));
        var_19 -= ((arr_1 [i_0] [i_0]) | ((var_2 % (max(-5349340674724708924, var_15)))));
    }
    var_20 = -5349340674724708931;
    #pragma endscop
}
