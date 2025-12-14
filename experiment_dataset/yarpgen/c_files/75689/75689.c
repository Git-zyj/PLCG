/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 ? var_4 : (max(var_9, (max(var_2, var_3))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (min(((((arr_1 [i_0]) / (arr_0 [i_0] [i_0])))), (((arr_2 [i_0]) + (arr_1 [i_0])))));
        var_12 = (arr_1 [15]);
    }
    #pragma endscop
}
