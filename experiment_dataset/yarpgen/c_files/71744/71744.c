/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = (((max(var_0, var_7))) >> ((((~(var_9 && var_8))) + 13)));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_12 = arr_0 [i_0] [i_0 + 1];
        var_13 = ((arr_0 [i_0 - 3] [i_0 - 1]) >= var_7);
        arr_2 [i_0] = (var_8 ? ((min((arr_1 [i_0]), (((1 ? (arr_1 [i_0]) : var_3)))))) : (max((arr_0 [i_0 - 2] [i_0 - 2]), var_2)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((~(arr_5 [i_1] [i_1])));
        arr_8 [i_1] [i_1] = ((-(((arr_3 [i_1]) + (arr_4 [i_1] [i_1])))));
    }
    var_14 = ((((var_0 ? var_4 : var_1))) ? ((57 / ((var_7 ? var_6 : var_5)))) : ((((((54 ? var_9 : var_8))) ? (!var_3) : var_0))));
    #pragma endscop
}
