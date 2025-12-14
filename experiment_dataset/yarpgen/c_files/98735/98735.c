/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((var_0 ? (min(1405023641, 65535)) : var_2));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (min(var_13, ((((((var_1 ? (arr_0 [i_0]) : var_0))) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((arr_0 [i_0]) ? var_6 : (arr_0 [i_0]))))))));
        var_14 &= 1405023641;
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        var_15 &= (min(((max((arr_1 [i_1 - 3]), var_3))), (0 % -11536)));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_16 &= (((arr_1 [i_2 - 1]) <= var_4));
            var_17 &= (((arr_1 [i_1 + 1]) ? (arr_1 [i_1 - 2]) : 1688870692));
            var_18 = var_1;
        }
    }
    #pragma endscop
}
