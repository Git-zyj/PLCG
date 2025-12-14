/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 = (max(var_11, ((((arr_2 [i_0] [i_0]) ? (var_0 <= 15180) : (arr_2 [i_0] [i_0]))))));
        var_12 = (arr_2 [i_0 - 1] [i_0 + 1]);
        var_13 = -15191;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_14 = (arr_3 [i_1]);
        var_15 *= (min((arr_3 [i_1]), (arr_3 [i_1])));
        var_16 = ((!(~-15181)));
    }
    var_17 = var_10;
    #pragma endscop
}
