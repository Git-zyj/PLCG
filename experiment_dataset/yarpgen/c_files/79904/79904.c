/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (~(((var_9 ? var_13 : var_4))));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_20 &= (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_21 = (min(var_21, (((!(~509))))));
                        var_22 = (max(var_22, (((+(((arr_5 [i_1] [i_1]) ? (arr_9 [i_3] [i_2] [i_1] [i_0]) : (arr_4 [i_1]))))))));
                    }
                }
            }

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                arr_12 [i_0] [i_1] [i_1] = (max((max((((arr_4 [i_1]) ? (arr_7 [i_0 + 2] [24] [i_1] [24]) : (arr_8 [i_1] [i_1] [i_1] [i_1]))), (arr_1 [i_0]))), (arr_5 [i_0 + 3] [i_0 - 1])));
                arr_13 [i_0] [i_1] [i_4] = ((!(arr_11 [i_1] [i_1] [i_0] [i_1])));
            }
            /* vectorizable */
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                arr_17 [i_0] [i_0] [23] [13] = (((((-(arr_14 [i_1] [i_5 - 1])))) ? (arr_11 [i_0] [i_1] [i_5] [i_1]) : (((arr_10 [23] [23] [i_0 + 1] [23]) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (arr_15 [8] [i_1] [i_5])))));
                var_23 = (arr_10 [i_0] [i_0] [18] [i_0]);
                arr_18 [i_0] [i_1] [i_1] = (4 == 4156969724);
                arr_19 [i_5] = (arr_0 [11]);
            }
            for (int i_6 = 3; i_6 < 23;i_6 += 1)
            {
                arr_22 [16] [i_6] [i_6] [i_0 + 1] = (~4);

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_24 -= ((-((~(arr_21 [i_0] [i_6 - 3])))));
                    var_25 = (max((((arr_4 [i_0 - 2]) == (arr_4 [i_0]))), (((((!(arr_24 [i_0 - 4] [i_0 - 4] [i_0 - 1] [i_0] [9])))) == (((arr_15 [i_0] [6] [16]) | (arr_3 [i_0 - 3] [i_0 - 3])))))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_26 = (arr_27 [23] [21] [21] [i_8] [6] [14] [21]);
                        var_27 = (arr_2 [i_0]);
                        arr_29 [i_0] [i_1] [i_1] [i_0] [i_9] [i_6] = (arr_7 [i_0] [i_1] [8] [i_8]);
                        var_28 = (arr_4 [i_0 + 3]);
                        var_29 = ((-((-(arr_25 [i_0] [i_1] [i_1] [i_6] [i_8] [i_6])))));
                    }
                    arr_30 [i_0] [i_1] [i_6] [10] [i_8] [i_8] = ((-(arr_0 [i_0])));
                    arr_31 [i_0] [i_1] [i_6] [i_8] = ((~(((arr_16 [i_0] [i_1] [i_0]) ? (arr_14 [i_0] [i_0]) : (arr_20 [i_0] [i_0] [1] [2])))));
                }
            }
        }
        for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                var_30 = (((arr_34 [i_0] [i_0 + 2] [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : ((((arr_6 [i_0] [i_0] [i_0]) == (arr_0 [i_11]))))));
                var_31 += (arr_26 [22] [i_10] [i_11] [i_10] [i_11]);
                var_32 = (min(var_32, ((-((255 ? 353644106 : 7))))));
            }
            arr_36 [i_10] |= ((~((-(arr_8 [i_10] [i_0] [i_0] [i_0 + 3])))));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            var_33 = (min(var_33, (((-(arr_33 [i_0 + 3] [i_0]))))));
            var_34 = ((+(((arr_38 [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_12]) : (arr_10 [i_0] [5] [i_0] [i_0 - 2])))));
            var_35 = (max(var_35, (arr_11 [i_0] [i_0 - 4] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                for (int i_14 = 4; i_14 < 23;i_14 += 1)
                {
                    {
                        var_36 ^= ((+(((arr_39 [i_12] [2]) ? (arr_41 [i_12] [i_13]) : (arr_34 [i_0] [i_0] [i_0] [i_0])))));
                        arr_46 [i_0] [i_0] [i_13] [i_14] = (((arr_43 [i_0] [i_0]) ? ((-(arr_8 [i_0] [i_12] [5] [i_14]))) : (arr_21 [i_12] [i_12])));
                        arr_47 [i_0] [i_12] [i_0] [i_14 + 2] = ((+(((arr_9 [7] [i_12] [i_13] [7]) ? (arr_16 [i_0 - 1] [21] [i_14]) : (arr_43 [i_12] [i_13])))));
                        var_37 = ((((~(arr_5 [i_0 - 3] [i_13]))) | (arr_26 [i_0 + 2] [4] [i_13] [i_12] [i_13])));
                    }
                }
            }
        }
    }
    var_38 = (max((((((var_13 ? var_1 : var_10))) ? var_15 : var_10)), (((~(var_16 == var_5))))));
    #pragma endscop
}
