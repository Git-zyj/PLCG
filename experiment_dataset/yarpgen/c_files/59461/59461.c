/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = var_9;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (arr_1 [i_0]);
        var_14 = (min(((~(((arr_2 [i_0]) ? 1 : (arr_1 [i_0]))))), (((((arr_2 [i_0]) ? (arr_1 [i_0]) : var_9)) * ((max((arr_0 [i_0]), (arr_2 [i_0]))))))));
        var_15 = var_1;
        var_16 *= var_2;
    }
    var_17 = (max(var_17, var_5));
    #pragma endscop
}
