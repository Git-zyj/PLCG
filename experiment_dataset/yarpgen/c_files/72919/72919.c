/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (max((arr_0 [i_0]), (((min((arr_1 [i_0]), 239478325)) * 4055488970))));
        arr_3 [i_0] = -1240260319;
        arr_4 [i_0] = (min(((min(((239478325 ? (arr_0 [i_0]) : (arr_0 [i_0]))), ((((arr_0 [i_0]) <= var_10)))))), (max((max(1260021456, (arr_1 [i_0]))), (max(4055488974, -84))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_9 [i_1] = (((((((-1 ? 4055488983 : (arr_8 [i_1] [i_1])))) < (min(-9223372036854775806, (arr_8 [i_1] [i_1]))))) || 1925463714));
        var_12 = (min((((arr_6 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1]))), -var_11));
    }
    var_13 |= (min(var_0, (max(((min(-82, var_3))), (min(var_1, var_9))))));
    var_14 = ((-84 % (-12 ^ var_5)));
    #pragma endscop
}
