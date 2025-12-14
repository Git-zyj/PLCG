/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!30);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (-1 % 44);
        var_14 = (((-127 - 1) ? -45 : 43));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        arr_4 [21] = ((-((min(3, 112)))));
        var_15 = (min(var_15, ((((arr_2 [12] [i_1 + 1]) ? var_5 : ((((arr_2 [i_1] [i_1 + 2]) <= (arr_2 [i_1] [i_1 - 2])))))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_7 [i_2] = ((((min(93, -113))) - ((-113 ? 31 : 45))));
        arr_8 [i_2] = 120;
        arr_9 [4] = min(84, 32);
    }
    var_16 = (var_0 > var_8);
    #pragma endscop
}
