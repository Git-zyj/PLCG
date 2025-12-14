/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_12 = (16990 | -16990);

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_13 [i_0] [i_2] [i_2] [i_4] = ((((16961 ? 51 : 2718152315))) ? var_7 : ((var_4 ? var_11 : var_3)));
                            arr_14 [i_2] = ((-(arr_3 [i_0] [i_0] [i_2])));
                            var_13 = (max(var_13, var_4));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_14 = (arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_1]);
                            var_15 *= (arr_2 [i_0]);
                            var_16 = var_3;
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_17 = -1;
                            var_18 = (arr_8 [i_0] [i_1] [7]);
                        }

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_26 [i_1] &= ((~(arr_10 [i_0 - 1] [i_1])));
                            arr_27 [i_1] [i_1] [i_2] = var_8;
                            var_19 = (arr_25 [i_0] [i_1] [i_1] [i_2] [i_1] [i_1]);
                        }
                        for (int i_8 = 3; i_8 < 12;i_8 += 1)
                        {
                            arr_32 [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_3] [1] [i_2] = 45764;
                            var_20 &= (arr_20 [i_2] [i_1] [4] [i_2] [4]);
                        }
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {

                        for (int i_10 = 1; i_10 < 11;i_10 += 1)
                        {
                            var_21 ^= ((-(min(var_10, var_0))));
                            arr_38 [i_0] [i_1] [i_0] [11] [i_2] = ((((var_6 >= ((min(19751, var_6))))) ? (arr_1 [i_9]) : (min((arr_35 [i_2] [i_1] [i_1]), var_6))));
                            arr_39 [i_0 - 1] [i_0 - 1] [i_2] [i_9] [i_10] = var_1;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_22 ^= (arr_19 [i_0] [i_0 - 1] [i_2]);
                            var_23 = (arr_0 [2]);
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            arr_46 [i_0] [i_1] [i_2] [i_12] [i_12] [i_2] = (((~var_4) ? var_1 : var_7));
                            arr_47 [i_0 - 1] [i_1] [i_1] [i_2] [i_1] [i_1] [i_12] = ((16949 ? 67108862 : -16962));
                            var_24 -= (var_0 / var_7);
                            var_25 *= (~19765);
                        }
                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 12;i_13 += 1)
                        {
                            var_26 &= var_9;
                            var_27 *= var_6;
                            var_28 = (arr_5 [i_9]);
                            var_29 = var_9;
                        }
                        var_30 = 19771;
                        var_31 += min(var_0, var_6);
                    }
                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 10;i_14 += 1)
                    {
                        arr_54 [i_2] = (var_5 || 45764);
                        var_32 ^= (arr_30 [i_1]);
                        var_33 = ((-(arr_51 [i_0 - 1] [i_0] [i_0] [i_2] [i_0 + 1] [i_14 - 1])));
                    }
                    var_34 = (max(var_1, (min((var_4 > var_11), (var_1 + var_9)))));
                    var_35 = (min(var_35, (((var_5 ? (((arr_43 [i_0 + 1] [i_0 + 1]) ? var_5 : var_1)) : var_0)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 3; i_15 < 18;i_15 += 1)
    {
        for (int i_16 = 4; i_16 < 17;i_16 += 1)
        {
            {
                arr_60 [i_15] [i_16] = ((((((((var_5 ? var_10 : 16957))) ? ((-(arr_58 [i_15] [i_15]))) : var_0))) && (16990 * 16975)));

                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    var_36 = var_8;
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 20;i_19 += 1)
                        {
                            {
                                arr_69 [i_18] [i_16] [11] [i_16] = (((((var_8 ? (arr_59 [i_16 + 3] [i_19 + 1]) : var_7))) ? var_3 : (~var_6)));
                                arr_70 [i_16] = (arr_63 [i_15] [i_16 + 3] [i_16 + 3] [i_19 - 1]);
                                var_37 *= 45764;
                                var_38 = var_9;
                            }
                        }
                    }

                    for (int i_20 = 0; i_20 < 21;i_20 += 1)
                    {
                        var_39 = (((((var_3 - (arr_63 [i_15 + 2] [i_15] [i_16 + 3] [i_16 + 3])))) * (((((var_0 ? -16990 : -16961))) ? (((16967 ? -16976 : 16990))) : (min(var_7, var_11))))));

                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            var_40 *= var_11;
                            var_41 = ((((((arr_73 [i_16]) ? var_9 : -75))) ? (var_9 / -16975) : ((min(var_5, -16990)))));
                        }
                        for (int i_22 = 0; i_22 < 21;i_22 += 1)
                        {
                            var_42 = (((((arr_77 [i_15 + 2] [i_15 + 1] [i_16 - 2]) ? (arr_77 [i_15 + 2] [i_15 + 3] [i_16 + 2]) : (arr_62 [i_15 + 1] [i_15 + 3]))) + (arr_77 [i_15 + 1] [i_15 + 1] [i_16 + 4])));
                            var_43 -= var_10;
                        }
                        /* vectorizable */
                        for (int i_23 = 0; i_23 < 21;i_23 += 1)
                        {
                            var_44 = (~16981);
                            var_45 = (var_4 ? var_5 : var_1);
                            var_46 -= var_8;
                        }
                        arr_82 [i_15 - 1] [i_16] [i_17] [i_16] [i_15 - 1] = (arr_58 [i_16] [i_20]);
                    }
                    for (int i_24 = 2; i_24 < 20;i_24 += 1)
                    {
                        arr_86 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] = var_6;
                        var_47 ^= ((var_0 ? var_0 : var_9));
                    }
                }
                var_48 = 16994;
            }
        }
    }
    var_49 = -var_11;
    var_50 &= -16984;
    #pragma endscop
}
