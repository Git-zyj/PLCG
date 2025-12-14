/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_14;
    var_16 = ((((-1 ? ((max(var_13, 103))) : var_5)) >> (((var_1 < var_5) % 1))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((44979 * (arr_1 [i_0])));
        arr_4 [i_0] [1] |= var_1;
        arr_5 [6] [i_0] = ((63 >> (4095 - 4090)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_17 = (~var_3);
        var_18 = (min(var_18, (var_1 * 207)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_10 [i_2] [12] = var_0;

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_13 [i_2] [i_2] [i_2] = ((arr_7 [i_2]) | var_11);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_19 [13] [6] [i_3] [i_2] = ((var_11 || (70 >= -144727701)));
                        arr_20 [i_2] [i_3] [i_4] [i_5] [i_5] [i_5] = ((((var_7 < (arr_8 [i_5])))) * (((var_5 < (arr_9 [i_2])))));
                        arr_21 [12] [i_4] [i_4] [i_4] [i_4] = ((21353 * (~var_12)));
                        arr_22 [i_2] [i_2] [i_2] [i_2] = (arr_6 [i_2]);
                        arr_23 [6] [i_2] [1] [i_2] [i_2] = ((~((((arr_14 [i_2] [9] [i_5]) < 61440)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_28 [i_6] = (((var_1 % 1) ? (1 & 40712) : -61440));
        var_19 = (!-1504892236);
        var_20 = (min(var_20, (((var_5 ^ (47 / var_4))))));
        var_21 = (max(var_21, (arr_26 [i_6])));
        var_22 = var_1;
    }
    #pragma endscop
}
