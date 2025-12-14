/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_3] [i_3] [i_2] [i_3] = (241 || 93);
                        arr_11 [i_0] [1] [i_2] [i_3] = (((((!(arr_5 [i_0] [i_0] [i_0]))))) ? (~2586837320) : ((-var_7 | (arr_8 [i_1 - 2] [i_3 + 1] [i_3 + 1]))));
                        arr_12 [13] [i_0] [i_2] [i_3] [i_1] [i_3] = (((-9223372036854775807 - 1) + (arr_8 [i_0] [i_0] [i_0])));
                        arr_13 [i_0] [1] [i_2] [i_3] = (max(23478, -27606));
                        arr_14 [i_0] [i_2] [i_3] = ((((((arr_7 [i_3] [i_2] [i_1 - 1]) % (arr_2 [i_3 + 3])))) ? (((arr_2 [i_3 + 2]) ? (arr_7 [i_3] [i_2] [i_1 + 3]) : (arr_2 [i_3 + 3]))) : (arr_7 [i_3] [i_3] [i_1 - 3])));
                    }
                }
            }
        }
        var_13 = (max(var_13, var_0));
    }
    var_14 = var_3;

    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_15 = ((1 / (max(23207, ((5567 ? -109 : 185))))));
        arr_17 [1] [i_4] |= ((-(arr_8 [i_4] [i_4] [8])));
        arr_18 [i_4] [i_4] = ((((min(-1557479890, 1))) ? (max((~var_9), ((((arr_8 [i_4] [i_4] [i_4]) ? 14680064 : (arr_5 [i_4] [i_4] [i_4])))))) : ((min((arr_3 [i_4] [i_4]), (~var_0))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    arr_23 [i_5] [i_5] [i_6] |= ((+(min((((arr_16 [7] [i_5]) ? var_3 : 14680064)), 28))));
                    arr_24 [i_6] [i_4] [i_6] [i_4] = arr_22 [i_4] [i_5] [i_6] [i_5];
                    arr_25 [i_4] [11] [i_6] = (arr_19 [4] [i_4] [i_6]);
                    arr_26 [i_4] [i_6] = (min(((((arr_2 [i_4]) ? (arr_2 [i_4]) : (arr_0 [i_4])))), (max(3080218699329108612, (arr_0 [i_4])))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_16 -= (max((max((arr_29 [i_4] [i_5] [i_6] [i_4] [9]), (((arr_28 [i_4] [i_5]) ? var_0 : (arr_19 [i_7] [1] [i_4]))))), (arr_1 [i_4])));
                                arr_33 [i_4] [i_5] [i_6] [i_7] [i_5] = (((((arr_15 [i_4]) ? (arr_28 [i_5] [i_7]) : var_6))) * (((((arr_31 [i_7] [i_6] [i_6] [i_7] [i_8]) / var_10)) / (arr_4 [i_4]))));
                                var_17 -= (var_8 % (arr_30 [i_8] [i_7] [i_7] [i_7] [i_6] [i_5] [i_4]));
                                var_18 = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (((!((max((63 % 511), ((var_2 ? (arr_36 [i_9 - 1]) : (arr_34 [i_9])))))))))));
        var_20 -= (((((arr_36 [i_9]) ? (~var_7) : (((59969 ? 61460 : 249))))) | (arr_34 [i_9 - 1])));
    }
    for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
    {
        var_21 = arr_39 [i_10];
        arr_40 [i_10] = (min(63, (!4075)));
        arr_41 [i_10] = (((arr_35 [i_10 - 1] [i_10 - 1]) / (arr_35 [i_10 - 1] [i_10])));
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                {
                    arr_47 [i_12] = (((((arr_46 [i_10 - 1] [i_11 - 2]) ? (arr_46 [i_10 - 1] [i_11 - 2]) : (arr_46 [i_10 - 1] [i_11 - 2]))) <= (137434759168 != -14680065)));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_22 = (((+(((arr_45 [i_10] [i_11] [i_12] [i_13]) ? (arr_48 [i_12] [i_12]) : var_12)))));
                                var_23 |= ((((min((arr_36 [i_10 - 1]), (arr_36 [i_10 - 1])))) ? (((arr_36 [i_10 - 1]) ? (arr_36 [i_10 - 1]) : (arr_36 [i_10 - 1]))) : (arr_36 [i_10 - 1])));
                                arr_52 [i_11 - 2] [i_11] [i_12] [i_13] = 5567;
                            }
                        }
                    }
                    var_24 += (!var_8);
                }
            }
        }
    }
    #pragma endscop
}
