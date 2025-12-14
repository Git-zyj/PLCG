/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((((var_3 || 9223372036854775807) == 0))), (((255 - var_5) ^ var_0))));
    var_12 = ((var_9 ? var_2 : (((((var_6 ? var_1 : var_7)) % var_3)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 += (((arr_2 [i_0]) != ((((max(0, (arr_0 [i_0] [i_0]))))))));

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            arr_11 [i_0] [1] [1] [1] [i_3 + 1] [i_4] = (((max((arr_1 [i_3 - 1]), var_5)) == ((((arr_0 [i_1 + 1] [i_3 - 2]) ? (max(10, (arr_5 [i_3] [1] [14] [i_3]))) : (var_1 ^ var_7))))));
                            var_14 = 0;
                        }
                    }
                }
                arr_12 [i_2] = ((-var_7 ? (((((arr_7 [i_0]) ? var_5 : (arr_9 [1] [16] [i_1] [i_1] [i_1] [17] [i_2]))) * var_1)) : 65535));
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_15 += ((1961635537 ? (var_10 >= var_6) : (arr_7 [i_5])));
                arr_15 [i_0] [i_1] [i_1] [i_5] = (((arr_7 [i_5]) > ((var_10 / ((~(arr_0 [i_0] [i_0])))))));

                for (int i_6 = 3; i_6 < 24;i_6 += 1)
                {
                    var_16 = (min(var_16, ((max((225 / 244), 11)))));
                    arr_18 [i_0] [5] [i_1] [i_1] [i_5] [10] |= (arr_8 [i_0] [i_0] [i_0] [i_6]);
                    arr_19 [1] [0] [i_5] [5] [0] = (max((max((arr_4 [i_6 - 3] [i_1 - 2]), (arr_4 [i_6 - 3] [i_1 - 2]))), ((((arr_4 [i_6 - 3] [i_1 - 2]) <= (arr_4 [i_6 - 3] [i_1 - 2]))))));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 23;i_7 += 1)
                {
                    arr_22 [i_0] [i_1 - 1] [i_1 + 2] [i_7] = ((!(arr_3 [20] [i_1 - 2])));
                    var_17 ^= (arr_14 [i_7 + 2] [i_1 + 2] [i_1 + 2]);
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_18 = -777936404;
                    arr_25 [i_0] [i_1 + 1] [i_1 + 1] [i_8] = arr_13 [3] [3] [i_8];
                    var_19 = (min(var_19, (!var_7)));
                }
                for (int i_9 = 4; i_9 < 23;i_9 += 1)
                {
                    arr_28 [i_0] [i_0] [i_1] [16] [i_0] [i_9 + 1] = (arr_27 [i_1] [i_1] [i_9 - 2] [i_9 + 2] [1]);
                    var_20 &= arr_7 [i_1];
                    arr_29 [i_0] [i_1 + 2] [i_1 + 2] [i_9 - 2] = ((((min((arr_26 [16] [i_0] [i_1 + 2] [24]), var_8))) << ((((min((arr_17 [i_1] [i_1] [i_1 + 2] [i_1 + 2]), (arr_17 [i_1] [i_1] [i_1 + 2] [i_1 + 2])))) - 115))));
                    var_21 = ((((max((arr_24 [i_5] [i_5] [i_1] [i_0]), (arr_24 [i_0] [i_0] [i_0] [i_0])))) ? (max((arr_24 [i_9] [i_5] [i_1 + 1] [i_0]), (arr_24 [i_0] [i_0] [19] [i_0]))) : ((((var_3 >= (arr_24 [i_0] [i_0] [i_0] [13])))))));
                }
            }
            var_22 = (~var_10);
            var_23 = (min(var_23, ((((((arr_27 [i_0] [i_1 - 1] [1] [i_1] [i_1]) != (arr_4 [i_1 - 1] [i_1 + 1]))) ? var_2 : (max((max((arr_0 [10] [i_1 + 2]), 22726)), (((-(arr_4 [i_1 + 2] [i_0])))))))))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_24 &= ((-(((arr_23 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 2]) + (arr_23 [i_1] [i_1] [i_1 + 1] [i_1 + 2] [i_1] [i_1 - 2])))));
                        arr_34 [i_0] &= (var_1 + var_8);
                        var_25 += -537431041;
                        var_26 = var_6;
                        var_27 += (arr_23 [i_0] [i_1 - 2] [i_10] [2] [16] [5]);
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            var_28 = (min(((250 ? 252 : (-9223372036854775807 - 1))), (var_3 * var_1)));
            arr_37 [i_12] [i_12] [i_0] = (arr_7 [i_0]);
            arr_38 [3] = (arr_24 [i_0] [i_12] [i_0] [i_12]);
        }
        var_29 = -var_6;
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        arr_41 [6] [i_13] = ((-(min((((arr_4 [i_13] [i_13]) / var_9)), var_8))));
        var_30 = (min(var_30, ((min(14443933738881886935, (arr_33 [i_13]))))));
    }
    var_31 = 0;
    /* LoopNest 2 */
    for (int i_14 = 1; i_14 < 1;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            {
                var_32 = (max(var_7, (arr_21 [i_15] [i_15] [i_14 - 1])));
                arr_48 [i_14] [i_14] [i_14] = (arr_32 [i_14] [i_15] [i_15] [2]);
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 17;i_17 += 1)
                    {
                        {
                            var_33 = (224 - 103);
                            arr_57 [i_14] [i_15] [i_15] [18] [i_17] [i_17 + 1] &= arr_14 [0] [21] [13];
                            var_34 -= ((((max(var_4, (arr_51 [i_14 - 1] [i_17 + 2] [i_17])))) ? ((((((arr_16 [13] [i_17] [i_16] [19]) + var_1)) >= var_2))) : 65535));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 20;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        {
                            var_35 = var_10;
                            arr_65 [i_14] [i_14] [i_15] [i_15] [i_18] [i_19] = (arr_26 [i_14] [i_15] [i_14 - 1] [i_14]);
                            arr_66 [i_14] [i_15] [0] [i_19] [i_19] [i_19] = ((+(((arr_55 [i_14 - 1] [i_14 - 1]) + var_7))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 20;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 20;i_21 += 1)
                    {
                        {
                            arr_74 [i_21] [i_15] [18] [i_21] [1] = ((-(max((arr_21 [i_14 - 1] [i_14] [i_14]), (arr_21 [i_14 - 1] [i_14] [i_14 - 1])))));
                            var_36 = var_5;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
