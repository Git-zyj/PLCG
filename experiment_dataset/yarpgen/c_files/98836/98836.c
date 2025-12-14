/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_6));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_19 -= ((var_8 + ((3417542735 ? 3417542735 : (arr_0 [i_0])))));

        for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_20 ^= ((-((-(arr_1 [i_0] [i_1 + 1])))));
                    var_21 = (((((877424558 ? 244 : 877424560))) ? (arr_3 [i_1 - 1] [i_1 + 1]) : (arr_6 [i_0 - 1])));

                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        var_22 += (((arr_7 [i_0 + 1] [i_1 + 1] [i_2] [i_4 + 1]) ? (((arr_2 [i_1 - 1] [i_4 + 1]) ? 206 : 61)) : 56));
                        var_23 = (((arr_3 [i_4 + 2] [i_0 + 1]) > 9));
                        var_24 = ((117 ? (arr_0 [i_0 + 1]) : (arr_2 [i_4 - 1] [i_1 - 1])));
                        var_25 = var_6;
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_26 = arr_13 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1];
                        var_27 ^= (arr_14 [i_0] [i_3]);
                        var_28 = (227 > 46);
                        var_29 = (~var_4);
                    }
                    var_30 = ((144 ? (arr_7 [i_0] [i_1 - 1] [i_0 - 1] [i_1 - 1]) : 2552572571));
                }
                var_31 = ((var_15 ? ((63 ? var_9 : (-32767 - 1))) : (var_14 >= 31)));
                var_32 = ((!(((arr_12 [12] [8] [12]) <= var_10))));
            }
            var_33 = (arr_1 [i_0 + 1] [i_0]);
            var_34 = 20;
            var_35 = (((arr_5 [i_0 + 1] [i_0 - 2]) + ((~(arr_6 [19])))));
        }
        for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
        {
            var_36 = ((!(arr_8 [3] [i_0] [i_0 + 1] [7] [i_6] [i_6])));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 19;i_8 += 1)
                {
                    {
                        var_37 = (((arr_7 [i_0] [i_0] [i_6 - 1] [i_0]) ? (arr_7 [i_6 + 1] [i_6 + 1] [i_6] [i_6 - 1]) : (arr_7 [i_0 - 1] [i_6 - 1] [8] [i_8 - 2])));
                        var_38 = arr_10 [i_0 - 1] [10];

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_39 = var_15;
                            var_40 = (((arr_1 [10] [i_8 - 2]) != var_16));
                            var_41 |= 74;
                        }
                    }
                }
            }
            var_42 += ((~((var_14 ? var_16 : 0))));

            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                var_43 = (arr_7 [i_0 - 2] [i_6] [i_6 + 1] [i_10 - 1]);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_44 = (arr_22 [i_0 + 1]);
                            var_45 = (arr_29 [i_10 + 1] [i_6 + 1] [i_6 - 1] [i_0 + 1] [i_0]);
                        }
                    }
                }
            }
            for (int i_13 = 1; i_13 < 19;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 17;i_15 += 1)
                    {
                        {
                            var_46 = (max(var_46, (((117 ? ((31999 ? (arr_18 [i_0] [i_6 + 1] [10]) : -32763)) : -32740)))));
                            var_47 &= (~112);
                            var_48 -= (arr_39 [i_15] [i_15 + 1] [i_13 - 1] [i_6 - 1] [i_0 - 2]);
                        }
                    }
                }
                var_49 = (min(var_49, ((((arr_1 [i_6 + 1] [i_6 - 1]) ? (arr_1 [i_6 + 1] [i_6 - 1]) : 199)))));
            }
            for (int i_16 = 1; i_16 < 17;i_16 += 1)
            {
                var_50 = ((-(((arr_9 [i_0 - 2] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_16]) ? 127 : 31))));
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 17;i_17 += 1)
                {
                    for (int i_18 = 3; i_18 < 18;i_18 += 1)
                    {
                        {
                            var_51 = ((-7177874345836952028 ? (-32767 - 1) : (arr_16 [i_16 + 1] [i_6])));
                            var_52 = (max(var_52, (arr_40 [i_17] [i_0] [i_6] [i_6] [i_16 + 1] [18] [2])));
                            var_53 = var_1;
                            var_54 = 192;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 17;i_20 += 1)
                    {
                        {
                            var_55 = (arr_26 [i_6] [11] [i_6]);
                            var_56 ^= (var_12 / var_4);
                            var_57 |= ((var_7 ? (((arr_10 [i_20] [i_0 - 1]) ? 4967643844166456496 : 183)) : (arr_18 [i_20] [0] [i_20])));
                        }
                    }
                }

                for (int i_21 = 0; i_21 < 20;i_21 += 1)
                {

                    for (int i_22 = 3; i_22 < 19;i_22 += 1)
                    {
                        var_58 = (((!101) != (arr_18 [i_6] [i_16] [i_16])));
                        var_59 = ((var_3 && (101 + 131)));
                        var_60 = (!195);
                    }
                    var_61 = ((0 ? 32742 : 4967643844166456496));
                }
                for (int i_23 = 0; i_23 < 20;i_23 += 1)
                {
                    var_62 = (max(var_62, 154));
                    var_63 += (arr_26 [i_0] [i_6 + 1] [i_0]);
                }
            }
            for (int i_24 = 2; i_24 < 18;i_24 += 1)
            {
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 20;i_25 += 1)
                {
                    for (int i_26 = 1; i_26 < 1;i_26 += 1)
                    {
                        {
                            var_64 = 192;
                            var_65 = ((~var_3) ? 130 : ((var_5 ? 778692307878844454 : (arr_45 [i_6]))));
                            var_66 += (arr_28 [i_0 - 1] [i_6 - 1] [i_6 - 1]);
                        }
                    }
                }
                var_67 = (((arr_16 [i_0] [i_6]) ? (arr_16 [i_0] [i_6]) : (arr_16 [12] [i_6])));
                var_68 = (arr_20 [i_0 - 2] [1] [i_24] [i_24 - 2] [12] [i_24]);
            }
        }
        var_69 = 192;
    }
    var_70 += 157;
    #pragma endscop
}
