/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_13 = (((((max(58876478, 58876478)) ? (max((arr_1 [20]), 2435477257)) : var_9))));
        var_14 &= (58876478 ? 4095 : 1);
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_15 += (max(var_8, (~4284723037)));
        var_16 = (max((arr_4 [9]), ((-(arr_3 [i_1] [10])))));
        var_17 = (((arr_2 [i_1] [i_1]) + (((arr_4 [i_1]) + (((arr_4 [i_1 + 1]) ? 2774277169 : 0))))));
        var_18 = (arr_4 [0]);
        var_19 = ((4095 ? ((-(arr_4 [i_1]))) : (arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_7 [i_2] = (min((((arr_1 [1]) ? (1 * 58876478) : (arr_5 [i_2]))), (arr_0 [i_2])));
        var_20 = (arr_1 [i_2]);
        var_21 = arr_5 [5];
        arr_8 [i_2] [i_2] = 1;
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_22 = (-(max((max(var_1, (arr_1 [3]))), var_11)));
        var_23 = (((10244275 < 1) ? 1 : 647163580));
        var_24 = ((((max(4284723037, 0))) && (!29360128)));
    }
    var_25 = var_4;
    var_26 += ((max(0, (min(var_7, 0)))));
    #pragma endscop
}
