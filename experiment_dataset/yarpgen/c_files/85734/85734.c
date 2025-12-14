/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;
    var_19 *= (min(((var_7 ? (max(var_15, var_16)) : var_1)), ((max(var_4, var_5)))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = (min((((((arr_0 [i_0 - 1]) - (arr_1 [1]))) + -1477309738)), (max((-3271188436261061551 + 1), ((var_0 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0])))))));
        var_21 = ((((min(21197, var_13)) & (arr_1 [i_0 - 1]))));
    }
    var_22 &= (max(var_0, (min(var_11, (max(44327, 44338))))));
    #pragma endscop
}
