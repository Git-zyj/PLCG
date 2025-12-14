/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0 - 1]);
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_14 = (min(var_14, (((~(arr_0 [i_1]))))));
        var_15 = (((((arr_1 [i_1] [i_1]) ? var_5 : 20729)) == var_5));
        var_16 += (((arr_4 [i_1]) ? var_11 : (arr_1 [i_1] [i_1])));
        var_17 = (arr_0 [i_1]);
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 = (min(var_18, (~1)));
        arr_10 [i_2] = (~-13481);
    }
    var_19 -= ((var_10 ? var_7 : (var_12 / var_2)));
    var_20 = (!((min(48, var_7))));
    #pragma endscop
}
