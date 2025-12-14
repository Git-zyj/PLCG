/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [4] = (arr_6 [i_0] [13] [i_2] [i_2]);

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_19 = var_11;

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_20 = (min(var_20, -0));
                            arr_16 [i_0] [i_1 - 1] [i_2] [i_3] [i_3] [i_2] = (arr_8 [i_0 - 1] [i_1 + 3] [i_0 - 1] [i_1 + 3] [i_3]);
                        }
                    }
                    arr_17 [1] [i_1 - 1] [i_1 - 1] [i_1 - 1] = 84;
                    var_21 = var_14;
                }
            }
        }
        var_22 &= var_2;
        var_23 = (arr_15 [i_0 + 3] [i_0 - 1] [i_0] [10] [i_0] [14]);
        var_24 = (min(var_24, (((!((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? 1884343476 : (arr_15 [1] [i_0 - 1] [i_0] [i_0] [i_0] [1])))))))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 16;i_7 += 1)
            {
                {
                    var_25 |= (1 <= 18446744073709551615);
                    var_26 = (arr_18 [11] [i_7]);
                    arr_24 [i_5] [i_5] = (((((var_9 ? (((arr_19 [i_5]) ? var_11 : (arr_23 [i_5]))) : (((arr_21 [i_6] [i_6]) / (arr_22 [i_5] [8] [i_7] [i_7])))))) ? (arr_21 [2] [2]) : (((((var_7 >> (((arr_21 [i_6] [i_5]) - 21060))))) ? ((1 ? (arr_20 [i_5] [11] [i_7]) : (arr_22 [i_5] [i_6] [i_5] [i_5]))) : var_17))));
                    arr_25 [i_5] [i_6] [i_7] = ((~((((0 ? (arr_18 [i_5] [i_7]) : (arr_19 [i_5])))))));
                    var_27 = (((arr_19 [4]) >> (((((~0) ? (max((arr_19 [i_5]), (arr_18 [i_5] [i_7 - 1]))) : (arr_22 [i_7 - 1] [i_7 - 3] [i_7 - 3] [i_7 - 1]))) - 597419318))));
                }
            }
        }
        var_28 = (max(var_28, ((((3122531814980440431 ? (arr_23 [i_5]) : (arr_23 [i_5])))))));
        var_29 = (max(var_29, (((((max((((arr_22 [i_5] [1] [i_5] [i_5]) ? (arr_18 [i_5] [i_5]) : var_10)), (((!(arr_19 [i_5]))))))) > (max(4398046511103, 255)))))));
    }
    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        var_30 = (-(((arr_21 [i_8 - 1] [i_8 - 1]) - (((arr_6 [i_8] [i_8] [i_8 - 1] [i_8 + 1]) + var_10)))));
        var_31 = 5113535787525890252;
        arr_28 [10] = (max(((~((var_1 ? var_13 : var_0)))), (max((((~(arr_6 [i_8] [i_8 - 1] [i_8 + 1] [i_8 - 1])))), (arr_4 [i_8 - 1] [i_8 - 1] [i_8 - 1] [10])))));
    }

    for (int i_9 = 3; i_9 < 11;i_9 += 1)
    {
        arr_33 [i_9 - 3] |= var_18;
        var_32 = ((((arr_12 [10]) ? (arr_9 [4] [4]) : (arr_12 [8]))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_37 [i_10] = var_16;
        var_33 = (max(var_33, (((-(max((arr_10 [i_10] [12] [i_10] [1] [7] [1]), (arr_26 [i_10]))))))));
    }
    var_34 -= var_5;
    var_35 = var_16;
    #pragma endscop
}
