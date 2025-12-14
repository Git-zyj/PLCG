/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = max(133, 2540055999);
        var_15 = (max(var_15, (arr_1 [4] [4])));
        arr_3 [i_0] [i_0] = (max(((-(arr_0 [i_0 + 3]))), var_14));
        var_16 *= (((arr_1 [8] [8]) ? (min((((var_11 ? (arr_1 [2] [i_0]) : var_14))), var_13)) : var_7));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (max(((var_13 ? 53048921 : (arr_4 [i_1 + 2]))), -var_6));
        arr_7 [i_1] = -1;
        arr_8 [i_1] = (((((1 ? 0 : 0))) ? (((arr_0 [i_1 + 2]) ? var_7 : (arr_1 [22] [i_1 + 1]))) : var_5));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = var_12;
        var_18 = (max(var_18, ((5464683116824995981 - (((arr_10 [i_2] [i_2]) ? 4294967295 : (arr_0 [3])))))));
    }
    var_19 = var_4;
    var_20 = (1023 << 0);
    #pragma endscop
}
