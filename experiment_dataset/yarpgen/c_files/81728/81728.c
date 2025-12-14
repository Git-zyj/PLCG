/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_18 = (min(var_18, ((((arr_3 [i_0]) ? var_2 : (arr_2 [i_1] [i_1] [i_2 + 1]))))));
                        var_19 = (min(var_19, (~var_16)));
                    }
                    var_20 *= (arr_8 [i_0] [i_1 - 2] [i_2]);
                    arr_10 [5] [i_1] [i_0] = -var_15;
                }
            }
        }
    }
    var_21 = var_0;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            {

                /* vectorizable */
                for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_22 -= arr_13 [i_6];
                        var_23 = (((arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) << (((arr_14 [i_4]) - 8808148547558965166))));
                        var_24 = (max(var_24, (arr_14 [i_4])));
                        var_25 = (min(var_25, (arr_14 [i_5])));
                        var_26 ^= (((arr_13 [i_5]) * (arr_11 [6] [i_5])));
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_27 = (arr_17 [i_4] [i_5] [i_6]);

                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            arr_27 [1] [i_5] [i_4] [i_5] [6] = (((arr_21 [i_9] [i_5] [i_9 + 1] [i_5]) ? (arr_21 [i_9] [i_9] [i_9 + 1] [i_8]) : (arr_26 [i_9] [i_4] [i_9 + 2] [i_4] [i_9 + 1])));
                            var_28 = ((!(arr_26 [i_9 + 1] [i_4] [i_9] [i_9] [i_9])));
                        }
                        for (int i_10 = 3; i_10 < 17;i_10 += 1)
                        {
                            var_29 = -3616086698758005818;
                            var_30 = (arr_26 [i_10 - 1] [i_4] [i_10 - 1] [i_4] [i_10 + 1]);
                        }
                        arr_31 [i_4] [i_4] [i_6] [12] = (arr_19 [6] [i_4] [i_6] [i_8] [i_8] [i_8]);
                        var_31 = (arr_17 [i_4] [i_8] [13]);
                        var_32 = 181;
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_33 -= (((arr_21 [i_4] [i_5] [i_6] [i_11]) ? 72 : (((((arr_23 [i_11] [i_11]) < (arr_12 [i_11])))))));
                        var_34 = (arr_13 [i_11]);

                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            var_35 = (((arr_28 [i_12] [i_11] [i_6] [i_4] [i_4]) >= ((~(arr_19 [i_11] [i_4] [i_11] [i_11] [i_11] [i_11])))));
                            arr_38 [i_4] [i_5] [i_6] [i_4] [i_12] = var_10;
                        }
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            var_36 = (108 > -49);
                            var_37 -= (arr_22 [i_4] [i_5] [i_13] [i_11]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 17;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_38 -= ((-(arr_14 [i_15])));
                                arr_47 [i_4] [i_4] [i_5] [i_5] [i_6] [16] [13] = (((arr_19 [i_5] [i_4] [i_6] [i_14 - 3] [i_14 + 1] [i_15]) ? ((8527 ? (arr_29 [i_4] [i_4] [i_4] [i_4] [1]) : 183)) : var_8));
                                var_39 = (arr_43 [i_14 + 1] [i_14 - 2] [i_14] [i_14 + 1]);
                                var_40 = (~(arr_42 [i_4] [i_14 - 1] [i_14] [i_14]));
                                var_41 ^= (((arr_25 [i_5] [i_14 - 1] [i_14 - 1] [i_14 - 3] [i_14 - 3]) && var_4));
                            }
                        }
                    }
                    var_42 ^= ((!(arr_21 [i_4] [i_5] [i_6] [i_6])));
                }
                for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 16;i_18 += 1)
                        {
                            {
                                var_43 = (arr_14 [i_18]);
                                var_44 = (min(var_44, (min(var_1, ((189 ? 48 : -70))))));
                                var_45 -= ((min(((((arr_39 [17] [i_5] [17] [i_17] [i_18]) <= (arr_40 [i_18 + 1] [i_17] [0] [i_5] [i_4])))), (arr_55 [i_18 + 1] [i_18] [i_18 + 1] [i_18 + 1] [i_18 + 2] [i_18 + 2] [i_18]))));
                                var_46 = 37;
                                var_47 = (~-var_5);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 3; i_19 < 16;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 18;i_20 += 1)
                        {
                            {
                                var_48 *= (arr_12 [10]);
                                arr_63 [7] [i_5] [i_16] [7] [i_4] [i_20] = (min(var_16, (((-(arr_28 [i_4] [i_5] [i_19 + 2] [8] [i_20]))))));
                            }
                        }
                    }
                    var_49 = (arr_59 [i_4] [5] [i_4] [i_5] [i_5] [i_16] [i_16]);
                }
                var_50 *= (arr_20 [i_4] [0] [i_4]);
                arr_64 [i_4] [i_5] [i_4] = ((((arr_51 [6] [i_5] [i_5] [i_5]) != (arr_51 [i_4] [i_5] [i_5] [i_4]))));
            }
        }
    }
    var_51 = ((-(((var_11 ? 72 : var_8)))));
    #pragma endscop
}
