/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_11 = (max(var_11, var_3));
        var_12 = (arr_0 [i_0]);
        arr_2 [i_0] |= ((((var_5 ? ((var_4 ? var_6 : var_8)) : var_10)) & (((!(((var_1 ? var_5 : (arr_1 [i_0])))))))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_7 [i_1] [i_1] = (((6968192863744308560 ? (arr_4 [i_2] [i_1]) : 1)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_12 [i_3] [i_3] = (((~var_9) / (arr_6 [i_4])));
                        arr_13 [i_1] [i_2] [i_3] [i_3] = (((arr_3 [i_1 + 1]) << (((arr_5 [i_1]) - 1858220599))));
                        arr_14 [i_4] [i_3] [i_2] [i_3] [i_1] = (arr_3 [i_1]);
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_17 [i_5] [i_5 + 1] = (((((var_7 ? var_3 : (((arr_9 [i_5] [i_5] [i_5] [i_1]) ? var_10 : (arr_10 [i_1 - 1])))))) ? (arr_16 [i_5] [i_5]) : (((var_0 || ((((arr_11 [i_5] [i_5] [i_5] [1]) | (arr_15 [i_5] [i_1])))))))));
            var_13 = (((var_8 - var_9) ? ((var_3 ? (arr_15 [i_5 + 2] [i_5 + 2]) : var_5)) : ((((min(var_9, var_7)) < var_2)))));
        }
        for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
        {
            var_14 = (max(var_14, var_5));
            var_15 = (arr_6 [i_6]);
        }

        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            arr_23 [i_7] [i_7] = (((-(arr_20 [i_7 - 2] [i_7] [i_7]))));
            arr_24 [i_1 + 1] [i_7] [i_7] = (arr_9 [i_7] [i_7] [i_7] [i_1]);
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_27 [i_1] = (((var_3 ? var_3 : var_1)));
            var_16 = arr_25 [i_8] [i_1];
        }
    }
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        var_17 = (((arr_28 [i_9 - 1] [0]) ? 183 : (arr_28 [i_9 - 1] [21])));
        var_18 = (!14678358553380068619);
        arr_30 [i_9 - 1] [i_9] = var_7;
    }

    /* vectorizable */
    for (int i_10 = 3; i_10 < 14;i_10 += 1)
    {
        arr_35 [i_10] = -var_4;
        var_19 |= (((arr_16 [18] [i_10 - 1]) ? var_2 : var_7));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    {
                        var_20 += ((~(arr_34 [i_13] [i_11])));

                        for (int i_14 = 2; i_14 < 14;i_14 += 1)
                        {
                            var_21 = (((arr_5 [i_14]) ? var_9 : (((var_9 ? var_7 : (arr_9 [i_10] [4] [i_14] [i_14]))))));
                            var_22 = 14678358553380068609;
                            var_23 |= (arr_26 [i_10] [i_10 - 3] [i_10 - 1]);
                            var_24 = (arr_19 [i_12 - 1] [i_14 - 2] [11]);
                            arr_45 [i_14] [i_13] [i_11] [i_11] = var_5;
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            arr_48 [i_10] [i_11] [2] [10] [2] [i_15] [i_11] = (!var_2);
                            var_25 = (max(var_25, (((((arr_11 [i_15] [i_13] [i_12] [i_10]) ? var_6 : var_6))))));
                        }
                        var_26 |= (arr_41 [i_12 - 1] [i_10]);
                    }
                }
            }
        }
        arr_49 [i_10] [i_10 - 3] = (((arr_6 [i_10]) - ((1 ? 2895204111996465362 : 15329995611157973552))));
    }
    for (int i_16 = 0; i_16 < 15;i_16 += 1)
    {
        var_27 = (min(var_27, (arr_53 [i_16])));
        var_28 = (var_7 == 154);
        arr_54 [i_16] |= (((((-17814 ? 558035093 : 1))) ? -1310802090 : 65535));
    }
    #pragma endscop
}
