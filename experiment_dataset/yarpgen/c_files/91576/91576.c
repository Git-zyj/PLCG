/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~1040384);
    var_14 = 66;
    var_15 ^= 11113717801281287573;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = ((-(((!(arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] = ((((var_2 * (min(var_9, var_12))))) ? var_10 : (-851281286 * 8721354906267026892));
        arr_3 [i_0] = (((arr_0 [i_0]) - ((((((arr_0 [6]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = 72057594004373504;
        var_17 = 127;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_12 [16] &= (~(((var_1 >= (((arr_9 [16] [i_2]) / var_0))))));
        var_18 = 4611686009837453312;
        var_19 = (max(var_19, (((((arr_1 [i_2] [i_2]) + (max((arr_10 [8] [8]), (arr_8 [6])))))))));
        var_20 = (max(var_20, (((min(((min(var_10, var_10))), (((arr_0 [i_2]) ^ 6462309975951288439))))))));
    }
    #pragma endscop
}
