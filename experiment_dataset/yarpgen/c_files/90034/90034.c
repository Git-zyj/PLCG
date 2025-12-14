/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 0;
    var_12 -= ((~(~242)));
    var_13 = (max(var_13, var_2));
    var_14 = (min((((((var_10 ? var_3 : var_7))) ? var_10 : ((var_5 ? 1 : var_6)))), 0));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_15 |= arr_0 [2];
        var_16 = var_3;
        var_17 = (max(var_17, (((((arr_0 [i_0 + 1]) ? var_2 : var_3))))));
        var_18 = 1899123572;
    }
    #pragma endscop
}
