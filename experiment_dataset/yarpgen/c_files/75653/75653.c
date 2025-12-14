/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_1] = ((-(min(var_15, 8887666450220530329))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2 - 2] [i_1] [i_3] = var_11;
                                var_17 = 192;
                                var_18 = ((((((arr_15 [i_4] [i_1] [i_1] [i_0 - 1]) ^ (arr_5 [i_1] [i_1] [i_4])))) >= var_8));
                                var_19 = (((arr_5 [i_4] [i_1] [i_1]) >= (((3343732312 << (((arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 1]) - 7283886161641490830)))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_21 [i_0] [9] [9] [9] = 30;
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_28 [i_0 + 1] [i_0 + 1] [i_7] [i_0] [i_0] = (arr_3 [i_7] [i_6]);
                                var_20 = (max(var_20, -464519896));
                                arr_29 [i_7] [i_5] [i_5] [i_5] = (i_7 % 2 == 0) ? (((+((3830447399 << (((((arr_18 [i_0] [i_5] [i_6]) + (arr_11 [6] [i_5] [i_7] [i_7 + 2] [0] [6]))) - 112682105))))))) : (((+((3830447399 << (((((((arr_18 [i_0] [i_5] [i_6]) + (arr_11 [6] [i_5] [i_7] [i_7 + 2] [0] [6]))) - 112682105)) - 126)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 20;i_12 += 1)
                {
                    {
                        arr_41 [i_12] [10] [i_11] [i_12] [i_11] [i_9] = (arr_30 [23]);
                        arr_42 [i_9] [i_9] [i_12 - 1] = (((arr_39 [17] [i_10] [i_11] [i_12 + 1] [i_10] [i_11]) & (arr_39 [i_9] [i_10] [i_11] [i_12 + 2] [i_10] [i_10])));
                        arr_43 [i_9] = (arr_33 [i_12 + 1] [i_9]);
                        var_21 = (((arr_32 [i_9] [i_9]) ? (arr_32 [i_9] [i_9]) : (arr_32 [i_9] [i_9])));
                        arr_44 [i_9] [i_10] [i_11] [i_9] = ((-(arr_30 [i_10])));
                    }
                }
            }
        }

        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            arr_48 [i_9] = 5661567173188366376;
            /* LoopNest 2 */
            for (int i_14 = 3; i_14 < 22;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    {
                        var_22 = (((arr_39 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) ? (arr_39 [i_9] [i_13] [i_13] [i_14 - 2] [i_14 - 2] [i_15]) : (arr_39 [i_9] [i_15] [i_14] [i_15] [i_14] [i_9])));
                        arr_56 [i_9] [i_9] = ((!(arr_49 [i_9] [i_14 + 1] [i_9])));
                        var_23 &= 8962725146189134998;
                        var_24 = (max(var_24, (((((arr_34 [i_14 + 1]) ? (arr_31 [i_9] [i_9]) : -4008))))));
                    }
                }
            }
            arr_57 [i_9] [i_13] = ((32767 || (arr_49 [i_9] [i_13] [i_13])));
            /* LoopNest 2 */
            for (int i_16 = 3; i_16 < 22;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    {
                        var_25 = (arr_61 [i_17] [i_9] [14] [i_17]);
                        arr_62 [i_9] [i_9] [i_13] [0] [i_9] = (arr_60 [i_9] [i_9] [i_16] [i_17] [i_17]);
                    }
                }
            }
            var_26 = var_6;
        }
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            arr_66 [i_9] [i_9] [i_18] = (2023110678 & 79);
            var_27 -= -118;
        }
        for (int i_19 = 1; i_19 < 23;i_19 += 1)
        {
            var_28 = (((-(arr_52 [i_9] [i_9] [i_19 + 1]))));
            arr_69 [i_9] = (((arr_63 [0] [i_19] [i_19 + 1]) ? (arr_64 [i_9]) : 32767));
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 24;i_20 += 1)
            {
                for (int i_21 = 2; i_21 < 22;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 24;i_22 += 1)
                    {
                        {
                            arr_76 [i_9] [8] [i_20] [i_19] [i_9] = -var_7;
                            var_29 = (min(var_29, ((((arr_32 [10] [1]) == -11795)))));
                        }
                    }
                }
            }
        }
        var_30 *= 21;
    }
    var_31 = var_11;
    #pragma endscop
}
