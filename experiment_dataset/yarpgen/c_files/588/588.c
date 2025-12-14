/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((min(var_13, var_3))) ? ((var_3 ? var_9 : 4658636671681116624)) : ((var_16 ? var_6 : 4658636671681116624))))) ? (((22616 < 0) ^ -4658636671681116624)) : 255);
    var_21 = ((((var_13 <= (((var_8 ? var_12 : var_14)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_22 = var_10;
        var_23 = ((((var_19 ? 492811658 : var_0)) >> ((((var_19 % 233) > ((var_4 ? 10 : -10)))))));
    }
    var_24 += (((((var_4 ? 2419 : (var_8 == var_18)))) ? var_0 : var_18));
    #pragma endscop
}
