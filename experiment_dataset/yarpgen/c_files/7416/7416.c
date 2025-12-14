/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_19 |= ((-(arr_1 [22])));
        arr_2 [i_0] = (~-var_11);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = var_13;
                    arr_9 [i_0] [i_1] [i_0] [19] = (arr_3 [i_0] [i_1]);
                    arr_10 [i_0] [i_0] [i_0] [i_2] = (16352 || 16340);
                    var_21 = (((((16352 ? (arr_8 [i_0] [i_0] [i_0 - 1] [i_2]) : 2010725742))) || -3));
                    var_22 = (arr_4 [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_23 = (arr_7 [i_3] [i_3] [i_3]);
        arr_13 [i_3] = ((-(((arr_0 [i_3] [i_3]) & (((arr_4 [i_3] [i_3] [i_3]) ? var_17 : var_2))))));
        arr_14 [i_3] [9] = ((arr_1 [i_3]) >= (((arr_1 [i_3]) | (arr_1 [i_3]))));
        arr_15 [i_3] = (min(16337, (((arr_1 [i_3]) ? (((arr_4 [i_3] [i_3] [0]) ? (arr_6 [6] [19]) : var_5)) : (((122 >> (((arr_7 [1] [i_3] [1]) + 7679625151783721640)))))))));
        arr_16 [13] [i_3] &= (arr_5 [i_3]);
    }
    var_24 = ((var_4 & (var_9 - var_9)));
    #pragma endscop
}
