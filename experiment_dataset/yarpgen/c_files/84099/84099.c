/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_13 = (((((arr_1 [i_0 + 1] [i_0 + 1]) && (arr_1 [i_0 + 1] [i_0 + 1]))) ? (arr_1 [i_0 - 1] [i_0 + 2]) : (((!(arr_1 [i_0 + 1] [i_0 + 2]))))));
        var_14 = (arr_1 [i_0] [i_0 - 1]);
        var_15 = (max(var_15, (((((((arr_0 [i_0 + 3]) && (arr_0 [i_0 + 3])))) << ((((min((arr_1 [i_0 + 3] [i_0 + 3]), (arr_1 [5] [i_0 + 2])))) - 24676)))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        arr_4 [i_1] [i_1 + 1] = (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])));
        var_16 = (max(var_16, ((((arr_2 [i_1 + 1]) >> (((arr_3 [4]) - 7787052866044888810)))))));
    }
    var_17 = var_6;
    #pragma endscop
}
