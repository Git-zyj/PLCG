/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 -= (max(var_7, (max((arr_0 [i_0]), 35610))));
        var_14 &= ((+((((arr_0 [i_0]) || 29925)))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_15 = (min((min(((var_5 ? var_10 : var_6)), ((((arr_3 [8]) < var_12))))), ((var_12 * ((-(arr_3 [i_1])))))));
        var_16 = (min((((arr_3 [i_1]) & (((arr_3 [i_1]) ? (arr_2 [i_1] [i_1]) : var_7)))), (arr_4 [6] [i_1])));
        var_17 = (max(var_12, ((max((arr_3 [i_1]), ((((arr_4 [i_1] [i_1]) <= 2069297498))))))));
    }
    var_18 = (max(var_18, ((((--2069297498) ? 15360 : (max((max(var_11, var_9)), 29426)))))));
    var_19 -= ((min((var_11 * var_11), ((max(246, 168))))));
    var_20 = (max(((var_5 ? ((var_4 ? 140737488355320 : 29902)) : ((((-127 - 1) ? -17321 : -1329729293))))), ((max((!var_8), (var_7 & var_6))))));
    #pragma endscop
}
