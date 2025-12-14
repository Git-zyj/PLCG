/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (min(var_15, (((~var_0) - 8778913153024))));
        arr_3 [i_0] = (min(var_9, (((min(var_2, 9195697982445763721)) * 1))));
        var_16 -= ((~((((min((arr_1 [i_0]), var_3))) ? var_3 : (arr_2 [i_0])))));
        var_17 = var_10;
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_18 = 17236;
        var_19 += 8536;
        arr_7 [i_1 - 2] [i_1] = ((min(1, 1)));
        var_20 = (min(var_20, -1));
        arr_8 [i_1] [i_1] = ((((5069776026673381178 ? 1 : (arr_5 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = ((-(min(var_5, (arr_6 [i_2] [i_2])))));
        var_21 = var_3;
    }
    var_22 = (max(var_22, (((~(min((0 ^ -7021548096839056355), (~var_4))))))));
    #pragma endscop
}
