/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max((min(1536216878, -118)), var_10))) || ((((min(var_12, 18446744073709551607)) >> ((((-22315 ? var_11 : var_0)) - 23826)))))));
    var_14 = (min((~var_11), ((var_4 ? var_5 : var_1))));
    var_15 = (min(((((max(var_2, -823025968002910396))) ? (var_6 | -42) : var_3)), 79));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] &= (var_2 ^ 122);
        var_16 = (106 || -1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = var_11;
                                var_18 = (var_5 % var_3);
                                arr_15 [i_2] [i_1] [i_1] [i_3] [i_4] = (-1 ^ 32761);
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_19 ^= (((!164) ? var_12 : var_0));
                            arr_22 [i_2] [i_5] [i_2 + 1] [i_1] [i_2] = ((120 ? -var_6 : var_2));
                            arr_23 [i_0] [i_1] [i_2] [i_5] [i_6] = (arr_14 [i_0] [i_1] [i_2] [i_5] [i_2] [i_6]);
                            var_20 -= (((arr_21 [i_5 + 3] [20] [8] [i_5] [i_0] [i_1] [i_0]) / var_4));
                            arr_24 [7] [7] [i_2 - 1] [i_5] [i_2] = (var_0 ^ var_3);
                        }
                        var_21 = (((arr_9 [i_5 + 1] [i_5 + 2] [i_5 + 1]) + 101950447));
                        var_22 ^= (arr_17 [i_0] [i_5 + 3] [i_2] [1]);
                        var_23 = (min(var_23, var_11));
                    }
                    var_24 = -7026110647529206320;

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_25 = var_5;
                            var_26 = 150;
                            arr_30 [i_0] [i_2] [i_2 - 2] [i_7] [i_8] = (-263810405 / 32747);
                            arr_31 [i_2] [i_2] = (224 || -32741);
                        }
                        var_27 |= (7 != var_6);
                        arr_32 [22] [i_2] [i_0] [i_2] = ((-(!-2113599555)));
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_28 = (((arr_10 [9] [i_1] [i_2 + 3] [i_2 + 2]) | var_7));
                        arr_35 [2] [2] [i_2] [i_9] [i_2] [i_0] = (arr_7 [i_2 - 1]);
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            var_29 = ((-(arr_28 [i_2 - 2] [i_1] [i_2] [i_11] [i_0])));
                            arr_42 [4] [i_10] [i_2] [i_1] [i_2] [6] [5] = var_4;
                            arr_43 [i_11] [i_2] [i_2] [i_1] [i_2] [i_0] = 6385;
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            arr_46 [i_2] = (arr_37 [i_2] [i_2 - 2] [8]);
                            var_30 = (max(var_30, (var_7 ^ 122)));
                        }
                        for (int i_13 = 4; i_13 < 23;i_13 += 1)
                        {
                            var_31 = ((var_3 ? 122 : (var_7 | var_7)));
                            var_32 = ((-(var_7 + var_0)));
                        }
                        var_33 ^= (((var_6 || var_11) || (arr_14 [i_0] [i_0] [i_2 + 3] [i_10] [i_1] [i_10])));
                        var_34 += (((arr_40 [18] [i_1] [18] [i_2 + 2] [i_10] [i_1]) | (arr_40 [20] [20] [i_2 - 1] [i_2 + 2] [4] [i_0])));
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            var_35 = (((var_9 ? var_7 : var_0)));
                            var_36 = (min(var_36, ((((arr_18 [i_15] [i_15] [i_2] [i_14]) != var_2)))));
                        }
                        for (int i_16 = 0; i_16 < 24;i_16 += 1)
                        {
                            arr_59 [i_0] [i_1] [i_14] [i_2] [2] [i_16] [i_0] = (((arr_57 [i_2] [i_2 - 2] [i_2] [i_2 + 3]) ? (arr_5 [i_2 - 2] [i_2 + 2]) : -9223372036854775798));
                            var_37 = (max(var_37, (((((var_4 ? 32720 : var_4)) * (!var_10))))));
                            var_38 -= 1084244521;
                        }
                        for (int i_17 = 0; i_17 < 24;i_17 += 1)
                        {
                            var_39 = -var_9;
                            var_40 &= (((arr_2 [i_2 + 1] [i_2 - 1]) % 263810404));
                            var_41 = ((-(var_10 || -5598)));
                            var_42 = (max(var_42, 121));
                        }
                        for (int i_18 = 3; i_18 < 22;i_18 += 1)
                        {
                            arr_66 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [21] = (var_4 / var_6);
                            arr_67 [i_2] [i_1] [i_2] [i_1] [i_18] = (((arr_48 [i_0] [i_1] [i_14] [i_18]) ? (arr_34 [i_2 + 3] [i_2] [i_2 + 1] [i_2 + 1]) : var_9));
                            arr_68 [i_18] [i_2] [i_2] [i_0] = 76;
                        }
                        var_43 = (var_11 > var_7);
                    }
                    arr_69 [i_2] [i_2] = (~39557);
                }
            }
        }
        arr_70 [i_0] = var_10;
    }
    for (int i_19 = 0; i_19 < 22;i_19 += 1)
    {

        for (int i_20 = 3; i_20 < 18;i_20 += 1)
        {
            arr_77 [i_20] [i_20 - 1] = ((29 | (min(1084244521, (((var_2 ? (arr_20 [i_19] [i_19] [i_20] [i_19] [i_19]) : 107)))))));
            arr_78 [i_20] = ((((max(var_12, (arr_38 [i_20] [i_20] [i_20] [i_19]))) ^ (((var_7 ? 13674 : var_10))))));
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 22;i_21 += 1)
        {
            var_44 = (min(var_44, (((1 ? (((var_11 ? (arr_0 [i_19] [i_21]) : -32722))) : ((9223372036854775799 ? var_1 : var_8)))))));
            var_45 = ((var_1 >> ((3210722763 ? 1 : (-9223372036854775807 - 1)))));

            for (int i_22 = 1; i_22 < 21;i_22 += 1)
            {
                var_46 = var_2;
                var_47 = ((var_0 ? var_1 : 2099563417227108275));

                for (int i_23 = 0; i_23 < 22;i_23 += 1)
                {
                    var_48 = (((arr_63 [i_22 + 1] [i_22 + 1] [i_22 - 1] [i_22 - 1] [i_22 + 1]) << (var_8 - 33)));
                    var_49 = (var_5 >> var_5);
                }
            }
        }
        /* vectorizable */
        for (int i_24 = 0; i_24 < 22;i_24 += 1)
        {
            /* LoopNest 3 */
            for (int i_25 = 0; i_25 < 0;i_25 += 1)
            {
                for (int i_26 = 4; i_26 < 20;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 1;i_27 += 1)
                    {
                        {
                            var_50 *= (-((var_3 ? (arr_84 [i_26]) : 173565939)));
                            var_51 = (max(var_51, var_1));
                        }
                    }
                }
            }
            var_52 += ((var_11 % (arr_80 [i_19] [i_19] [i_24])));
        }
        /* LoopNest 3 */
        for (int i_28 = 0; i_28 < 22;i_28 += 1)
        {
            for (int i_29 = 0; i_29 < 1;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 1;i_30 += 1)
                {
                    {
                        arr_103 [i_19] [i_28] [i_28] = var_10;
                        var_53 = ((((min((arr_95 [i_29] [i_30]), (arr_71 [i_28])))) ? ((var_3 ? (arr_8 [i_28] [i_28] [i_30]) : 251)) : (((min(1, -13693))))));
                        var_54 = var_11;
                        var_55 -= (((var_11 - var_11) + 32730));
                        var_56 = (min(var_56, (arr_27 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
