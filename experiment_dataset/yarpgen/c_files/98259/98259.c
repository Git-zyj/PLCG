/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = ((!(arr_1 [1])));
        var_17 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_18 = ((-(arr_1 [i_0])));
        var_19 = (((arr_0 [i_0]) && (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_20 = (max((((!(((~(arr_1 [10]))))))), (max(((~(arr_0 [i_1]))), (arr_4 [i_1 - 1] [i_1])))));
        arr_5 [i_1] [i_1] = ((((((arr_4 [i_1 + 1] [i_1]) + (arr_4 [i_1 + 1] [i_1])))) ? (((arr_3 [i_1 + 1]) / (arr_4 [i_1 + 1] [i_1 + 1]))) : (((arr_4 [i_1 + 1] [i_1]) / (arr_4 [i_1 - 1] [i_1])))));
        var_21 = ((-(((((arr_3 [i_1]) / (arr_0 [4]))) / ((((arr_4 [i_1] [i_1 - 1]) / (arr_4 [i_1] [i_1]))))))));
    }
    var_22 = ((!((max(var_5, (!-16))))));
    #pragma endscop
}
