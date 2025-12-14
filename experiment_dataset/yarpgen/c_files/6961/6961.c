/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_10 = (((-62 ? var_1 : var_6)));
        var_11 = (arr_3 [i_0]);
        var_12 = (((((var_7 ? var_3 : var_5)))) <= (((!(arr_2 [i_0 - 1] [i_0 - 2])))));
    }
    var_13 = (min(var_13, var_9));
    #pragma endscop
}
