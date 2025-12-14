/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= 60;
    var_16 = (var_8 % var_5);
    var_17 = (((((min(var_3, var_3)))) >= ((((max(0, var_0))) - var_8))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (min(var_18, (min(((((min((arr_1 [i_0] [i_0]), var_4)) > (arr_1 [i_0] [i_0])))), (var_6 & var_11)))));
        var_19 = var_3;
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        var_20 = var_7;
        arr_6 [i_1] [i_1] = arr_5 [i_1 - 3];
        var_21 = (arr_3 [12] [i_1]);
        var_22 = (arr_3 [i_1 + 1] [i_1]);
    }
    #pragma endscop
}
