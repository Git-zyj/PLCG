/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = ((var_12 && (((-655971020 + 131) && 0))));
        var_21 = (((((0 ? var_17 : var_11))) ? (((var_2 >> (13952645025786284172 - 13952645025786284146)))) : var_15));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_22 = (var_9 < 65535);
            var_23 ^= (9 / var_0);
            arr_6 [19] = var_7;
            var_24 ^= -9785;
        }
    }
    #pragma endscop
}
