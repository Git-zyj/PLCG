/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [10] [i_0] = ((-(17 / -105)));
        arr_3 [i_0] [i_0] = 56569;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_16 = ((min((20 ^ 17), (~-13))));
        var_17 = max(-7, (arr_5 [i_1]));
        arr_7 [i_1] [i_1] = (!-24);
        var_18 = -12012946950035110446;
    }
    var_19 = var_9;
    var_20 ^= 150;
    #pragma endscop
}
