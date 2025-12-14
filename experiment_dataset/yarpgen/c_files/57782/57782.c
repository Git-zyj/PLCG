/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0 - 1]) * ((-1569188959 ? 1 : (max(1569188966, 1))))));
        arr_3 [i_0] = ((var_6 ? (-1569188951 * 8669124232565547222) : var_7));
        arr_4 [i_0] = (((((arr_0 [i_0 - 1] [i_0 + 1]) ? var_5 : (arr_0 [i_0 - 1] [i_0 + 1])))) ? (arr_0 [i_0 - 1] [i_0 + 1]) : (arr_0 [i_0 - 1] [i_0 - 1]));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_14 = (max(var_14, (((1569188955 ? 1496349784 : 1569188976)))));
        arr_8 [11] [6] = min((var_10 ^ var_10), (max(3924363762374925926, 1)));
        var_15 = (min(var_15, (((-(arr_5 [i_1]))))));
        var_16 = (min(var_16, ((max((max(var_2, (arr_5 [i_1]))), ((!(arr_5 [i_1]))))))));
    }
    var_17 ^= (-var_6 ? (((!(((var_3 ? var_6 : var_8)))))) : ((((max(var_11, var_0))) ? var_8 : var_11)));
    var_18 = (min(var_18, var_13));
    #pragma endscop
}
