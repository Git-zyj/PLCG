/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0 + 1] [i_0]);

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = var_12;
            arr_6 [i_1] = (((arr_3 [i_1]) / var_7));
            arr_7 [i_1] [i_1] = (((!((max((arr_1 [i_0] [i_0 + 1]), (arr_0 [i_1] [i_0 + 1])))))));
        }
        arr_8 [i_0 + 1] = (((((max(var_17, (arr_4 [i_0] [i_0]))))) ? (var_12 * var_15) : ((((((var_12 ? (arr_3 [16]) : var_0))) ? (arr_3 [18]) : (arr_4 [i_0] [i_0 + 1]))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_24 [i_5] [i_2] [i_4] [i_5] = 232;
                                arr_25 [i_2] = var_14;
                                arr_26 [2] [i_3] [i_3 + 1] [i_3] [i_3] [i_5] [i_6] &= var_0;
                            }
                        }
                    }
                    arr_27 [i_2] [i_3] = (((arr_15 [i_2 + 1] [i_2] [3] [i_3 - 1]) ? (arr_15 [i_2 - 1] [i_2] [i_4] [i_3 - 4]) : (arr_15 [i_2 - 1] [i_2] [5] [i_3 - 4])));
                }
            }
        }
        arr_28 [i_2] [i_2] = (((arr_19 [i_2] [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1]) | (arr_19 [i_2] [i_2 + 1] [17] [i_2 + 1] [i_2] [i_2])));

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                arr_34 [i_2] [i_7] [0] [i_8] = (((arr_32 [i_8] [10]) << (var_8 - 94)));
                arr_35 [i_2] = 2147483647;
                arr_36 [i_2] = (arr_11 [i_2] [i_2 + 1]);
                arr_37 [i_2] [i_7] = (arr_13 [i_2] [i_7]);

                for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    arr_41 [15] [i_2] [i_8] [i_8] = (arr_10 [i_2]);

                    for (int i_10 = 3; i_10 < 20;i_10 += 1)
                    {
                        arr_44 [i_9] [i_7] [i_7] [i_7] [i_9] [i_7] = 1273619398;
                        arr_45 [i_2] [i_2] [i_8] [i_9] [i_10 + 1] = (4095 == var_16);
                        arr_46 [1] [i_2] [i_8] [i_2] [i_2] = ((((((arr_39 [i_2]) % (arr_23 [i_2])))) & (var_15 * -1273619398)));
                    }
                    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        arr_49 [i_11] [i_9] [i_2] [i_2] [i_2] = (1273619414 + -1273619398);
                        arr_50 [i_2] = ((((((arr_22 [i_7] [i_9] [i_8] [i_7] [i_2] [i_2]) ? (arr_43 [12] [i_7] [i_8] [2] [i_2]) : (arr_43 [i_2 + 1] [13] [13] [14] [i_2])))) ? ((0 ? 118983196 : var_16)) : var_7));
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                    {
                        arr_54 [i_2] [i_7] [i_2] = 255;
                        arr_55 [i_2] [i_7] [i_2] [i_9] [i_12] = ((-(arr_15 [i_2 + 1] [i_2] [i_2] [i_2])));
                    }
                    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                    {
                        arr_58 [i_2] [i_7] [i_8] [i_2] [i_13] = ((-(arr_10 [i_2])));
                        arr_59 [i_2] [i_7] [i_7] [20] [i_13] = ((!(arr_19 [i_13] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_7])));
                    }
                    arr_60 [i_2] [i_2] [i_8] [i_9] [i_2] = var_9;
                    arr_61 [i_2] [i_7] [i_7] [i_8] [i_8] [i_7] = (((~4190208) ? 127 : (arr_40 [i_2 - 1])));
                }
                for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
                {
                    arr_65 [i_7] [i_2] = (var_2 ? ((var_8 ? var_15 : var_0)) : (arr_47 [i_14] [i_7] [i_8] [i_8] [i_7] [i_8] [i_14]));
                    arr_66 [i_2 - 1] [i_2] [i_14] = ((arr_47 [i_2] [i_14] [i_2 - 1] [i_14] [i_2] [i_14] [i_14]) ? -var_0 : var_3);
                }
            }
            arr_67 [i_7] [i_2] = (~var_11);
        }
        for (int i_15 = 2; i_15 < 21;i_15 += 1)
        {
            arr_70 [i_2] = (arr_57 [i_15 - 2] [i_15 - 2] [i_15] [i_15 - 1] [i_2] [i_15 - 2]);
            arr_71 [i_2] = ((((1116892707587883008 ? var_0 : (arr_39 [i_2]))) / var_8));
        }
    }
    var_19 = ((4261412864 ? 1273619374 : 0));
    #pragma endscop
}
