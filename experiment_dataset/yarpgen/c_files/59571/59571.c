/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= -0;
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = (-var_8 % var_3);
        arr_2 [i_0] = var_7;
    }
    var_13 = var_8;
    #pragma endscop
}
