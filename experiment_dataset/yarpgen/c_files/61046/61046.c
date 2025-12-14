/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_4 | var_3) - ((-26819 ? var_3 : var_9)))) << (((((((var_7 ? var_2 : -21726))) ? ((min(var_6, var_10))) : (var_13 % var_9))) - 2450))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = (min((min(var_2, ((1 ? (arr_5 [i_0] [i_0] [7]) : (arr_6 [i_1] [i_2]))))), (((var_13 & var_5) ? (var_8 ^ var_10) : ((min(var_1, var_4)))))));
                    arr_8 [i_0] [i_2] &= var_6;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            var_16 ^= (((9657776574739341865 & (arr_11 [i_0] [i_1 - 1] [i_1] [i_2] [i_3] [i_1 - 1]))));
                            var_17 = (max(var_17, 17850048502471531317));
                        }
                        var_18 = (min(((((((var_8 ? var_10 : var_10))) && var_0))), (min(var_9, (min((arr_3 [i_1] [i_1]), var_6))))));

                        for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            arr_19 [12] [i_1] [i_2] [i_5] [i_5] [i_5] [i_5] = min((arr_5 [i_1] [7] [i_5]), (!var_6));
                            var_19 *= (~var_11);
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [15] [i_3] [i_6] [15] [i_1] = (((arr_20 [i_1] [i_1] [i_1] [i_1] [i_6 - 2]) ? (arr_20 [i_0] [i_1] [20] [i_1] [i_6 + 1]) : 18413474895608190592));
                            arr_24 [i_0] [15] [i_1] [i_3] = var_9;
                            var_20 |= ((250 ? -25012 : 16022497662610785920));
                        }
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_2] [i_1 + 1] [i_1] [i_1] [i_1 + 2] [i_1 - 1] |= (arr_12 [i_0] [i_0] [i_0] [20] [i_0] [i_0]);
                        arr_28 [i_1] [i_1] = (~-var_11);
                        var_21 = var_11;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_1 + 2] [19] [i_1] [i_1 + 1] [i_1] = 19;
                        var_22 = var_9;
                        arr_32 [i_1] [i_1] [i_8] [i_1] [i_8] = (-64 & -60);
                        arr_33 [i_0] [i_1] [i_1] [1] [1] = ((~(((((arr_3 [i_1] [i_1]) ^ (arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_0])))))));
                    }
                    var_23 = (min((min((((232 != (arr_0 [i_0])))), -25324)), (((((2113929216 <= (arr_22 [i_0] [i_0] [i_1] [i_2] [i_2] [i_1]))) && (((var_2 ? var_4 : var_11))))))));
                    var_24 &= min((min(var_12, (arr_17 [i_1] [i_1] [i_1] [i_0]))), (arr_5 [i_0] [i_1] [i_2]));
                }
            }
        }
    }
    var_25 = 370094534532478268;

    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                arr_42 [i_9] [i_10] [i_11] [i_9] = ((~(arr_36 [i_9] [i_9])));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_26 = (min(var_26, (((!(arr_14 [i_9] [i_9] [i_9] [i_9] [6] [i_9] [i_9]))))));
                            arr_48 [i_9] [i_9] [i_9] [i_9] [13] = (arr_14 [i_9] [i_10] [i_10] [7] [i_12] [13] [i_13]);
                            var_27 = ((arr_30 [i_13] [i_13] [i_9] [i_13]) ^ var_2);
                        }
                    }
                }
                var_28 *= ((((((arr_39 [i_9]) - var_13))) ? (((var_2 ? 1 : var_8))) : (((arr_21 [17] [i_11] [i_11] [i_11] [i_11]) ? 18446744073709551608 : (arr_29 [i_9] [i_11] [1] [i_11] [1] [i_11])))));
            }
            for (int i_14 = 1; i_14 < 16;i_14 += 1)
            {
                arr_51 [i_10] [i_10] [i_14] [i_9] = (255 ? 11023474524475507306 : (arr_7 [i_9] [i_9] [i_9]));
                var_29 = ((6537 ? (~-6145) : (var_10 & 13)));
                var_30 = (min(var_30, (((8521215115264 ? var_11 : (arr_39 [i_10]))))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        {
                            var_31 ^= ((18306 ? (arr_2 [i_9] [i_14 - 1]) : var_2));
                            arr_57 [i_9] [i_9] [i_9] [i_14] [i_15] [i_16] [i_16] = ((var_7 ? ((var_5 ? (arr_2 [i_9] [i_14]) : var_2)) : ((~(arr_12 [i_10] [i_10] [i_10] [i_10] [i_10] [4])))));
                            arr_58 [i_9] [i_9] [i_9] [i_9] [6] [6] [i_9] = ((var_12 >= (arr_43 [i_14 + 2] [i_14] [i_14] [i_14 + 1])));
                        }
                    }
                }
            }
            for (int i_17 = 0; i_17 < 18;i_17 += 1)
            {
                arr_62 [i_9] [i_9] = var_4;
                var_32 = ((((var_3 > (arr_1 [i_9] [i_9]))) ? 24989 : (arr_3 [i_9] [i_9])));
            }
            for (int i_18 = 0; i_18 < 18;i_18 += 1)
            {

                for (int i_19 = 1; i_19 < 17;i_19 += 1)
                {
                    var_33 += (((((arr_22 [i_9] [i_9] [i_9] [6] [i_18] [i_19]) && (arr_38 [i_10] [i_18]))) || var_11));
                    var_34 = (max(var_34, ((var_5 ? var_9 : (((arr_3 [18] [i_18]) ? (arr_59 [i_9] [2]) : var_11))))));
                    var_35 = (arr_55 [i_9] [9] [i_18] [i_19] [i_19] [i_19 + 1] [i_19 + 1]);
                    var_36 += (((arr_54 [i_9] [i_19 - 1] [i_19] [i_19 + 1] [i_19] [i_19] [i_19 + 1]) ? 25223 : (((var_0 && (arr_40 [i_19] [2] [i_9]))))));
                }
                arr_69 [i_9] [i_10] [i_10] [i_10] = (arr_11 [i_9] [i_10] [i_18] [i_18] [i_18] [i_18]);
                arr_70 [i_9] = var_0;
            }
            arr_71 [6] [0] [0] |= (1122290258076336488 & 25639);
            var_37 = (~4611686018158952448);
            arr_72 [i_9] [i_9] [i_10] = (arr_10 [i_9] [i_10]);
            var_38 = 1;
        }
        var_39 = (max(var_39, (((26821 ? var_9 : var_8)))));
        arr_73 [i_9] [i_9] = ((var_11 && (arr_61 [i_9])));
    }
    for (int i_20 = 0; i_20 < 21;i_20 += 1)
    {
        var_40 = (~var_5);
        arr_78 [i_20] = var_1;
    }
    #pragma endscop
}
