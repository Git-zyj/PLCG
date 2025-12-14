/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_15 = (((arr_2 [i_0 - 3] [i_0 - 3]) ? ((min((arr_0 [i_0]), (min((arr_2 [1] [i_0]), (arr_0 [i_0 + 2])))))) : (((((arr_0 [7]) ? (arr_2 [i_0] [i_0]) : var_6)) + (arr_1 [i_0 - 4])))));
        var_16 = (207 ^ 121);
    }
    var_17 = (min(228, var_5));
    var_18 = var_9;
    #pragma endscop
}
