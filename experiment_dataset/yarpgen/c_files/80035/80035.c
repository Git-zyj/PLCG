/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_19 -= ((var_11 ^ (~var_16)));
                        arr_11 [1] [i_3] = (arr_10 [i_3] [i_3]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_14 [i_0] [11] = (arr_10 [i_0] [i_1]);
                        var_20 ^= (arr_6 [i_4] [i_1] [6]);
                        var_21 ^= (434 || var_16);

                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_22 = (~1);
                            var_23 += (((arr_6 [i_0] [i_0] [i_0]) ? (arr_2 [i_4]) : (arr_2 [i_0])));
                            var_24 = ((-(32761 - -32758)));
                            arr_18 [i_0] [i_5] [i_0] [7] [i_0] [i_0] [i_0] = (218 ? (((arr_0 [1] [i_5]) ^ (arr_0 [i_0] [2]))) : var_5);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_6] [i_1] [i_1] [i_4] [i_1] [i_1] = ((var_0 >= (var_4 < 9754)));
                            arr_23 [i_1] [i_1] = (!var_14);
                        }
                        arr_24 [i_0] [i_1 + 2] [i_2] [i_4] [i_0] = (~var_8);
                    }
                    var_25 = ((((min(var_1, 32741))) ? ((((arr_6 [i_1 + 3] [i_1 + 3] [i_1 + 3]) < 1))) : ((((1 / 1) && (((arr_8 [i_0] [i_0] [i_0]) != var_3)))))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_26 = (34 / var_7);
                            arr_30 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] [i_8] = (arr_17 [i_0] [i_0] [i_2] [i_0] [i_1 + 2]);
                        }

                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            var_27 &= 1;
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (~var_2);
                        }
                        for (int i_10 = 4; i_10 < 17;i_10 += 1)
                        {
                            arr_37 [3] [i_7] [i_2] [i_1] [i_0] = (~var_7);
                            var_28 = 0;
                        }
                        for (int i_11 = 4; i_11 < 19;i_11 += 1)
                        {
                            arr_42 [i_11] [i_7] [i_2] [i_1] [i_11] = (~-5207);
                            var_29 = (245 / 250);
                            var_30 = ((~(~var_10)));
                            arr_43 [i_0] [i_1] [i_2] [i_11] [i_1] = var_8;
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        arr_47 [i_12] = ((((var_13 ? (arr_45 [i_0] [i_0] [12]) : var_8)) + var_17));
                        arr_48 [13] [i_1 + 3] [1] = ((32764 ? (arr_28 [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1 + 3]) : var_16));
                        var_31 -= (((~-2793) ^ (arr_21 [i_1 + 1] [i_1 - 1] [i_2])));

                        for (int i_13 = 1; i_13 < 16;i_13 += 1)
                        {
                            var_32 = ((~(((arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_0] [i_13]) : var_17))));
                            var_33 -= ((((-1914258581 ? 218 : var_15)) * (65 != -8201)));
                            var_34 = ((var_2 / (arr_19 [i_1 + 2] [i_1 + 2] [i_13 + 2] [i_13] [i_13 - 1])));
                            var_35 -= (arr_3 [i_1 + 3] [i_13 - 1] [i_13 - 1]);
                        }
                    }
                }
            }
        }
    }
    var_36 = (min(var_36, (((((var_4 > (var_7 != var_17))) ? (((min(1, var_4)))) : var_9)))));
    /* LoopNest 2 */
    for (int i_14 = 1; i_14 < 1;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 20;i_15 += 1)
        {
            {
                var_37 = -9755;
                arr_55 [i_14] [i_14] = (min(((((arr_53 [i_14 - 1] [i_15 + 1]) < (arr_53 [i_14 - 1] [i_15 + 1])))), ((-(((arr_53 [i_14 - 1] [i_15]) - var_0))))));
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 20;i_17 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_18 = 4; i_18 < 20;i_18 += 1)
                            {
                                var_38 = (((arr_52 [i_14]) ? 218 : (arr_52 [i_14])));
                                arr_65 [i_14 - 1] [i_14] [i_16 - 1] [i_14] [i_18 - 1] [i_18 + 1] = (1 <= var_3);
                                var_39 += var_10;
                            }
                            /* vectorizable */
                            for (int i_19 = 0; i_19 < 21;i_19 += 1)
                            {
                                arr_68 [i_14] [i_15] [i_16 - 1] [i_17] = ((~var_8) ^ 1);
                                var_40 &= var_5;
                            }
                            arr_69 [i_14] [i_14] [19] [19] = (max((max(6, ((65520 ? var_0 : (arr_64 [i_14] [i_15 + 1] [i_15 + 1] [i_15] [i_16] [i_17 - 1]))))), ((var_3 ? ((var_7 + (arr_51 [i_14] [17]))) : (~1)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
