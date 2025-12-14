/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [18] [i_1] [i_0] = (arr_3 [18] [i_1 + 3] [i_2 + 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 *= ((var_6 ? ((max(var_6, (((arr_6 [i_1] [i_2] [i_3] [i_2]) % var_9))))) : ((~(arr_5 [i_0] [i_4 - 2])))));
                                arr_13 [i_0] = (((~var_6) ? (((4160749568 ? (max(var_9, 19)) : 107))) : (9727217839812499458 % 71)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_19 = (min(var_19, (arr_0 [i_0])));
                        arr_16 [i_0] [i_0] [1] [i_0] [i_0] = max((((12 + (1424428777 - var_2)))), ((157328470 * (arr_5 [i_1 - 1] [i_2 - 2]))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    var_20 = ((45071 ? (max((max(var_14, (arr_21 [i_8] [i_8] [i_7]))), var_13)) : ((((arr_21 [i_6] [i_6] [i_7]) * (arr_15 [14] [i_7] [i_7] [i_8] [i_8]))))));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            var_21 = (min(var_21, var_12));
                            var_22 = ((4160749568 ? 4160749568 : -13404));
                            arr_28 [i_10] [i_7] [i_9] [i_8] [i_7] [i_6] = var_4;
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            arr_32 [i_6] [i_7] [i_11] = ((~(arr_0 [i_6])));
                            arr_33 [i_6] [i_7] [i_11] = (((arr_27 [i_11] [i_9] [i_7] [i_7] [i_6]) ? var_9 : (arr_12 [i_6] [12] [i_7] [i_8] [i_8] [i_9] [i_11])));
                        }
                        var_23 = (arr_30 [i_7] [17] [i_8]);
                        var_24 = (arr_4 [i_9]);
                        arr_34 [i_6] [i_7] [i_8] [i_7] = (((arr_0 [i_6]) ? 85 : (arr_10 [i_9] [i_7] [i_8] [i_7] [19] [i_7])));
                    }
                }
            }
        }
    }
    var_25 = ((134217754 >> (min((((4160749578 ? -84 : 4160749554))), (~-1)))));
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        for (int i_13 = 4; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 13;i_14 += 1)
            {
                {
                    var_26 *= (min((arr_29 [4] [8] [i_14] [i_13] [i_14 + 1] [i_13] [i_12]), (2 * 0)));
                    var_27 = (((arr_20 [i_12]) % ((max((arr_31 [i_12] [i_13 - 3] [i_13 - 1] [i_13] [i_13] [i_12]), (((arr_7 [i_13]) / 191)))))));

                    for (int i_15 = 4; i_15 < 12;i_15 += 1)
                    {
                        var_28 = (max(var_28, ((((min((var_11 + var_13), (arr_40 [i_15 + 2] [i_12]))) + var_9)))));
                        var_29 = (min(134217719, (min(1705699997, (1699490902 - 134217695)))));
                    }

                    /* vectorizable */
                    for (int i_16 = 1; i_16 < 11;i_16 += 1) /* same iter space */
                    {
                        arr_50 [i_12] [i_12] [i_12] [7] [i_14 - 3] [i_16] = arr_46 [4] [10] [i_12] [i_13 - 1];
                        var_30 = (((arr_30 [i_12] [i_14 + 1] [i_14]) ? var_15 : (!-113)));
                    }
                    /* vectorizable */
                    for (int i_17 = 1; i_17 < 11;i_17 += 1) /* same iter space */
                    {
                        var_31 = arr_3 [i_12] [i_13 - 1] [12];
                        var_32 = (arr_38 [i_17 + 3]);
                        arr_55 [i_17] [i_14] [i_13] [i_12] [i_12] = ((!(arr_52 [i_13 - 4] [i_13 + 2] [i_14 + 1] [i_17 + 3] [i_17 + 1])));
                        var_33 *= ((-(arr_10 [i_17 - 1] [i_12] [i_17 + 3] [14] [12] [i_17])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
