/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_9 & var_6);
    var_13 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [12] [i_0] = (((arr_0 [i_0] [i_0]) ^ var_4));
        arr_5 [i_0] [i_0] = (arr_3 [6]);
        arr_6 [i_0] [i_0] = (arr_2 [i_0]);
        var_14 = (arr_0 [i_0] [i_0]);
        var_15 = (((arr_2 [i_0]) / (arr_2 [i_0])));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_16 = (((((((max((arr_7 [i_1 + 3] [i_1 + 3]), var_9))) ? (((arr_1 [10] [i_1]) ? var_8 : var_7)) : var_11))) ? (arr_8 [i_1]) : ((((((var_2 ? (arr_3 [i_1]) : (arr_2 [i_1]))) != (((((arr_9 [i_1]) + 2147483647)) >> (var_7 - 29067)))))))));
        arr_10 [i_1] = ((((((arr_1 [i_1 + 2] [i_1 - 2]) ? (arr_1 [i_1 - 2] [i_1 - 1]) : (arr_1 [i_1 + 2] [i_1 - 1])))) | (31457280 - 13338)));
        var_17 = (((min(var_2, var_1))) ? (max(((var_1 ? var_2 : (arr_3 [i_1]))), (1514752716 / 8502))) : (arr_2 [i_1]));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_18 = ((-2183740845681125146 ? 1514752744 : 30309));
        arr_14 [i_2] [i_2] = arr_12 [i_2 + 3];
    }
    var_19 = var_0;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                var_20 = var_11;
                arr_19 [i_3 + 1] [i_3 + 1] [9] = arr_15 [i_3];

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_21 = (arr_20 [i_3 - 1] [i_3 + 1]);
                    arr_24 [i_3] [i_4] [i_5] [i_5] = (arr_23 [i_3]);
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_22 = ((var_2 ? (arr_22 [i_3]) : (max(((var_8 ? (arr_25 [i_3 + 1] [9]) : var_2)), var_4))));
                    var_23 = ((((var_4 ? (arr_16 [i_4]) : var_3)) | var_0));
                    var_24 = (((arr_25 [i_3 - 1] [i_3 - 1]) >= var_9));
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        var_25 = var_3;
                        var_26 = ((var_11 ? var_11 : var_4));

                        for (int i_9 = 3; i_9 < 12;i_9 += 1)
                        {
                            var_27 = (arr_26 [i_8] [i_4]);
                            arr_35 [i_8] [i_4] [i_4] [i_4] [i_8] [i_9 - 2] = var_8;
                            var_28 = (((arr_31 [6] [13] [i_4] [6]) == (arr_13 [i_3 + 1])));
                            var_29 = var_10;
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            arr_38 [i_3 - 1] [3] [i_8] = ((var_0 < (((arr_28 [i_4] [i_4] [i_7]) / var_6))));
                            arr_39 [i_3 + 1] [i_4] [i_3 + 1] [i_8] [i_10] = ((8506 ? 1150669704793161728 : 46230));
                            var_30 = var_8;
                            arr_40 [i_3] [i_8] [i_3] [5] [i_3 - 1] [i_3 + 1] [i_3 - 1] = (((arr_12 [i_3 + 1]) - (arr_12 [i_3 + 1])));
                        }
                        for (int i_11 = 1; i_11 < 13;i_11 += 1)
                        {
                            var_31 = (var_0 - var_6);
                            var_32 = var_4;
                            arr_45 [i_3 + 1] [i_4] [i_7] [13] [i_8] = arr_22 [i_3];
                        }
                    }
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_33 = (min(((min((arr_22 [i_3 + 1]), (arr_22 [i_3 - 1])))), (min(13254, 960144594))));
                        arr_48 [i_3] = ((var_6 || ((min((arr_21 [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 1]), var_1)))));
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        arr_53 [i_3 - 1] = (arr_49 [i_3] [i_3] [i_4] [i_4] [i_4] [i_13]);
                        var_34 = var_11;
                        var_35 = var_3;
                    }
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        var_36 = var_5;
                        arr_56 [i_3] [i_3] = (31457277 ? 8736549929118533443 : -473884461);
                        arr_57 [i_3] [i_3] [i_3] [i_7] [i_14] [i_4] = var_1;
                    }
                    arr_58 [i_3] [i_3] [i_3 - 1] = ((var_2 / (((var_6 - var_9) + ((var_6 / (arr_30 [i_3 - 1])))))));
                }
                arr_59 [i_3] [7] = ((((max(1514752741, 4852410893473536480))) ? var_0 : ((var_7 ? ((min(var_5, var_6))) : (arr_33 [i_3] [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1])))));
            }
        }
    }
    #pragma endscop
}
