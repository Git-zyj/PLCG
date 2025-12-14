/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_8 ? ((var_4 ? -19875 : var_10)) : 0)) / var_9));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (max((((var_9 ? (arr_1 [i_0] [i_0]) : var_12))), (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 1))));
        arr_2 [i_0] = ((min((((arr_0 [i_0]) ? 1 : var_3)), 63)) % (-32767 - 1));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_17 = 1849862456;
        arr_5 [i_1] [i_1] = (arr_1 [i_1 - 2] [i_1]);
        var_18 = (~var_12);
    }
    var_19 = var_1;
    var_20 = (max(var_1, ((var_0 ? 62914560 : var_2))));
    #pragma endscop
}
