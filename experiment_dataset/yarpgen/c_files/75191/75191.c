/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_18 = ((max((((arr_2 [6]) || (arr_2 [i_0]))), ((!(arr_3 [i_0] [i_0]))))));
        var_19 = ((((arr_0 [i_0]) && (arr_0 [i_0]))));
        arr_4 [i_0] = -7;
        arr_5 [i_0] = (min(24, (((-1 & (arr_1 [i_0] [i_0]))))));
        arr_6 [i_0] = min(((min((((arr_1 [i_0] [i_0]) && (arr_0 [i_0]))), (!-34)))), (min(((~(arr_1 [i_0] [i_0]))), ((min((arr_1 [i_0] [i_0]), -25))))));
    }
    var_20 = (min((var_4 && var_16), 255));
    var_21 = -var_1;
    #pragma endscop
}
