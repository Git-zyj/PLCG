/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = (((((var_9 ? (~var_5) : ((min(var_5, -4868)))))) && ((min((min(31250, var_0)), (max(var_0, var_1)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = ((min(8506271, var_8)));
        var_13 = (min(var_13, -8506298));
        arr_3 [i_0] [i_0] = (max(8506271, -1));
        var_14 = (min(var_14, ((((max(var_0, ((1 ? -8506272 : -512))))) + 22607))));
    }
    #pragma endscop
}
