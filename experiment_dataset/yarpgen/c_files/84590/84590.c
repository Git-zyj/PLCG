/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((1 ? var_0 : ((16383 ? var_10 : var_9)))) << (var_6 + 12094)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [1] [i_2] [2] = (max((((arr_2 [i_2]) + ((min(var_12, (-9223372036854775807 - 1)))))), (((9223372036854775807 ? ((max((arr_1 [i_0] [i_2]), 3146293493))) : ((var_10 ? (-9223372036854775807 - 1) : var_8)))))));
                    var_14 = var_6;
                    arr_11 [i_0] [10] [i_1] [10] = ((((((((127 ? (arr_7 [i_0] [i_1] [i_2] [0]) : var_9))) ? var_4 : ((var_0 ? var_0 : (arr_8 [i_0 - 1] [i_0 - 1] [i_1] [i_2])))))) | (((arr_3 [i_0] [i_2]) ? 9217606753651416301 : ((min(2147483648, 1)))))));
                }
            }
        }
        var_15 = ((-(max((var_2 ^ var_5), (!51)))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        arr_15 [10] [10] &= 360504352;
        arr_16 [i_3] [i_3] = (((160 < var_9) - (2429196608051395693 > 96)));
        var_16 = ((var_6 ? (((arr_2 [i_3 + 2]) | 1668672368)) : var_0));
        arr_17 [i_3] = var_5;
        arr_18 [i_3] = (((arr_2 [i_3 + 2]) ? (arr_2 [i_3 + 1]) : 42352));
    }
    #pragma endscop
}
