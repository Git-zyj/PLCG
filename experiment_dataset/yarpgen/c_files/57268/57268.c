/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = var_1;
    var_13 = (((((((min(var_1, 251))) ? ((min(var_7, var_7))) : var_0))) ? var_1 : (var_1 == var_2)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_14 = ((!(12676 | var_5)));
        var_15 = (min(var_15, (((~(arr_1 [i_0] [i_0]))))));
        var_16 = (min(var_16, (2 != 1246008569)));
        arr_2 [i_0] = (((((40278 ? 6487445716058591102 : 13))) ? 9312740931381766732 : 0));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_17 = (max(25258, -593656358));
        arr_7 [i_1] [i_1] = 163148892089489861;
        arr_8 [i_1] = ((((max(((var_0 ? var_1 : 27729)), var_10))) ? (((!(arr_1 [i_1] [i_1])))) : (arr_1 [i_1] [i_1])));
        var_18 = (min(var_18, (((((((-32767 - 1) | var_7))) ? (((arr_5 [i_1]) ? (arr_5 [i_1]) : var_0)) : ((((min(var_7, (arr_1 [i_1] [i_1])))) | (arr_3 [i_1] [i_1]))))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_19 = (max(var_5, -163148892089489862));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_13 [0] [i_2] [i_3] = (((arr_6 [i_2]) & (!94)));
            var_20 = (min(var_20, (var_5 > var_2)));
        }
    }
    var_21 = (max(var_21, var_6));
    #pragma endscop
}
