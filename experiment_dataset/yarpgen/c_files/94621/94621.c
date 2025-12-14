/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [3] = (((-12242 - -12242) ? var_11 : 65535));
        var_19 += (((arr_0 [i_0]) / (arr_0 [i_0])));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1 - 2] = var_3;
        var_20 = (~var_5);
        var_21 = (max(var_21, ((max(((((arr_3 [i_1 - 3] [i_1 - 1]) / (arr_3 [i_1 + 1] [i_1 - 3])))), var_5)))));
        var_22 = (((((((min(var_4, var_17))) / (((arr_3 [i_1 - 2] [i_1]) ? (arr_4 [i_1] [16]) : 12248))))) ? 30289 : ((((((arr_4 [19] [i_1]) ? (arr_4 [17] [i_1 - 3]) : var_8))) ? ((min((arr_4 [9] [9]), -30295))) : ((var_18 ? (arr_3 [15] [i_1]) : (arr_4 [i_1] [i_1])))))));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_23 = var_4;
        var_24 ^= ((((min((~30283), var_6))) ? ((((var_8 & 4846) > (((arr_4 [9] [21]) ? (arr_3 [15] [i_2]) : var_12))))) : var_1));
        var_25 = (min(var_25, ((max(((var_14 - ((((arr_7 [i_2]) ? 0 : var_10))))), ((7754061867983033703 ? -2281890513526022104 : ((var_18 ? var_13 : var_7)))))))));
        var_26 = (min(var_26, (((var_12 ? -7754061867983033704 : var_12)))));
        arr_8 [18] = -7754061867983033728;
    }
    var_27 = -30280;
    #pragma endscop
}
