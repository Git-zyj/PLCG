/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 += (arr_0 [5]);
        arr_2 [i_0] = var_5;
        var_14 = (min(var_14, (((((max((min(158, var_3)), ((var_3 ? (arr_1 [22] [i_0]) : (arr_1 [18] [18])))))) ? var_1 : (((arr_1 [1] [i_0]) & (arr_1 [8] [8]))))))));
    }
    var_15 = ((1 ? (max((max(var_2, var_10)), -19)) : ((min(236, -var_3)))));
    var_16 = (min((max(var_10, 973773073)), var_12));
    #pragma endscop
}
