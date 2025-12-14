/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, (arr_4 [i_0] [i_0] [i_2 - 1] [i_0])));
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_3] [i_2 + 1] [i_0] [i_0] [i_0]);
                            var_21 = ((29342 == ((-1902056599741974572 ? -15140 : 4642))));
                            arr_10 [i_0] [i_1] [i_1] [i_3] = (arr_4 [i_3] [i_3] [i_2 - 2] [i_3]);
                            arr_11 [i_0] = (max((min(-1902056599741974572, 9670710903144289107)), ((((var_1 ? 0 : -5075004902697525664))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_22 = (-((((arr_8 [i_0] [i_0] [i_1 - 2] [i_4] [i_1 - 2]) ? -5075004902697525664 : (arr_2 [i_0])))));
                            arr_18 [i_5] [i_4] [i_0] [i_0] = arr_8 [i_4] [i_4] [i_0] [i_4] [i_5];
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_23 *= (arr_26 [i_6 - 1] [i_1 + 2] [i_6 + 1] [i_7]);
                                var_24 = (max(var_24, (((-(((!((min((arr_5 [i_1] [i_1]), var_19)))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 4; i_10 < 13;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_25 += (~-2138115950569900128);
                            arr_38 [i_12] [i_9] [i_10] = ((((!(arr_29 [i_9])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                arr_48 [i_9] [i_10] = ((((max((arr_30 [i_9]), (((arr_40 [i_9] [i_9]) ? (arr_28 [i_10]) : (arr_31 [i_9] [i_9])))))) ? (arr_45 [i_9] [i_9] [i_15]) : ((min((arr_40 [i_9] [i_9]), (arr_37 [i_9] [i_9] [i_9] [i_14] [i_9]))))));
                                var_26 += (min((((arr_36 [i_14] [i_10 - 2]) | (arr_36 [i_10] [i_10 - 2]))), (((arr_36 [i_10] [i_10]) ^ (arr_36 [i_14] [i_15])))));
                                arr_49 [i_10] [i_10 - 3] [9] [i_10 - 4] [i_9] [i_10 - 4] [1] = -var_19;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_16 = 3; i_16 < 12;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            {
                                arr_59 [i_9] [i_9] [i_16] = ((+((((arr_41 [i_9] [i_16 + 1] [i_16 + 1]) > (arr_37 [i_9] [i_9] [i_9] [i_17] [i_16 - 1]))))));
                                arr_60 [i_9] [i_9] [7] [i_9] [13] [i_17] = max(((max(var_12, var_6))), var_18);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
