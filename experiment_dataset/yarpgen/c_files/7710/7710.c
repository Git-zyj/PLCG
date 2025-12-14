/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [9] = ((~(arr_0 [i_0])));
        var_12 = (((!18446744073709551615) >> (((arr_2 [i_0]) - 41310))));
        var_13 = (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_4 [i_0] [i_0] = (262140 & 4294705161);
        arr_5 [i_0] = (arr_1 [i_0]);
    }
    var_14 = (var_6 <= ((((!(var_8 <= var_7))))));
    var_15 = var_1;
    var_16 = var_1;
    #pragma endscop
}
