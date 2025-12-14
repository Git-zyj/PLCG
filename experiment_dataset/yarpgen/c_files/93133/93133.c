/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((~(max(((min(var_2, var_17))), (min((-127 - 1), -7009101666858003595))))));
    var_19 = (var_16 & var_13);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((((arr_1 [i_0]) ? 3385460706 : (arr_1 [i_0]))) << (((-7100 + 7151) - 21))));
        var_20 ^= (arr_1 [i_0]);
    }
    #pragma endscop
}
