/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_1, var_17));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = var_7;
        var_22 = ((min(15741, (arr_0 [i_0]))));
    }
    #pragma endscop
}
