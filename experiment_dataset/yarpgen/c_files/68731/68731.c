/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_10 = ((((18446744073709551615 >> (18446744073709551615 - 18446744073709551589))) >> (((((arr_2 [i_0] [i_0 - 1]) ? (arr_0 [i_0 + 2] [i_0 - 1]) : ((var_1 ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0]))))) - 1858833565))));
        var_11 = ((((var_7 ? (~121944538) : ((var_6 ? (arr_2 [i_0] [6]) : 1630704502)))) / var_3));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((18446744073709551596 ? (arr_4 [i_1]) : 4095));
        arr_8 [i_1] = (!13);
        arr_9 [i_1] = (((arr_4 [i_1]) && (arr_4 [i_1])));
        var_12 = ((var_1 << (2771798343 - 2771798327)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_14 [5] [i_2] = 62487;
        var_13 = (((arr_12 [i_2]) < (arr_6 [i_2] [i_2])));
        var_14 = (((arr_5 [i_2]) - (arr_11 [i_2])));
        var_15 = ((var_8 % (arr_1 [4])));
        var_16 *= (((arr_0 [i_2] [i_2]) ? var_1 : (arr_11 [i_2])));
    }
    var_17 = var_1;
    #pragma endscop
}
