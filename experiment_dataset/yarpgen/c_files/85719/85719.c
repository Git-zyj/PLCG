/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((0 ? 18446744073575333888 : 5))));
    var_21 = ((var_19 ? ((var_16 ? (((19118 ? var_4 : var_9))) : var_0)) : var_17));
    var_22 *= (~var_3);

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_23 = (((~((-(arr_2 [19]))))));
        var_24 = var_6;
        var_25 = ((55500 ? 11 : (arr_0 [i_0])));
    }
    #pragma endscop
}
