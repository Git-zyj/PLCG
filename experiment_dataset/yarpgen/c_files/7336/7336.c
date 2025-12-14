/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_14 = (min(var_14, ((((arr_3 [14] [i_1 + 2] [i_1]) ? (arr_3 [i_1] [i_1 + 2] [1]) : 11)))));
            arr_5 [i_0] [i_0] [i_0] = ((((arr_0 [i_0 + 1] [i_1]) ? var_0 : 11)));
        }
        var_15 &= (((arr_3 [i_0 + 2] [i_0 + 1] [i_0 + 1]) ? (arr_0 [i_0] [i_0]) : (((arr_2 [i_0]) ? (arr_2 [9]) : (arr_4 [i_0])))));
        var_16 = ((11 ? 65525 : 21));
        var_17 = ((-1754785529 ? var_6 : var_4));
    }
    var_18 = ((((((((var_11 ? var_1 : var_11))) ? (max(18446744073709551600, 21)) : (((1754785526 ? -1754785529 : var_3)))))) ? (((!(((1734459401536345883 ? var_9 : var_12)))))) : var_2));
    var_19 = -64;
    var_20 = (max(var_20, var_2));
    #pragma endscop
}
