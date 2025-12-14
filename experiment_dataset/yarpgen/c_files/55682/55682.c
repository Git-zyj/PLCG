/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        var_18 -= (arr_3 [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 += (arr_5 [i_1]);
        var_20 = (arr_5 [i_1]);
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_9 [6] &= (!(((-(arr_7 [i_2])))));
        var_21 += (min(var_13, ((((min((arr_6 [i_2]), 0))) ? -var_5 : (min((arr_8 [i_2] [i_2]), var_1))))));
    }
    #pragma endscop
}
