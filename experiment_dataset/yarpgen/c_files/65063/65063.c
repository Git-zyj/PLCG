/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (!var_2);
        var_18 = ((((var_2 ? (arr_1 [i_0]) : var_7)) >> (2 >= 1)));
        var_19 = (((var_11 & var_12) || (arr_0 [i_0] [14])));
        var_20 = (max(var_20, ((((4271410220 ^ (arr_0 [i_0] [i_0])))))));
    }
    var_21 = var_4;
    var_22 = (~-1);
    #pragma endscop
}
