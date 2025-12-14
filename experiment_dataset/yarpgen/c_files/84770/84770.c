/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = 1;
        var_18 = (!1086135392);
        var_19 = 18446744073709551600;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = arr_0 [4];
        var_20 &= (arr_1 [i_1]);
        var_21 = (min(var_21, ((max(((8388607 ? 18446744073709551599 : 16)), (arr_0 [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_22 = (min(var_22, (((arr_7 [i_2]) && 16))));
        arr_9 [5] = (arr_7 [1]);

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_12 [i_2] = (arr_10 [i_2] [i_3]);
            var_23 = (((((~(arr_7 [i_2])))) ? 18446744073709551600 : ((~(arr_8 [i_2])))));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_24 |= ((((((arr_7 [i_4]) ? (arr_8 [i_4]) : (arr_11 [i_2])))) ? (((18446744073709551615 || (arr_8 [i_2])))) : (((arr_11 [i_4]) - 1))));
            arr_15 [i_2] = (((arr_7 [i_2]) ? (arr_11 [i_4]) : var_11));
            var_25 = (~1);
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_26 = ((((var_7 ? var_9 : (arr_10 [i_2] [i_2]))) >> (((arr_17 [i_5] [i_2]) - 10609054648071637923))));

            for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
            {
                var_27 = (arr_18 [i_2] [i_5] [i_5] [i_5]);
                arr_21 [i_5] [i_5] [i_5] = var_9;
                var_28 = (arr_20 [i_2] [i_5] [i_5] [i_2]);
            }
            for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
            {
                arr_26 [i_2] [i_5] [i_5] [1] = ((((!(arr_10 [15] [i_5]))) ? ((var_10 ? 13 : (arr_19 [i_5]))) : 34));
                var_29 += ((((((arr_8 [i_2]) % 127))) || ((((arr_25 [3] [i_5] [i_7]) ? (arr_17 [i_5] [i_5]) : (arr_8 [i_7]))))));
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
            {

                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    var_30 -= (-(var_0 & 268435456));
                    arr_32 [i_5] = var_8;
                    arr_33 [i_5] [i_5] [i_9] = 140;
                }
                var_31 = 18446744073709551602;
                var_32 = (arr_29 [i_2] [i_5] [i_5] [i_8]);
            }
            for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 1; i_11 < 21;i_11 += 1)
                {
                    arr_39 [i_2] &= ((1 ? (((arr_13 [i_2] [i_5] [i_10]) ? var_14 : (arr_38 [i_2] [i_2] [i_2]))) : ((((arr_28 [i_11 + 3] [i_2] [i_2]) ? (arr_19 [i_2]) : 3298312013)))));
                    arr_40 [i_5] [i_5] [i_10] [i_11] = (3298312035 != 996655278);
                    var_33 = (((-(arr_17 [i_5] [i_5]))));
                    var_34 = (((arr_29 [i_2] [i_2] [i_5] [i_11]) & (arr_29 [i_2] [i_5] [i_5] [i_2])));
                }
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    arr_44 [i_12] [i_5] [1] [i_5] [i_5] [i_2] = ((4294967286 ? (arr_41 [i_2] [i_5] [i_10] [i_5] [i_12] [i_12]) : (arr_30 [3] [i_5] [i_5] [i_10] [i_5] [4])));
                    arr_45 [i_2] [i_2] [i_2] [i_2] |= (arr_28 [i_2] [i_2] [i_10]);
                }
                var_35 = 1;
                arr_46 [i_5] [i_5] [i_10] = ((arr_16 [i_5]) ? (arr_16 [i_5]) : var_6);
                arr_47 [i_2] [i_5] [i_5] = ((187 ? (arr_13 [i_2] [i_5] [i_10]) : (~2580021622038217187)));
            }
            arr_48 [i_2] [i_5] [i_5] = ((var_15 ? (arr_18 [i_2] [i_2] [i_5] [i_5]) : (1 / 15)));
            var_36 = ((188 > ((var_11 ? (arr_20 [i_2] [i_5] [i_2] [i_2]) : 268435478))));
        }
        var_37 = ((!(((3298312013 ? (arr_7 [i_2]) : var_12)))));
        var_38 = (arr_36 [i_2] [i_2] [i_2] [i_2]);
    }
    var_39 &= var_7;
    #pragma endscop
}
