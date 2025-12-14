/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_19 = (min(var_19, ((min(-0, -39)))));
        var_20 = 0;
    }
    var_21 = (~var_14);
    var_22 = (max(var_22, var_7));
    var_23 = 68169720922112;
    #pragma endscop
}
