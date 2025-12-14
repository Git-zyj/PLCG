/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((64 & var_12) - (((((var_0 ? var_3 : var_10))) ? (max(11917836138987016341, var_5)) : var_7)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_17 = var_7;
        var_18 = var_5;
        var_19 = ((4162171546 ? (arr_0 [i_0]) : (!var_5)));
        arr_3 [i_0] [i_0] = ((arr_1 [i_0]) * (arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = 96;
        var_20 += (var_5 + var_0);
        arr_8 [i_1] = ((((((arr_2 [i_1]) << (((arr_2 [i_1]) - 18128033620344096440))))) ? 8587402419034223654 : (max((arr_2 [i_1]), (arr_2 [i_1])))));
        arr_9 [i_1] [i_1] = (min((((((9859341654675327961 ? 7989383819491048045 : var_0))) ? (min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1]))) : var_8)), ((((var_0 & var_12) && -var_1)))));
    }
    #pragma endscop
}
