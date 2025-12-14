/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (((((var_1 >> (var_2 - 106)))) ? -var_5 : (max(((var_1 ? 121248021 : var_0)), -var_7))));
    var_11 = (max(((max(var_2, (max(var_4, var_0))))), var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = (!-2953757292);
                var_13 = ((-(arr_5 [i_1 - 4])));
                var_14 = (((arr_2 [i_0]) + (arr_3 [i_0] [i_1 - 1])));
            }
        }
    }
    var_15 |= var_1;

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_16 = ((((((arr_3 [i_2] [i_2]) - var_0))) != var_4));
        var_17 = (min(var_17, var_1));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 8;i_7 += 1)
                        {
                            var_18 |= (((((arr_15 [6] [i_4] [i_5]) <= var_1)) ? ((var_0 ? var_5 : var_6)) : var_5));
                            var_19 = ((((var_7 + 2147483647) << (var_5 - 180853579))));
                        }
                        for (int i_8 = 1; i_8 < 9;i_8 += 1)
                        {
                            var_20 *= (max((arr_5 [i_5]), (~var_4)));
                            var_21 = (max(121248021, (arr_21 [i_3] [1] [i_5] [i_5 + 1] [i_8 + 1])));
                            var_22 = (-121248021 && (arr_22 [i_6] [i_6] [i_5]));
                            var_23 *= (((arr_2 [0]) * (arr_22 [i_5] [i_6] [i_8])));
                            var_24 = ((((((((-2147483647 - 1) ? -20 : 121248021)) / var_7))) * (arr_12 [i_5] [8] [i_3])));
                        }

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_25 = (max(((~(arr_3 [i_3] [i_5 + 1]))), var_4));
                            arr_28 [i_3] [i_4] [i_5 + 1] [i_6] [i_4] = ((var_7 ? (((arr_19 [i_3] [i_4] [i_6] [i_9]) ? ((((var_5 && (arr_11 [i_3]))))) : var_3)) : (((max(var_4, var_7))))));
                            var_26 = (max(((-(arr_19 [i_6] [i_4] [i_5] [6]))), -1854318180));
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 8;i_10 += 1)
                        {
                            var_27 = (arr_7 [i_4]);
                            var_28 ^= ((arr_26 [i_6] [i_6] [i_6] [i_6] [4]) ? var_5 : (arr_26 [i_10] [i_10] [i_10] [i_10] [2]));
                            var_29 = (2354032445417220509 && 4049103685);
                            var_30 = (min(var_30, var_5));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_31 = ((var_2 % (arr_12 [7] [i_5] [i_5 + 2])));
                            var_32 = (arr_15 [i_5] [i_5 + 1] [i_5 - 1]);
                            arr_33 [i_3] [i_4] [i_5] [i_4] = (arr_23 [i_4]);
                            var_33 = var_3;
                        }
                        for (int i_12 = 3; i_12 < 9;i_12 += 1)
                        {
                            var_34 = ((~(-2147483647 - 1)));
                            var_35 *= (((max(var_0, 2354032445417220509))));
                        }
                    }
                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 7;i_13 += 1)
                    {
                        var_36 = (min(var_36, (var_1 || var_3)));
                        var_37 = (min(var_37, var_7));
                        var_38 = ((-(arr_6 [i_13] [i_5 + 2])));

                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            var_39 = (var_1 != var_0);
                            var_40 = (arr_0 [i_3]);
                        }
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            var_41 = (1 ^ 2147483647);
                            var_42 = (arr_41 [i_5 - 1] [i_13] [i_13] [i_15] [i_4] [i_15] [i_15]);
                        }
                        for (int i_16 = 3; i_16 < 9;i_16 += 1)
                        {
                            var_43 = ((arr_8 [i_5 + 2]) > (arr_14 [i_4]));
                            var_44 = (max(var_44, (arr_46 [i_13 - 2] [i_13 - 2] [i_13 - 2] [i_13] [i_13] [i_13])));
                        }
                        var_45 = (arr_29 [i_4] [i_13] [i_4] [i_4] [i_13] [i_5]);
                    }
                    var_46 -= ((var_4 ? (((~(arr_46 [i_5 - 1] [i_4] [i_4] [i_4] [i_4] [i_3])))) : (((arr_4 [i_4] [i_5 + 1]) | var_8))));
                    var_47 = var_2;
                    var_48 = (max(var_48, (((((arr_45 [7] [i_5 - 1] [i_5 - 1]) != (arr_24 [8] [i_5] [i_5] [i_5 + 1] [i_5] [i_5 - 1])))))));
                    var_49 = var_4;
                }
            }
        }
        var_50 |= (max(((((arr_23 [i_3]) || var_8))), (arr_23 [i_3])));
        arr_47 [i_3] = (max(2147483647, (arr_22 [i_3] [7] [i_3])));
    }
    #pragma endscop
}
