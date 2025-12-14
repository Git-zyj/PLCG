/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 93;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = arr_0 [i_0];
        var_20 = (max(69, 21));
        var_21 = (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_22 = (((((arr_3 [i_1]) || var_12)) || -4));
        var_23 = ((((((((max((arr_4 [i_1 - 1] [i_1]), var_15))) != (1 ^ 232))))) < ((162 ? ((max(2147483634, (arr_1 [20])))) : ((var_7 ? (arr_2 [i_1]) : var_16))))));
        var_24 = (-(arr_5 [i_1]));
    }
    var_25 = -170;
    var_26 = var_14;
    var_27 = var_7;
    #pragma endscop
}
