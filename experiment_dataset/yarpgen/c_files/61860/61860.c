/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
        var_15 = var_12;
        arr_4 [i_0] [i_0] = (max(((((arr_0 [i_0]) != (arr_2 [i_0])))), -var_0));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_16 = var_11;
        arr_8 [i_1] = (min((var_1 + -22), (-21 != var_7)));
        var_17 = ((-((-16 ? 2147483647 : var_4))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_18 = ((8287544238121861185 ? (arr_1 [i_2] [i_2]) : (((((-9223372036854775807 - 1) <= var_6))))));
        var_19 = (arr_10 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = ((-(min(((var_14 << (var_14 - 28742))), ((max(-115, 11847)))))));
        var_20 = ((!(!0)));
    }
    var_21 = var_0;
    #pragma endscop
}
