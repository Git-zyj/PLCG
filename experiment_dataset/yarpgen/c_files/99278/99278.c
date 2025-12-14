/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_15 -= -29;
                        var_16 = (!6517);
                        var_17 = (min(var_17, (arr_4 [i_2] [i_3])));
                        var_18 *= 41770;
                        var_19 = (min(var_19, ((((arr_9 [i_3] [i_0] [12] [i_0] [i_0]) ? (arr_4 [i_1 - 1] [i_1]) : (arr_9 [i_2] [i_0] [i_2 - 1] [i_2 + 1] [i_0]))))));
                    }
                }
            }
            var_20 = 41770;
        }
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            var_21 += ((((((184 ? 64 : 114)))) >= ((min((min(var_13, (arr_12 [i_4 + 1] [i_0] [i_0]))), 23764)))));
            var_22 = ((((min((arr_14 [i_4]), (arr_9 [i_0] [i_4] [i_0] [i_0] [i_4 + 1])))) < 41770));

            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                arr_18 [i_4] = (min(var_11, (((!0) + -1))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            arr_24 [5] [i_7] [i_7] [i_7] [i_4] = ((23770 ? 6422963354010032680 : (arr_16 [i_0] [i_4] [1] [i_7])));
                            arr_25 [i_4 + 2] [i_4 + 2] [i_4] = arr_9 [i_5 + 2] [i_4] [10] [i_4] [i_4 + 1];
                        }
                    }
                }
                var_23 = 38332;
            }
            arr_26 [i_4] = var_13;
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            arr_31 [i_0] [4] = arr_6 [i_8] [i_0] [i_0];
            arr_32 [i_8] = ((((!var_5) ? 27 : (arr_22 [i_0] [i_0] [i_0] [i_0] [i_8] [i_8] [i_8]))));
        }
        var_24 = ((-55 ? 0 : 26444));
        var_25 &= ((((((arr_7 [i_0]) != 8230612240042889540))) * 15049));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 10;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    {
                        arr_42 [i_9] [i_9] [i_11] [i_11] = 255;
                        var_26 = (0 * 2540676689);
                        var_27 = -15;
                    }
                }
            }
        }
        var_28 = (arr_0 [i_9 + 2] [i_9]);
        var_29 ^= ((((((arr_6 [i_9 + 2] [4] [i_9]) ? var_10 : var_7))) ? -13 : (78 + -18792)));

        for (int i_13 = 1; i_13 < 8;i_13 += 1)
        {
            var_30 = var_8;
            var_31 = ((var_8 ? var_9 : (arr_37 [i_9 + 2])));
            var_32 *= (!var_2);
            var_33 = (arr_8 [i_13 - 1] [i_13 + 3] [i_13 - 1] [i_9 + 1]);
        }
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            arr_48 [i_14] [i_9 + 1] [i_9 + 1] = (arr_15 [i_14]);
            var_34 = (((arr_43 [i_9 - 1] [i_9 - 1]) ? var_14 : (var_2 / var_14)));
            var_35 = ((arr_47 [i_9 + 1] [i_9] [i_9 + 1]) ? (arr_1 [i_9 + 2]) : ((-15 ? -1 : var_6)));
            var_36 = (min(var_36, (arr_34 [i_9])));
        }
    }
    /* LoopNest 3 */
    for (int i_15 = 4; i_15 < 18;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        arr_61 [10] [i_16] [i_17] [i_17] [i_18] = (((arr_54 [i_15] [i_16] [i_15] [i_18]) ? ((var_3 ? var_4 : (arr_49 [i_15]))) : (((!(arr_53 [i_16]))))));
                        var_37 = var_6;
                        var_38 -= (arr_58 [i_17] [i_16] [i_15 + 2]);
                    }
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        arr_66 [i_15 - 2] [i_16] [i_17] [i_17] [i_19] = (arr_55 [i_15]);
                        var_39 = (((((-15 ? (arr_56 [i_15] [0] [i_15 - 1] [i_15 + 1]) : var_11))) ? (arr_65 [i_16] [i_16] [i_16]) : 22695));
                        var_40 = var_13;
                    }
                    for (int i_20 = 4; i_20 < 16;i_20 += 1)
                    {

                        for (int i_21 = 0; i_21 < 20;i_21 += 1)
                        {
                            var_41 = (((((!(arr_53 [i_15 - 1])))) << (((arr_67 [i_15 + 1] [i_17] [1] [i_20 - 2]) + 698610448134050715))));
                            arr_73 [i_21] [i_20 - 2] [i_17] [i_16] [i_15] = -99;
                            arr_74 [i_15] [i_16] [i_17] [i_20] = 22695;
                            var_42 = 97588601;
                        }
                        /* vectorizable */
                        for (int i_22 = 0; i_22 < 1;i_22 += 1)
                        {
                            var_43 = (max(var_43, 54));
                            var_44 = (arr_58 [i_20] [i_17] [i_16]);
                            var_45 = (arr_51 [i_15 - 4]);
                        }
                        arr_77 [i_15] [i_16] [i_17] [i_20 - 1] = ((!((((((1 >= (arr_58 [i_15 - 2] [i_15 - 2] [i_17])))) & 206)))));
                    }
                    var_46 = 1;
                }
            }
        }
    }
    var_47 = (var_8 ? var_11 : var_9);
    #pragma endscop
}
