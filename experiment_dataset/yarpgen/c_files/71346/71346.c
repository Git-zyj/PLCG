/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = var_0;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_21 = (min(var_21, var_10));
            var_22 = var_7;
            arr_4 [i_0] = var_17;
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_23 = var_7;
            var_24 &= var_4;
            var_25 &= var_2;
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_26 = 92;
        arr_12 [i_3] [i_3] = 176;
        var_27 = var_12;
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_28 = var_4;
        var_29 = var_2;
    }
    var_30 = var_10;
    var_31 -= var_4;
    #pragma endscop
}
