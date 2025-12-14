/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_2, (var_0 < var_7)));
    var_11 = var_7;
    var_12 = ((var_2 ? -1644204988 : var_2));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (((((arr_1 [i_0]) % (arr_2 [i_0] [i_0]))) * var_8));
        var_14 = ((!(((var_0 ? (((arr_1 [i_0]) ? var_4 : var_0)) : (((var_3 ? 32014 : (arr_1 [i_0])))))))));
    }
    #pragma endscop
}
