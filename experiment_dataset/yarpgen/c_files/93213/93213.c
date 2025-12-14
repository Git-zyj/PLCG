/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 ^= var_15;
                var_21 = var_12;
            }
        }
    }
    var_22 &= ((520192 ? (((((var_6 ? 40087 : 255))) / (var_17 + 12815846159966668517))) : ((var_14 ? ((1738862145 ? var_14 : var_12)) : var_0))));
    var_23 = (min(var_23, var_2));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_24 = (2147483647 ? 210 : 3789929037149713343);
                            var_25 = (2147483647 / -2147483647);
                        }
                    }
                }

                /* vectorizable */
                for (int i_6 = 4; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_26 = var_2;
                                arr_27 [i_2] [i_2] [i_6] [i_2] [i_2] = 32763;
                                var_27 = (max(var_27, var_7));
                            }
                        }
                    }
                    var_28 = ((-(var_14 / var_18)));

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_30 [i_2] &= ((-654227227478251614 ? 45321 : 1699502139));
                        var_29 = (var_0 > var_2);
                        var_30 = var_9;
                        arr_31 [i_3 + 2] [i_6 - 2] [i_6] [i_3 + 2] [i_2] = ((-(arr_5 [i_2] [i_3] [i_3])));
                        arr_32 [i_2] [i_6] [i_2] [i_2] = ((arr_21 [9] [i_2] [i_6 - 3] [i_9] [9]) | 53489);
                    }

                    for (int i_10 = 1; i_10 < 12;i_10 += 1) /* same iter space */
                    {
                        arr_35 [i_2] [i_3 + 3] [i_6] = (((((var_2 ? var_9 : var_16))) ? (((~(arr_19 [i_2] [i_10 + 1] [i_10 + 2] [i_10 + 2])))) : var_11));
                        var_31 = (min(var_31, (((-654227227478251603 + 9223372036854775807) << (8704 - 8704)))));
                    }
                    for (int i_11 = 1; i_11 < 12;i_11 += 1) /* same iter space */
                    {
                        var_32 = (max(var_32, var_18));

                        for (int i_12 = 3; i_12 < 11;i_12 += 1)
                        {
                            arr_40 [i_6] = var_17;
                            var_33 = (arr_23 [i_2] [i_3] [i_6] [i_3] [i_2]);
                            var_34 ^= 60;
                            var_35 = (min(var_35, (arr_5 [i_3] [i_3 + 2] [i_2])));
                        }
                        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                        {
                            var_36 = var_15;
                            var_37 = (max(var_37, (arr_25 [i_2] [6] [i_2] [i_11 + 2] [i_13] [i_13])));
                            arr_44 [i_2] [i_2] [i_6] [i_2] [i_11 - 1] [i_13] = (arr_24 [i_6 + 1]);
                        }
                        for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                        {
                            var_38 = -var_3;
                            var_39 ^= -8714;
                        }
                        var_40 = ((3670016 ? -24373 : -2062944956));
                    }
                    var_41 &= var_4;
                }
                /* vectorizable */
                for (int i_15 = 4; i_15 < 13;i_15 += 1) /* same iter space */
                {
                    var_42 = (max(var_42, 18446744073709551615));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 14;i_17 += 1)
                        {
                            {
                                var_43 &= 6407;
                                var_44 = (((arr_42 [i_2] [i_2] [i_3] [i_15] [i_16] [i_16] [i_15]) - var_6));
                                arr_55 [i_2] [i_17] [i_2] [i_16] [i_17] [i_16] [i_2] &= (((arr_45 [i_17] [i_3] [i_15 - 3] [i_16] [i_17]) ? (arr_39 [i_2] [i_15] [i_15 + 1] [i_2] [i_3] [i_17] [i_3]) : (((arr_39 [i_2] [4] [i_2] [i_2] [i_2] [i_2] [i_2]) ? 0 : (arr_49 [i_16] [i_3] [i_3] [i_16])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 12;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 14;i_19 += 1)
                        {
                            {
                                arr_62 [i_3] [i_3] [i_19] [i_3] [i_19] = ((((24372 ? var_13 : var_19)) + 1));
                                arr_63 [i_2] [i_2] [i_19] [i_2] [i_2] = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
