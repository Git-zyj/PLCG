/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2 + 1] [i_3 + 3] [i_4] [i_0] [2] = (max((--514663787), ((((var_6 / 249) ? (arr_4 [i_4]) : (~2))))));
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_4] = (((arr_11 [i_0] [i_0] [i_0] [i_0] [8]) && (arr_11 [i_0] [i_0] [i_2 - 3] [i_0] [i_4])));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_0 * ((((62 <= (arr_9 [i_0] [11] [i_2 - 3] [i_2 - 3]))) ? ((max((arr_4 [i_2 + 1]), 94))) : (!var_0)))));
                                var_10 = (max(var_10, (min((((arr_7 [i_0] [i_2 + 1] [i_2] [i_3 - 2]) ? (arr_7 [i_2] [i_2 + 1] [i_2] [i_3 + 1]) : var_4)), 94))));
                            }
                        }
                    }
                    arr_15 [i_1] [i_0] = ((!(arr_9 [i_2 + 2] [i_2] [i_2 + 1] [11])));
                    var_11 = ((84 >> (((((((~114) + 2147483647)) >> (var_9 - 4060))) - 33554426))));
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        var_12 = (min(var_12, (((-(((((~(arr_18 [i_5])))) * var_4)))))));
        var_13 *= (((arr_19 [i_5 + 2]) % (arr_19 [i_5 + 2])));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_14 &= (((!(arr_19 [i_6]))) ? (max(var_3, var_0)) : var_8);

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_15 = 21;
            arr_26 [i_6] = -11201;
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            arr_36 [i_6] [7] [i_9] = ((13482 ? (((arr_5 [i_8] [i_8] [i_8] [3]) ? -11201 : ((max(var_0, var_6))))) : ((72 ? ((4294967278 ? 23715 : var_6)) : (arr_9 [i_6] [5] [i_9 - 2] [i_8 - 1])))));
                            var_16 = (((((!(((-(arr_10 [i_6] [i_7] [8] [i_9] [8]))))))) << (((min((((arr_33 [i_6] [i_6]) ? (arr_7 [i_7] [i_8] [i_9] [i_10]) : var_6)), (arr_27 [i_6] [i_7] [i_8 + 1] [i_10]))) - 30357))));
                            arr_37 [i_6] [i_6] [i_6] = (arr_23 [i_6]);
                        }
                    }
                }
            }
        }
        var_17 = (arr_21 [i_6] [i_6]);
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
    {
        arr_40 [i_11] [i_11] = var_7;
        arr_41 [i_11] = arr_17 [i_11];
        var_18 *= 16;
        arr_42 [i_11] [i_11] = ((-((-var_3 ? ((~(arr_16 [i_11] [i_11]))) : (arr_17 [i_11])))));
    }
    for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
    {
        var_19 = ((!(((~(arr_44 [i_12]))))));
        var_20 = var_9;
        arr_46 [i_12] [i_12] = 670154157;
        arr_47 [i_12] = min(var_5, var_9);
    }
    /* LoopNest 3 */
    for (int i_13 = 3; i_13 < 15;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 14;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                {
                    arr_55 [14] [i_14] [i_15] [i_15] &= (var_7 / var_3);

                    for (int i_16 = 1; i_16 < 14;i_16 += 1)
                    {
                        arr_59 [16] [16] [4] [16] [4] [i_16 + 2] = max((arr_17 [i_13 - 3]), var_4);
                        arr_60 [i_16] [15] [i_16] [i_16] = var_6;

                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            var_21 *= ((((var_1 ? (arr_17 [i_16 + 1]) : (arr_17 [i_16 - 1])))) ? ((((arr_64 [i_13 + 1] [i_13 + 2] [i_15] [i_15] [i_16 + 3] [i_14 + 2]) ? (arr_64 [i_13 - 1] [i_13 - 1] [i_15] [i_16] [i_16 + 3] [i_14 + 1]) : var_1))) : (max((!var_3), var_5)));
                            var_22 = var_3;
                        }
                        arr_65 [i_16] [14] [i_15] [6] [i_16] [i_16] = ((~((-((min(var_2, (arr_64 [i_13] [i_14] [i_15] [i_16] [i_16] [i_16]))))))));
                    }
                    /* vectorizable */
                    for (int i_18 = 1; i_18 < 15;i_18 += 1)
                    {
                        var_23 = (~10);
                        arr_68 [i_18] [2] [i_14] [i_13] = (arr_44 [i_15]);
                        var_24 *= (!var_7);
                    }
                    arr_69 [i_13] [i_15] = ((((!(arr_63 [i_13] [i_13] [i_13] [i_13] [i_13 - 2]))) ? ((65535 ? (arr_63 [i_13 - 2] [6] [6] [i_13 - 3] [i_13 + 2]) : (arr_63 [i_13] [5] [i_13] [i_13] [i_13 - 2]))) : var_8));
                }
            }
        }
    }
    #pragma endscop
}
