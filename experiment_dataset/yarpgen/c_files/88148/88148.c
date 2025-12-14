/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (min(var_15, (!-61)));
        arr_4 [i_0] = var_9;
    }
    var_16 = var_9;

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = var_4;
        arr_10 [i_1] [2] = ((60 ? (!var_14) : -50));
        var_17 += (((arr_5 [i_1]) ? (arr_5 [i_1]) : -var_1));
    }
    var_18 = ((((~(~9223372036854775807))) - var_5));
    #pragma endscop
}
