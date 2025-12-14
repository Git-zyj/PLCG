/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (33554431 != -10);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_13 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_0));
        var_14 ^= (((((var_10 ? (arr_1 [i_0]) : var_7))) && (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (!8);
        var_15 = (var_0 | 10);
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_16 = -10;
        var_17 = (min((min((min(-10, var_2)), (((!(arr_7 [i_2] [5])))))), (arr_7 [i_2 + 2] [i_2 + 1])));
        arr_8 [i_2] [i_2] = (arr_6 [i_2]);
        var_18 = (~(((((-(arr_6 [i_2 + 2])))) ? (arr_6 [i_2]) : (arr_6 [i_2]))));

        /* vectorizable */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            var_19 = (max(var_19, (~4131812722)));

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_20 = var_2;
                arr_15 [i_4] [i_2] [i_2] [i_2] = ((var_8 * (var_1 == 33554416)));
                var_21 = (((arr_14 [0] [13] [9]) ? 8 : var_0));
            }
            var_22 = 255;

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_23 = var_7;
                arr_18 [i_5] [i_2] [i_2] [i_2] = ((21237 ? 65535 : -15));
                var_24 = var_1;
                var_25 &= ((var_10 + (1 - var_1)));
                var_26 = (min(var_26, (((var_11 ? ((-33554416 ? 1 : var_9)) : var_1)))));
            }
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                var_27 += (((arr_14 [i_2 + 2] [i_2 + 2] [i_3 + 1]) ? -21 : var_2));
                arr_21 [i_2] [i_6] = ((((-15 || (arr_7 [i_3] [i_6]))) ? (var_3 != 469762048) : (((arr_10 [i_3]) / var_0))));
                var_28 -= (((((!(arr_13 [i_2 + 2] [i_2 + 2] [i_2] [i_2])))) | ((-(arr_6 [i_2])))));
                var_29 = (!var_6);
                var_30 = var_4;
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_31 = 5728175153282296659;

                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    var_32 = (~2652387976119937950);

                    for (int i_9 = 4; i_9 < 17;i_9 += 1)
                    {
                        var_33 = (max(var_33, (((var_2 ? -33554416 : 14391)))));
                        var_34 = (((arr_10 [i_8 + 1]) ? (arr_16 [i_2 - 2] [i_8 + 1] [i_2]) : var_6));
                        arr_31 [i_2] [i_3] [i_3] [i_7] [4] [i_9 - 2] [i_9] = ((-33554416 % (~var_9)));
                        arr_32 [i_2] [11] [i_7] [i_8] [i_9 - 4] = var_9;
                    }
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                {
                    var_35 = (arr_14 [i_3 + 2] [i_3 - 1] [0]);
                    var_36 |= (arr_12 [i_3] [i_7] [i_3]);
                }
                for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                {
                    var_37 = (arr_11 [i_2]);

                    for (int i_12 = 1; i_12 < 20;i_12 += 1) /* same iter space */
                    {
                        var_38 = (arr_25 [i_7] [15] [i_7]);
                        arr_39 [i_2] [i_3] [20] |= (arr_19 [i_2 + 1]);
                    }
                    for (int i_13 = 1; i_13 < 20;i_13 += 1) /* same iter space */
                    {
                        var_39 = var_3;
                        var_40 = (max(var_40, (((-147783132 ? 5728175153282296659 : (arr_25 [i_7] [i_7] [i_7]))))));
                        arr_42 [i_3] &= ((+((var_4 ? (arr_37 [20] [i_3] [4] [i_11] [i_13 - 1]) : (arr_29 [i_2] [i_3 + 2] [i_7] [i_11] [i_3] [i_13])))));
                    }
                    var_41 = ((var_11 ? ((~(arr_37 [i_2] [i_2] [1] [i_7] [i_2]))) : var_11));
                }
                for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
                {
                    var_42 = 255;
                    arr_45 [i_2] [i_3 + 2] [i_2] = ((((((arr_28 [i_2] [i_2] [i_7] [i_14] [8] [i_2] [2]) ? 22444 : var_2))) ? var_1 : (arr_10 [i_3 - 1])));
                    var_43 = (-117 >= -var_9);
                }
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {

                for (int i_16 = 2; i_16 < 17;i_16 += 1) /* same iter space */
                {
                    var_44 = (((arr_23 [i_15] [i_3] [i_15] [i_16 - 1]) ? var_4 : var_9));

                    for (int i_17 = 3; i_17 < 18;i_17 += 1)
                    {
                        var_45 = -var_1;
                        var_46 -= (((((arr_34 [6] [i_3] [i_16]) ? 126 : (arr_12 [i_3] [0] [i_3]))) | var_3));
                        arr_56 [i_2] [i_3] [i_2] [i_16 + 3] [4] = 21500;
                        var_47 = ((-11 ? var_11 : -var_1));
                        var_48 = ((4032 ? (arr_20 [i_2]) : var_9));
                    }

                    for (int i_18 = 2; i_18 < 18;i_18 += 1)
                    {
                        var_49 = var_5;
                        var_50 = (arr_6 [i_18]);
                    }
                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        var_51 = (var_2 | var_6);
                        var_52 = ((((-10 ? var_0 : var_9)) < ((-14390 ? (arr_41 [i_2] [i_16 + 4] [i_2]) : var_1))));
                    }
                    for (int i_20 = 0; i_20 < 21;i_20 += 1)
                    {
                        var_53 *= (arr_61 [i_20] [i_3 + 1] [i_2 + 1] [i_16] [i_16]);
                        var_54 = (arr_63 [i_2 + 2] [i_16 + 3]);
                    }
                }
                for (int i_21 = 2; i_21 < 17;i_21 += 1) /* same iter space */
                {
                    var_55 = ((-14373 ? ((var_2 ? var_9 : 41)) : var_6));
                    var_56 += var_5;
                    var_57 = (arr_6 [i_21 - 2]);
                }
                for (int i_22 = 2; i_22 < 17;i_22 += 1) /* same iter space */
                {
                    arr_70 [i_2] [i_3] [19] [i_22] = ((var_2 ? (arr_10 [i_2 + 2]) : (arr_10 [i_2 + 2])));
                    var_58 = (((arr_49 [i_2] [i_3] [i_2] [1]) ? (0 > 14373) : ((1 ? var_6 : (arr_50 [i_22])))));
                }
                var_59 = ((38321 ? var_2 : ((-(arr_52 [i_3])))));
                var_60 = 38320;
                var_61 = ((-(var_1 - var_8)));
            }
            var_62 = ((!(arr_46 [7] [i_3] [13] [i_3 - 1])));
        }
    }
    var_63 = (max(var_63, ((max((~var_9), (max(((var_2 ? var_2 : 29387)), var_4)))))));
    #pragma endscop
}
