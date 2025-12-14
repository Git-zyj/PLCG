/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (~39372);
        var_19 = var_2;
    }
    var_20 *= ((((min(-var_5, (26164 | 1122480885)))) + (min(var_9, (max(var_6, var_5))))));
    var_21 = (max(var_21, var_2));
    #pragma endscop
}
