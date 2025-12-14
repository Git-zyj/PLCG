/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = -30452;
        var_17 = (!1796624826);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_18 = ((var_15 ? var_0 : ((((arr_3 [i_1]) || (arr_5 [i_1] [i_1]))))));
        var_19 = (arr_5 [i_1] [i_1]);
        arr_7 [i_1] = (arr_3 [i_1]);
        arr_8 [i_1] = (!var_9);
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_11 [i_2] = ((((+(max((arr_9 [i_2]), 2498342470)))) != (((-(arr_9 [i_2]))))));
        var_20 = var_3;
    }
    for (int i_3 = 4; i_3 < 22;i_3 += 1)
    {
        var_21 = ((((min(1796624838, (arr_13 [i_3 + 1])))) ? ((var_6 ? var_11 : (arr_13 [i_3 - 1]))) : var_12));
        var_22 = (!9223372036854775807);
        var_23 = var_13;
        arr_14 [i_3] = (((max(((var_13 ^ (arr_13 [i_3]))), (-2147483647 - 1)))) ? (max((~var_1), (arr_13 [18]))) : (arr_13 [5]));
        var_24 = var_9;
    }
    var_25 = (min(var_25, (var_8 * var_1)));
    #pragma endscop
}
