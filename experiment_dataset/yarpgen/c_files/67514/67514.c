/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min(var_5, var_1)) + var_4));
    var_14 = (max(var_14, ((((((max(var_7, 1073741312))) ? var_6 : ((max(var_8, var_12)))))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_15 = (max(((-(((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))))), (max((arr_0 [i_0]), var_6))));
        var_16 = (((((arr_2 [i_0] [i_0]) ? (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) : (arr_2 [i_0] [i_0])))) ? (max(((var_5 + (arr_2 [i_0] [i_0]))), (arr_1 [i_0]))) : (((((min(var_8, (arr_1 [i_0])))) ? (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : var_11)) : (arr_2 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_17 = arr_3 [i_1] [i_1];
        var_18 = (min(var_18, (((((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_2 [i_1] [i_1])))))));
        arr_6 [i_1] = ((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_3 [i_1] [i_1]))));
    }
    #pragma endscop
}
