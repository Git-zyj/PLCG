/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 -= (max(var_10, 4119895912));
    var_18 = (((~var_0) || ((max(((-14992 ? -14993 : var_11)), var_5)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 += ((((((var_1 - -14983) & (arr_1 [i_0] [i_0])))) ? (arr_2 [i_0]) : (((((var_1 ? -14972 : var_10))) - (arr_2 [1])))));
        var_20 = ((((((((max((arr_0 [i_0]), var_8))) != (arr_1 [i_0] [i_0]))))) >= ((var_3 ? (arr_2 [16]) : ((3113544124 ? 562675075514368 : 105))))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_21 ^= ((var_12 ? (arr_5 [i_1]) : (arr_4 [i_1 - 1] [i_1])));
        var_22 = (arr_5 [1]);
        var_23 = (min(var_23, (arr_5 [i_1 - 1])));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_9 [12] = (((arr_6 [14]) <= var_7));
        arr_10 [i_2] = (((arr_7 [i_2 + 2] [i_2 + 2]) - (arr_7 [i_2 - 1] [i_2 - 1])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_15 [3] [i_3] = ((~(((var_6 != (arr_13 [i_3] [2]))))));
        arr_16 [3] = ((562675075514363 || (arr_1 [i_3] [i_3])));
    }
    #pragma endscop
}
