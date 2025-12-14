/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_13));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (-6 ? (var_9 || var_5) : (arr_1 [i_0]));
        arr_3 [i_0] [i_0] = var_5;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_16 = (max(var_16, 34593));
        var_17 *= (max((((((arr_5 [i_1]) ? var_6 : var_3)) % var_4)), -var_6));
    }
    #pragma endscop
}
