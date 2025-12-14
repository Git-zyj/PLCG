/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_14, var_7));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_16 &= ((-(min((arr_2 [i_0 + 3]), (arr_2 [i_0 + 2])))));
        arr_3 [4] = ((4294967295 << (412 - 391)));
        var_17 -= (max(((-((max(-5, 0))))), (((arr_0 [i_0 + 3]) - (arr_0 [i_0 + 3])))));
        var_18 = -8621677364360353376;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_19 = (((arr_0 [15]) ? var_14 : (arr_5 [i_1] [6])));
        var_20 = (-(9824166362230666842 == 0));
        var_21 = (((!6887) ? (~var_4) : -var_6));
    }
    var_22 = ((var_4 || ((!(((var_10 ? 103 : var_5)))))));
    #pragma endscop
}
