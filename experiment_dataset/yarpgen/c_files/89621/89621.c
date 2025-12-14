/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = 1;
        arr_3 [i_0] = (~3844175981910772556);
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_8 [15] [i_1] = ((!(~3844175981910772566)));
        var_13 -= ((((967373759 ? (arr_7 [i_1]) : (var_1 * 244))) + ((~(arr_5 [i_1 - 1])))));
    }
    var_14 = var_9;
    var_15 = var_10;
    var_16 = (~1);
    var_17 = var_11;
    #pragma endscop
}
