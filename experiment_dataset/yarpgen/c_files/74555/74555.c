/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = -3275759155;
        var_16 = ((((((arr_2 [i_0] [9]) ? (arr_3 [i_0]) : (arr_0 [i_0])))) ? (min((arr_2 [i_0] [i_0]), ((var_8 ^ (arr_2 [i_0] [i_0]))))) : var_0));
        var_17 &= ((((max(var_3, 1019208129))) < (max(21, (~var_6)))));
    }
    var_18 = var_14;
    var_19 = ((1 + -1043417037) == var_13);
    #pragma endscop
}
