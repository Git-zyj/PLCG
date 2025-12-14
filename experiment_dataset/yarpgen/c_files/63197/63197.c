/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 = ((((var_12 ? ((var_9 ? 35 : -1)) : (max(var_15, var_12)))) <= 35));
    var_22 = ((var_17 * (((!(var_0 | var_16))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_23 -= (((arr_1 [14] [i_0]) ? (arr_0 [i_0]) : var_8));
        var_24 = (max(var_24, (arr_1 [i_0] [i_0])));
        var_25 -= 17978;
        arr_3 [i_0] = ((((arr_0 [8]) ? 47 : 5268377268037160644)));
        arr_4 [i_0] = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_26 |= (((((arr_6 [3] [3]) ? 22765 : -22766))) | ((5268377268037160622 ? 6004 : 5268377268037160644)));
        var_27 = ((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1]));
    }
    #pragma endscop
}
