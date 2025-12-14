/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_19 ^= var_6;
            arr_5 [i_0] [i_0] |= var_17;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        var_20 &= (!var_17);
                        arr_12 [10] [10] [i_1] [i_3 - 2] = ((((0 ? 1 : (-127 - 1))) / (arr_4 [i_0] [i_0] [i_1])));
                    }
                }
            }
        }
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_21 = var_6;
                            var_22 = var_6;
                            arr_24 [9] [9] [6] [i_5] [i_6] [i_6] [i_7] = ((-(arr_15 [i_5 - 1] [i_5] [i_5 - 1])));
                            var_23 = ((1 ? (arr_15 [i_0] [i_4 - 2] [i_4 - 3]) : (arr_16 [i_0] [i_4 - 2] [i_4 - 1])));
                            var_24 *= (((((19013 ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_21 [i_0] [4] [i_5] [i_6 + 2])))) ? (((arr_17 [i_0] [11] [i_0] [i_0]) * var_8)) : 1));
                        }
                    }
                }
            }
            var_25 *= ((var_6 ? (((arr_20 [i_0] [i_0] [i_0] [i_0]) + (arr_2 [i_0] [i_4]))) : var_7));
            arr_25 [i_0] [i_0] [2] = ((~(arr_11 [i_0] [i_0] [i_4 - 2] [i_4 + 1])));
            var_26 -= var_11;
            var_27 = (~96);
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_36 [4] [i_8] [i_9] [i_11] [7] [i_8] = var_6;
                            arr_37 [i_0] [10] [9] [i_9] [i_10] [i_11] = (~3922872335);
                            var_28 = (min(var_28, (((var_8 ^ (arr_20 [i_10 + 1] [i_10 - 1] [i_10] [i_10 + 1]))))));
                        }
                    }
                }
            }
            var_29 = (min(var_29, ((((arr_0 [12] [0]) | (arr_17 [3] [i_0] [i_0] [i_8]))))));
        }
        for (int i_12 = 1; i_12 < 12;i_12 += 1)
        {

            for (int i_13 = 1; i_13 < 12;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        {
                            var_30 *= 3;
                            arr_49 [i_0] [i_15] = (((var_3 & 61665) ? (!var_4) : (-296621061 != 2816047323)));
                            var_31 = var_18;
                            var_32 = (max(var_32, ((((arr_33 [0] [8] [0] [i_13] [0] [9]) + (((arr_29 [i_14] [i_14]) % var_3)))))));
                        }
                    }
                }
                var_33 = ((!(((var_9 ? (arr_18 [i_12] [12]) : 0)))));
                arr_50 [i_13] [i_0] [i_0] = var_11;
            }
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                arr_53 [i_0] [i_12] [i_12] = (((arr_28 [i_12 - 1] [i_12]) > (arr_48 [i_12 - 1] [i_12] [i_12] [i_12 + 1] [i_12])));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_34 = (max(var_34, 20695));
                            arr_59 [i_17] [1] [6] [8] [1] = (((arr_15 [i_12 + 1] [i_12 - 1] [i_18 - 1]) ? (arr_15 [i_12 + 1] [10] [i_18 - 1]) : var_12));
                        }
                    }
                }
            }

            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 1;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        {
                            arr_69 [i_0] [i_20] [i_20] [i_20] [i_20] = (arr_28 [9] [9]);
                            var_35 *= ((var_10 & (arr_58 [8] [i_21] [2] [i_20] [i_20 - 1] [i_21])));
                        }
                    }
                }
                var_36 -= -var_0;
                var_37 |= ((var_6 ? 5140 : (arr_14 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    for (int i_23 = 4; i_23 < 12;i_23 += 1)
                    {
                        {
                            var_38 *= var_2;
                            arr_77 [i_0] [8] [i_0] [i_0] [11] = (2147483621 - 32767);
                            var_39 *= ((var_6 << (((arr_22 [i_12 - 1] [i_12 + 1] [i_12] [1] [i_12 + 1] [i_0] [6]) + 1480126215))));
                        }
                    }
                }
            }
            for (int i_24 = 0; i_24 < 13;i_24 += 1)
            {
                var_40 = (-((-(arr_68 [2] [i_12] [10] [i_0]))));
                var_41 -= (((arr_14 [i_12 + 1] [i_12 - 1]) & (arr_46 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 - 1])));
                arr_80 [9] [9] [9] [9] = (arr_60 [i_12] [i_12 + 1] [i_12] [i_12]);
                var_42 = var_9;
                var_43 = var_8;
            }
        }
        var_44 = (max(var_44, (-var_3 > var_17)));
    }
    var_45 += var_5;
    /* LoopNest 2 */
    for (int i_25 = 0; i_25 < 16;i_25 += 1)
    {
        for (int i_26 = 0; i_26 < 16;i_26 += 1)
        {
            {
                var_46 = (max(var_46, ((((((arr_82 [i_26]) ? (arr_82 [i_25]) : (arr_81 [i_25] [i_26]))) == (((arr_82 [i_26]) | 2147483647)))))));
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 16;i_27 += 1)
                {
                    for (int i_28 = 3; i_28 < 15;i_28 += 1)
                    {
                        {
                            var_47 = (min(0, 10273));
                            arr_92 [i_25] = 1;
                            var_48 = 34836;
                            var_49 |= (min((((arr_90 [i_28 + 1] [i_28 - 1] [i_28 - 2] [15] [i_28 + 1]) | 26136)), -1364267252));
                        }
                    }
                }
                arr_93 [1] [i_25] = var_2;
                arr_94 [i_26] [i_25] = ((((((!(((var_12 ? (arr_86 [10] [10]) : 130))))))) - (min(440878030, 2517437036))));
            }
        }
    }
    #pragma endscop
}
