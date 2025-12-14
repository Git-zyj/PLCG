/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_1] [14] = var_7;
                    var_12 = (arr_2 [i_0]);
                }
            }
        }
        arr_10 [1] [1] = (arr_0 [i_0] [i_0]);
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_13 = (arr_4 [i_3 - 1] [i_3 - 1]);
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_26 [i_3] [i_4] = (arr_6 [10] [i_4] [i_6]);
                                var_14 = (((arr_22 [0] [i_3]) ? (((113 == (((!(arr_18 [i_3] [0] [9] [i_6]))))))) : (arr_5 [i_3] [i_4] [23])));
                                arr_27 [i_3] = (((((-var_2 ? (arr_7 [i_5]) : ((113 + (arr_6 [i_5] [i_4] [i_4])))))) ? (arr_16 [i_3] [12]) : 670));
                            }
                        }
                    }
                    var_15 = (((arr_8 [i_3 + 1] [6] [7]) | (((-2147483634 ? -32 : 16)))));
                    arr_28 [i_3] [i_4] [i_4] = (~186);
                    arr_29 [i_3] [i_4] [i_5] = var_4;
                }
            }
        }

        for (int i_8 = 2; i_8 < 16;i_8 += 1) /* same iter space */
        {
            arr_32 [i_3] [i_3] = ((+(((arr_6 [i_3 - 1] [i_8] [i_8 - 2]) / (arr_6 [i_3 - 1] [i_8] [i_8 - 1])))));
            var_16 = ((arr_14 [i_3] [i_8]) ? (arr_1 [i_3]) : ((((arr_5 [i_3] [12] [12]) * ((((arr_12 [i_8]) ? (arr_2 [i_3]) : var_9)))))));
            var_17 = (arr_8 [i_3] [i_8] [i_8]);
        }
        for (int i_9 = 2; i_9 < 16;i_9 += 1) /* same iter space */
        {
            arr_35 [i_3] [i_3] [i_9] = (arr_20 [i_3]);
            var_18 = ((!((!(arr_11 [i_3 - 1])))));

            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                var_19 = 1;
                var_20 = (arr_1 [17]);
                arr_38 [i_9 + 1] [i_9 + 1] [i_9] [i_3] = -95;
                arr_39 [9] [i_3] = (arr_5 [4] [i_9] [i_10]);
                var_21 = (arr_3 [i_10]);
            }
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                var_22 = (arr_13 [i_11] [i_3]);
                arr_42 [11] [i_3] = (arr_7 [i_3]);
            }
            for (int i_12 = 1; i_12 < 16;i_12 += 1)
            {
                var_23 = ((var_1 ^ ((((((~(arr_23 [7] [i_3] [i_9] [i_3] [i_12])))) && (arr_12 [i_12]))))));
                var_24 = ((((~(((arr_36 [13] [i_3] [i_9] [i_12]) + (arr_6 [i_3] [i_9] [i_12 - 1]))))) / ((((arr_7 [i_3 + 1]) >= (arr_3 [i_3]))))));
            }
            arr_47 [i_3] = (arr_37 [i_3] [i_9 + 1] [i_3]);
        }
        for (int i_13 = 4; i_13 < 16;i_13 += 1)
        {

            /* vectorizable */
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                var_25 = (arr_24 [13] [i_3] [i_3] [i_14] [i_14]);
                arr_55 [i_3 - 1] [2] [i_3] [i_3] = arr_36 [i_3] [i_3] [i_13] [1];
            }
            for (int i_15 = 1; i_15 < 16;i_15 += 1)
            {
                arr_59 [i_3] [i_13] = (((((arr_19 [i_3] [i_13] [i_15] [i_3]) != ((((arr_37 [i_3] [i_13] [i_3]) / 2147483647)))))) | (((!(arr_15 [i_3])))));
                var_26 = ((var_4 | (arr_54 [i_3] [i_13 - 3])));
            }
            arr_60 [i_3] = (arr_36 [i_3] [i_3] [i_3] [i_13]);

            /* vectorizable */
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                arr_64 [i_3] = ((-(arr_16 [i_3 - 1] [i_13 + 1])));
                var_27 = (arr_54 [i_3] [9]);
                var_28 = -26711;
            }
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 17;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 16;i_19 += 1)
                    {
                        {
                            var_29 = (arr_16 [13] [i_13]);
                            var_30 = (arr_21 [i_3] [i_18] [4] [i_3]);
                        }
                    }
                }
            }
            arr_74 [i_3] [i_3] = (arr_6 [1] [i_13] [i_13]);
        }
        arr_75 [i_3] [i_3] = (((((-(arr_33 [i_3])))) || (arr_20 [i_3])));
        var_31 = (((((((1 - (arr_58 [i_3 + 1])))) + 69979077)) - ((((arr_52 [i_3]) / (arr_57 [i_3]))))));
    }
    var_32 = (~65535);
    #pragma endscop
}
