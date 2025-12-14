/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((~((var_14 ? var_17 : var_1))))) + (var_17 | var_13)));
    var_19 = var_3;
    var_20 = (max(var_20, var_13));
    var_21 = 1;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_22 = (((((arr_0 [i_0]) ? -62133315768253473 : (arr_0 [i_0]))) << ((((~(arr_0 [i_0]))) - 2444147028912180328))));
        var_23 = (((-62133315768253470 - ((~(arr_0 [i_0]))))) | -5189436854022633174);
    }
    #pragma endscop
}
