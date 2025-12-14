/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_5 % (max((var_15 + var_15), ((var_2 ? var_10 : var_13))))));
    var_17 = (((var_15 * var_6) ? ((((var_3 + 2147483647) >> (var_14 - 185)))) : ((var_8 + ((var_15 ? var_5 : var_12))))));
    var_18 ^= -var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_19 += (((arr_3 [i_3] [i_1] [i_0]) / (arr_5 [i_0] [i_1] [i_2] [i_0])));
                        arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_0] [i_0] [i_3]);
                    }
                }
            }
        }
        var_20 = var_1;

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_21 = ((((var_3 ? var_15 : var_10))) ? var_4 : var_12);
            var_22 = ((((arr_10 [i_0] [i_4] [i_4]) << (var_5 - 1996409096))));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_15 [i_0] [i_0] = -var_15;
            var_23 += (((var_4 || var_9) < (var_5 / var_9)));
        }
        var_24 = (min(var_24, (((var_13 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : var_12)))));
    }

    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_25 -= var_6;
        var_26 = (((((var_5 ? var_15 : (arr_19 [i_6] [i_6])))) * (((((var_7 ? var_14 : var_13)) / var_14)))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {
                    arr_26 [i_6] [i_7] [i_6] [i_6] = (((((min(var_13, (arr_5 [i_6] [i_6] [i_6] [i_6]))))) != ((((arr_9 [i_8]) || ((var_7 || (arr_20 [i_7]))))))));
                    arr_27 [i_6] [i_7] = (arr_17 [i_8]);
                }
            }
        }
        var_27 = (arr_10 [i_6] [i_6] [i_6]);
        var_28 *= ((min(var_1, ((var_1 ? var_11 : (arr_4 [i_6] [i_6] [i_6]))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        arr_31 [i_9] [i_9] = (arr_30 [i_9]);

        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_29 = ((-(((arr_29 [i_11]) ? var_7 : var_11))));

                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            var_30 = var_13;
                            var_31 *= (((((~(arr_38 [i_9] [i_9] [i_9] [i_9])))) ? (var_11 && var_10) : (arr_35 [i_10] [i_11] [i_13])));
                        }
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            var_32 *= ((var_13 + (arr_45 [i_9] [i_9])));
                            var_33 = ((var_14 ? var_0 : (arr_39 [i_9] [i_11] [i_11] [i_12] [i_14])));
                        }
                    }
                }
            }
            var_34 = var_10;
        }

        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            arr_49 [i_9] [i_15] |= var_8;

            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                var_35 = (((arr_29 [i_9]) || ((((arr_41 [i_9] [i_9] [i_16]) ? var_6 : (arr_51 [i_9] [i_9] [i_9] [i_9]))))));
                var_36 = (max(var_36, ((((arr_29 [i_9]) % (((arr_29 [i_16]) ? var_2 : var_8)))))));
                arr_52 [i_9] [i_9] = -var_1;
                var_37 = (min(var_37, var_1));
                var_38 = ((((arr_42 [i_9] [i_16] [i_9] [i_9] [i_15] [i_9] [i_16]) ? (arr_29 [i_9]) : var_4)) * ((var_14 * (arr_48 [i_9] [i_16]))));
            }
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    {

                        for (int i_19 = 0; i_19 < 25;i_19 += 1)
                        {
                            var_39 *= var_2;
                            arr_61 [i_18] = (arr_53 [i_9] [i_15] [i_17] [i_9]);
                            var_40 = (arr_50 [i_9] [i_9]);
                        }
                        for (int i_20 = 0; i_20 < 1;i_20 += 1)
                        {
                            arr_64 [i_9] [i_9] [i_17] [i_9] [i_20] [i_18] [i_9] = (var_6 + var_2);
                            var_41 = (arr_28 [i_15]);
                            var_42 = -var_3;
                            var_43 = ((var_8 / (arr_51 [i_20] [i_18] [i_17] [i_9])));
                        }

                        for (int i_21 = 0; i_21 < 25;i_21 += 1)
                        {
                            var_44 = ((var_6 || (arr_30 [i_15])));
                            var_45 = var_4;
                            var_46 *= var_13;
                        }
                        for (int i_22 = 0; i_22 < 25;i_22 += 1)
                        {
                            var_47 = var_6;
                            var_48 = ((var_11 ? (arr_42 [i_9] [i_18] [i_15] [i_9] [i_9] [i_22] [i_9]) : (~var_8)));
                            var_49 *= ((var_13 / (arr_57 [i_9])));
                        }
                    }
                }
            }
            var_50 = ((var_4 ? (var_8 - var_11) : (arr_53 [i_15] [i_15] [i_9] [i_9])));
        }
    }
    #pragma endscop
}
