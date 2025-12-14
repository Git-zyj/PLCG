/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = var_6;
        arr_3 [i_0] [i_0] = var_11;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 = (max(var_17, (((-1414136553 ? ((0 ? 1 : var_13)) : (arr_5 [i_1]))))));
        var_18 ^= (~51);
        var_19 = -1414136553;
        var_20 = (((((arr_1 [i_1]) < 16710076591884024867)) ? 211 : 429888672));
    }
    var_21 = var_7;
    var_22 = var_1;
    #pragma endscop
}
