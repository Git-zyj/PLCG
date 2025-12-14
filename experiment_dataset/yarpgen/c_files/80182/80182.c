/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_19 = -7496786389648910250;
        arr_2 [i_0] [i_0] = 8689;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_0] = (var_11 - 61602);
            arr_7 [i_1] &= (((arr_1 [i_0 - 3]) >= -2233499148001937442));
        }
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_19 [i_4] [i_5] [i_4] [i_4] = (arr_10 [i_2] [i_5]);

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_20 = ((61602 ? ((((2326386885 ? var_17 : 61602)) + 79)) : 126));
                            arr_22 [i_2] [i_3] [i_3] [i_4] [i_3] [i_5] = (-((-(((arr_17 [12] [i_4] [i_5] [6]) ? var_4 : (arr_17 [12] [8] [16] [13]))))));
                        }
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            var_21 = (1745791395 ? (arr_1 [i_2]) : (arr_12 [i_4] [7] [i_7]));
                            arr_25 [i_2] [i_5] [13] = (arr_0 [i_5]);
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_22 = ((((-(((arr_4 [i_2] [i_5] [i_5]) & (arr_17 [i_3] [10] [i_5] [12]))))) - (arr_11 [i_4] [i_4] [i_4])));
                            var_23 += 99;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, (((((arr_14 [i_2] [i_2] [i_2]) == (arr_1 [i_2])))))));
                            var_25 = ((~(arr_27 [i_2] [i_3] [i_3] [i_2 - 1] [i_9])));
                            arr_31 [i_5] [i_5] [i_5] [i_4] [i_3] [i_5] = ((((((arr_30 [i_2] [2] [i_4] [i_5] [i_9] [2] [i_5]) & 3933))) ? (arr_30 [i_9] [i_5] [i_2] [i_5] [i_2] [i_2] [i_2 - 2]) : (arr_15 [1] [i_3] [i_4] [i_2 + 1])));
                            var_26 = (max(var_26, ((((arr_27 [i_2] [i_2 - 1] [i_3] [i_5] [i_2]) / (arr_27 [4] [i_2 - 2] [i_4] [i_9] [i_4]))))));
                            arr_32 [i_9] [i_5] = ((~(arr_13 [i_2 - 2])));
                        }

                        for (int i_10 = 1; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_10] [12] [i_4] [i_5] [i_2] = (max((arr_13 [13]), (2797362299 >= 99)));
                            arr_36 [i_2 - 2] [i_2 - 2] [i_4] [i_5] [i_4] [12] [i_5] = 5430;
                        }
                        for (int i_11 = 1; i_11 < 16;i_11 += 1) /* same iter space */
                        {
                            arr_39 [i_2] [i_2] [i_2] [i_5] = (arr_14 [i_2] [i_2] [i_2]);
                            var_27 = (-((-((20 ? 60094 : 0)))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            arr_44 [i_2] [i_3] [i_5] [i_5] [i_12] = ((-((3366093355 >> (((arr_10 [i_2 + 1] [i_4]) - 41529))))));
                            var_28 = (arr_43 [i_2 + 1] [i_3] [i_3] [16] [i_5] [i_12] [i_12]);
                        }
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            var_29 = -2;
                            arr_47 [i_13] [i_3] [i_5] [i_5] [i_3] [4] = (max((max((arr_37 [i_2 + 1] [i_13 - 1] [i_13 - 1]), (arr_46 [i_2 - 2] [i_3] [i_4] [i_13 - 1] [i_13 - 1]))), (min((arr_46 [i_2 - 2] [i_13] [i_13] [i_13 - 1] [i_13 - 1]), (arr_37 [i_2 - 1] [i_3] [i_3])))));
                        }
                    }
                }
            }
        }
        arr_48 [i_2] = (((arr_4 [i_2] [i_2] [i_2 - 2]) > -60087));
    }
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        arr_51 [i_14] = 571827099;
        arr_52 [i_14] = (-(7 != 2797362299));
    }
    var_30 = ((min((29433 * var_14), var_7)));

    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        var_31 = ((4135379492319620759 ? (arr_3 [i_15]) : (((arr_3 [i_15]) / (arr_3 [i_15])))));
        arr_55 [12] [12] = ((((((arr_54 [i_15] [i_15]) ? (((1222765900 ? (arr_5 [5] [5]) : 1040811410))) : (arr_54 [i_15] [i_15])))) & (((arr_1 [i_15]) ? ((5449 % (arr_3 [i_15]))) : (arr_3 [i_15])))));
        var_32 = (min((((arr_1 [i_15]) | 5449)), -646481659));
        arr_56 [6] = 60096;
    }
    #pragma endscop
}
