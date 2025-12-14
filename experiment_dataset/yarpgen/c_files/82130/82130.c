/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_10 = (min(1397349600, ((min(7583909966559255852, var_3)))));
        var_11 = (((arr_1 [i_0 - 2] [i_0 - 1]) ? (((!(arr_0 [i_0 - 1])))) : (((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0 - 1]) : (arr_1 [9] [i_0 + 1])))))));
    }
    var_12 += var_9;
    var_13 = ((!((((28 ? var_2 : var_4))))));
    #pragma endscop
}
