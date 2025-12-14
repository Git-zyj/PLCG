/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (((!18446744073709551615) ^ -var_7));
        var_14 -= (arr_1 [i_0 + 4] [i_0 + 2]);
        var_15 = -32762;
        var_16 = (max(var_16, var_10));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] = (!var_4);
        arr_7 [i_1] = -65535;
    }

    /* vectorizable */
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        arr_10 [i_2] = (arr_4 [i_2 + 1] [i_2 - 2]);
        arr_11 [i_2] [i_2] = 177;
        arr_12 [i_2] = (arr_4 [i_2 - 3] [i_2]);
        var_17 = 8460757474078380945;
    }
    var_18 = (~var_0);
    #pragma endscop
}
