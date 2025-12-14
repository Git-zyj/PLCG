/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (min(var_13, ((((~var_2) ? -var_6 : (var_0 >= var_0))))));
        arr_2 [i_0] = ((var_9 + (((((arr_0 [i_0]) ? 38241050 : 0))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_14 = (min((((arr_4 [i_1]) >> (-118 + 149))), ((26782 ? (arr_3 [i_1]) : var_2))));
        var_15 ^= (arr_4 [i_1]);
    }
    var_16 = (max(var_3, var_7));
    var_17 -= (min((min((0 & var_10), (var_7 / -906808129))), var_10));
    var_18 = var_8;
    #pragma endscop
}
