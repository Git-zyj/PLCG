/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_13 += (-2147483647 - 1);
                    var_14 *= (((-30928 + 2147483647) >> (618954850 - 618954833)));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_15 = (max(var_15, 30928));

                        for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                        {
                            var_16 *= (arr_5 [i_0]);
                            arr_11 [i_0 + 1] [i_1] [i_2] [i_3] [i_1] [i_4 + 1] = ((30928 + (max(1, 30927))));
                            arr_12 [i_0 - 1] [i_1] [i_0] [i_0] [i_0 - 1] [i_0 - 1] = var_10;
                            var_17 += ((~(arr_1 [i_0 + 1] [i_0 - 1])));
                        }
                        for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                        {
                            arr_15 [22] [i_1] [i_3] = (max(var_9, -19502));
                            var_18 = -30950;
                            var_19 ^= ((~(arr_0 [i_5 + 1])));
                            arr_16 [i_0] [i_1] [21] [i_1] [1] [24] = ((!(-64 | 4040747501)));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_19 [i_1] [i_1] [i_1] [i_3] [i_6] = ((3616930498 >> (-var_2 - 3778520299)));
                            var_20 = (arr_5 [i_0 + 1]);
                            arr_20 [i_0] [i_1] [i_3] [i_6] = ((1 ? -1389942232409157090 : 254219794));
                            arr_21 [i_6] [i_6] [i_1] [i_6] [18] = (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1]);
                        }
                        for (int i_7 = 2; i_7 < 24;i_7 += 1)
                        {
                            var_21 = (max(var_21, ((((((arr_6 [i_0 + 1] [i_0] [i_0 + 1]) || 44)) && (arr_6 [i_0 + 1] [i_0] [i_0 - 1]))))));
                            var_22 += (((arr_3 [2]) >= (arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [18])));
                            var_23 = (arr_10 [i_3] [i_1] [i_2] [i_3] [21] [i_7]);
                        }
                    }
                }

                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                arr_34 [i_1] = ((((arr_25 [i_9 + 2] [i_9 + 3] [i_9 - 1] [i_9]) ? -1478270836 : (arr_4 [i_9 + 2] [i_9 + 3] [i_9 + 1] [i_9]))));
                                arr_35 [i_0] [i_1] [i_1] [i_9 + 3] [i_10] [i_10] = (~((min(19502, -19473))));
                                arr_36 [i_0] [i_1] [i_1] [i_1] [i_10] = var_5;
                                var_24 ^= (max(var_0, 19502));
                                var_25 = 1366660960;
                            }
                        }
                    }
                    var_26 += 30928;
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                {
                    var_27 = (((arr_27 [i_0 - 1] [i_0 - 1]) ? (((-30948 || (arr_1 [i_0] [i_1])))) : -30928));

                    for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                    {
                        arr_43 [i_12] [i_1] [i_1] [i_0] = (((arr_37 [i_0] [i_1] [i_11]) ? 8050 : (990327716 >= var_5)));

                        for (int i_13 = 1; i_13 < 21;i_13 += 1) /* same iter space */
                        {
                            arr_48 [20] [i_11] [i_11] [i_11] [i_0] &= (~-1738126638);
                            var_28 = 3304639579;
                            var_29 = ((-(arr_38 [i_0 + 1] [i_0 + 1] [i_0 - 1])));
                        }
                        for (int i_14 = 1; i_14 < 21;i_14 += 1) /* same iter space */
                        {
                            var_30 *= ((990327693 != (arr_9 [i_14] [i_14] [i_14 + 1] [i_14 - 1] [i_0 + 1] [i_0 + 1])));
                            arr_52 [i_1] [i_14] = (arr_28 [i_14 + 3] [4] [i_0] [i_0 + 1] [i_0] [i_0]);
                        }
                        for (int i_15 = 1; i_15 < 23;i_15 += 1)
                        {
                            var_31 = (((arr_33 [i_0] [i_0 + 1] [i_15 - 1]) ? (arr_33 [5] [i_0 - 1] [i_15 + 1]) : (arr_33 [i_0 - 1] [i_0 - 1] [i_15 + 1])));
                            var_32 = (arr_0 [i_11]);
                        }

                        for (int i_16 = 1; i_16 < 23;i_16 += 1) /* same iter space */
                        {
                            arr_58 [1] [i_1] [i_1] [i_1] = 0;
                            var_33 = (min(var_33, -30917));
                            var_34 = (arr_23 [i_0] [i_1] [i_12] [i_12] [i_16 + 2]);
                            var_35 = (((-1389942232409157090 + 9223372036854775807) >> (((arr_28 [i_0 - 1] [i_1] [i_16] [i_16 - 1] [i_16] [6]) + 55))));
                        }
                        for (int i_17 = 1; i_17 < 23;i_17 += 1) /* same iter space */
                        {
                            arr_61 [i_0] [i_0] [i_0] [i_1] = (32716 % 50542);
                            arr_62 [i_0] [9] [i_1] [i_11] [i_1] [1] = (arr_13 [i_17 + 1] [i_17] [i_17] [i_17] [i_12] [15] [i_12]);
                            var_36 = var_1;
                        }
                        for (int i_18 = 4; i_18 < 24;i_18 += 1)
                        {
                            var_37 ^= 990327693;
                            arr_65 [i_0] [i_1] [i_0] [i_0 + 1] = ((2147483647 || (arr_55 [i_0 + 1] [4] [i_18 + 1] [17] [8] [8] [i_0 + 1])));
                        }
                        for (int i_19 = 0; i_19 < 25;i_19 += 1)
                        {
                            var_38 = -3250;
                            var_39 = (~(arr_37 [i_0 + 1] [i_0 + 1] [i_0 - 1]));
                            arr_68 [19] [i_1] [i_1] [21] [i_1] [i_1] = 30928;
                        }
                    }
                    for (int i_20 = 0; i_20 < 25;i_20 += 1) /* same iter space */
                    {
                        arr_71 [2] [i_11] [i_11] [i_0] &= (-2147483647 - 1);
                        var_40 = (15 + 990327688);
                        var_41 = (max(var_41, (arr_33 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                    }
                    for (int i_21 = 0; i_21 < 25;i_21 += 1) /* same iter space */
                    {
                        var_42 = 16383;
                        arr_74 [i_11] [17] [i_11] [i_1] = 15;
                    }
                }
                for (int i_22 = 0; i_22 < 25;i_22 += 1) /* same iter space */
                {
                    arr_78 [i_0] [i_1] [i_0] [i_0] = ((((arr_17 [i_1] [i_0 + 1] [7] [i_0]) ? -3250 : (arr_17 [i_0] [i_0 + 1] [i_1] [i_0]))));

                    for (int i_23 = 0; i_23 < 25;i_23 += 1)
                    {
                        var_43 = (~30928);
                        arr_82 [i_1] = 0;
                    }
                }
                for (int i_24 = 0; i_24 < 25;i_24 += 1) /* same iter space */
                {
                    var_44 -= ((~(arr_76 [i_24])));
                    var_45 = (max((31161 & 3304639579), var_4));
                }
            }
        }
    }
    var_46 ^= var_3;
    var_47 = -30917;
    var_48 = 9;
    #pragma endscop
}
