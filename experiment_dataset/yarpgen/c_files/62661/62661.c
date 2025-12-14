/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 = ((!((max((var_14 + -69), (var_8 % var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [18] = (((((min((((arr_2 [i_0] [i_1]) && (arr_0 [i_0] [i_0]))), (arr_1 [i_0]))))) - (max((min(2588578351990771240, (arr_1 [i_0]))), (arr_2 [16] [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [23] [2] [i_3] [2] = (((max(72, ((var_12 / (arr_8 [i_1])))))) * (arr_5 [i_2]));
                                var_19 = (((arr_11 [i_3] [i_3] [i_3] [i_2] [i_2 + 1] [i_2] [i_1]) > (((arr_6 [i_0] [i_2 - 1] [i_0] [22]) / (arr_11 [i_4] [8] [i_4] [i_4] [i_2 + 2] [14] [i_2 - 1])))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] = (max((((arr_9 [i_2] [i_2] [i_2] [i_2] [i_2 - 1]) < (arr_9 [i_1] [2] [1] [i_2] [i_2 - 1]))), ((!(arr_11 [i_1] [4] [i_1] [i_2] [i_2 + 1] [i_2] [i_4])))));
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_2] = (((!(arr_9 [i_0] [i_2] [2] [i_3] [i_2 + 2]))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_20 = ((-((max(15858165721718780376, (arr_8 [i_1]))))));

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_21 = (!-var_12);
                        arr_23 [i_0] = (((((arr_2 [i_0] [i_1]) * (arr_21 [i_0] [i_6] [i_5] [i_6] [i_0] [i_0]))) ^ var_11));
                    }
                    var_22 = var_2;
                    var_23 = (((arr_8 [7]) || ((max((arr_1 [10]), (arr_8 [i_0]))))));
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_24 = (max((arr_17 [i_1] [i_7] [i_7]), ((((arr_17 [i_0] [22] [i_7]) > (arr_17 [i_0] [i_1] [i_9]))))));
                                var_25 = ((!((max((arr_25 [i_0] [i_1] [3] [i_8]), (arr_17 [i_7] [i_7] [i_7]))))));
                                arr_34 [i_0] [i_9] [i_0] = ((((((2879841872337026876 && (arr_13 [9] [6] [i_0] [i_1] [i_1] [i_0])) || ((!(arr_33 [6] [i_9] [i_9]))))))));
                                arr_35 [i_9] = ((((max((arr_29 [i_0] [i_1] [i_7] [i_8] [i_9]), (arr_3 [i_7])))) ? ((max((arr_8 [i_0]), (arr_29 [i_0] [i_1] [i_7] [i_8] [i_9])))) : ((~(arr_3 [i_0])))));
                            }
                        }
                    }
                    var_26 = (arr_22 [19] [i_0] [i_0] [i_0]);
                }

                for (int i_10 = 4; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    var_27 = (((arr_25 [12] [i_10 - 1] [i_10 - 3] [i_10]) / ((-(arr_37 [i_0] [18] [18] [24])))));
                    arr_38 [i_0] [i_0] [i_0] [i_0] = ((((max((arr_11 [i_0] [i_0] [5] [24] [i_1] [21] [5]), (((arr_10 [8] [i_1] [i_1] [i_10]) / -1108160614))))) || (arr_0 [i_10 - 4] [i_0])));
                    var_28 = ((((arr_0 [i_10 + 1] [i_10 + 1]) ? (((max((arr_21 [15] [1] [1] [1] [i_0] [i_1]), 41191)))) : (arr_11 [0] [1] [1] [i_10 - 2] [i_10] [i_10 - 2] [i_10 - 4]))) * ((((!(min((arr_1 [i_0]), (arr_1 [11]))))))));
                    arr_39 [i_0] [i_0] [i_0] [9] = ((-(((255 || (arr_27 [4]))))));
                }
                for (int i_11 = 4; i_11 < 22;i_11 += 1) /* same iter space */
                {
                    var_29 = (arr_42 [i_11] [i_11] [i_11 - 1] [i_11]);
                    arr_43 [i_0] [i_11] [i_1] = (arr_24 [i_0] [4] [i_0] [1]);
                }
            }
        }
    }
    #pragma endscop
}
