/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = (((((((var_10 ? var_5 : 54734))) ? (var_8 | var_7) : (((var_0 ? var_1 : var_1)))))) * ((var_1 ? var_1 : (28504 + var_11))));
    var_15 = ((var_1 >> (!var_5)));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (min((max((arr_0 [i_0 + 2] [i_0 + 2]), (arr_0 [i_0 - 1] [i_0 + 1]))), (((0 << (28492 - 28488))))));
        var_16 = (((arr_0 [i_0] [i_0 + 1]) ? (arr_0 [i_0] [i_0 - 1]) : (((arr_0 [i_0] [i_0 + 2]) - (arr_0 [i_0 + 2] [i_0 + 1])))));
        arr_4 [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_17 = ((-((~(arr_5 [i_1 - 1])))));
        arr_7 [20] = (max(((~(arr_6 [i_1 - 1]))), ((262143 & ((-26236 ? (arr_6 [i_1 + 1]) : (arr_2 [i_1] [i_1 + 1])))))));
        arr_8 [i_1] = ((+((((((arr_0 [i_1] [i_1 - 1]) ? (arr_5 [i_1]) : (arr_0 [i_1] [i_1])))) ? (arr_5 [i_1 + 1]) : (arr_5 [i_1])))));
        var_18 = ((((!(arr_2 [i_1] [i_1 + 1]))) ? (arr_2 [i_1] [i_1 + 1]) : (arr_2 [i_1] [i_1 + 1])));
    }
    #pragma endscop
}
