/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((((var_9 ? (arr_0 [i_1 - 1] [i_0 - 1]) : (arr_0 [i_1 - 1] [i_1 - 1]))) & -46123))));
                var_15 = ((((max((max(var_0, (arr_5 [i_0] [i_1] [i_1 + 1]))), (arr_0 [i_0 - 1] [i_1 - 1])))) ? var_13 : (max(var_6, ((var_9 ? 32758 : (arr_2 [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_16 = (max((max((!var_11), (arr_1 [i_3]))), 15895));
                var_17 = (min(var_17, (((+((-(max((arr_8 [i_2] [i_2]), (arr_0 [i_2] [i_2 + 3]))))))))));
                var_18 = ((!(var_2 & var_10)));

                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    var_19 = (max(var_19, ((min(var_4, ((-(arr_0 [i_3] [i_2 + 1]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_5] [i_3] [i_3] [i_4] [i_5] [i_6 - 2] |= var_8;
                                var_20 = (min(var_20, var_7));
                                var_21 = 46123;
                                arr_19 [i_6 - 3] [i_5] [i_4] [i_2 + 1] [i_2 + 1] = (arr_4 [i_2] [i_3]);
                                arr_20 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_4] [i_2 + 2] = (min((var_3 - var_13), ((max(var_1, (((!(arr_7 [i_2])))))))));
                            }
                        }
                    }
                    arr_21 [i_2] [i_3] [i_4] = (((((!(arr_2 [i_2]))) && (arr_3 [i_4] [i_4] [i_4]))));
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    arr_25 [i_2 + 2] [i_3] [i_2 + 2] [i_2 + 2] = max(((-var_6 ? (arr_2 [i_2 + 3]) : ((((arr_1 [i_2 - 2]) ? var_12 : (arr_15 [i_2 - 4] [i_3] [i_3] [i_7] [i_7])))))), (((arr_22 [i_2] [i_2]) ? ((((!(arr_23 [i_7]))))) : (arr_9 [i_2 - 4]))));
                    var_22 = (min(var_22, ((((arr_6 [i_7]) % (arr_2 [i_7]))))));
                    var_23 -= ((+((((arr_10 [i_2 - 2] [i_3] [i_3]) * 3072)))));
                    var_24 = max((max((arr_3 [i_3] [i_3] [i_2 + 3]), ((((arr_17 [i_2 - 3] [i_3] [i_3] [i_7] [i_7]) ? (arr_7 [i_7]) : var_7))))), (max(19401, (arr_23 [i_3]))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_25 |= (((arr_15 [i_2 + 1] [i_3] [i_3] [i_2 + 1] [i_8]) - (38084 <= 18446744073709551614)));
                    var_26 = (min(var_26, (arr_5 [i_2 - 2] [i_3] [i_8])));
                    arr_28 [i_3] [i_8] = var_11;

                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {
                        var_27 = (!var_9);
                        var_28 = (min(var_28, var_5));
                        var_29 = (arr_7 [i_3]);
                        arr_33 [i_8] [i_9] = ((var_7 & (arr_10 [i_2 - 2] [i_2 - 4] [i_9 + 1])));
                    }
                    for (int i_10 = 2; i_10 < 20;i_10 += 1)
                    {
                        arr_37 [i_2 - 3] [i_3] [i_8] [i_10 - 1] = -10;
                        arr_38 [i_2] [i_2] [i_2 - 3] [i_2 + 3] = (arr_5 [i_2] [i_3] [i_2]);
                        var_30 = (min(var_30, var_4));
                        arr_39 [i_2 - 4] [i_3] [i_8] [i_10 - 1] = var_6;
                        var_31 = (max(var_31, ((((!(arr_17 [i_2 - 3] [i_2 - 3] [i_2 + 1] [i_2 - 3] [i_2 + 2])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 20;i_12 += 1)
                        {
                            {
                                arr_45 [i_3] [i_3] [i_8] [i_11] [i_12] = ((-((var_7 ^ (arr_3 [i_12] [i_8] [i_8])))));
                                var_32 = (min(var_32, (((+((var_9 ? (arr_40 [i_2] [i_3] [i_8] [i_11]) : var_13)))))));
                                arr_46 [i_12] = ((-(arr_23 [i_2 - 2])));
                            }
                        }
                    }
                }
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    arr_49 [i_13] = (!var_5);
                    arr_50 [i_2] [i_13] [i_3] [i_13] = (((arr_47 [i_2 + 3] [i_2 - 3] [i_13] [i_2 - 4]) - (((arr_1 [i_2 + 3]) ? var_13 : (arr_1 [i_2 + 3])))));
                }
            }
        }
    }
    var_33 = (min(var_33, var_5));
    #pragma endscop
}
