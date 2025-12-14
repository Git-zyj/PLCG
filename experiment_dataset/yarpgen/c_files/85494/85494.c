/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_21 = ((((~((min((arr_1 [1]), (arr_0 [i_0])))))) * ((-((min(122, 0)))))));
        var_22 = (max(1, (arr_0 [i_0 - 2])));
        var_23 = (((var_11 + 2147483647) << (((arr_0 [i_0 + 1]) - 94))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_24 = var_0;
        arr_5 [i_1 - 1] [i_1 - 2] |= 19045;
        arr_6 [0] &= (arr_2 [i_1 - 1]);
        var_25 += (arr_2 [i_1]);
        var_26 = 0;
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_27 = (min(var_27, (-18 | 696800637)));
        var_28 -= (arr_7 [i_2]);
    }
    #pragma endscop
}
