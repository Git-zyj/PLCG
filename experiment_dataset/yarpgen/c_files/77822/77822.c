/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((max(var_14, var_13))) ? var_2 : ((min(139, -18381)))))) ? ((max(var_14, var_6))) : (max(var_16, -var_7))));
    var_19 = ((~(((~255) ? (min(0, 2348386901)) : (((var_11 ? 65535 : 1)))))));
    var_20 = var_11;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [3] = 63;
        var_21 = ((~(max((((~(arr_2 [i_0])))), ((var_3 ? var_1 : 572778260))))));
        var_22 &= var_8;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] = (arr_5 [i_1]);
        var_23 = (min(var_23, ((((arr_6 [16]) ? (arr_6 [20]) : (arr_6 [1]))))));
        arr_8 [8] |= (arr_4 [8] [8]);
        arr_9 [i_1] = 8;
    }
    #pragma endscop
}
