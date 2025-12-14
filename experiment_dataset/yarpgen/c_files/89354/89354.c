/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = ((-(min(0, (min((arr_0 [i_0]), 956932833))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_16 *= 3338034484;
                            arr_11 [1] [14] = (~-var_4);
                        }
                    }
                }
            }
        }
    }
    var_17 = (((max(var_13, ((min(var_14, var_2)))))));
    var_18 = (+((2897696319 ? (var_6 % var_7) : 956932819)));

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_16 [i_4] = ((~((max(44, var_7)))));
        arr_17 [i_4] = (min(-1, -3481042838982971665));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_19 = ((max(((((arr_0 [i_5]) + var_10))), ((var_12 ? (arr_15 [i_5]) : 3051733295)))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_33 [i_8] = ((!((min(((-(arr_30 [i_5] [4] [1] [9] [i_8] [i_9] [i_9]))), ((max(12531, 44))))))));
                                arr_34 [8] = (min(1, -7565220920107831508));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 9;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_39 [i_11] = (arr_27 [i_5]);
                                arr_40 [8] [i_10 + 1] [i_7] [i_6] = ((var_1 ? (!7019720841791251990) : 1693062367));
                                var_20 = ((((min((((arr_35 [5] [7] [7] [i_5]) ? 65535 : 0)), ((-(arr_19 [i_10])))))) * (((arr_9 [11] [i_6] [i_7] [i_10 - 4] [i_11]) ? (arr_30 [11] [11] [i_7] [i_10 - 4] [10] [10] [i_7]) : (arr_36 [i_5] [i_5] [i_6] [i_10 - 4] [6] [i_6])))));
                            }
                        }
                    }
                    arr_41 [i_5] [i_5] = (~-101);
                    var_21 |= (max((((!(arr_22 [i_7] [8])))), (arr_36 [i_5] [2] [i_6] [i_6] [i_7] [i_7])));
                }
            }
        }
        var_22 = (max(((-3481042838982971678 - (((-(arr_21 [i_5] [11])))))), (((1 * ((-14 ? 28 : 66)))))));
        var_23 = (max(var_10, (arr_31 [i_5] [i_5] [i_5] [i_5] [i_5])));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
    {
        arr_44 [i_12] = (((arr_7 [i_12] [i_12] [i_12]) != (arr_38 [i_12] [i_12] [i_12] [i_12] [i_12])));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 9;i_14 += 1)
            {
                {
                    var_24 ^= ((!((1 && (arr_22 [8] [8])))));
                    arr_51 [i_12] [1] &= var_6;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 1; i_15 < 1;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 11;i_16 += 1)
        {
            {
                arr_56 [i_15] [11] [i_15] = (!var_5);
                /* LoopNest 2 */
                for (int i_17 = 3; i_17 < 12;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 13;i_18 += 1)
                    {
                        {
                            var_25 = (min((min(173, ((~(arr_5 [6] [i_17] [i_18]))))), (((30 ^ (-106 & var_7))))));
                            var_26 = 30;

                            for (int i_19 = 0; i_19 < 1;i_19 += 1)
                            {
                                var_27 = ((((((((min(25884, var_12)))) ^ (max(23257, (arr_15 [i_15])))))) ? ((~(arr_0 [i_15 - 1]))) : (((!(arr_57 [i_17 + 2] [0] [i_19]))))));
                                arr_64 [i_16] [i_17] [i_19] = ((((arr_13 [i_18 + 2] [i_18 + 2]) < var_9)));
                            }
                            for (int i_20 = 3; i_20 < 11;i_20 += 1)
                            {
                                arr_69 [i_15 - 1] [1] [i_17] [2] [10] = (min((~2667180179713103036), (~-19663)));
                                var_28 = (min((arr_3 [5] [i_16] [i_16]), 1276496604));
                            }
                            for (int i_21 = 0; i_21 < 1;i_21 += 1)
                            {
                                arr_73 [12] [12] [i_16] [2] = var_5;
                                var_29 ^= (max((max((((5 ? var_0 : (arr_58 [i_15] [i_16] [12] [i_18])))), var_11)), (((14 ? var_7 : (arr_4 [i_15 - 1] [i_16 - 1] [i_17 + 3]))))));
                            }
                            var_30 = -var_0;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
