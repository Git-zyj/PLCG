/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_19 = ((-((~(((arr_1 [i_0]) ? (arr_1 [i_0 - 1]) : 158))))));
        var_20 ^= (!158);
        arr_2 [1] [1] = (3722785445287377868 / 2219747781);
        var_21 = -20430;
        var_22 -= (((((min((-9223372036854775807 - 1), 9223372036854775807)))) ? (((arr_1 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]))) : (min((arr_0 [15]), 26046))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_23 = 57;
        var_24 ^= (-(((var_5 > -866765435702572060) ? (((-(arr_4 [i_1])))) : (min(var_7, (arr_1 [4]))))));
    }
    var_25 &= -var_10;
    var_26 = (((min(var_4, var_10)) != var_10));
    var_27 = (((var_16 + ((min(var_13, var_12))))));
    #pragma endscop
}
