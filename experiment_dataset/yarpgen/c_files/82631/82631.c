/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 -= (((((arr_0 [i_0] [i_0]) * (arr_1 [i_0]))) / var_6));
        var_13 = (min(var_13, ((((((1 * (arr_1 [i_0]))) ? (arr_0 [i_0] [i_0]) : ((10875189942195112386 ? 1 : var_3))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
        {
            var_14 = (((arr_5 [i_1] [i_1] [i_1]) ? 1 : (arr_5 [i_1] [i_2] [i_1])));
            arr_8 [i_2] = ((var_4 ? 1588082588 : (arr_3 [i_1 - 2])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_15 *= (((arr_9 [i_4]) >> (((arr_12 [i_4]) - 30686))));

                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            var_16 = (((arr_17 [i_1 + 1] [i_2] [i_3] [13] [i_5 - 1]) ? (arr_3 [i_1]) : var_11));
                            var_17 = (((arr_13 [i_2] [i_5] [5] [i_5] [i_5 - 1] [0]) * (((arr_11 [i_1] [i_2] [i_3] [i_4] [i_5 + 1]) ? 218 : var_1))));
                        }
                        var_18 = 0;
                    }
                }
            }
            var_19 = (((((arr_2 [2]) ? (arr_17 [i_2] [i_2] [i_1 - 2] [i_1 - 1] [i_1]) : var_3)) <= (~var_5)));
        }
        for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
        {
            var_20 = (arr_20 [i_1 - 3]);
            var_21 -= arr_3 [i_1];
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {

            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {
                var_22 = -28;
                arr_27 [i_1] [i_7] = (arr_25 [i_1]);
                var_23 = arr_19 [i_7] [i_7];
                var_24 *= ((~(arr_6 [i_1 - 2] [i_1])));
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_32 [i_7] [i_7] = ((1935599138 << (((arr_4 [i_1 - 1]) - 29645))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 12;i_11 += 1)
                    {
                        {
                            arr_38 [i_1] [i_1] [i_1] &= var_0;
                            var_25 = var_9;
                            arr_39 [i_11 - 2] [i_10] [i_9] [i_1] [i_1] [i_1] [i_1] = (((((var_8 ? (arr_13 [i_11] [i_11] [i_10] [i_9] [2] [2]) : 37))) ? (arr_10 [i_9]) : 1));
                            var_26 = (((!-29588) ? (arr_18 [i_1] [i_9] [i_1] [i_1] [i_1] [i_1 - 3] [i_7]) : (arr_12 [i_9])));
                        }
                    }
                }
                arr_40 [i_1] [i_1] [i_1] [i_1] = (arr_31 [i_9]);
            }
            var_27 = (arr_2 [i_1 + 2]);
        }
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    {
                        var_28 = ((~(arr_43 [i_13 - 2] [i_13 - 3] [i_13 + 1])));
                        var_29 = (arr_47 [i_1 + 1] [i_12] [i_13] [i_12]);
                    }
                }
            }
            arr_48 [13] [3] = ((var_5 || (((1 >> (var_8 - 132))))));
        }
        var_30 = (((10875189942195112365 - var_0) + (arr_31 [i_1])));
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                {
                    var_31 = (((-(arr_22 [i_1 + 1] [i_15]))));
                    var_32 = 14380;
                    var_33 = ((~(arr_17 [i_1] [i_1 + 2] [i_16] [i_15 - 1] [i_16])));
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 25;i_17 += 1)
    {
        var_34 *= (max((var_10 + 16216), ((((arr_58 [i_17]) << (((arr_57 [i_17]) - 9099)))))));
        var_35 = ((-(((~224) | (max(var_0, 0))))));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 25;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 24;i_19 += 1)
            {
                {
                    var_36 = (max(var_36, (~var_4)));
                    var_37 *= ((max((-3765910531608617449 | -1401591961729097074), 7571554131514439212)) <= ((((arr_59 [1] [i_19 + 1] [i_19]) * (min((arr_57 [i_17]), var_10))))));
                    arr_66 [i_19] [i_17] [i_17] [i_17] = (min(((((((arr_60 [i_19 + 1]) ? 1 : 25763)) * (arr_59 [i_18] [i_19 + 1] [i_18])))), ((+(((arr_60 [20]) ? var_1 : (arr_65 [i_17] [i_18])))))));
                }
            }
        }
    }

    for (int i_20 = 0; i_20 < 1;i_20 += 1)
    {
        arr_69 [i_20] = (arr_68 [i_20]);
        var_38 = (max(var_38, (1962533786690018928 <= 15)));

        for (int i_21 = 0; i_21 < 21;i_21 += 1)
        {
            arr_72 [i_20] [4] = (15 % (arr_63 [i_20] [i_21] [i_20]));
            arr_73 [i_21] [i_20] = ((((max(var_5, 31338))) && ((max(3241175312, (arr_60 [1]))))));
            var_39 = (max(var_39, var_3));
        }
        /* vectorizable */
        for (int i_22 = 4; i_22 < 18;i_22 += 1)
        {
            var_40 = 9689;
            var_41 -= ((((((arr_63 [i_22] [6] [i_20]) ? (arr_76 [i_20] [i_22] [i_20]) : (arr_59 [i_20] [i_20] [i_20])))) ? 150 : 15));
        }

        for (int i_23 = 0; i_23 < 21;i_23 += 1)
        {
            var_42 -= (((((~25490) + 2147483647)) >> (((arr_78 [i_20]) + 10078))));
            arr_81 [i_20] [i_20] [i_20] = (arr_57 [i_20]);
            var_43 = (min(var_43, (!var_0)));
            var_44 = ((-(min((((!(arr_57 [i_20])))), var_1))));
            var_45 = 1;
        }
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 1;i_24 += 1)
    {
        arr_86 [i_24] = ((!(arr_85 [i_24])));
        arr_87 [i_24] = ((var_4 ? (arr_55 [4] [i_24]) : (5365 <= 2147483647)));
    }
    var_46 = var_6;
    var_47 = var_9;
    var_48 &= (var_6 | var_1);
    #pragma endscop
}
