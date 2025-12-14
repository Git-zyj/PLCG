/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((max(1, 65535)))) ? var_0 : (((var_9 ? var_6 : 31859)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = 9223372036854775807;
                var_20 = (-4410533920427369801 | 2198);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        arr_8 [i_2] = (arr_5 [i_2 + 3] [i_2 + 2]);
        var_21 = (arr_6 [i_2 + 1]);
        var_22 |= (arr_4 [16] [16] [i_2 + 1]);
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_23 = (max(var_23, (((((14060 < (max(var_6, (arr_9 [i_3] [i_3]))))) ? ((((14060 ? (arr_9 [10] [10]) : var_10)) << (arr_10 [i_3]))) : ((-var_2 ? (arr_9 [i_3] [i_3]) : ((((arr_10 [i_3]) ? -14040 : (arr_10 [i_3])))))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                {
                    var_24 = (max(5, -2050492843));
                    var_25 = ((-(arr_9 [i_5 - 2] [i_5 + 2])));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_26 ^= 39624;
                                var_27 = ((-((var_15 % (arr_17 [i_7 - 1] [i_7 + 1] [i_7] [i_7] [i_7 + 1])))));
                            }
                        }
                    }
                    arr_19 [i_5] [i_5 + 2] [18] = (((arr_16 [10] [10] [i_3] [10] [0] [7]) ? var_9 : var_14));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 3; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        arr_28 [i_8] [i_8] [i_9] = ((var_6 ? var_15 : (arr_17 [i_8] [i_8 - 1] [i_8 - 3] [i_8 + 1] [i_8 - 3])));
                        arr_29 [i_8] [i_8] [i_8] [i_8] [i_8] = max(((-(var_1 * var_2))), 13391926074280543840);
                        arr_30 [8] [13] [i_8] [i_10] [9] = var_5;
                        arr_31 [i_10] [i_10] [i_10] [i_8] = (arr_11 [i_3] [1] [i_3]);
                        var_28 = ((var_10 ? ((max((arr_22 [i_8]), (arr_17 [i_10] [i_8 + 1] [i_8 - 2] [i_8 - 2] [i_8 - 1])))) : (((arr_13 [1] [i_8] [5]) / (((arr_14 [i_3] [i_8] [i_3] [i_8]) ? -13292 : (arr_22 [i_9])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
