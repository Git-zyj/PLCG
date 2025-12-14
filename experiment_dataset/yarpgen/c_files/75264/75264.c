/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 = (max((min(var_5, var_7)), var_3));
        arr_2 [i_0] [i_0] = var_10;
    }
    var_15 = (min(0, var_13));
    #pragma endscop
}
