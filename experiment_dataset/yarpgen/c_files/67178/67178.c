/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((~var_4) & (~var_4)))) ? ((~(var_4 * var_3))) : ((((var_3 || 1) ? var_7 : -1)))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_11 = ((var_2 ? ((-((var_5 ? var_0 : var_6)))) : (((~(arr_1 [i_0 - 2]))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (((((var_4 ? (!1727097986) : (!var_1)))) || (!1617189766)));
                    var_13 = (max((((var_5 * (arr_7 [i_2] [i_0] [i_0] [i_0])))), (var_8 - var_2)));
                    var_14 = ((~(min(var_0, 4294967295))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = var_0;
        arr_12 [i_3] [i_3] = 127;
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_15 |= (min(3170001550298716789, -3170001550298716790));
        var_16 = (max((((var_1 && (((var_1 ? var_9 : (arr_14 [i_4]))))))), (min(var_9, -3170001550298716814))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_17 = ((((((4095 ? var_3 : 1))) ? var_7 : var_9)) >> (var_1 + 1929379887558437658));
        var_18 = (!(((-3 / (arr_17 [i_5])))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_21 [i_6] [13] = 124;
        arr_22 [i_6] = var_1;
        arr_23 [i_6] = ((((((var_5 ? var_5 : var_1)) | (~var_7))) ^ (1 | -126)));
    }
    var_19 += var_5;
    var_20 = (((((-117 ^ var_0) == (-3170001550298716816 / var_4))) ? var_4 : var_0));
    #pragma endscop
}
