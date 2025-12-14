/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = var_5;
        arr_2 [i_0] = var_7;
    }
    var_12 *= 440882562;
    var_13 = var_10;
    var_14 = (min(var_14, var_2));
    #pragma endscop
}
