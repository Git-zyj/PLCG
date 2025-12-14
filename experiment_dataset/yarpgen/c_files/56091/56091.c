/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((-var_0 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_11 = (((arr_0 [i_0] [i_0]) ? var_7 : var_8));
        var_12 = (min(var_12, var_9));
        var_13 = var_10;
        var_14 = var_8;
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            arr_10 [i_2] = (~var_1);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_15 = (max(var_15, (arr_11 [i_1] [i_1 - 1] [i_1 + 1])));
                            arr_18 [16] [i_1] |= ((((!(arr_17 [6] [i_2] [i_3] [i_4] [7] [i_5] [i_5]))) ? (arr_9 [i_2 + 3]) : var_7));
                            arr_19 [11] [i_2] [i_4] = var_5;
                            arr_20 [i_2] = (arr_12 [i_2 + 2] [i_1 + 1]);
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_25 [i_1 - 4] [i_2] [i_3] [i_2] [i_6] [i_3] [i_6] = (arr_7 [19] [i_1]);
                            arr_26 [i_1 - 4] [i_2] [i_3] = (((arr_4 [i_1 - 4]) ? var_2 : var_5));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_31 [i_1] [i_2] [i_2] [i_4] [i_7] = (~var_7);
                            arr_32 [i_2] [i_4] [i_3] [i_2] [i_2] = var_1;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_35 [i_1 - 3] [i_2] [i_1 - 4] [i_1 - 3] [i_2] [i_2] [i_3] = var_6;
                            var_16 = ((var_0 ? (arr_12 [i_1 - 2] [i_1 - 2]) : (arr_0 [1] [i_2])));
                            var_17 = (~var_4);
                        }
                        arr_36 [i_2] [i_2] [i_3] [i_3] = (((arr_17 [i_1 - 2] [i_1] [i_2] [i_2] [i_3] [i_3] [i_4]) ? (arr_15 [i_1 - 3] [14] [i_1 - 3]) : (arr_24 [i_1 - 2] [i_2] [i_3] [i_4] [i_2 + 3])));
                    }
                }
            }
            var_18 = (min(var_18, ((((arr_14 [i_2] [i_1] [i_2 + 3]) ? (arr_27 [i_2] [i_2 - 1] [i_2 + 3] [18] [i_2]) : (arr_0 [i_2] [i_2 - 1]))))));
            arr_37 [i_2] [i_1] [i_2] = ((var_10 != (var_7 < 20519)));
            var_19 = (((arr_34 [i_2 + 1] [i_2 + 3] [i_2] [i_2]) ? ((((arr_15 [i_1] [i_1 - 1] [10]) < (arr_34 [i_2] [i_2] [i_2] [i_2 + 1])))) : (arr_28 [2] [i_2] [i_2] [i_2] [i_2 + 1])));
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            arr_40 [i_1] [i_9] [i_9] = (((arr_0 [i_1 - 3] [i_1 - 4]) ? (arr_0 [i_1 + 1] [i_1 - 3]) : (arr_0 [i_1 - 2] [i_1 - 4])));

            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                var_20 = (((arr_4 [i_10 + 1]) ? (arr_4 [i_10 + 1]) : var_5));
                var_21 &= (var_4 ? (arr_5 [i_1] [i_1 - 2]) : (arr_5 [i_1] [i_1 - 2]));
                arr_43 [i_9] [i_1] [i_1] = (arr_0 [i_9] [i_9]);

                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    var_22 = ((var_8 ? var_3 : (arr_30 [i_1 - 3] [i_9])));
                    var_23 = ((!(arr_38 [i_10 + 1] [i_1 - 3])));
                    var_24 *= (((arr_15 [i_1 - 3] [i_1 - 1] [i_1]) ? var_1 : (arr_5 [i_1] [i_10])));
                    var_25 = (arr_38 [i_1 - 1] [i_1 - 2]);
                    arr_46 [i_10 - 1] [i_9] [i_10] [i_10] [i_10] [i_10] = (arr_8 [i_10 + 1] [i_1 - 2] [i_1 - 4]);
                }
                for (int i_12 = 1; i_12 < 20;i_12 += 1)
                {

                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        var_26 += (((arr_49 [i_13 - 1] [i_10 + 1] [i_13 - 1] [i_13 - 1]) ? (arr_49 [i_13 - 1] [i_10 - 1] [i_10] [i_13 - 1]) : (arr_49 [i_13 - 1] [i_10 - 1] [i_13] [i_10 - 1])));
                        arr_52 [i_13] [i_9] [i_10] [i_9] [i_9] [i_1] = ((-(((arr_5 [i_9] [i_12 - 1]) ? var_1 : var_4))));
                    }
                    arr_53 [i_1] [i_9] [i_1] [i_9] = (var_1 ? (arr_13 [i_10 + 1] [14] [i_10 + 1] [i_10 + 1]) : (arr_50 [i_10 - 1] [i_10] [i_9] [i_10 + 1] [i_10] [i_10 - 1] [i_10 - 1]));
                    arr_54 [i_9] = (((arr_51 [i_1] [i_1] [i_1] [9] [i_9] [i_12] [i_10 + 1]) < (arr_51 [i_9] [14] [i_9] [i_9] [i_9] [i_1 - 1] [i_10 + 1])));
                }
            }
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                arr_58 [i_1] [i_9] [i_9] = (var_3 + (arr_16 [i_1] [i_9] [i_1 - 2] [i_1] [i_1] [i_9]));
                arr_59 [i_1] [i_9] [11] = (((arr_2 [i_14]) ? (((arr_39 [i_9]) ? var_7 : var_2)) : var_4));
                var_27 = ((58 ? 175 : ((-89 ? 1 : var_9))));
            }
            arr_60 [i_9] = var_8;
        }
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            arr_63 [i_1] [i_1] [i_1 - 2] = -var_1;
            arr_64 [i_15] |= ((var_7 ^ (arr_47 [i_1] [i_1 - 4] [i_1])));
        }
        var_28 = var_5;

        for (int i_16 = 0; i_16 < 21;i_16 += 1)
        {
            var_29 *= var_2;
            var_30 = (arr_56 [6] [6] [i_1 - 4]);
        }
        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {
            /* LoopNest 3 */
            for (int i_18 = 3; i_18 < 20;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 21;i_19 += 1)
                {
                    for (int i_20 = 3; i_20 < 20;i_20 += 1)
                    {
                        {
                            var_31 = (~var_1);
                            arr_78 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_18] [i_1] [16] = (((arr_76 [i_20 - 3] [i_20 - 3] [i_20 + 1] [i_20] [i_20]) ? (arr_16 [i_20 - 3] [i_18] [i_20 + 1] [i_20] [i_20 - 2] [i_20 + 1]) : (arr_16 [i_20 - 3] [i_18] [i_20 + 1] [i_20 + 1] [i_20] [i_20 + 1])));
                        }
                    }
                }
            }
            arr_79 [i_1] [i_1 + 1] = (((arr_73 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2]) | (arr_73 [i_1] [i_1 - 2] [i_1] [i_1 + 1])));
            var_32 = (((arr_55 [i_1] [i_1 - 4] [i_1 - 3] [i_17]) ? (arr_55 [15] [i_1 - 3] [i_1 + 1] [i_1 + 1]) : (arr_55 [i_1] [i_1 - 2] [i_1 + 1] [1])));
        }
        for (int i_21 = 0; i_21 < 21;i_21 += 1)
        {
            var_33 = (arr_42 [i_1] [i_1] [i_1] [i_21]);
            arr_84 [i_21] [i_1] = ((var_4 ? var_4 : (arr_11 [16] [i_1 - 1] [i_1 - 2])));
            var_34 = (((arr_69 [i_1] [i_1 + 1]) ? (arr_7 [i_1 + 1] [i_21]) : var_5));
            var_35 = var_0;
        }
    }
    for (int i_22 = 2; i_22 < 13;i_22 += 1)
    {
        arr_88 [i_22] |= (min((((var_7 ? (arr_65 [i_22] [i_22 + 1]) : (arr_65 [i_22] [i_22 + 1])))), (arr_38 [i_22 + 3] [15])));
        var_36 = (max((((var_6 - var_6) & (arr_16 [i_22] [i_22] [i_22 + 1] [i_22 - 2] [i_22] [i_22]))), var_10));
    }
    var_37 = (min(var_37, var_2));
    #pragma endscop
}
