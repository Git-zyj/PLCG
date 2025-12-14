/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (min((((arr_3 [i_0]) ? var_5 : (arr_3 [i_0]))), ((~(arr_3 [i_0])))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_1] [i_0] = (((arr_1 [i_1 - 1] [i_0]) ? ((((!(arr_1 [i_1 + 1] [i_1]))))) : (max((max((arr_1 [i_0] [i_1]), (arr_3 [i_0]))), (((arr_1 [i_2] [i_1]) ? (arr_4 [i_0]) : (arr_2 [i_0] [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [11] [i_0] [13] = var_8;
                                arr_13 [i_0] [i_1] [i_0] = ((((max((arr_6 [i_4 - 1] [i_1 - 1]), (arr_6 [i_4 - 1] [i_1 + 1])))) ? (max((arr_4 [i_1 - 1]), (arr_6 [i_4 - 1] [i_1 - 1]))) : ((((arr_6 [i_4 + 1] [i_1 - 1]) ? (arr_6 [i_4 + 1] [i_1 - 1]) : (arr_6 [i_4 + 1] [i_1 - 2]))))));
                                arr_14 [i_4] [i_3] [i_2] [i_1 - 1] [i_0] = (arr_0 [i_2] [i_3]);
                            }
                        }
                    }
                    arr_15 [i_0] [i_1 + 1] [15] [i_1 + 1] = ((+(((arr_6 [11] [i_1 + 1]) ? (arr_9 [i_1] [i_1 + 1] [i_1 - 2] [2] [i_1 - 2]) : (arr_9 [i_0] [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 - 1])))));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_15 = ((-(arr_4 [i_1 + 1])));
                    var_16 = (arr_4 [1]);
                    var_17 = (((~(arr_2 [i_0] [i_1 - 2]))));

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_0] [8] [i_0] [i_0] = (arr_19 [i_6] [i_5] [i_1] [i_0]);
                        arr_23 [i_0] [5] [9] [i_6] [i_6] = (arr_10 [11] [i_1] [i_1 - 2] [1]);
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_18 = (arr_17 [2] [3] [i_0]);
                        arr_27 [i_0] [i_0] [i_1] [i_5] [i_7] = (min((min((arr_0 [i_0] [i_0]), (arr_20 [i_0] [i_1] [i_1 - 2]))), ((max((arr_19 [i_0] [i_1 + 1] [i_5] [i_7]), (arr_19 [i_0] [i_1] [i_0] [i_7]))))));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_7] [i_7] [i_5] = (min(((min((max(var_5, (arr_17 [i_0] [i_0] [i_0]))), (arr_10 [i_0] [i_0] [i_1 + 1] [i_1 + 1])))), (min(((~(arr_0 [i_7] [i_1]))), (arr_25 [i_5])))));
                            arr_32 [i_0] [15] [i_1 - 2] [15] [i_5] [i_7] [i_8] = (max((max(((-(arr_18 [11] [i_1]))), (arr_4 [i_1]))), ((((arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_5] [i_7] [i_8]) ? (arr_11 [i_0] [i_1 - 2] [i_1 + 1] [i_5] [i_5] [i_0]) : (arr_11 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_5] [i_5]))))));
                            var_19 &= (max((arr_25 [i_1 - 1]), (arr_25 [i_1 + 1])));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            arr_35 [i_0] = ((~(min((((arr_26 [i_1] [i_5] [i_7] [i_9]) ? (arr_10 [i_9] [i_7] [i_5] [i_0]) : (arr_30 [i_0] [i_1 + 1] [i_1 + 1] [i_0] [i_9] [6] [i_0]))), (arr_30 [i_1 + 1] [i_1] [i_1] [1] [i_1 - 1] [i_1] [i_1])))));
                            var_20 = (min(var_20, (arr_19 [i_1] [i_1] [i_1] [i_0])));
                            var_21 = (min((arr_18 [i_1 - 1] [i_1 - 1]), ((max((arr_26 [i_0] [i_1 - 1] [i_7] [i_9]), (arr_9 [i_0] [i_1] [i_5] [6] [i_9]))))));
                            var_22 = (max((((!(!var_2)))), (arr_4 [i_1 - 2])));
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                    {
                        arr_39 [i_10] [i_1 - 1] [i_0] = arr_21 [i_1] [i_1] [i_1 - 1] [1] [i_1];

                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            arr_42 [i_0] [11] [i_0] [i_0] [i_0] = ((((arr_6 [i_0] [i_11]) << (var_0 + 5010640924174686055))));
                            arr_43 [4] [i_0] [i_1] [i_1] [i_10] [i_11] &= (arr_20 [i_10] [i_1 + 1] [i_1 - 1]);
                        }
                        var_23 = (arr_18 [i_5] [i_5]);
                        var_24 = ((~(arr_36 [i_10])));
                    }
                    arr_44 [5] [i_1] &= ((~(arr_29 [i_0] [i_0])));
                }
                arr_45 [i_0] [i_1 + 1] = ((-((~(arr_29 [i_1 - 1] [i_1 - 1])))));
            }
        }
    }

    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        var_25 = (((((-(max((arr_47 [i_12]), var_4))))) ? (arr_46 [i_12]) : (max((min((arr_47 [i_12]), (arr_47 [i_12]))), ((~(arr_47 [i_12])))))));
        var_26 += (min(((((arr_47 [i_12]) < ((~(arr_47 [i_12])))))), (arr_46 [i_12])));
    }
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        arr_52 [i_13] [i_13] &= (((~((max((arr_19 [i_13] [6] [i_13] [i_13]), (arr_17 [i_13] [i_13] [i_13])))))));
        var_27 &= ((min(((-(arr_11 [i_13] [i_13] [i_13] [15] [i_13] [13]))), ((max((arr_51 [i_13] [i_13]), (arr_26 [i_13] [i_13] [i_13] [7])))))));
        var_28 = (max((min(var_13, (arr_16 [7] [i_13] [i_13] [i_13]))), var_12));
    }
    #pragma endscop
}
