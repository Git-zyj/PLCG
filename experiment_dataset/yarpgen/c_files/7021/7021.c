/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_8 [1] = 189498461;
                var_10 = (min((((((arr_1 [i_0 + 1]) ? (arr_3 [i_1]) : 8388607)) | (arr_1 [i_0 + 1]))), var_5));
                arr_9 [i_1] [i_1] = var_7;

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_2 + 1] [i_3] [i_2] [i_2 + 1] = (arr_13 [i_0 - 1] [i_2 - 1] [10]);
                        var_11 = (((((arr_5 [i_3] [1]) <= var_1)) ? -117 : var_9));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_18 [i_4] [i_2 + 2] [i_1] [0] = 117;
                        arr_19 [i_4] [i_4] [i_2] [i_4] = -117;
                        arr_20 [i_0] [i_1] = ((189498461 + (((max((((var_1 == (arr_17 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])))), var_2))))));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_25 [i_5] [i_1] [i_0] = 65535;
                        var_12 *= ((max(88, ((122 / (arr_16 [i_0] [i_1] [i_2 - 2] [i_5]))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_13 = (arr_4 [i_0 + 1] [2] [i_2 - 2]);
                        var_14 += 65535;
                    }
                    var_15 = (min(var_15, var_2));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {

                    for (int i_10 = 3; i_10 < 10;i_10 += 1)
                    {
                        var_16 = (((var_6 >= 65535) | var_7));
                        arr_39 [0] [1] [i_9] [i_9] = (min((arr_37 [i_9] [i_10 - 3] [i_10 - 3] [i_10 - 2]), (1 + var_6)));
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        arr_42 [i_7] [i_7] [i_7] [i_7] [i_8] [i_8] = var_6;

                        for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                        {
                            arr_47 [5] [i_8] [i_8] [i_11] [i_8] = (((max((arr_36 [2] [i_8] [2] [i_8] [i_8] [2]), 20552)) & (((arr_22 [i_12] [13] [i_9] [i_8] [i_7]) ? 65530 : (arr_21 [i_7] [i_11] [3] [i_7])))));
                            var_17 ^= ((((((var_5 ? 0 : var_2)))) ? var_2 : (arr_22 [i_7] [14] [i_9] [i_7] [14])));
                        }
                        for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                        {
                            arr_51 [i_8] = (min(((~(arr_46 [1] [5] [i_9] [3] [9] [i_7]))), 106));
                            arr_52 [i_7] [i_7] [i_8] [i_9] [i_11] [i_13] [i_13] = var_8;
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                        {
                            arr_55 [i_14] [i_11] [i_11] [i_9] [i_8] [i_8] [8] = ((var_3 != (0 / -8762029383396820637)));
                            arr_56 [i_8] [i_8] [i_11] = ((-((~(arr_50 [i_14] [i_11] [i_9] [i_8] [i_8] [i_7])))));
                            var_18 = ((min(((var_7 ? var_9 : var_8), (arr_48 [i_7])))));
                            arr_57 [i_7] [i_11] [i_9] [6] [i_7] = (21 + var_4);
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                        {
                            var_19 -= ((var_3 ? ((min(var_9, (arr_3 [1])))) : ((max((arr_41 [i_8] [i_15]), (arr_0 [i_9] [i_8]))))));
                            var_20 = var_0;
                        }
                    }
                    for (int i_16 = 3; i_16 < 10;i_16 += 1)
                    {
                        var_21 = var_2;
                        var_22 ^= -125;
                        var_23 = (+((var_3 ? (1 - 2963610473) : (((min(var_9, 65513)))))));
                        var_24 = (min(var_7, ((((arr_33 [i_16] [i_8]) <= 4294967295)))));
                    }
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        arr_65 [i_17] [i_17] [i_9] [10] [i_7] = (arr_26 [i_17] [i_9] [i_8] [i_7]);
                        var_25 = 27;
                        arr_66 [i_7] [i_8] [i_8] [i_7] [i_17] = ((var_2 && (((((var_3 ? -6382374664756967160 : (arr_53 [i_7] [i_8] [9] [i_7]))) + var_4)))));

                        for (int i_18 = 1; i_18 < 10;i_18 += 1)
                        {
                            arr_70 [i_18] [i_18] [i_18 - 1] = (((((arr_0 [6] [i_7]) ? (min((arr_40 [i_7] [i_8] [i_9] [1]), 0)) : (((arr_63 [i_7]) ? 6624 : var_3)))) + 8));
                            var_26 += ((22906 != (max(var_9, var_3))));
                            arr_71 [i_18] = ((97 ? var_5 : (arr_50 [i_18] [1] [i_18] [i_18] [i_18 + 1] [5])));
                        }
                    }
                    var_27 += (arr_40 [i_7] [i_8] [i_8] [i_9]);
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 11;i_20 += 1)
                        {
                            {
                                arr_78 [5] [i_8] [i_8] [1] [i_8] = (((arr_33 [i_20] [i_9]) ? (arr_50 [i_7] [i_7] [i_7] [i_7] [1] [i_7]) : ((1 ? var_9 : (arr_38 [4] [i_8] [i_9] [i_8] [i_7] [5])))));
                                arr_79 [i_20] [i_19] [i_9] [i_8] [i_7] = (((max((max(var_3, var_0)), (((var_4 ? var_2 : var_9))))) + (max(1, (((arr_2 [i_7] [i_8]) ? var_9 : var_0))))));
                            }
                        }
                    }
                    var_28 = ((((min(-var_1, 0))) ? (min((4294967288 / var_1), (arr_33 [i_9] [i_7]))) : (arr_15 [i_7])));

                    for (int i_21 = 0; i_21 < 11;i_21 += 1)
                    {
                        arr_83 [i_21] [i_7] [i_7] = var_9;
                        arr_84 [i_7] [i_7] [i_7] [i_7] [i_7] = (max(90, 20));
                    }
                }
            }
        }
    }
    #pragma endscop
}
