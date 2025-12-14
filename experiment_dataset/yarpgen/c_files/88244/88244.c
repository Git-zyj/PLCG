/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_17 *= var_16;
        var_18 = (((arr_2 [i_0 + 2]) ? (var_1 & var_10) : (arr_2 [i_0])));
        var_19 = ((-var_7 ? (803 & var_8) : var_14));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = (arr_6 [i_1] [i_1]);
        var_20 = ((var_10 ? (arr_6 [i_1] [i_1]) : 72057594037927935));
        arr_8 [i_1] [i_1] = -122;
        var_21 = (arr_3 [i_1] [i_1]);
    }
    var_22 = var_9;
    var_23 = (((((var_16 == (var_13 <= var_3)))) >> var_14));
    #pragma endscop
}
