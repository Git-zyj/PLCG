/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (max(var_16, var_14));
        arr_2 [i_0] [i_0] = (!var_7);
        arr_3 [i_0] = (-(arr_1 [i_0] [i_0]));
        arr_4 [i_0] [i_0] = arr_0 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            var_17 = (!469762048);
            arr_10 [i_1] [1] [i_1] = (((var_9 ? (arr_7 [i_1]) : var_1)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    {
                        var_18 = ((!(arr_14 [i_4 - 1] [i_4] [i_4] [i_4] [i_4] [i_4])));
                        var_19 = var_6;
                        var_20 += arr_0 [i_2 - 4] [i_2 - 4];

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_21 = ((+((var_2 ? (arr_12 [i_1] [i_5] [2]) : var_12))));
                            var_22 = (max(var_22, ((((arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 2]) / (arr_12 [i_4 - 1] [14] [i_4 + 2]))))));
                            var_23 = (max(var_23, (((!(arr_16 [i_4 + 1] [i_4] [i_2 + 1] [i_2 + 1] [i_1]))))));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_22 [i_6] [12] [i_4] [12] [i_6] = var_14;
                            var_24 = ((!(((var_11 ? (arr_5 [i_1]) : (arr_20 [i_1] [i_1] [i_1] [i_6] [i_1]))))));
                        }
                    }
                }
            }
            var_25 = (min(var_25, ((((arr_1 [i_1] [i_2]) ? var_6 : (arr_19 [i_1] [10] [10] [i_2 - 1] [i_1] [i_1] [i_2 + 4]))))));
            var_26 = (((arr_21 [i_1] [i_1] [i_1] [i_2 + 2] [i_1]) ? 512 : (arr_11 [i_1] [i_1])));
        }
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            var_27 += (~9);
            arr_26 [i_1] [2] [10] = ((((((arr_18 [i_7 - 1]) - (max(var_11, (arr_8 [i_1])))))) ? ((-(arr_17 [i_1] [i_7] [i_7 + 2] [1] [i_1] [i_7] [i_7]))) : -var_1));
            var_28 = ((+(((~0) ? 7 : 132))));
            var_29 = var_3;
            arr_27 [i_7] [i_7] [i_1] = (max((~var_1), (arr_6 [i_1] [i_7 - 2])));
        }

        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_30 = ((~((var_10 ? var_1 : var_3))));
            arr_32 [i_8] [i_8] [i_8] = ((!(arr_0 [i_1] [i_1])));
            var_31 = ((~(arr_11 [i_8] [i_1])));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_32 += (min(((((arr_6 [i_10 + 3] [i_10 + 2]) ? (arr_30 [i_11 + 1] [i_11 + 1] [i_11 + 1]) : (arr_30 [i_11 + 2] [i_11 + 4] [i_11 - 1])))), (arr_8 [i_1])));
                            var_33 = var_4;
                            arr_43 [15] [13] [i_9] [i_8] [i_9] [13] = ((((((min(var_1, var_7))) || ((var_6 || (arr_17 [i_11] [1] [i_11] [i_11] [i_11] [i_11] [i_9]))))) && ((!(arr_17 [i_1] [i_1] [i_9] [i_10] [i_9] [i_11] [i_10])))));
                            var_34 += ((((!(((var_0 ? 4 : 5712))))) ? (min(((var_8 ? var_2 : var_2)), ((((arr_7 [i_11]) == 1))))) : var_13));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            arr_47 [i_1] [i_12] [i_1] = -var_13;

            for (int i_13 = 4; i_13 < 13;i_13 += 1)
            {
                arr_50 [i_13] [i_13 + 3] [i_13 + 3] [8] = var_1;
                var_35 = (min(var_35, (((!(arr_34 [i_1] [i_13] [i_1]))))));

                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_36 = ((arr_13 [i_1] [i_13 - 4] [i_13] [i_13 - 4] [i_14] [i_13 + 2]) ? var_1 : (arr_39 [i_1] [i_1]));
                    arr_54 [i_1] [i_1] [14] = var_12;
                    var_37 = 255;
                    arr_55 [i_1] [i_12] [i_13] [i_1] [i_1] = var_12;
                }
            }
            var_38 = ((arr_31 [i_12] [i_1] [i_1]) >> (((arr_48 [i_12] [i_1] [i_1] [i_1]) + 6803075309235018325)));
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                {
                    var_39 = var_7;
                    var_40 = (max(var_40, var_9));
                    var_41 = (((arr_16 [i_1] [i_15] [i_15] [i_15] [i_16]) ? (((arr_14 [1] [i_15] [i_15] [i_15] [2] [i_16]) ? (arr_14 [i_1] [i_1] [i_1] [i_15] [i_1] [i_16]) : (arr_14 [i_1] [i_16] [i_1] [i_15] [i_1] [i_15]))) : 122));
                }
            }
        }
    }
    var_42 &= var_6;
    #pragma endscop
}
