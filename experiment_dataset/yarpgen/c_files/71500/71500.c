/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = ((!((min((min(3, 13282149720462781173)), var_1)))));
        var_14 = (min((arr_1 [i_0] [i_0]), (arr_0 [i_0])));
        var_15 = (max((max(var_10, ((-(arr_1 [i_0] [i_0]))))), (arr_1 [i_0] [i_0])));
    }
    #pragma endscop
}
