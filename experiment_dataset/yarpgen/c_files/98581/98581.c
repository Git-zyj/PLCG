/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_20 = var_15;
        arr_3 [i_0] = (!var_13);
    }
    var_21 = (max(var_21, ((((((!var_4) ? var_11 : (var_3 && var_6)))) ? var_7 : var_17))));
    #pragma endscop
}
