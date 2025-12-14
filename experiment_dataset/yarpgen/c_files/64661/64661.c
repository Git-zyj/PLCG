/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((max(((-13 ? 2723786047254212533 : 33074)), ((min(var_5, var_6))))), var_8));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (((arr_0 [i_0]) ? (max(var_7, ((var_2 ? var_13 : var_13)))) : (((((arr_0 [i_0]) || var_5))))));
        arr_2 [i_0] |= ((-(max(((((arr_0 [i_0]) > (arr_1 [i_0])))), var_3))));
        arr_3 [i_0] = ((var_6 ? (((((var_1 ? var_12 : var_6))) ? (arr_1 [i_0]) : (121 == var_0))) : ((-((571957152676052992 ? 0 : 58))))));
        var_16 ^= 1;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = (min(((-(max(var_10, var_0)))), ((max((arr_1 [i_1]), (var_7 != var_6))))));
        arr_8 [i_1] = min((max(var_12, var_12)), 1);
    }
    var_17 = var_4;
    var_18 = min(var_9, ((11977675730501625676 ? var_9 : var_11)));
    var_19 |= ((((((~var_10) || (913556983 < 10)))) << (var_0 % var_7)));
    #pragma endscop
}
