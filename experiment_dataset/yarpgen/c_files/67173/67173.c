/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((max(((var_0 ? -7305631911007940686 : var_4), (max(var_10, var_10)))))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = (min((((arr_0 [i_0 - 1]) | (arr_0 [i_0 - 1]))), (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
        var_14 = var_9;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_5 [4] [i_1] = ((var_10 ^ (arr_4 [i_1 - 1])));
        var_15 = ((var_4 ? (arr_0 [i_1 - 2]) : var_9));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_16 = ((arr_7 [i_2] [i_2 - 2]) ? (((arr_4 [i_2]) ? (arr_6 [i_2 + 1] [i_2]) : var_0)) : ((((arr_1 [i_2]) - (arr_2 [i_2])))));
        var_17 = (arr_6 [i_2 - 2] [4]);
        var_18 = var_7;
    }
    var_19 = ((var_6 % (var_9 % var_4)));
    #pragma endscop
}
