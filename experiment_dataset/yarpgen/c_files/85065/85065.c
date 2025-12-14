/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = ((~((var_6 ? var_6 : ((max(var_4, var_2)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_12 = (((((var_0 ? var_5 : var_3))) ? (arr_0 [i_1]) : (((arr_0 [i_1]) ? var_1 : (arr_3 [i_0])))));
            arr_5 [i_1] = ((-(arr_1 [i_0 - 1])));
        }
        arr_6 [i_0] = (arr_4 [i_0] [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_13 = (((!18446744073709551614) ? ((var_5 ? (arr_3 [i_2]) : 1)) : (var_3 + var_8)));
        arr_10 [i_2] = (((arr_2 [i_2 - 2] [i_2 - 2] [i_2 + 1]) ? (arr_1 [i_2 + 1]) : (var_5 / var_7)));
        arr_11 [i_2] = (((arr_4 [i_2 + 1] [i_2]) ? (arr_0 [i_2]) : ((-1 ? (arr_7 [i_2] [i_2]) : (arr_1 [i_2])))));
        var_14 += (((arr_3 [i_2 - 2]) ? 1703264052 : (arr_3 [i_2 - 1])));
    }
    #pragma endscop
}
