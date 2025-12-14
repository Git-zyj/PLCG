/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_20 = (~var_11);
        var_21 = 134217727;
    }
    var_22 = (((var_1 ? 52 : ((var_17 ? var_16 : var_5)))));
    var_23 = (((max(((max(var_17, var_6))), 203)) / ((40 ? ((max(var_2, -42))) : var_5))));
    var_24 = 74;
    #pragma endscop
}
