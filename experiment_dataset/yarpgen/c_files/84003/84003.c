/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_18 += var_4;
        arr_3 [i_0] &= arr_2 [i_0 - 1];
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            var_19 = (((78 + 13) ? (((arr_2 [i_3 - 1]) - var_16)) : (arr_2 [i_3 + 1])));
                            var_20 = (arr_8 [i_2] [i_1]);
                            var_21 = ((((((arr_17 [i_1] [i_1] [i_1] [i_4] [i_5]) % (arr_7 [i_1])))) / (((((arr_5 [i_1 - 1]) ? var_1 : var_2)) % (arr_14 [i_1])))));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_1] [i_2 + 1] [i_2 + 1] [i_3 + 1] [i_4] [i_6] [i_6] = (((((arr_15 [9] [i_1] [i_3 + 1] [i_4]) <= (arr_15 [i_1] [i_1] [i_1] [i_1 - 1]))) ? (((arr_15 [i_3] [i_1] [i_3 - 1] [i_3 + 1]) ? (arr_20 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]) : (((arr_13 [i_3 + 2]) ? var_6 : (arr_20 [i_1] [i_1] [i_3] [19] [i_1]))))) : (arr_0 [2] [i_4])));
                            var_22 = ((((((var_1 >= (arr_7 [i_1]))) ? (arr_8 [i_2 + 1] [i_3 + 2]) : ((var_13 ? var_8 : (arr_9 [i_1]))))) * ((((((arr_6 [1] [i_2]) || var_8)) ? (arr_9 [i_1]) : var_3)))));
                            arr_23 [i_1] = ((var_6 ? (((arr_1 [i_2 - 2]) ? (arr_1 [i_2 - 2]) : var_15)) : var_11));
                            var_23 = (((((var_13 / (arr_17 [i_1] [i_1 - 1] [i_1] [i_3 + 1] [i_4])))) / (((((var_8 ? (arr_7 [i_1]) : (arr_19 [i_1])))) ? ((var_5 ? (arr_18 [i_1]) : (arr_14 [i_6]))) : (arr_2 [i_1 - 1])))));
                        }
                        arr_24 [i_1] [i_1] [i_3] [i_1] [i_1] [i_2] = (((arr_6 [i_1] [i_1]) ? var_13 : (((arr_21 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 - 1]) ? (arr_21 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 1]) : (arr_20 [i_1 - 1] [i_4] [i_3 + 1] [i_1 - 1] [i_1 - 1])))));
                        var_24 -= ((((((arr_16 [i_2] [i_4] [i_2] [i_3 + 2]) && (((var_16 ? (arr_13 [i_1 - 1]) : var_14)))))) == (arr_20 [i_2] [i_2 + 1] [i_2] [i_2] [i_2])));
                        var_25 = (((arr_21 [i_1] [13] [i_3] [i_4]) ? (arr_11 [i_2] [i_2] [i_4]) : (arr_21 [i_2 - 2] [i_2] [i_2] [i_2])));
                    }
                }
            }
        }
        arr_25 [i_1] = (arr_7 [i_1]);

        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {

            for (int i_8 = 2; i_8 < 23;i_8 += 1)
            {
                arr_31 [i_1 - 1] [3] [i_1] = ((((((arr_18 [i_1]) ? ((var_11 ? var_0 : (arr_2 [i_1 - 1]))) : (arr_2 [i_7 - 1])))) ? (arr_0 [i_7] [i_7 - 1]) : (((arr_18 [i_1]) ? (arr_18 [i_1]) : (arr_18 [i_1])))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_26 = (arr_8 [i_7 - 1] [i_7 - 1]);
                            var_27 &= (arr_29 [i_1] [i_7 - 1] [i_8] [i_10]);
                            arr_37 [i_10] [i_1] [i_1] [1] = ((((var_1 && (arr_0 [i_10 - 1] [i_10 - 2]))) ? (arr_19 [i_10]) : (arr_21 [i_1] [i_1] [i_9] [i_10 - 2])));
                            var_28 = var_12;
                        }
                    }
                }
                arr_38 [i_1] [i_7] [i_1] [i_7] = var_8;
            }
            var_29 = var_13;
        }
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 22;i_12 += 1)
            {
                {

                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        arr_47 [i_1] [i_13] = (arr_21 [i_1 - 1] [18] [8] [16]);
                        var_30 -= ((((var_14 % (arr_11 [i_1] [i_1] [i_1 - 1])))) && (arr_11 [i_1 - 1] [i_11 + 1] [i_12 - 1]));
                        var_31 += var_0;
                        arr_48 [i_1] = (((var_13 ? var_10 : var_0)) / var_4);
                        var_32 += ((arr_17 [i_1 - 1] [i_11] [i_12] [i_11] [0]) ? (((arr_16 [i_1] [i_13] [i_12] [i_13]) ? (arr_5 [17]) : (((arr_33 [i_13] [i_13]) ? (arr_10 [i_1] [i_11] [i_1]) : (arr_34 [i_1] [18] [i_12] [24] [24]))))) : (((var_6 ? (arr_44 [i_1] [i_1] [i_1] [i_1]) : (arr_2 [i_12 - 1])))));
                    }
                    for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
                    {
                        var_33 ^= (arr_5 [20]);
                        var_34 = ((var_14 ? (arr_28 [i_1 - 1] [i_1 - 1] [i_11] [22]) : ((((((arr_29 [i_1] [7] [i_12] [i_1]) > var_2))) * var_14))));
                    }
                    for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
                    {
                        var_35 = var_1;
                        var_36 = (1644711787 * 5964130871874074726);
                    }
                    var_37 = ((var_2 ? (arr_55 [i_1 - 1] [i_11] [i_12] [13] [i_12]) : (((arr_1 [i_1 - 1]) / (((var_5 ? var_3 : (arr_6 [i_1] [i_1]))))))));
                }
            }
        }
    }
    for (int i_16 = 2; i_16 < 21;i_16 += 1)
    {
        arr_58 [i_16] = (arr_42 [i_16] [i_16 - 1] [i_16]);
        arr_59 [i_16] = (((((arr_43 [i_16] [i_16]) ? (var_5 && var_7) : (arr_32 [i_16] [i_16] [i_16] [i_16 + 3] [i_16 + 1])))) ? ((((arr_28 [5] [5] [7] [i_16]) * var_9))) : ((var_11 ? ((((var_2 == (arr_41 [i_16]))))) : ((var_4 ? (arr_44 [i_16 + 1] [i_16 + 1] [i_16] [i_16]) : var_1)))));
        var_38 = (arr_10 [i_16 - 2] [i_16 + 2] [i_16 + 3]);
        var_39 = (0 && 2650255522);
    }
    var_40 = (((var_11 ? var_15 : var_1)));
    #pragma endscop
}
