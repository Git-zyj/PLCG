/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (max(var_17, (!var_8)));
        arr_2 [i_0] = ((-(max(-1, ((127 ? 127 : 7936))))));
    }
    var_18 = (((((var_1 ? var_12 : 4294967295))) ? var_2 : (((max(1, (min(var_14, 1))))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            {
                arr_10 [i_1] [i_1] = (((((!(arr_3 [i_1])))) <= ((15 ? (arr_3 [i_1]) : (arr_3 [i_1])))));
                arr_11 [i_2] = var_5;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = var_5;
                                var_19 = (min(var_19, ((((((241 ? var_7 : (arr_24 [i_6 - 2] [i_6 - 2])))) ? (arr_24 [i_6 - 1] [i_6 - 1]) : (((arr_24 [i_6 - 1] [i_6 - 2]) | var_4)))))));
                            }
                        }
                    }
                    arr_27 [i_5] [i_4] [i_3] = var_15;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            {
                var_20 = (min(var_20, 65533));
                arr_32 [i_9] = (((arr_30 [i_8] [i_8] [i_8]) / ((((((-1 - (-9223372036854775807 - 1)))) ? -32758 : (((arr_31 [i_9]) << (var_12 + 449541734))))))));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        {
                            var_21 &= ((var_8 ? (arr_36 [i_10] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 - 1]) : (min((((2048 && (arr_36 [i_8] [2] [i_10] [i_10] [i_10])))), (~0)))));
                            arr_39 [i_8] [i_9] [i_10] [i_11] = 1;

                            for (int i_12 = 0; i_12 < 18;i_12 += 1)
                            {
                                arr_44 [i_8] [i_9] [i_9] [i_9] [i_9] = ((-(((((var_16 ? (arr_35 [i_8] [i_9] [i_9]) : var_12))) ? ((18446744073709551615 ? 0 : 0)) : var_15))));
                                var_22 = (arr_30 [9] [i_9] [i_9]);
                                arr_45 [i_8] [i_9] = (((arr_28 [i_10 + 1] [i_8]) < ((var_4 ? (((0 ? var_16 : (arr_0 [i_8] [i_8])))) : ((0 ? var_7 : 9223372036854775807))))));
                                arr_46 [12] [12] [i_10] [12] [12] = (((-(arr_37 [i_12] [i_12] [i_8] [i_8] [i_10 + 1] [i_8]))) / ((0 ? -1 : 6)));
                            }
                            var_23 = ((var_16 ? ((var_1 ? (arr_33 [i_10 - 1] [i_10 + 1]) : (arr_35 [i_10 + 1] [i_9] [i_8]))) : (0 && 0)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
