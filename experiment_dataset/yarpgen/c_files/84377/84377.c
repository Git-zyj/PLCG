/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((max(var_12, ((var_6 ? var_9 : var_8)))), ((((~104) || var_2)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = min((arr_1 [i_0]), (min(var_11, (arr_2 [i_0] [i_0]))));
        var_14 = (min(var_14, (arr_2 [i_0] [i_0])));
        var_15 = var_3;
        var_16 &= ((min((arr_2 [i_0] [i_0]), 210)));
        var_17 = (((((var_1 / ((max((arr_2 [i_0] [i_0]), var_5)))))) + ((((arr_2 [i_0] [i_0]) ? var_11 : (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 = (arr_6 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_19 = ((((((arr_10 [7] [i_1] [i_1] [i_3]) + ((max(var_5, (arr_7 [i_1] [6]))))))) ? (arr_1 [i_1]) : ((((~var_8) + ((((arr_2 [i_3] [i_2]) ? (arr_8 [i_3]) : var_10))))))));
                    var_20 = (min(-723224317492613816, (min((arr_11 [i_3]), (arr_2 [i_2] [i_3])))));
                    var_21 += ((min((arr_5 [i_1] [i_1]), (arr_10 [i_1] [i_1] [i_1] [i_1]))));

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_22 -= (((((var_5 ? var_4 : (arr_8 [i_1])))) == (((((arr_3 [i_1]) ? (arr_0 [i_1]) : (arr_3 [i_1])))))));
                        arr_14 [i_1] [i_2] [i_3] [i_4] = ((((var_2 ? (((var_12 ? (arr_6 [i_1]) : var_8))) : (max((arr_6 [i_1]), (arr_11 [6]))))) + ((((((max((arr_6 [i_1]), (arr_2 [0] [0])))) || (~var_2)))))));
                        arr_15 [i_1] [i_3] [5] [i_4] = ((((arr_13 [i_4] [i_3] [i_1]) + var_2)) / ((((((arr_2 [i_1] [i_2]) ? (arr_13 [i_1] [i_1] [i_1]) : var_6)) <= ((max((arr_8 [i_1]), var_6)))))));
                    }
                    for (int i_5 = 4; i_5 < 10;i_5 += 1)
                    {
                        arr_18 [i_1] [i_1] [i_2] [i_3] [i_5] = var_12;
                        var_23 = (min(((((max(var_3, var_5))) & (((arr_9 [i_1] [i_1]) ? (arr_1 [i_2]) : var_7)))), (arr_1 [i_2])));
                        var_24 = (max(var_24, ((min(((224 ? 36196 : 1)), (min((arr_5 [i_1] [i_2]), (var_12 + var_5))))))));
                    }
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        var_25 = ((((min((arr_13 [i_1] [i_2] [i_2]), var_0))) ? (((arr_0 [i_6 + 1]) / (arr_8 [i_6 + 1]))) : var_5));
                        var_26 = (~(((arr_9 [3] [i_6 - 1]) ? (arr_7 [i_6 + 1] [i_6 - 1]) : (arr_0 [i_6 + 1]))));
                        arr_21 [i_6 - 1] [i_2] [i_2] = ((4503599090499584 ? -1715381993 : 1));
                        var_27 = ((((((((arr_3 [i_1]) * var_7))) ? (arr_0 [i_3]) : (((arr_16 [i_2] [i_2] [i_2] [i_2]) ? (arr_10 [i_3] [i_6] [i_3] [i_6]) : var_1)))) * (((-var_7 / ((2147483648 ? 8796092956672 : 210)))))));
                        var_28 = (~(min((((arr_12 [5] [5] [i_3] [i_3] [i_6] [i_6]) + (arr_1 [i_1]))), (arr_8 [i_1]))));
                    }
                }
            }
        }
        var_29 = 1;
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    var_30 = (min(((((var_6 ? var_11 : -12)) | var_5)), ((0 ? 8837278469873117571 : 10))));
                    var_31 &= (min((((((~(arr_23 [i_1] [i_1] [i_8])))) ? var_10 : ((max((arr_20 [i_1] [i_1]), var_4))))), (arr_16 [i_7 - 3] [i_7 - 2] [i_7 + 1] [i_7 + 1])));
                    var_32 = (min(var_32, (((var_8 ? (((((((arr_11 [i_7]) ? var_6 : (arr_23 [i_1] [6] [6])))) || (arr_12 [i_1] [i_1] [i_7] [i_7] [i_8] [i_7])))) : (((37797 && ((max((arr_24 [i_8]), (arr_16 [i_1] [i_7 - 2] [i_8] [i_8]))))))))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_33 += (var_9 / var_2);
                                arr_32 [i_1] [i_8] = ((((((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_10])))) ? (((1 ? 1943817625 : 650483855))) : (arr_10 [i_7] [i_7] [i_7 - 3] [i_7 - 3]))) + ((((((var_5 ? var_5 : (arr_5 [i_1] [i_1])))) ? (arr_16 [9] [i_7] [i_8] [i_7]) : (((arr_1 [i_10]) ? var_6 : (arr_20 [9] [i_8]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 8;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 8;i_12 += 1)
        {
            {
                var_34 = (min(var_34, ((min(((((min((arr_13 [i_11 + 2] [i_12] [i_11]), (arr_26 [i_11] [i_12] [i_12] [i_11]))) > (arr_2 [i_11 - 1] [i_11])))), (((((arr_28 [i_11] [0] [i_11 + 2] [i_11] [i_11 - 2] [1]) ? (arr_7 [i_11 + 2] [i_12]) : (arr_12 [i_11] [i_11] [i_12] [i_12] [0] [i_12]))) >> (var_6 - 21))))))));
                arr_40 [i_12] = (max(((((arr_28 [i_11 + 2] [5] [i_11 + 1] [i_12 + 1] [i_12] [i_12 - 2]) || (arr_28 [i_11 + 2] [i_11] [i_11 + 1] [i_12 + 1] [i_12 + 2] [i_12 - 2])))), (((((var_2 ? (arr_1 [i_11]) : var_0))) ? (((~(arr_37 [i_11] [i_12] [i_11])))) : var_12))));
            }
        }
    }
    var_35 = ((52478 ? 33016 : -1943817626));
    var_36 = ((~(min((var_2 | 1), var_5))));
    #pragma endscop
}
