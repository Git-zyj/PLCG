/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);
        var_17 = -var_14;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_18 += (1 && 0);
        arr_7 [i_1] = ((1 ? 1 : 2204322395384534536));
    }
    var_19 &= ((((max((max(var_7, var_0)), var_9))) ? (((1 ? (~1) : 1))) : (var_3 + var_16)));
    var_20 = (((((min(var_8, -var_13)) + 9223372036854775807)) >> (var_6 - 7335)));
    var_21 = var_5;
    #pragma endscop
}
