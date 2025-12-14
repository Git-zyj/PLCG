/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_9 | -13) == var_10));
    var_20 = (max(var_20, 18196463076907084948));
    var_21 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_22 = (max(var_22, ((((-1 / -7) + (min((arr_2 [i_1]), (arr_2 [i_1]))))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_23 = (((-(((arr_4 [i_1]) ? var_14 : (arr_1 [4]))))));
                    var_24 = (min(var_24, ((min((((~(arr_8 [i_2] [i_1] [i_0])))), -27773)))));
                    var_25 = (min(var_25, ((((arr_5 [i_0] [i_1]) ? var_11 : (min((11235 * 0), var_14)))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [14] [i_2] [14] [i_0] = ((((arr_3 [i_3]) ? (arr_0 [i_1] [18]) : (arr_5 [i_2] [i_0]))));
                        var_26 = (((arr_1 [i_0]) ? (arr_1 [i_2]) : (arr_1 [i_1])));
                        arr_12 [i_0] [i_1] [i_2] [i_0] = (((arr_3 [i_3]) & (arr_0 [i_0] [i_3])));
                    }
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    arr_17 [i_0] [i_4] [i_4] = ((((((arr_6 [i_0]) || var_7)) ? ((var_1 ? (arr_8 [1] [1] [i_4]) : 18196463076907084965)) : var_7)));
                    arr_18 [i_4] [i_1] [10] [i_4] = var_1;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_27 = ((min(var_14, (min(127, 4)))));
                                var_28 = ((((min(((var_13 ? var_0 : (arr_3 [i_1]))), ((1 ? 35 : 1))))) ? (arr_8 [i_0] [i_0] [18]) : (min((arr_2 [i_4]), (((1 ? 1 : 1)))))));
                                var_29 = (max(var_29, (((~(arr_2 [i_0]))))));
                                arr_25 [i_6] [i_4] [i_0] = (((var_12 ? ((var_12 >> (arr_19 [i_6] [i_0] [i_1] [i_0])) : (arr_15 [i_0] [21] [i_0])))));
                            }
                        }
                    }
                    var_30 |= var_18;
                }
                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_31 = (((((min(-221917157, 0)) ? 2147483647 : ((17031256370887981907 ? 8988912831919491071 : 117440512))))));
                                var_32 = (max(var_32, ((((arr_21 [14] [i_1] [17] [7] [i_7] [21] [i_9]) ? ((((arr_27 [i_7 + 1] [i_7 + 2]) - (arr_19 [i_7] [i_7 + 1] [i_7 + 1] [i_7])))) : 1)))));
                            }
                        }
                    }
                    var_33 = (min(var_33, (((-(min((min(var_4, (arr_31 [i_7] [i_7]))), ((var_4 & (arr_7 [i_0] [i_1] [i_7]))))))))));
                }
                /* vectorizable */
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_34 = ((var_9 ? (arr_36 [i_0] [i_0] [i_10] [i_10 + 1] [i_12] [i_12]) : (arr_36 [i_12] [i_12] [16] [i_10 + 1] [i_12] [i_1])));
                                var_35 = ((1 ? ((var_11 ? 105 : -27)) : 1));
                            }
                        }
                    }
                    arr_43 [i_0] [i_1] [i_10] [i_1] = ((-11 ? (arr_40 [i_0] [i_0] [i_1] [i_1] [1] [i_10 + 2]) : 1153002766));
                    var_36 = (max(var_36, 1));
                }
            }
        }
    }
    #pragma endscop
}
