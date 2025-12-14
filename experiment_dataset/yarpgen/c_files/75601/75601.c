/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_5));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (arr_1 [i_0] [i_0]);
        var_15 = var_12;
        arr_2 [10] = var_6;
        var_16 = 7904410531801721554;
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        var_17 = (((var_6 || ((min(var_8, var_8))))));
        var_18 = (min(var_18, ((min((~var_5), var_1)))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        var_19 = (min(var_19, var_8));
        arr_8 [i_2] = (((arr_6 [i_2 + 1]) | (var_7 && var_6)));
        var_20 = (((((var_12 ? var_1 : (arr_4 [i_2])))) ^ (arr_5 [i_2])));
    }
    #pragma endscop
}
