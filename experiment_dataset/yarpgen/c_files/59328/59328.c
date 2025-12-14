/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (arr_1 [i_0]);
        arr_3 [i_0] = ((-1094808815 ? (arr_0 [i_0]) : (arr_2 [i_0])));
        var_14 = (min(var_14, ((!(arr_2 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] [14] = (((arr_5 [i_1] [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])));
        var_15 = (min(var_15, (arr_4 [1])));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_16 = (max(((((arr_9 [i_2]) <= 2147483643))), (arr_9 [i_2])));
        arr_11 [i_2] [i_2] = (((((arr_10 [i_2] [i_2]) | (arr_10 [1] [i_2]))) >> ((((((var_4 << (((((-9223372036854775807 - 1) - -9223372036854775789)) + 19)))))) - 58858))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_17 |= ((~((~(-9223372036854775807 - 1)))));
        var_18 = (max(var_18, ((((~17451448556060672) ? var_2 : (arr_6 [i_3]))))));
        var_19 = (max(var_19, ((var_12 ? (((arr_2 [18]) | -4333878256491323901)) : (-1153487544848472298 | 1)))));
        var_20 -= ((~(arr_0 [i_3])));
        var_21 = (max(var_21, ((((arr_9 [i_3]) ? (arr_4 [i_3]) : (arr_5 [14] [i_3]))))));
    }

    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {

                        for (int i_8 = 2; i_8 < 8;i_8 += 1)
                        {
                            var_22 = ((!(max((arr_15 [i_4] [i_8]), 1))));
                            var_23 = (min(var_23, 1));
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            var_24 -= ((-((+((min((arr_17 [i_4] [i_4]), 1)))))));
                            arr_29 [10] [5] [5] [i_7] = (((((arr_0 [i_7]) - ((1259631527900640589 - (arr_24 [i_7] [3] [i_5] [i_4 - 2]))))) + (arr_19 [i_4 - 1] [11] [i_4])));
                            var_25 |= ((+((-(((arr_22 [i_7]) / 1))))));
                        }
                        var_26 = (((max((arr_27 [i_6] [i_6 - 1] [i_6] [i_4 + 1] [7] [i_4 - 2]), (arr_23 [i_4] [i_4]))) | ((((min(var_2, (arr_15 [i_6 + 1] [i_6]))) | ((min((arr_18 [i_4] [i_5]), (arr_20 [i_7] [7] [i_5] [i_4 - 2])))))))));
                    }
                }
            }
        }
        var_27 = (1 ^ 0);
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {

                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        arr_38 [i_4] [i_4] [i_10] = arr_7 [19];
                        arr_39 [i_4 + 1] [i_10] [i_4 + 1] = -30;
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        var_28 = (max(var_28, (((var_0 == (!255))))));
                        arr_42 [i_13] [i_10] [i_10] [i_4] = -1;
                    }
                    arr_43 [i_10] = (min(-1, -var_6));
                    var_29 |= 2147483647;
                    var_30 = arr_15 [i_4] [i_4];
                    var_31 = (min(var_31, (852280963517124620 % 2458913195818602150)));
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {

        /* vectorizable */
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            var_32 = (arr_12 [i_14] [i_15]);
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    {
                        var_33 |= (!var_2);
                        arr_53 [i_14] [i_17] [i_14] [i_17] [i_14] = 2458913195818602150;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            arr_57 [i_14] [i_14] [i_18] = ((-(arr_33 [i_14])));
            var_34 = ((34 ? 1 : (-32767 - 1)));
            var_35 = ((~(~var_11)));
            var_36 = (min(var_36, (((~(arr_54 [i_14] [i_18] [i_18]))))));
        }
        arr_58 [i_14] = -4189084691361650863;
    }
    #pragma endscop
}
