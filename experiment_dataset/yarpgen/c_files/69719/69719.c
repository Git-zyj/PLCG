/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((min((-5 | var_4), 126)));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        var_16 = var_8;
        var_17 = var_4;
        arr_3 [2] |= (arr_1 [6]);
        var_18 *= -22989;
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        arr_6 [i_1] = (((((min(var_13, (arr_5 [i_1 + 2]))))) >= var_12));
        arr_7 [3] = ((max((arr_0 [i_1 + 2]), (arr_0 [i_1 - 2]))));
    }
    var_19 = var_11;
    #pragma endscop
}
