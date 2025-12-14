/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (151 ? (arr_2 [6] [i_0]) : (arr_0 [i_0]));
        arr_3 [i_0] = ((-(arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_20 *= (arr_6 [i_1]);
        var_21 = var_17;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_10 [19] = ((~(min((arr_8 [i_2]), (((arr_4 [i_2]) | 3188913619))))));
        var_22 &= ((!((max(var_3, (max(-241344154, -241344179)))))));
    }
    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        var_23 += ((~65516) * (arr_14 [i_3] [i_3]));
        arr_15 [i_3] = ((-((~(arr_14 [i_3 - 1] [i_3 + 1])))));
        arr_16 [i_3] [3] = (((arr_11 [0] [i_3]) || (((((-(arr_12 [i_3])))) || (arr_12 [i_3 + 1])))));
    }
    var_24 = (max(var_18, var_10));
    #pragma endscop
}
