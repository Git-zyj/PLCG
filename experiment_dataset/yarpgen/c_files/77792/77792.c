/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_6;
    var_16 = var_6;
    var_17 = min((min((min(var_1, var_12)), (var_6 && var_13))), ((((min(var_14, var_7))) ? var_13 : (min(var_9, var_12)))));
    var_18 = ((var_6 ? (max((var_7 + var_8), (var_2 | var_5))) : (((max(var_7, var_14))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (max(((((~(arr_1 [i_0]))))), (arr_1 [i_0])));
        var_19 = (min(var_19, ((min((arr_1 [i_0]), ((max((max((arr_0 [i_0]), (arr_0 [i_0]))), ((!(arr_0 [i_0])))))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_20 = (49 & 89);
        var_21 = ((+(((arr_4 [i_1] [i_1]) - (arr_0 [i_1])))));
        arr_6 [i_1] = ((+(((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1])))));
    }
    #pragma endscop
}
