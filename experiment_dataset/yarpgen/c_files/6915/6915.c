/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = ((((19 ? var_4 : (((max(var_3, var_6)))))) <= ((((!((min(-17, var_11)))))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [12] = ((((arr_2 [i_0] [i_2]) * (arr_0 [i_1]))) / 1);
                    var_15 = 9;

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_16 = (min(var_16, ((((arr_10 [i_3 + 3] [i_3 + 3] [11] [i_3 + 3]) ? (arr_10 [i_3 + 3] [i_3 + 3] [i_3] [i_3 + 3]) : var_2)))));
                        arr_14 [i_3] [i_0] [i_1] [i_0] = ((-1308627134 && (arr_7 [i_0])));
                        var_17 = (((arr_12 [i_3 + 1] [i_3] [i_3] [i_3 + 4] [i_3 + 4]) ? (arr_12 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 4] [1]) : var_7));
                    }
                    arr_15 [i_0] [i_1] = (arr_5 [i_0] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_22 [i_5] [i_5] [3] = (((~54194) | (min((arr_21 [i_0] [i_1] [i_2] [i_4] [i_5]), -981362950))));
                                var_18 &= (arr_13 [i_4] [i_1] [i_0]);
                                arr_23 [i_5] [i_4] [i_2] [i_1] [i_5] = (((!-23) ? ((max((arr_12 [i_0] [i_0] [i_5 - 1] [i_5 + 1] [i_5 - 1]), 0))) : (((arr_21 [i_2] [i_2] [i_5 + 1] [i_5] [i_5]) ? 16591305 : -23718))));
                                var_19 = ((~((~((~(arr_11 [i_0] [i_1] [i_2])))))));
                                arr_24 [i_0] [i_0] [i_0] [i_2] [i_4] [i_5] = ((((min(var_1, (arr_20 [i_5] [i_4] [i_2] [i_1] [i_1] [i_0])))) > ((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) != (arr_20 [i_5] [i_4] [i_4] [i_2] [i_1] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
        var_20 -= 0;
        var_21 = (max((max(208, 13737129704531942525)), ((((arr_4 [i_0]) ? ((var_8 ? -1308627134 : (arr_8 [i_0] [i_0] [i_0] [7]))) : (((arr_3 [13] [i_0]) ? 1 : 0)))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_27 [i_6] |= 14583435637368694030;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    arr_32 [i_6] [i_6] [i_6] = ((5 ? -2040313768 : -21));
                    arr_33 [i_6] [i_7] [i_8] = var_5;
                }
            }
        }
        var_22 = -1363538606;
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_23 = var_3;
                        var_24 = -var_3;
                    }
                }
            }
        }

        for (int i_12 = 2; i_12 < 20;i_12 += 1)
        {
            var_25 = (((arr_29 [i_12 + 1] [i_12 - 1]) >> (1 > 125)));
            var_26 = ((1 ? 15 : 4709614369177609091));
            arr_46 [i_12] = ((-1 * ((-842264897268444383 ? var_11 : -33))));
        }
        for (int i_13 = 2; i_13 < 20;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                arr_52 [i_6] [i_14] = var_6;
                arr_53 [i_14] [i_14] = (~-2144790280);
                arr_54 [i_14] = ((~(arr_30 [i_14] [i_13 + 1] [i_13 - 2])));

                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    arr_57 [i_14] [i_13] [i_14] = ((-((-1308627132 ? 135 : (arr_42 [i_14])))));
                    arr_58 [i_14] [i_14] = ((var_8 + (arr_39 [5] [i_14] [i_13 - 1] [16])));
                }
            }
            var_27 = (max(var_27, (((~(arr_49 [i_13 - 1] [4]))))));
        }
    }
    for (int i_16 = 0; i_16 < 24;i_16 += 1)
    {
        arr_62 [i_16] [i_16] = (((((arr_60 [i_16]) >= 16128)) || (((18218260628206787997 ? var_0 : (arr_60 [i_16]))))));
        arr_63 [i_16] = ((((1308627142 ? (((var_0 <= (arr_59 [i_16])))) : (arr_61 [i_16]))) <= var_12));
    }
    var_28 = 27995;
    #pragma endscop
}
