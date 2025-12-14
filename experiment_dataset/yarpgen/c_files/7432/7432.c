/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~-0) ? var_4 : (((26689 ^ var_9) ^ var_4))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (max(var_8, ((max((arr_0 [i_0 - 2] [i_0]), (!var_1))))));
        var_11 = (((min((-1697301762900803974 / 84), 26689)) | (arr_1 [i_0])));
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    var_12 = (((26703 + var_5) ? -var_7 : var_6));
    var_13 = 26711;
    #pragma endscop
}
