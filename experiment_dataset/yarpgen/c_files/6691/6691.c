/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_19 = ((!(((arr_1 [i_0 - 2]) != var_18))));
        var_20 = (max(var_20, (var_6 % -var_7)));
    }
    var_21 = (max(var_21, ((max((-var_4 & -var_5), (((var_17 != (~var_4)))))))));
    #pragma endscop
}
