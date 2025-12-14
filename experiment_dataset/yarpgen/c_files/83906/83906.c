/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 45;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : (((arr_0 [i_0]) / (arr_1 [i_0])))))) ? ((0 / (min((arr_1 [i_0]), 7590179356706937145)))) : ((((((((arr_0 [8]) ? (arr_0 [i_0]) : 127))) > (((arr_0 [i_0]) ? (arr_0 [i_0]) : 6149877255752805385)))))));
        arr_2 [i_0] = (((arr_1 [i_0]) + (arr_0 [i_0])));
    }
    #pragma endscop
}
