/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] = -0;
                                arr_13 [i_4 - 1] [i_0] [i_2 - 2] [i_2] [i_0] [i_0] [i_0] = -4976537754882916394;
                                arr_14 [i_0] [i_0] [0] [i_3] [10] [i_2] [i_2] = ((!((((arr_9 [i_2] [i_2] [i_2] [i_2]) ? (((arr_3 [i_0] [i_2] [i_3]) >> (var_3 + 12163))) : var_15)))));
                                arr_15 [i_0] [i_3] [i_3] [i_2] [i_2 + 1] [i_1] [i_0] = (((((max(-2505171265000923058, var_11)) < (arr_0 [i_1] [i_2]))) ? (arr_5 [i_1 + 2] [i_1 + 1] [i_1 + 1]) : (arr_6 [i_0] [i_1] [i_2] [i_3])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1 + 1] [i_2] [i_0] = 914031612;
                                arr_22 [i_6] [1] [i_6] [i_0] [i_6] = var_0;
                                arr_23 [i_0] [i_1 + 1] [i_2] [i_5] [i_0] = (((((var_3 ? (((max((arr_18 [i_0] [i_0] [i_0]), 0)))) : ((1 ? 1759527365 : (arr_10 [17] [i_1 + 1] [i_2] [i_5] [i_0])))))) ? var_11 : 1));
                                arr_24 [i_2] [i_5] [i_2] [i_1] [i_0] [i_0] [i_2] &= ((((12970 > (arr_16 [i_2] [i_2] [i_2 + 1] [i_6])))));
                            }
                        }
                    }
                    arr_25 [9] [i_0] = ((~(arr_5 [i_1 + 1] [i_1 + 1] [i_2 - 2])));
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            arr_32 [i_7 - 1] [i_7] = ((-(arr_26 [i_7])));
            arr_33 [i_7] [i_7] [6] = (arr_0 [i_8] [i_7]);
        }
        arr_34 [i_7] = var_0;

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_38 [i_7] [i_7] = ((((-(arr_8 [i_7] [i_7] [i_7] [i_7] [i_9] [i_9]))) & 65535));
            arr_39 [i_7] = ((+((16777215 ? (arr_19 [i_7] [i_7]) : 1844927925))));
        }
    }
    for (int i_10 = 2; i_10 < 8;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 9;i_13 += 1)
                {
                    {
                        arr_50 [i_11] [i_12] = (((((((-(arr_18 [i_10] [i_11] [i_12])))) ? (arr_26 [i_11]) : (((arr_42 [i_10]) & 31)))) < (((!(2147483647 - var_4))))));
                        arr_51 [i_10] [i_11] [i_12] [i_13] = ((~(min((-1859627185 + 914031612), ((min(32767, (arr_4 [i_10 + 1] [i_10 + 1] [i_13 + 1]))))))));
                    }
                }
            }
        }
        arr_52 [i_10] = (((((52565 ? 66 : var_15))) ? (((arr_3 [i_10] [i_10 + 2] [i_10 - 2]) ? (arr_3 [i_10] [i_10] [i_10]) : var_15)) : (arr_3 [i_10 + 1] [i_10 + 1] [i_10])));
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        arr_56 [i_14] = min(((~(((arr_55 [i_14] [i_14]) ? var_15 : var_6)))), (52566 | -1385069482));
        arr_57 [i_14] = -212483315;
        arr_58 [10] [i_14] = (~var_10);
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 19;i_15 += 1)
    {
        arr_63 [i_15] [i_15] = (arr_61 [i_15]);
        arr_64 [17] [i_15] &= (2388775971 && 1844927925);
    }
    var_16 = 2147483647;
    #pragma endscop
}
