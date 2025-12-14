/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (((var_3 & var_9) ? (arr_1 [i_0]) : (((arr_1 [i_0]) ? 524160 : (arr_0 [6])))));
        var_14 = (max(var_14, (((-((var_8 ? (arr_1 [4]) : var_0)))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_10 [i_3] = ((((~(arr_8 [i_3]))) + (((((arr_8 [i_3]) >= (arr_8 [i_3])))))));

                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        arr_14 [5] [i_2] [i_3] [i_3] [i_2] [i_4 + 1] = var_2;
                        arr_15 [i_1] [i_1] [i_3] [i_3] = (max(((var_4 % (arr_4 [i_4]))), (arr_8 [i_3])));
                        var_15 = (min(((((min(var_6, (arr_1 [i_3])))) ? var_7 : 13)), (((((!(arr_5 [i_2 + 1]))) ? (arr_5 [i_1]) : ((((arr_9 [i_1] [7] [i_3]) ? -2147483621 : 36))))))));
                        var_16 = (arr_8 [i_3]);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_18 [i_1] [i_2] [i_3] [i_5] = (arr_7 [i_5]);
                        arr_19 [i_3] [i_3] [i_3] [i_3] = var_9;
                        arr_20 [i_1] [i_2] [i_3] [i_3] [i_3] [i_5] = (max((max((arr_13 [i_2 - 1] [i_3] [4] [i_5] [1]), (arr_9 [i_2 + 1] [i_2] [i_3]))), (arr_9 [i_2 - 1] [i_2 - 1] [i_3])));
                        var_17 = (((arr_5 [i_2 + 1]) ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : -1));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_23 [i_3] [i_2 - 1] [i_3] [i_3] [i_3] = (((2841240927 == 32736) << (((-954907487 ^ 4239752277) - 1000356082))));
                            var_18 = (arr_1 [i_3]);
                            var_19 = ((var_1 ? (arr_3 [i_3]) : (arr_9 [i_3] [i_3] [i_3])));
                        }
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            var_20 = ((((var_11 | (arr_9 [i_3] [i_3] [i_3])))));
                            arr_26 [3] [i_2] [i_3] [i_5] [i_3] = (arr_2 [i_7 + 1]);
                            arr_27 [i_1] [i_3] = var_12;
                            arr_28 [i_1] [i_2] [i_3] [i_2] [i_7] = 3877817729;
                            arr_29 [i_1] [i_2 + 1] [i_3] [i_2 + 1] [i_7] = 0;
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        var_21 = (min(var_21, ((((arr_25 [i_3] [i_2] [i_2] [i_8] [i_3] [i_1]) && (arr_25 [5] [i_2 - 1] [5] [i_3] [i_8] [i_8 - 1]))))));
                        var_22 = ((arr_13 [i_3] [i_3] [i_2 + 1] [i_8 - 1] [i_2 + 1]) << (arr_13 [i_1] [i_2 + 1] [i_2 + 1] [i_8 - 1] [i_1]));
                    }
                    arr_32 [i_1] [i_1] [i_3] [i_3] = (arr_22 [i_3] [i_2] [i_2 + 1] [i_3]);
                }
            }
        }
    }
    var_23 = (min(var_23, var_8));
    var_24 = var_0;
    var_25 = var_9;
    #pragma endscop
}
