/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (max(var_13, (arr_1 [i_0] [i_0])));
        var_14 = (min(var_14, (((var_2 | (arr_0 [i_0]))))));
    }
    var_15 = ((!((!(((1048544 ? -1 : 7519)))))));
    #pragma endscop
}
