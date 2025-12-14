/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_11 | var_8);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = max((((arr_0 [i_0]) ? -56 : (arr_1 [i_0] [i_0]))), (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0]))));
        arr_4 [i_0] [i_0] = ((((((arr_1 [i_0] [i_0]) ? var_17 : -9))) ? (arr_1 [i_0] [i_0]) : (((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0])))));
        arr_5 [i_0] [8] = (arr_0 [1]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [12] [i_1] = ((!(arr_6 [i_1] [i_1])));
                    arr_14 [1] [i_2] [i_2] [i_2] = min((((arr_8 [i_2] [i_3]) - (var_5 - 86575275))), (!536870911));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    arr_20 [i_5] = ((max((arr_1 [i_4] [i_5]), ((0 ? (arr_1 [i_1] [7]) : (arr_17 [i_5]))))) - (((arr_11 [i_1] [i_1]) ? (arr_11 [i_5] [i_1]) : var_14)));
                    arr_21 [i_1] [i_4] [i_5] = (var_6 > (((!(!1389117377)))));
                    arr_22 [i_1] [i_5] [i_5] = (((((!((((arr_16 [i_1] [i_4] [1]) ? (arr_11 [i_1] [i_1]) : 658647481)))))) == 1));
                }
            }
        }
        arr_23 [i_1] [i_1] = (max((arr_15 [i_1]), (max((((arr_8 [4] [4]) ? var_5 : var_13)), (arr_1 [i_1] [i_1])))));
    }

    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_30 [i_7] [i_8] = (((!((!(arr_25 [2]))))) ? ((((arr_26 [i_7 - 1] [i_6] [i_6]) < (arr_29 [i_7 - 1] [i_6] [i_8] [i_8])))) : ((-980395066 ^ (arr_29 [i_8] [i_7 - 1] [i_7 - 1] [i_7 - 1]))));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_33 [i_7] [i_7] = ((((((arr_29 [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]) == -69))) > ((1 ? (arr_32 [1] [i_8]) : (((((arr_24 [12]) + 2147483647)) >> 1))))));
                        arr_34 [i_6] [i_7] = (((((arr_28 [i_7 - 1] [i_7] [i_8] [i_9]) - (max(var_10, var_1)))) == (((arr_31 [i_6] [i_7 - 1] [i_8] [i_8] [i_9]) % (arr_31 [i_7] [i_7 - 1] [i_9] [i_7 - 1] [i_9])))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                arr_41 [i_6] [i_6] [i_6] [7] [i_6] [i_6] [1] = (max(((((((var_12 ? 19 : var_16))) && ((max(-2147483630, var_14)))))), (max(((var_13 ? -822949981 : (arr_35 [i_6] [i_7 - 1] [i_8] [i_10]))), ((max(-1, (arr_25 [11]))))))));
                                arr_42 [i_11] [i_10] [i_7 - 1] [i_7 - 1] [3] [i_7] [i_6] = ((var_11 || (arr_29 [12] [10] [i_7] [i_6])));
                            }
                        }
                    }
                }
            }
        }
        arr_43 [i_6] [i_6] = (!(arr_38 [i_6] [i_6] [i_6] [i_6]));
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
    {
        arr_48 [5] = (((((-var_10 ? ((max(110, 0))) : (((arr_37 [i_12] [i_12] [i_12] [1] [i_12] [i_12]) ? var_1 : (arr_27 [i_12] [i_12] [i_12])))))) ? ((((arr_39 [i_12] [i_12] [i_12] [i_12] [18]) || 1))) : (((arr_47 [i_12]) ? 1 : (arr_47 [i_12])))));
        arr_49 [i_12] = ((!(((var_1 ^ (arr_27 [i_12] [i_12] [i_12]))))));
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
    {
        arr_53 [i_13] = var_14;
        arr_54 [1] = 2147483647;
        arr_55 [i_13] = min((max((min(575756937, (arr_29 [i_13] [i_13] [i_13] [i_13]))), ((var_1 ? (arr_32 [i_13] [i_13]) : 0)))), (((((arr_24 [i_13]) == var_3)) ? (arr_39 [i_13] [i_13] [i_13] [i_13] [i_13]) : ((var_14 ? var_0 : (arr_40 [i_13] [i_13] [i_13] [i_13] [i_13]))))));
        arr_56 [i_13] [i_13] = (arr_37 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);
        arr_57 [1] [i_13] = (-5 <= 1);
    }
    #pragma endscop
}
