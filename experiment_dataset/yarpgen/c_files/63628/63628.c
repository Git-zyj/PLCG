/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_11));
    var_18 = ((var_11 < (2147483647 / var_2)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = ((((arr_1 [i_0]) / (arr_1 [i_0]))));
        var_20 = (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] = ((+(((((var_9 ? (arr_2 [i_1]) : (arr_2 [i_1]))) > (((~(arr_4 [i_1] [i_1])))))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_21 = ((~(arr_6 [i_1 + 2])));
                            arr_17 [i_1] [i_2] [i_3] [4] [i_5] = (((arr_6 [i_1 - 1]) & (arr_6 [i_1 + 1])));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            var_22 = ((var_14 ? var_4 : var_6));
                            arr_20 [i_1] [i_2] [i_3] [i_4] [i_6] = (arr_8 [i_3]);
                            arr_21 [i_1 + 2] [i_3] = (arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                            var_23 = (min(var_23, (((!(arr_12 [i_1] [i_4] [i_6]))))));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_1 + 1] [i_2] [i_3] [i_4] [i_7] = (arr_8 [i_1 - 1]);
                            var_24 = (max(var_24, (((-(arr_19 [6] [i_2] [i_3] [i_4] [i_1 + 1]))))));
                            var_25 = var_7;
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            var_26 = (((arr_11 [i_8] [i_4] [i_3] [i_2] [i_1]) / (arr_11 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1])));
                            arr_31 [i_1 + 1] [i_1 + 1] [i_2] [i_4] = -var_11;
                            var_27 = (var_2 % var_5);
                        }
                        arr_32 [i_1 + 2] [i_2] [18] [i_1 + 2] [9] = (arr_16 [i_4]);
                        var_28 &= ((~(arr_4 [1] [i_1 + 1])));
                    }
                }
            }
            var_29 &= (var_1 || var_16);
            arr_33 [8] = (arr_9 [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1]);
        }
        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            arr_37 [i_9] = (((arr_7 [i_9 - 1]) & ((-(arr_7 [i_9 - 1])))));
            var_30 = (min(var_30, ((((arr_35 [i_9 - 1] [i_9 - 1]) == (arr_6 [i_1 + 1]))))));
            var_31 = (max(var_31, var_16));
            arr_38 [i_1 + 2] [i_9] [i_9] = (max((arr_23 [i_1 + 1] [i_9 + 2] [i_9 - 1] [i_9]), (arr_23 [i_1 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 2])));
        }
        arr_39 [i_1] = (((((var_7 < (arr_35 [i_1] [i_1 + 2]))) && var_16)) ? (max((min(var_1, (arr_15 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1]))), (arr_3 [i_1 + 2]))) : (((arr_3 [i_1 + 1]) * (arr_3 [i_1 + 1]))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        var_32 = (min(var_32, (arr_34 [1] [1])));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                {
                    var_33 &= (arr_8 [i_10]);

                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        arr_51 [i_10] = (((arr_4 [i_10] [4]) ? (arr_15 [i_10] [i_12] [i_12] [i_13] [i_13] [i_11]) : var_6));
                        var_34 = (min(var_34, (arr_14 [i_10] [16] [i_11] [i_11] [i_13] [i_13])));
                        var_35 |= (arr_11 [i_11] [i_13] [i_11] [i_11] [i_10]);
                        var_36 = (min(var_36, (((~(~1))))));
                        arr_52 [i_10] = ((arr_12 [i_10] [i_12] [i_13]) + (arr_30 [i_10] [i_10] [i_12] [i_13] [17] [i_10]));
                    }
                    var_37 = (((arr_30 [i_12] [i_12] [i_11] [i_10] [i_10] [i_10]) ^ (arr_30 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
                }
            }
        }
        var_38 *= (arr_11 [i_10] [i_10] [i_10] [i_10] [i_10]);
        var_39 = ((-((var_13 / (arr_46 [i_10])))));
    }
    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        arr_56 [i_14] [11] = (~var_8);
        var_40 = (((arr_47 [i_14] [i_14]) - var_14));
        var_41 = (((arr_15 [i_14] [i_14] [i_14] [i_14] [9] [i_14]) > var_10));
        var_42 ^= ((((max((arr_18 [i_14] [i_14] [i_14] [i_14] [i_14]), (arr_16 [i_14])))) ? (((((arr_18 [i_14] [i_14] [i_14] [i_14] [15]) || (arr_18 [i_14] [i_14] [i_14] [7] [i_14]))))) : ((~(arr_16 [i_14])))));
        var_43 = (arr_22 [i_14] [i_14] [i_14] [i_14] [i_14]);
    }
    var_44 |= var_0;
    var_45 = (min(var_45, ((var_13 & (((var_10 - (~var_2))))))));
    #pragma endscop
}
