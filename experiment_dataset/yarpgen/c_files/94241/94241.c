/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = (max(var_12, (var_10 < var_5)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = ((~((((arr_1 [i_0] [i_0]) || (arr_0 [10]))))));
        var_14 *= (min(var_3, ((min((arr_0 [1]), (arr_2 [14] [14]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_15 = (((arr_5 [i_1] [i_1 - 1]) ? var_0 : var_7));
        var_16 = var_3;
        var_17 = (max(var_17, ((((arr_0 [24]) - (arr_0 [12]))))));
        arr_6 [i_1] [i_1] = (((arr_4 [i_1 - 1]) <= var_9));
    }
    #pragma endscop
}
