/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = 128;
                var_18 = 2248518133;
                var_19 ^= (-(min((~var_10), (min((arr_3 [2]), (arr_1 [i_0] [i_1]))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_20 = var_16;

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_14 [i_3] [i_0] [i_0] [i_0] [i_3] [i_2] = (arr_13 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1 - 2] [i_1 - 2]);
                        arr_15 [i_0] [i_0] = ((((116 | (arr_10 [i_0] [i_0] [i_0] [i_0]))) & -2046449154));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_0] [i_5] = 28;
                            arr_23 [i_0] [i_0] [i_1 - 2] [i_1] [i_2] [i_0] [i_0] = (((var_10 ? 65535 : 2248518147)));
                            var_21 = var_3;
                            var_22 = ((+(((arr_8 [i_2] [i_2] [i_5]) | var_10))));
                        }
                        for (int i_6 = 3; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_23 = (arr_21 [i_0] [i_1 - 2] [i_6 + 1] [i_6] [i_6]);
                            var_24 = (max(var_24, ((((arr_0 [i_1 - 1] [i_6 - 3]) ? ((((arr_20 [i_4] [i_1] [i_2] [4] [10] [i_4]) || -18087))) : (((var_15 && (arr_9 [12] [8] [i_6])))))))));
                            var_25 -= ((!(arr_17 [i_6 + 1] [0] [i_1])));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_6 - 2] [i_6] = (!(!var_13));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_26 = (arr_8 [i_1 - 1] [i_1 - 2] [i_1 - 2]);
                            var_27 = (max(var_27, (((-107 * (arr_24 [i_0] [i_0] [i_1] [i_2] [i_4] [i_7]))))));
                            var_28 ^= (((!65535) ? ((((!(arr_30 [0] [i_1 - 2] [i_1] [i_2] [i_4] [0]))))) : (arr_11 [i_1 - 2] [i_2])));
                        }

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_29 = (~0);
                            arr_33 [i_0] [i_1] [i_0] [i_2] [i_2] [i_0] [i_0] = (((arr_11 [i_1] [i_4]) * -26));
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_30 *= (arr_3 [20]);
                            var_31 = (((~-1) <= var_17));
                        }
                        arr_36 [i_4] [1] [1] [i_0] &= (((~var_4) ? (arr_10 [i_0] [i_2] [i_2] [i_2]) : var_2));
                        arr_37 [i_0] [i_0] [i_1] [i_2] [i_4] = (arr_9 [i_1 - 1] [i_0] [i_1 - 2]);
                    }
                    for (int i_10 = 1; i_10 < 20;i_10 += 1)
                    {
                        var_32 = var_7;
                        var_33 -= (((arr_12 [i_1] [i_1 - 1] [i_1 + 1] [2]) < var_1));
                        var_34 = var_15;
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_43 [i_11] [i_11] = ((var_2 ? (arr_42 [i_11]) : 4677128003328969421));
        var_35 = (((((6291456 ? -18087 : (arr_42 [10])))) && ((((arr_42 [i_11]) ? 142 : (arr_42 [i_11]))))));
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        arr_47 [i_12] [i_12] = ((((~(min(var_7, (arr_2 [i_12])))))) ? (((~-2) ? (arr_39 [i_12] [i_12]) : (~var_14))) : (arr_46 [i_12]));
        var_36 = (~-60);
    }
    for (int i_13 = 3; i_13 < 9;i_13 += 1) /* same iter space */
    {
        var_37 = var_9;
        var_38 = -var_0;

        for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_15 = 2; i_15 < 12;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    {
                        var_39 = (min(var_39, (!-108)));

                        for (int i_17 = 0; i_17 < 13;i_17 += 1)
                        {
                            arr_63 [i_17] [11] [i_17] [i_13] [11] = ((~(arr_46 [i_13])));
                            var_40 ^= ((-var_6 ? (~var_11) : 4294967295));
                        }
                        var_41 &= (max((((min(1356256026, 2046449162)) < (~110))), var_14));
                        var_42 = (((-(arr_40 [i_13 + 2]))));
                    }
                }
            }
            var_43 = -108;
        }
        for (int i_18 = 0; i_18 < 13;i_18 += 1) /* same iter space */
        {
            var_44 |= ((arr_56 [i_18] [i_13]) ? (min(var_7, (arr_60 [i_13] [i_13 + 3] [i_13 - 1] [i_13 - 3] [i_13 + 3]))) : (arr_29 [i_13] [i_13 - 2] [i_13 - 2] [i_18] [15] [i_13]));
            var_45 = 1;
            var_46 &= -65542;
            var_47 = (156 & 8436400326473382166);
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 13;i_19 += 1) /* same iter space */
        {
            arr_69 [i_13] [i_13] = (((~var_0) ? (((var_5 ? (arr_1 [i_13] [i_13]) : 2138824404))) : -9113012827822069161));

            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                var_48 = (arr_4 [i_13]);
                var_49 = var_16;
                /* LoopNest 2 */
                for (int i_21 = 2; i_21 < 12;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 13;i_22 += 1)
                    {
                        {
                            var_50 -= (arr_45 [18] [i_13 - 2]);
                            var_51 ^= 4187001914403869874;
                            arr_80 [i_13] = (~(arr_74 [10] [i_19] [i_20] [i_13] [i_22]));
                        }
                    }
                }
            }
            var_52 = ((arr_1 [i_13] [i_13 - 1]) ? ((4187001914403869874 >> (20651 - 20615))) : (arr_79 [i_13 + 2] [i_13 + 2]));
        }
    }
    /* vectorizable */
    for (int i_23 = 3; i_23 < 9;i_23 += 1) /* same iter space */
    {
        var_53 = ((!((((arr_30 [i_23] [i_23] [i_23] [i_23 + 2] [i_23 + 4] [i_23]) & var_6)))));
        arr_83 [i_23] [i_23] = (arr_75 [i_23] [i_23] [i_23] [i_23]);
    }
    #pragma endscop
}
