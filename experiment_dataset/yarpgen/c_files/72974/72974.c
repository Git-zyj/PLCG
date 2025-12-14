/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = (var_8 % -2147483626);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = var_12;
        var_21 = -1934587244;
        var_22 -= (((arr_1 [i_0]) | (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_23 = (min(38464, (((2147483626 ? 38480 : -2147483626)))));
        arr_8 [i_1] = (arr_7 [i_1 - 1]);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_24 -= ((+(((arr_9 [i_2]) ? (arr_10 [14]) : (arr_10 [4])))));
        var_25 &= -6080404781561815048;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_26 = (arr_12 [i_3]);
        var_27 = ((1 ? var_11 : (arr_13 [i_3])));
    }
    var_28 &= (((max((var_9 >= -32742), var_11)) - 1391775549));
    #pragma endscop
}
