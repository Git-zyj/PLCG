/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((max((0 > 2579747630), var_9))), (min((max(var_4, var_10)), var_9))));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_19 = min(3, 235);
        var_20 = ((-(((var_10 ? var_0 : var_13)))));
        arr_3 [i_0] [i_0] = ((min(2423354159, 2805145113)));
    }
    var_21 = (min(var_21, (((((var_3 - var_6) <= (max(var_5, var_0))))))));
    var_22 = var_5;
    #pragma endscop
}
