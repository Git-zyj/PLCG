/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = (~var_5);

                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        var_16 += ((var_5 ? var_14 : (((~(arr_7 [5] [5] [i_3] [12]))))));
                        var_17 = var_10;
                        var_18 = var_1;
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_12 [i_0] [i_0] [9] = ((var_9 & (((arr_1 [2] [2]) ? var_14 : (arr_11 [i_0])))));
                        var_19 = var_10;
                        var_20 = ((var_2 ? var_0 : var_10));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_21 = (min(var_21, (var_3 || var_9)));
                                var_22 += ((((arr_11 [15]) ? (arr_14 [1] [10]) : var_1)));
                            }
                        }
                    }
                }
            }
        }
        var_23 = (((arr_4 [i_0] [i_0]) ? 3 : var_6));
        var_24 = ((~(arr_1 [i_0] [i_0])));
        var_25 = (((arr_2 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_2 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_7 = 4; i_7 < 8;i_7 += 1)
    {
        arr_19 [i_7] = ((var_0 ? (arr_11 [i_7 - 1]) : (arr_11 [i_7 - 3])));
        var_26 += (((((37540 ? 8386041593432488194 : 145))) ? (-2147483647 - 1) : var_7));
        var_27 += var_2;
        var_28 = ((var_6 != (arr_5 [i_7] [2] [10])));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_29 = (min(var_29, 3069990958));
                                arr_32 [i_10] [i_9] [i_10] [i_10] [i_10] = var_0;
                                var_30 = (((min((((arr_27 [i_10] [6]) ? var_5 : var_8)), -var_0)) | (((((~var_0) <= (((arr_27 [i_10] [i_10]) / var_13))))))));
                            }
                        }
                    }
                    var_31 = 1224976319;
                    var_32 = (+(((arr_25 [i_8] [i_9] [i_10]) - (arr_25 [i_10] [18] [i_8]))));
                    arr_33 [i_10] = (arr_28 [i_8] [i_9] [1] [i_8]);
                    var_33 = (((min(160928127933267018, 0)) <= (((((arr_30 [i_8] [13] [13] [i_10] [16]) == (((arr_31 [i_8] [2] [13] [1] [1]) ? 32754 : var_3))))))));
                }
            }
        }
        var_34 = (max(0, (min((arr_27 [12] [12]), ((max(0, 27244)))))));
    }
    var_35 = (min(((~((-160928127933267034 ? 9 : 6498640070602694281)))), (var_6 || var_12)));

    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        arr_38 [2] = var_8;
        /* LoopNest 2 */
        for (int i_14 = 3; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                {
                    var_36 &= ((1 ? 1083490221 : 241));
                    var_37 = (arr_9 [i_15] [i_14] [2] [i_15]);
                    var_38 *= ((min(var_4, (arr_14 [11] [i_13]))));
                    var_39 ^= (~var_11);
                }
            }
        }
        var_40 = (((arr_14 [i_13] [1]) ? 1899946918 : (max(var_4, (((arr_41 [i_13] [11] [6]) + var_1))))));
    }
    for (int i_16 = 2; i_16 < 16;i_16 += 1)
    {
        var_41 = (min(var_41, ((((min(var_9, (arr_45 [i_16]))) > var_10)))));
        arr_47 [i_16] [8] = (((((min(3069990940, (arr_30 [14] [10] [4] [10] [4]))))) ? var_12 : (max((arr_23 [i_16 - 1] [i_16]), (arr_23 [i_16 - 1] [i_16])))));
    }
    var_42 -= var_3;
    #pragma endscop
}
