/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 = 1919296312353560556;
        var_11 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_12 = (arr_2 [i_1] [i_1]);
        arr_4 [i_1] [i_1] = 15784569162137694666;
        var_13 = -2;
        var_14 += (-9223372036854775807 - 1);
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = 52107;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] [i_3] [i_3] = (arr_3 [i_4]);

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_19 [i_5] [i_5] [9] [i_2] [i_3] [i_3] = (((arr_13 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_2]) / 9223372036854775807));
                        var_15 += ((!(arr_0 [i_3])));
                        var_16 = (arr_13 [i_4] [i_4 - 1] [i_4 - 1] [i_2]);
                        arr_20 [i_2] [2] [i_2] [i_3] [i_2] &= arr_15 [i_4 + 1];
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_17 += (arr_12 [i_3] [i_2] [i_2]);
                        arr_24 [i_2] [i_3] [i_2] [i_6] [i_6] = arr_22 [2];
                    }
                    var_18 += (arr_6 [i_2] [i_4]);

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_19 = (min((((!(arr_12 [i_2] [i_3] [i_2])))), (max((arr_12 [i_2] [i_3] [i_7]), (arr_17 [i_2] [i_2] [i_4 - 1] [i_7])))));
                        var_20 -= ((0 & (arr_12 [i_3] [i_4 + 1] [i_7])));

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_30 [i_2] [i_2] [i_2] [i_7] [i_8] [i_8] = ((!((min(-32761, (arr_11 [i_4 - 1]))))));
                            var_21 = (max(((((arr_15 [i_4 + 1]) != (arr_23 [i_2] [i_2] [i_2])))), 1997472625180500186));
                        }
                        arr_31 [i_2] [i_3] [i_3] [i_3] [i_3] [i_3] = (min((arr_2 [i_4] [i_4 - 1]), (arr_27 [i_2] [i_3] [i_2] [i_4] [i_2])));
                    }
                    for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        var_22 += (((min((arr_6 [i_2] [i_3]), (arr_22 [i_2]))) < (arr_6 [i_3] [i_3])));
                        arr_35 [i_2] [i_2] [i_4] [i_2] [i_4] [13] = (min((max((arr_28 [i_2] [i_9 + 1] [i_4] [i_9] [i_4 + 1] [i_3]), (arr_32 [i_2] [i_9 + 1] [i_2] [i_4]))), 10529925701982210630));
                    }
                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 11;i_10 += 1) /* same iter space */
                    {
                        arr_39 [i_2] [i_2] [i_2] [10] = ((~(arr_27 [i_2] [i_3] [i_4] [11] [i_2])));
                        arr_40 [i_2] [i_2] [i_3] [i_4] [i_10] = (arr_27 [i_10] [i_10 + 2] [i_10 - 1] [13] [i_2]);
                        var_23 = (min(var_23, (arr_7 [i_2])));
                        arr_41 [i_2] [i_3] [i_2] = ((-(arr_17 [i_10] [i_10] [7] [i_10 + 3])));
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_24 = (arr_37 [i_2] [i_3] [i_3] [i_3] [2]);
                        arr_45 [i_2] [i_3] [i_4] [i_2] [i_3] = (arr_3 [i_3]);
                        var_25 = arr_15 [i_11];
                    }
                    arr_46 [i_2] = (arr_3 [i_4 + 1]);
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
    {
        arr_50 [i_12] [i_12] = (arr_3 [i_12]);
        arr_51 [i_12] = max((arr_11 [i_12]), -1997472625180500186);
        arr_52 [i_12] [i_12] = ((max(0, (arr_15 [i_12]))) ^ (max((arr_23 [i_12] [i_12] [i_12]), 0)));
    }
    var_26 ^= ((~(max(var_6, var_1))));
    var_27 -= var_3;
    #pragma endscop
}
