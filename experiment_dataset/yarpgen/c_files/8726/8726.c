/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 -= ((((!(((var_2 ? (arr_1 [i_0] [12]) : var_0))))) ? ((-(arr_1 [i_0] [i_0]))) : ((((arr_0 [i_0]) < 1736898980)))));
        var_15 = (max(var_15, (var_5 < var_3)));
    }
    var_16 ^= ((var_8 ? (!var_8) : 1875293667));
    var_17 = (!17895);
    #pragma endscop
}
