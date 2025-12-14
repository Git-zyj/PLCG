/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (min(var_18, ((121 ? 107 : -4393821257941121774))));
        var_19 = 100;
        arr_4 [i_0] &= ((var_4 + 2147483647) >> (((arr_2 [i_0]) + 101)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_20 = (max(var_20, ((((arr_6 [i_1 - 1]) / 53059)))));
            var_21 *= ((!(((53059 << (53043 - 53037))))));
        }
        var_22 = (max(var_22, var_0));
    }
    var_23 = (max(var_23, 53073));
    var_24 = ((var_0 + (((72 & var_13) | ((var_9 ? 53059 : var_5))))));
    #pragma endscop
}
