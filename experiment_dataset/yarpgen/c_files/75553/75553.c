/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    var_15 = ((var_2 ? ((((1 ? 1 : var_12)) * var_13)) : ((var_5 ? (((-13 ? var_8 : var_7))) : var_4))));
    var_16 = (-22588 && var_11);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((((arr_1 [i_0]) % var_9)));
        var_17 = (max(var_17, ((max((arr_2 [i_0]), ((((min(var_10, var_9)) == 2823901338))))))));
    }
    #pragma endscop
}
