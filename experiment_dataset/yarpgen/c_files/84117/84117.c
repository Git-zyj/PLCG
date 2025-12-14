/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (1 / 18067);
        var_13 -= ((36 & (arr_0 [i_0] [i_0])));
        var_14 = 1;
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        var_15 += -37208;
        arr_4 [10] = (((min(((1 ? 596549306 : 1)), (~0))) * (arr_3 [1] [i_1])));
    }
    var_16 = (min(var_16, var_8));
    #pragma endscop
}
