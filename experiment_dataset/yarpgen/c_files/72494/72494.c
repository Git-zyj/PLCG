/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (127 | var_13);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = var_12;
        var_17 = (min(((-(arr_2 [i_0] [i_0]))), (arr_1 [i_0] [i_0])));
        var_18 = ((((!(-127 - 1)))));
        var_19 = (min(var_19, (arr_1 [i_0] [2])));
    }
    var_20 = (min(((((((1 != (-9223372036854775807 - 1)))) > var_4))), var_3));
    #pragma endscop
}
