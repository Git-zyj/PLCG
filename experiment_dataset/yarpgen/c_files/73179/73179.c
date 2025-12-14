/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) / (arr_0 [i_0])));
        arr_3 [i_0] = (arr_0 [i_0]);
        var_13 = (((((arr_1 [i_0]) & (arr_0 [i_0]))) == (((973863197 >> (6837 - 6828))))));
    }
    var_14 = var_7;
    #pragma endscop
}
