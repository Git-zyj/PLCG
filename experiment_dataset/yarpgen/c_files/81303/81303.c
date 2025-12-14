/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((65535 ? var_12 : 32767));
        var_14 = (max((((((~(arr_0 [i_0] [i_0])))) ? var_12 : (~var_1))), (arr_1 [i_0])));
        var_15 = ((var_13 | (arr_0 [4] [i_0])));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        arr_5 [3] = (((arr_3 [i_1] [i_1 + 2]) ? ((-(arr_4 [i_1 - 1]))) : -var_13));
        arr_6 [i_1] [i_1] = -var_4;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_16 = var_8;
        var_17 = (arr_0 [i_2] [16]);
        var_18 = var_12;
        var_19 = var_6;
        arr_9 [i_2] [i_2] = (arr_3 [i_2] [i_2]);
    }
    for (int i_3 = 2; i_3 < 24;i_3 += 1)
    {
        var_20 = ((((((min(var_10, var_3))))) ? 17157 : (arr_10 [i_3])));
        var_21 = (var_8 * var_2);
        var_22 = ((-(((((17154 ? 8631 : 16))) ? ((min(var_8, var_6))) : (arr_10 [i_3])))));
    }
    var_23 = (min(var_23, var_13));
    #pragma endscop
}
