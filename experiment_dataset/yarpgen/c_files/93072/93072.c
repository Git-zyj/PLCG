/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (max((((arr_1 [i_0]) | (arr_1 [i_0]))), ((min(var_15, (arr_1 [i_0]))))));
        arr_3 [i_0] = min(16462, (((arr_0 [i_0] [i_0]) << (((arr_1 [i_0]) - 1)))));
    }
    var_16 = (((var_10 & (min(9947863029303602121, var_15)))));
    #pragma endscop
}
