/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] &= (27113772 ? ((201 ? -12837 : 1258564340)) : 4294967280);
        var_16 -= (~-var_9);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_17 = (max(var_17, var_1));
        var_18 ^= var_0;

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_11 [i_1] = 201;
            var_19 ^= (((arr_7 [i_2]) ? (arr_10 [i_1 + 1]) : (arr_10 [i_1 + 1])));
            var_20 = (-var_1 % var_5);

            for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
            {
                var_21 = (arr_5 [i_1 + 1] [i_1]);

                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    arr_18 [i_3] [i_3] [i_3] = (((arr_13 [i_4] [i_3] [i_2]) ? (arr_13 [i_2] [i_3] [i_4]) : (arr_13 [i_1 + 1] [i_2] [i_3])));
                    var_22 -= ((-var_5 ? (arr_10 [i_1 - 1]) : var_4));

                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        var_23 = (max(var_23, ((((arr_10 [i_4]) < ((((arr_8 [i_1] [i_2]) ? -127 : (arr_9 [i_3] [i_4] [i_5])))))))));
                        var_24 = (~7419365621633137938);
                        arr_22 [i_3] = (arr_10 [i_5 - 1]);
                        var_25 = (((!var_6) ? (((var_12 ? (arr_5 [i_1 - 2] [i_1]) : var_12))) : (arr_13 [i_2] [i_3] [i_5])));
                        var_26 &= -var_4;
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_27 = var_7;
                        var_28 = (((((var_10 ? (arr_7 [i_6]) : var_15))) ? (arr_24 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1]) : var_2));
                        var_29 = -1;
                        var_30 ^= (arr_17 [i_6] [i_4] [i_3] [i_2] [i_2] [i_1 - 1]);
                    }
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    arr_27 [i_3] [i_3] = (15 ? (arr_17 [i_1 - 1] [12] [i_1 - 2] [i_1 - 1] [0] [i_1 + 1]) : (arr_26 [i_7] [i_3] [i_2] [i_1] [i_1]));
                    var_31 -= (arr_25 [1] [0] [i_1 - 2] [i_2]);
                    var_32 = ((3146 <= var_6) ? var_1 : var_6);
                }
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
            {
                var_33 = (max(var_33, 1));

                for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                {
                    var_34 = 0;
                    var_35 = (var_4 + 7353408983680016564);
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                {
                    var_36 = (min(var_36, (((6 ? 188 : 11093335090029535052)))));

                    for (int i_11 = 2; i_11 < 14;i_11 += 1)
                    {
                        var_37 = (max(var_37, (arr_9 [i_1] [10] [i_8])));
                        var_38 ^= -2768252137107319451;
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_39 ^= (~var_8);
                        var_40 &= 15;
                    }
                    for (int i_13 = 2; i_13 < 12;i_13 += 1)
                    {
                        var_41 ^= (((arr_23 [i_13 + 2] [i_1] [i_8] [i_1] [i_1]) && var_6));
                        var_42 ^= ((4294967281 ? (arr_34 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_8] [1] [i_13 - 1]) : var_3));
                        arr_47 [6] [6] [i_8] [i_8] = -12812;
                    }
                    for (int i_14 = 1; i_14 < 13;i_14 += 1)
                    {
                        arr_51 [i_1] [i_2] [7] [i_10] [i_10] = (arr_15 [i_14 + 2] [i_1 + 1] [i_8] [i_10] [i_14 - 1]);
                        arr_52 [i_1] [i_2] [i_2] [0] [i_14 - 1] = (arr_40 [i_1] [i_2] [i_8] [i_10] [i_2]);
                    }
                    var_43 = (max(var_43, ((-(arr_17 [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 2] [i_1] [i_1 + 1])))));
                    var_44 = (((arr_30 [i_1]) ? (0 || 1) : 1008));
                }
                for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
                {
                    var_45 = (4294967280 - var_9);
                    var_46 = -78;
                    arr_56 [i_1] [i_1] [i_1] [i_1] = (var_7 ? (arr_7 [i_8]) : -94021182251720641);
                    var_47 = ((-25 ? (arr_38 [i_1 - 2] [8] [i_1 - 2] [i_15]) : (arr_38 [i_1 - 1] [i_2] [i_8] [5])));
                }
                var_48 = (min(var_48, (arr_44 [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 2])));
                arr_57 [i_8] [2] [i_1 - 2] [9] = (((arr_26 [i_1] [i_2] [i_2] [i_8] [i_2]) | ((-(arr_46 [i_1] [i_2] [i_2] [i_1] [i_8] [i_8] [i_8])))));
                arr_58 [3] &= (~(((arr_13 [i_1 - 1] [6] [i_8]) | var_5)));
            }
            var_49 = var_8;
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 0;i_19 += 1)
                        {
                            {
                                var_50 = (((arr_30 [i_1]) ? var_4 : (arr_30 [i_1 + 1])));
                                var_51 = (min(var_51, ((((~28710) ? var_13 : ((255 ? 36028797018963967 : 28710)))))));
                            }
                        }
                    }
                    var_52 = ((!(arr_19 [i_1 + 1] [i_17] [i_1 - 1])));
                    var_53 -= var_12;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 23;i_20 += 1)
    {
        var_54 = (((-9223372036854775807 - 1) ? -1034354297 : ((-1 ? var_13 : var_8))));
        arr_71 [i_20] = (~0);
        var_55 = (min(var_55, var_1));
        /* LoopNest 2 */
        for (int i_21 = 1; i_21 < 21;i_21 += 1)
        {
            for (int i_22 = 1; i_22 < 22;i_22 += 1)
            {
                {
                    var_56 = (arr_73 [i_21 - 1] [i_21 + 1] [i_21 + 1]);
                    var_57 = (max(var_57, (((var_11 ? var_2 : (arr_70 [i_21 + 2]))))));
                }
            }
        }
    }
    var_58 &= (((!13640) <= (min(((var_11 ? var_3 : var_10)), (((-2147483647 - 1) & 13653))))));

    for (int i_23 = 3; i_23 < 10;i_23 += 1)
    {

        for (int i_24 = 0; i_24 < 11;i_24 += 1)
        {
            /* LoopNest 2 */
            for (int i_25 = 1; i_25 < 8;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 11;i_26 += 1)
                {
                    {
                        var_59 = ((((min((arr_30 [i_26]), (arr_30 [i_26])))) ? var_8 : var_10));
                        var_60 = (max(var_60, (arr_26 [i_26] [2] [i_24] [i_24] [i_23 - 2])));
                    }
                }
            }
            arr_87 [i_23] = (((max((((!(arr_32 [i_23] [i_23] [i_23] [i_24])))), var_15)) >= (arr_66 [i_23] [i_23 - 2] [i_23] [i_23 + 1] [i_23])));
        }
        var_61 ^= ((((~(arr_85 [i_23] [i_23] [i_23] [1] [i_23] [i_23]))) != ((((0 ? var_0 : (arr_65 [i_23 - 1] [8] [i_23] [i_23])))))));
        arr_88 [i_23] = (((((((min(1, var_1))) ? (arr_46 [i_23 - 1] [i_23] [i_23] [i_23 - 3] [i_23] [i_23] [i_23 - 1]) : -77))) ? ((min(((((arr_1 [i_23 - 3]) >= 255))), var_13))) : (-var_0 / 7620)));
    }
    var_62 -= (((!(1622906668 - var_14))));
    #pragma endscop
}
