/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 += -2159647612;
                    var_18 = ((var_3 ? (arr_4 [i_0] [i_2]) : var_11));
                }
            }
        }

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_19 |= (arr_5 [i_3] [i_3] [i_3] [i_0]);
            arr_9 [i_3] [i_3] &= ((-(arr_6 [i_3] [6] [2])));
            var_20 += (arr_3 [i_3] [i_0] [i_0]);
        }
        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            var_21 = ((-(arr_5 [i_4 + 3] [i_0] [i_0] [i_4 + 2])));
            arr_12 [i_0] = (((arr_1 [i_0]) * (arr_1 [i_4 + 2])));
            var_22 -= (arr_10 [i_0] [i_4 - 1]);
            var_23 = 2135319680;
            var_24 = (arr_1 [i_4 + 2]);
        }
        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {
            arr_15 [i_0] [i_5] [i_5 + 1] = (arr_8 [i_0]);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 7;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 8;i_8 += 1)
                    {
                        {
                            arr_27 [i_8] [i_5] [8] [i_7] &= (((arr_10 [i_0] [i_5 + 3]) ? (arr_20 [i_5] [i_8] [i_7 - 3] [i_8 + 1] [i_8 + 2]) : (var_11 == var_5)));
                            var_25 = -1069112064;
                            arr_28 [i_0] [1] [i_0] = (((arr_21 [i_7 + 1] [i_7] [i_7 - 2] [i_0]) - var_7));
                        }
                    }
                }
            }
        }
        var_26 = ((arr_10 [i_0] [i_0]) < (((var_0 || (arr_21 [i_0] [i_0] [i_0] [i_0])))));
        var_27 &= ((~(arr_7 [i_0] [i_0] [i_0])));
    }
    for (int i_9 = 1; i_9 < 9;i_9 += 1)
    {
        var_28 &= (min((((arr_29 [i_9 + 3]) << (((arr_29 [i_9 + 1]) - 119)))), (arr_29 [i_9 + 3])));
        arr_31 [0] &= var_12;
    }
    var_29 = (min(var_2, (var_3 == 3238683241)));
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    arr_41 [i_10] [i_10] = (((((+(((arr_38 [i_10] [i_10]) ? 228 : (arr_30 [i_11])))))) % (arr_38 [6] [i_11])));
                    var_30 -= (arr_39 [i_12] [i_11] [i_10]);
                    arr_42 [i_12] [i_10] [i_10] [i_10] = (max(((-((min((arr_30 [i_10]), (arr_29 [i_11])))))), -2147483647));

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                    {
                        arr_46 [i_10] [i_10] [i_11] [8] [i_10] [i_13] = ((!(arr_36 [i_10] [i_11])));
                        var_31 = (((((var_3 >> (arr_40 [i_12] [i_13])))) ? ((~(arr_37 [i_10] [i_10] [i_10]))) : (arr_39 [i_11] [i_12] [i_12])));
                        var_32 = ((+((((arr_45 [4] [i_10] [i_12] [4]) && (arr_30 [i_12]))))));
                        var_33 = ((~((29 << (8926811663690929927 - 8926811663690929902)))));
                    }
                    for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                    {
                        var_34 = (!(((min(1739516955, (arr_37 [i_10] [i_11] [10]))))));
                        var_35 -= (((((~((~(arr_33 [i_12])))))) ? (((max((arr_43 [i_11] [i_12]), (arr_43 [i_11] [i_11]))))) : (max((arr_34 [i_11]), (arr_34 [i_10])))));
                    }
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        var_36 += (arr_35 [i_11]);
                        arr_53 [i_10] [i_10] [i_12] [i_10] [i_15] = (~var_10);
                    }
                    var_37 = (arr_34 [i_12]);
                }
            }
        }
    }
    var_38 = var_15;
    #pragma endscop
}
