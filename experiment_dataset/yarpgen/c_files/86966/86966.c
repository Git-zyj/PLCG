/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0 + 2] = (((0 & 0) ? (arr_0 [i_0] [i_0 + 3]) : var_8));
        arr_4 [i_0] = (((-10 <= 85) <= 2139710719));
        arr_5 [i_0 + 1] [i_0 + 1] = (((arr_2 [i_0 + 2] [i_0 + 2]) - 0));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_16 = var_9;
        arr_9 [i_1] = (min(-23344, -567222415));
    }
    var_17 = var_6;
    var_18 = (min((var_5 & 5067), var_9));
    var_19 = (max(((max(((min(60468, var_11))), (max(-567222415, var_15))))), ((((-8095864405973835856 ? var_14 : var_6)) << (var_13 - 1949)))));
    #pragma endscop
}
