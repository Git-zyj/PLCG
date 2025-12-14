/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (((((var_0 ? var_3 : ((var_6 ? var_10 : var_7))))) ? var_8 : ((var_8 ? var_4 : var_5))));
    var_14 = ((var_2 ? ((7154 ? -1 : 1)) : (((((var_0 ? var_4 : var_2))) ? ((var_6 ? var_3 : var_7)) : var_10))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (min(var_15, var_6));
        var_16 += (((((var_3 ? ((var_2 ? var_7 : var_1)) : var_1))) ? var_6 : var_2));
    }
    #pragma endscop
}
