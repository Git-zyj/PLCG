/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = ((~((max((max(var_16, var_15)), var_11)))));
    var_21 = ((~(!var_7)));
    var_22 = (max((((~(~var_15)))), ((~(~var_14)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_23 += var_17;
        var_24 = ((((((((var_6 ? (arr_2 [i_0]) : (arr_2 [i_0])))) ^ (min((arr_0 [i_0]), var_1))))) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0])));
    }
    #pragma endscop
}
