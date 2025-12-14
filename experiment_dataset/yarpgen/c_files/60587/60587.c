/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (((arr_2 [i_0] [i_1] [i_0]) >> (((min((((arr_5 [i_1]) ? 248 : var_1)), var_4)) - 186))));
                    var_19 = (max(var_19, var_12));
                    var_20 = arr_2 [i_0] [i_0] [i_2];
                }
            }
        }
        var_21 = (max(var_21, -4611686018427387904));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_22 |= (arr_4 [i_0] [i_3]);
            arr_10 [i_0] [i_0] = ((~(arr_2 [i_0] [i_0] [i_0])));
            arr_11 [i_0] = ((((((arr_8 [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [11] [i_0]) : var_0))) ? (arr_8 [1] [i_0]) : (arr_9 [i_3])));
            var_23 = 115;
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {

                /* vectorizable */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        var_24 = (arr_18 [i_4] [i_6] [i_7]);
                        var_25 = (arr_19 [i_4] [i_4] [i_4] [i_4]);
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_26 = (((arr_13 [i_6]) & ((var_16 ^ (arr_12 [i_6])))));
                        var_27 = ((arr_13 [i_5]) + -var_5);
                    }
                    var_28 = (max(var_28, (arr_14 [i_6])));
                    var_29 = 39;
                }
                for (int i_9 = 3; i_9 < 16;i_9 += 1)
                {
                    var_30 |= ((max(((((arr_26 [i_4]) ? (arr_18 [i_4] [i_4] [i_4]) : (arr_24 [i_5])))), (arr_21 [i_4] [i_5] [i_4] [i_5]))));
                    var_31 = (max(var_31, -2552376118879077974));
                    arr_27 [i_4] [i_4] [i_4] [i_9] = var_15;
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_32 = (((arr_20 [i_10 + 2] [i_5] [i_10 + 2] [i_10 + 2]) ? (((!(arr_21 [i_9 - 2] [i_9 - 2] [i_9] [i_10 + 2])))) : (arr_16 [i_10 + 2] [i_10 + 2] [i_10])));
                                var_33 &= ((~((((arr_13 [i_9 + 1]) || (arr_13 [i_9 - 2]))))));
                                var_34 |= (((-(arr_18 [i_4] [i_9] [i_9 - 1]))));
                                var_35 = -6487;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    arr_37 [i_4] [i_4] [i_4] [8] = ((-(arr_36 [i_5] [i_5] [i_12 + 1])));
                    var_36 -= var_3;
                    var_37 = (((arr_19 [i_12 + 1] [9] [i_12 + 1] [10]) ? (arr_19 [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1]) : (arr_19 [i_12 + 1] [i_12] [i_12 + 1] [i_12])));
                }
                var_38 = (min(var_38, (((-7357218520309469897 ? -1 : -1)))));
            }
        }
    }
    #pragma endscop
}
