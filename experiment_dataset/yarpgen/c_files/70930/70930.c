/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_0));
    var_12 = (min(var_0, ((min(-0, ((1700508211 ? -28923 : 46786)))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (min(var_13, ((min(var_5, -2147483639)))));
        var_14 = (max(var_14, (min((max((arr_1 [i_0] [i_0]), 1)), ((min((arr_1 [i_0] [i_0]), var_1)))))));
        var_15 &= (max((arr_0 [i_0]), ((var_6 ? 1 : var_6))));
    }
    #pragma endscop
}
