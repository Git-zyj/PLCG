/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_9 * var_2) | (((var_5 ? (~var_7) : (min(0, var_4)))))));
    var_11 |= var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (min(var_12, (arr_1 [i_0] [i_0])));
        var_13 = var_7;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_14 = (max(var_14, var_1));
        var_15 &= var_5;
    }
    var_16 = (var_5 ? var_3 : 47449);
    var_17 = ((47449 ? var_6 : (var_4 & var_8)));
    #pragma endscop
}
