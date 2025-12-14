/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = ((var_16 ? var_9 : (max((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))), 133))));
        var_18 = var_0;
        var_19 = (max(((~(arr_1 [17] [17]))), ((min((arr_1 [i_0] [18]), (((var_7 != (arr_1 [i_0] [i_0])))))))));
    }
    var_20 = var_2;
    var_21 = var_9;
    #pragma endscop
}
