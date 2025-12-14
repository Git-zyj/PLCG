/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 199;
        arr_5 [i_0] [i_0] = 255;
    }

    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_11 = 199;
        var_12 = (min(var_12, 268435455));
        arr_9 [i_1] = 57274;
        arr_10 [i_1] [22] = 15;
        arr_11 [i_1] = 1008806316530991104;
    }
    var_13 = var_0;
    #pragma endscop
}
