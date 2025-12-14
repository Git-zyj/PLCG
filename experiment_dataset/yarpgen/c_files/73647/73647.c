/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_1 [6]))) + ((~((1 >> (((arr_1 [i_0]) - 178))))))));
        var_10 = ((~(((arr_1 [i_0]) + -var_9))));
        arr_4 [i_0] = ((((((arr_1 [6]) ? ((min((arr_1 [i_0]), var_8))) : var_5))) ? -1490844421 : (min(((~(arr_1 [i_0]))), var_2))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_2] [i_2] = ((((!(~var_1))) ? 3 : ((max(((min((arr_7 [0] [0] [i_2]), 0))), ((var_5 ? 65527 : (arr_7 [i_2] [i_1] [8]))))))));
                    arr_12 [i_2] [7] [i_2] = 2491663678;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_11 += arr_5 [i_0] [i_0] [i_0];
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = ((0 | ((~(arr_6 [8] [i_1 - 1] [i_2])))));
                                arr_20 [i_0] [i_1] [i_2] [i_2] [i_4] = ((((((((0 - (arr_17 [1] [i_1] [i_1] [i_2] [7])))) ? 167 : (arr_13 [i_3] [i_1 + 1] [i_1 + 1] [i_3])))) >= (((((var_8 ? var_6 : (arr_9 [i_2] [i_2])))) ? var_6 : (arr_0 [i_3] [i_1])))));
                            }
                        }
                    }
                    arr_21 [i_0] [i_2] = (((arr_2 [i_1]) >> ((((var_8 << (((arr_1 [i_1 + 3]) - 174)))) - 139234))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_12 = (min(var_12, (arr_16 [i_5] [10] [1] [i_5])));

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_27 [i_6] = arr_17 [i_5] [1] [i_5] [i_6] [i_6];
            var_13 = (min(var_13, (arr_9 [i_5] [i_6])));
            var_14 = var_9;

            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                arr_32 [i_6] [8] = (max((!var_1), ((var_8 + (arr_0 [i_6] [i_7 - 1])))));
                var_15 ^= min(65527, (max((arr_0 [i_7 - 1] [i_7 - 1]), (arr_22 [8]))));
                arr_33 [i_5] [i_6] [i_6] [i_6] = (max((max((arr_0 [i_5] [i_5]), (arr_8 [i_5] [i_6] [i_5]))), ((((max(var_9, var_6)) >> (-var_0 - 1324746139))))));
            }
            for (int i_8 = 3; i_8 < 8;i_8 += 1)
            {
                arr_36 [i_6] [i_6] [i_5] = ((var_1 / (((2491663683 - (arr_0 [4] [i_6]))))));
                var_16 = (arr_15 [i_5] [i_6] [i_6] [i_8]);
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_17 += ((var_7 ? (arr_31 [i_5] [1] [8] [i_5]) : (!var_8)));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            arr_43 [i_6] [6] [5] [6] [i_5] [i_6] = (arr_26 [i_6]);
                            arr_44 [i_5] [i_5] [i_6] = (arr_22 [i_5]);
                            arr_45 [i_6] [i_6] [i_6] [i_6] [i_10 + 1] [i_11] = (32768 && 19);
                            arr_46 [i_6] = (arr_42 [2] [2] [i_9] [i_9]);
                        }
                    }
                }
                var_18 = (min(var_18, (arr_15 [2] [i_5] [i_5] [8])));
                arr_47 [i_9] [i_9] [i_6] [i_9] = ((((((arr_10 [i_5] [5] [i_9] [i_9]) ? 65534 : (arr_17 [i_5] [i_5] [i_5] [i_6] [i_5])))) | (((arr_10 [i_5] [i_6] [i_6] [6]) & var_4))));
            }
        }
        for (int i_12 = 2; i_12 < 7;i_12 += 1)
        {
            var_19 = (-((2535793959 ? (arr_17 [i_12] [i_12] [i_5] [i_12] [i_5]) : (arr_8 [7] [7] [1]))));
            arr_50 [i_12] [i_5] [i_12 + 4] = (((((((((!(arr_37 [i_12] [i_12 + 3] [5] [i_5])))) < (arr_14 [i_12 - 1] [i_12] [i_12] [8]))))) <= 4392194868961173633));
            var_20 -= (((arr_48 [i_12 + 2] [i_12 + 2] [i_12 + 3]) * ((max((arr_48 [i_12 + 2] [i_12 - 1] [i_12 + 3]), (arr_48 [i_12 + 2] [i_12 + 4] [i_12 + 4]))))));
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 10;i_15 += 1)
            {
                {
                    arr_59 [i_15] [i_14] [8] = (((((arr_55 [i_15 + 2]) ? (arr_52 [i_15 + 1] [i_15 + 1]) : (arr_53 [i_14]))) & (arr_54 [i_13] [8] [i_15])));
                    arr_60 [i_15] [i_14] [i_15] = (((var_5 < (arr_51 [i_15 - 1]))));
                    arr_61 [i_15] [3] [i_15] = arr_53 [i_13];
                    arr_62 [i_15] [i_14] [i_13] [i_15] = (arr_55 [4]);
                }
            }
        }
    }
    #pragma endscop
}
