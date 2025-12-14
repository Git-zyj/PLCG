/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_15 = (min(((11304 ? (min(26, (arr_1 [i_0 + 3]))) : (min((arr_1 [i_0]), (arr_0 [i_0]))))), ((((((((arr_0 [22]) > (arr_0 [i_0]))))) >= (arr_1 [i_0]))))));
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] [i_0] = (min((max((arr_1 [i_0 + 3]), (arr_1 [i_0 - 2]))), (arr_1 [i_0 + 3])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_16 = ((+((((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_0 [i_1]))))));
        var_17 = (arr_1 [i_1]);
        var_18 = (arr_0 [i_1]);
    }
    var_19 = 1;
    #pragma endscop
}
