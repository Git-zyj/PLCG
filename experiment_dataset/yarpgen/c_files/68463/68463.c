/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (((((((max(var_9, var_2))) ? (-71 - 220212781) : var_6))) ? (0 ^ 9092) : ((min(var_1, var_1)))));
    var_12 += var_2;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_13 *= (((((arr_1 [i_0]) ^ (var_3 * var_10))) ^ ((-(min(var_4, 56442))))));
        var_14 += arr_3 [i_0];
        var_15 = (-127 - 1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_3] [i_1] [i_2] = ((((max((arr_4 [i_0 - 2] [i_0 - 2]), (var_1 <= var_9)))) ? ((min((arr_9 [i_0 - 2] [i_4 - 3] [i_4] [i_2]), var_1))) : (((var_6 - var_1) ? (((arr_10 [i_0 + 1] [i_1] [i_2] [i_2] [1] [16]) / var_8)) : (arr_10 [i_2] [i_2] [i_2] [i_3] [i_4 - 3] [i_3])))));
                                var_16 = 1432269564;
                                var_17 = (((((var_5 ? var_4 : var_8)) / var_2)));
                            }
                        }
                    }
                    arr_16 [i_0] [i_2] |= (((min(var_8, (((-127 - 1) + 126)))) <= (((!var_8) ? (min(var_1, var_2)) : var_5))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_18 = (((((((var_2 ? -78 : (arr_17 [i_5] [i_5]))) | (var_1 % var_1)))) ? ((~(~var_3))) : var_1));
        var_19 = var_6;
    }
    var_20 = ((var_9 * ((var_1 ? var_0 : ((var_7 ? -1567643676 : var_1))))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            {
                var_21 = ((((min(2147483647, 1))) * (((((var_2 / (arr_18 [i_6])))) ? ((((0 != (arr_20 [15]))))) : 1))));
                var_22 = (((arr_22 [i_7] [i_7 - 1]) <= ((((max((arr_21 [1]), 24))) ? var_7 : ((max(var_0, var_8)))))));
                var_23 &= ((+(((((var_3 + 2147483647) << (var_10 - 1))) % var_10))));
            }
        }
    }
    #pragma endscop
}
