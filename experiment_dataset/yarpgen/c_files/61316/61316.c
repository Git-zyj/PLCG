/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (arr_1 [i_0]);
        var_18 = (min((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), ((((arr_1 [i_0]) > (arr_1 [i_0]))))));
        var_19 = (min((arr_1 [i_0]), (((arr_1 [i_0]) + (arr_1 [i_0])))));
    }
    var_20 = (min(((min(var_3, (var_5 <= var_10)))), (max((max(var_14, var_16)), var_11))));
    var_21 = var_0;
    var_22 = var_6;
    var_23 = var_16;
    #pragma endscop
}
