/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 -= 720449651;
        var_16 = -var_4;
        arr_2 [i_0] [i_0] = 60;
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_17 = (max((arr_5 [i_1 - 1]), var_10));
        var_18 += ((!(((88 >> (-1 + 31))))));
        var_19 = (~38702);
        var_20 = (arr_4 [i_1 + 2]);
        var_21 = (max(38705, ((~(arr_4 [i_1])))));
    }
    var_22 = ((!((((196 ? 1 : 38303))))));
    #pragma endscop
}
