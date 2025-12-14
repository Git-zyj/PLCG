/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = 7;
        arr_3 [i_0] = var_3;
        var_12 = (-127 - 1);
        var_13 += (((~(!34456))));
    }
    var_14 += (!var_0);
    var_15 = ((((((var_7 ? var_1 : var_3))) ? var_3 : ((var_2 ? 1059740170426438555 : 1272539209560657560)))));
    #pragma endscop
}
