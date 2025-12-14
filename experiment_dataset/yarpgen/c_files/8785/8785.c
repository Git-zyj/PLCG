/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((!((((var_12 + var_7) ? ((3211530222516816622 ? var_3 : 240306209)) : ((var_13 ? 292617557 : 2147483647)))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 *= ((-(((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
        var_22 = ((((-(arr_3 [i_0]))) * ((((arr_1 [i_0]) ? (arr_0 [i_0]) : var_13)))));
        var_23 = ((min(((min((arr_0 [i_0]), 1073741823))), (~var_15))));
        var_24 = ((((14025386838700535664 ? 1 : 4421357235009015928)) ^ ((((arr_2 [i_0]) + (((arr_1 [i_0]) ? (arr_0 [i_0]) : 2147483647)))))));
    }
    var_25 = var_4;
    #pragma endscop
}
