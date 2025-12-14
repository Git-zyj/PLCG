/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((min(52, -var_6)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = (min(var_11, ((min(1, 0)))));
        var_12 = (min(var_12, ((max((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))), ((max(17603, 3))))))));
    }
    var_13 = (((var_0 ? var_3 : var_9)));
    #pragma endscop
}
