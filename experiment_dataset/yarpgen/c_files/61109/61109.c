/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (208 ? -4718 : 262143);
                var_19 -= (((((((max((arr_3 [10] [10]), 1))) ? (arr_1 [i_1]) : 1))) ? 1 : (arr_3 [i_0] [i_0])));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_20 = (arr_11 [i_2] [1]);
                        arr_15 [10] [10] = ((((((arr_8 [i_2] [i_3] [i_4]) ^ (arr_9 [i_4])))) ? (arr_13 [i_2] [i_3] [1] [i_5] [i_3] [i_5]) : (((arr_12 [i_4]) ? (arr_13 [i_2] [i_2] [i_2] [i_3] [i_4] [1]) : (arr_7 [9] [i_3])))));
                    }
                }
            }
            var_21 = (arr_13 [i_2] [i_2] [i_2] [i_2] [i_3] [i_3]);
        }
        var_22 = 1;
        var_23 = (max(var_23, ((((arr_6 [i_2]) ? 1 : (((arr_13 [i_2] [15] [i_2] [i_2] [15] [22]) ? (arr_9 [7]) : (arr_13 [i_2] [i_2] [i_2] [20] [i_2] [i_2]))))))));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_20 [7] [i_6] = (max(-3971778551738960915, ((1 ? (arr_7 [i_6] [i_6]) : 0))));
        var_24 &= (max(((!(arr_4 [i_6]))), ((min((arr_12 [i_6]), (arr_17 [8] [0]))))));
        arr_21 [i_6] = (((arr_6 [i_6]) ? (((((min((arr_6 [i_6]), (arr_7 [i_6] [i_6])))) ? 59812 : ((max(-1, (arr_16 [i_6] [i_6]))))))) : (((var_6 ? var_3 : 267521469)))));
    }
    for (int i_7 = 1; i_7 < 8;i_7 += 1)
    {
        var_25 &= (((((-(arr_1 [i_7 - 1])))) ? (((arr_23 [i_7 - 1]) ? (arr_23 [i_7 + 2]) : (arr_23 [i_7]))) : (arr_23 [i_7 + 2])));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_26 += (max((arr_25 [i_9] [i_7 - 1] [i_7 + 2]), (min((arr_25 [i_9] [i_7 + 2] [i_7 + 1]), (arr_16 [i_7 + 1] [i_10])))));
                        var_27 = ((~(arr_11 [i_7] [i_10])));
                        arr_32 [i_10] [i_8] [i_9] [1] [i_8] [i_7] = (min((arr_28 [i_7] [i_7 - 1] [i_7]), (arr_17 [i_8] [i_10])));
                    }
                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        arr_35 [i_8] [i_8] [i_9] [i_11] = (((arr_17 [i_8] [i_7 - 1]) ? 253 : (arr_9 [i_9])));
                        var_28 = (arr_31 [i_7] [i_7] [i_9] [i_11]);
                        arr_36 [i_9] [i_8] = (((-(arr_5 [i_7]))));
                    }
                    arr_37 [i_9] &= 0;
                }
            }
        }
        arr_38 [i_7 + 2] = (arr_29 [4] [6] [i_7]);
        var_29 = (arr_31 [1] [9] [i_7] [i_7]);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        arr_41 [i_12] [i_12] = (arr_6 [i_12]);
        var_30 = (arr_6 [i_12]);
        var_31 = (arr_12 [i_12]);
    }
    #pragma endscop
}
