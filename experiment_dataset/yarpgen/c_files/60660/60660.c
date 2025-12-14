/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_11 ? (var_12 < var_2) : (var_5 > var_9)))) / (var_16 / 1)));
    var_19 *= var_17;
    var_20 = var_12;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [11] = ((~((~(arr_1 [i_0] [i_0])))));
        arr_5 [i_0] = (~var_5);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        arr_14 [i_3] [i_1] [i_2] [i_1] [i_1] [i_0] = (arr_2 [i_0] [i_0]);
                        var_21 = ((((((((4095 ? (arr_2 [i_0] [2]) : (arr_2 [i_0] [i_1])))) ? 1 : (((!(arr_2 [i_0] [i_1]))))))) == -var_16));
                        var_22 = ((~(max(var_17, (min(var_6, 1))))));
                    }
                    var_23 = ((!(((((((arr_3 [i_1]) * var_8))) & (arr_13 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2] [5]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_21 [i_5] [i_1] [i_2] [i_1] [i_1] [i_0] = 1589245946;
                                var_24 = (var_8 >> (((((arr_12 [i_0] [i_1] [i_2] [0] [i_1] [i_0]) ? (max(var_12, (arr_3 [1]))) : -var_1)) - 1049897262)));
                            }
                        }
                    }
                }
            }
        }
        arr_22 [i_0] [i_0] = ((min(((1388612880 ? (arr_8 [0] [0] [0]) : 4146898083668418561)), ((0 ? var_16 : 3686733350)))));
        var_25 = ((((!((var_8 > (arr_16 [0] [i_0] [i_0] [i_0] [0]))))) ? (((var_9 ? ((min(var_1, var_3))) : var_10))) : ((((min(var_4, (arr_1 [i_0] [i_0])))) ? -1288096855 : ((var_4 ? var_5 : (arr_9 [i_0] [i_0] [0])))))));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_26 = var_17;
        arr_26 [1] = ((((var_5 ? ((var_17 ? (arr_24 [i_6] [i_6]) : var_2)) : ((var_12 ? var_11 : (arr_24 [i_6] [i_6])))))) ? var_1 : ((var_2 ? ((((arr_25 [4]) || var_1))) : (((arr_24 [i_6] [i_6]) ? (arr_24 [i_6] [i_6]) : var_10)))));
        arr_27 [i_6] [i_6] = var_9;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_27 = (((arr_0 [i_7]) ? (var_9 < var_4) : (((arr_3 [i_7]) | (arr_15 [i_8] [i_7] [i_7] [i_7])))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {

                        for (int i_11 = 3; i_11 < 12;i_11 += 1)
                        {
                            var_28 = (((((arr_11 [i_8] [8] [i_7]) == var_6)) ? (arr_6 [i_7]) : (((arr_6 [i_7]) / (arr_28 [i_9])))));
                            var_29 = (min(var_29, (arr_25 [i_11 - 1])));
                            var_30 = (min(var_30, (arr_0 [i_11 + 1])));
                        }
                        var_31 = ((((((arr_13 [i_7] [7] [i_8] [i_9] [13] [i_10]) ? (arr_13 [i_7] [i_7] [i_8] [i_8] [i_9] [i_10]) : (arr_24 [i_7] [i_7])))) ? ((((arr_9 [i_7] [16] [i_7]) ? 2147483647 : 135))) : (arr_29 [i_10])));
                        arr_39 [i_7] [i_8] [i_9] [i_10] = ((((!(arr_35 [10] [0] [i_9] [i_9]))) ? ((var_6 ? (arr_30 [i_9] [i_7]) : (arr_33 [i_7] [i_8] [i_9]))) : (var_11 > var_9)));
                    }
                }
            }

            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                var_32 = ((var_15 ? (5082363081678816698 + var_2) : 34359738304));
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        {
                            var_33 *= 168;
                            var_34 = var_5;
                            var_35 = (((((arr_28 [i_7]) & (arr_8 [i_7] [i_12] [i_14])))) ? (((arr_7 [i_14]) ? var_14 : var_9)) : 0);
                        }
                    }
                }
                var_36 = var_7;
            }
            var_37 = (!(arr_31 [i_7] [i_8] [i_7]));
            var_38 = var_14;
        }
        var_39 = var_11;
        var_40 = -1;
        var_41 &= (-9223372036854775807 - 1);
        var_42 = ((((((arr_0 [i_7]) ? 3968 : var_17))) ? (arr_44 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (((var_13 ? 15281 : var_4)))));
    }
    #pragma endscop
}
