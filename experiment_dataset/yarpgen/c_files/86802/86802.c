/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(1, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_17 = ((+((((9223372036854775807 / var_2) >= ((max((arr_5 [i_1]), 240))))))));
                    var_18 = (min(var_18, (arr_2 [i_0] [6])));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_1] [i_1] [i_1 - 1] [i_1] = 14528;
                    var_19 = 8735;
                    arr_12 [i_1] = var_11;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_20 = (arr_10 [i_0] [i_3] [i_1] [i_5]);
                                var_21 -= var_15;
                                var_22 = (arr_15 [i_0] [i_1] [i_3] [1] [10]);
                                var_23 = (arr_17 [i_1] [i_1 + 1]);
                                var_24 = (max(var_24, (arr_1 [3] [i_4])));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_25 = ((var_13 ? (max(var_0, (min(var_3, (arr_1 [i_6] [i_7]))))) : ((max(1148416217698708719, (arr_27 [i_0] [i_0] [i_0] [i_0] [i_1 - 2] [i_1]))))));
                                var_26 = -8723;
                                var_27 = (arr_18 [i_8] [i_1] [i_7] [13] [i_8]);
                                var_28 = (min(var_28, ((((arr_6 [i_0] [1] [1] [8]) && ((min(((max(8742, var_12))), (max(var_7, 63392))))))))));
                            }
                        }
                    }
                    var_29 -= ((~(((((((arr_20 [1] [i_0]) + (arr_4 [5] [i_6])))) || ((((arr_19 [i_0] [i_0] [i_1] [4]) ^ 24))))))));
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_30 = (max(var_30, -1966));
                                var_31 = var_0;
                                arr_35 [i_1] [i_1 - 1] [i_9] [i_10] [i_11] = ((((min(-1950, var_13) + (arr_0 [1] [10])))));
                            }
                        }
                    }
                }
                var_32 ^= var_8;
                /* LoopNest 3 */
                for (int i_12 = 1; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            {
                                var_33 = (max(var_33, (arr_1 [i_12 + 1] [i_13 - 2])));
                                var_34 = (max(var_34, (arr_16 [i_14] [i_12] [i_1 + 1] [i_0])));
                                var_35 = (max(((-(arr_19 [i_0] [i_0] [i_12 - 1] [i_1]))), (arr_36 [i_14] [i_12 + 1] [i_12 + 1])));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_15 = 3; i_15 < 14;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 16;i_17 += 1)
                        {
                            {
                                var_36 = (max(var_36, ((max(((((~(arr_7 [i_17]))) << (var_6 - 45116))), ((max(var_6, ((min(-1953, 86)))))))))));
                                arr_50 [i_1] [i_1] [i_1] [i_15] [i_1] [i_16] [i_17] = (((arr_43 [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 1]) ? (max((((var_11 ? 1970 : var_3))), (~-113684295361643488))) : (arr_41 [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_15 - 3] [i_15 + 2] [i_15 - 2])));
                                var_37 = ((arr_4 [i_16] [i_17]) & ((max((arr_29 [i_1] [i_1] [i_1 - 2] [i_1 - 2]), (arr_38 [i_1 - 1] [i_1 - 1] [6] [i_1 - 1])))));
                                var_38 = ((var_14 & (min((~var_4), 15))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
