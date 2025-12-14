/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_13 = (arr_1 [i_0 + 1]);
        arr_2 [i_0] = (((((0 ? ((max((arr_0 [0] [5]), (arr_1 [i_0])))) : (((arr_0 [i_0] [i_0]) >> (var_11 - 5561994408970842527)))))) ? (arr_0 [i_0 - 1] [i_0 + 1]) : (((arr_0 [i_0] [1]) * (arr_1 [i_0 + 1])))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_14 = (min((((2 ? (arr_4 [i_1]) : ((var_5 ? 53332 : (arr_4 [i_1])))))), (arr_3 [i_1 + 1] [i_1])));
        arr_5 [i_1 + 1] = (var_11 ? (((arr_4 [i_1]) & (arr_4 [i_1 + 1]))) : (((((arr_0 [i_1] [i_1]) ? (arr_1 [i_1]) : (arr_3 [9] [i_1]))))));
        var_15 = ((54649 ? 47794 : (var_2 + 100)));
    }
    var_16 -= (max(var_8, var_7));
    #pragma endscop
}
