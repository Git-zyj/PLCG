/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_19 |= arr_2 [i_1 - 2] [i_1 - 2];
                        var_20 = (((((arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1] [i_1 + 1]) ? var_13 : (arr_12 [i_0 + 3] [i_1 + 1]))) >= ((((arr_12 [i_0 + 2] [i_1 + 3]) == var_5)))));
                        arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] = ((var_1 ? (((~0) ? ((-(arr_10 [i_0 - 2] [i_1] [i_2] [i_3]))) : (((!(arr_7 [i_2] [2])))))) : (((arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 4]) ? (arr_10 [i_1 + 2] [i_1] [i_1 - 2] [i_1 - 2]) : (arr_11 [i_0] [i_0] [i_0 + 1] [i_0 + 3])))));
                        arr_15 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_0] = arr_1 [i_2];
                        arr_16 [7] [i_1] [i_2] [i_3] [i_2] = max((((-125 || (arr_1 [i_0 + 1])))), -61);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_21 = (min((~97), ((((arr_4 [i_0]) && -62)))));
                                arr_28 [9] [9] [i_5] [i_6] [i_7] = 60;
                                var_22 = (min(var_22, -88));
                            }
                        }
                    }
                    var_23 = var_1;

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_24 = ((~((min((arr_18 [i_0 + 4] [i_0 + 4] [i_5]), (arr_18 [i_0 + 3] [i_4] [i_0]))))));
                        var_25 = (arr_27 [i_0] [i_4] [i_5] [i_8] [i_8]);
                        arr_31 [i_0 + 4] [i_0 + 4] [i_0 - 1] [i_0] [i_0 - 2] = 75;
                    }
                }
            }
        }
        var_26 = ((((max(var_2, 5))) ? var_14 : ((min((arr_25 [i_0 + 4] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0]), (arr_25 [i_0] [i_0] [i_0] [i_0 + 3] [i_0 + 3] [i_0] [13]))))));
    }
    for (int i_9 = 2; i_9 < 19;i_9 += 1) /* same iter space */
    {
        var_27 = (((~var_1) ? ((max((arr_13 [i_9] [i_9] [i_9] [i_9] [i_9]), var_16))) : (((((arr_6 [i_9 + 4] [i_9 - 1]) + 2147483647)) >> ((((min(122, var_7))) - 54))))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        var_28 = (max(var_28, (arr_42 [i_9] [22] [i_11] [i_12])));
                        var_29 = (min(var_29, var_12));
                        var_30 ^= ((-(arr_7 [i_10] [i_12])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 2; i_13 < 13;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                {
                    var_31 ^= (((arr_50 [i_13] [i_13 + 1]) >= (arr_43 [i_13] [i_13 - 2] [i_13 - 1] [i_13])));
                    arr_54 [i_14] [i_14] [i_14] [i_14] = (69 / -38);
                    var_32 -= (((-117 + 2147483647) >> (71 - 64)));
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 11;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 14;i_17 += 1)
                        {
                            {
                                var_33 = ((-72 - (30 - 87)));
                                arr_59 [9] [i_14] [i_15] [3] [2] [9] [i_17] = var_9;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 13;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 14;i_19 += 1)
                        {
                            {
                                arr_67 [10] [i_14] [10] [i_18 + 1] [i_14] [i_19] [i_18 + 1] = arr_65 [i_13 + 1] [i_13 - 1];
                                arr_68 [i_13 - 2] [i_14] [i_14] [i_18] [i_18] = -61;
                            }
                        }
                    }
                }
            }
        }
        arr_69 [i_13] = (((arr_34 [i_13]) ? (arr_53 [i_13] [i_13 - 2] [i_13 - 2]) : (arr_53 [i_13] [13] [i_13 + 1])));
        var_34 = ((+((((arr_35 [i_13] [i_13]) == (arr_5 [i_13] [i_13] [0]))))));
    }
    for (int i_20 = 0; i_20 < 19;i_20 += 1)
    {
        var_35 = (min((min(((63 ? 84 : (arr_24 [3] [i_20] [i_20] [i_20]))), ((max(-125, (arr_24 [i_20] [i_20] [i_20] [i_20])))))), (~81)));

        for (int i_21 = 0; i_21 < 19;i_21 += 1)
        {
            var_36 = ((-((-(((arr_5 [i_21] [i_21] [i_20]) & 9))))));
            arr_75 [i_20] [i_20] [i_21] &= (-1 * -106);
            var_37 = ((+((max((arr_41 [i_20]), (arr_41 [i_20]))))));
        }
        for (int i_22 = 2; i_22 < 17;i_22 += 1)
        {
            var_38 = (min(var_38, (!3)));
            var_39 -= (max((arr_7 [i_20] [i_22]), (((~62) ? ((127 >> (-21 + 42))) : 16))));
        }
        var_40 = 117;
    }
    var_41 = var_5;
    #pragma endscop
}
