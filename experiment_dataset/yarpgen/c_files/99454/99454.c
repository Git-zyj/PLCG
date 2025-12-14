/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((max(var_2, var_14)));
    var_19 = (min(var_19, var_4));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = (min(var_20, ((((min(36028788429029376, 36028788429029367)) - (((((arr_1 [i_0] [i_0]) < -42)))))))));
        arr_2 [i_0] = ((~(-36028788429029395 >= 1601579787)));
        var_21 &= (((-36028788429029415 | 1030417477) <= (~-29059)));
    }
    #pragma endscop
}
