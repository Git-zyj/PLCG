/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [24] [24] = ((!((((5 ? var_15 : var_0))))));
                var_18 += var_5;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_19 = (min((min((arr_0 [i_2] [i_2]), (arr_2 [i_2] [i_3] [i_6]))), (((var_6 < (arr_3 [i_5]))))));
                                arr_17 [i_4] [i_2] [i_4] [i_4] [i_4] = -var_9;
                                var_20 = ((var_6 ? (((var_4 ? (((((arr_10 [i_6] [i_3]) + 2147483647)) << (var_17 - 1652689008))) : (arr_10 [i_2] [i_2])))) : (((arr_2 [i_3 - 1] [i_3 - 1] [i_3 - 1]) & var_2))));
                                var_21 = ((!((min((var_2 ^ var_5), -1)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_22 = var_11;
                            var_23 = (max(var_23, (((!((((arr_13 [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1]) ? (arr_13 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]) : var_5))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            arr_28 [i_2] [i_9] [i_2] = (((((arr_13 [i_3 + 1] [i_3 - 1] [i_9] [i_10]) + (arr_13 [i_3 + 1] [i_10] [i_3 + 1] [i_10]))) - ((+((((arr_10 [i_2] [i_3]) > var_4)))))));
                            var_24 = ((-((-(arr_24 [i_2] [i_3 + 1] [i_9] [i_2])))));
                            var_25 = (min(var_25, (((((((arr_27 [i_3] [i_3] [i_3 + 1] [i_10] [i_9 + 2]) || ((var_10 || (arr_27 [i_10] [i_2] [i_9] [i_3] [i_2])))))) ^ ((((var_15 ? var_12 : (arr_22 [i_2] [i_2] [i_10]))))))))));
                            var_26 = (min(var_26, (((((((max(var_14, var_12))) - ((-6925 ? var_16 : (arr_16 [i_2] [i_2] [i_9 + 2] [i_2] [i_10]))))) + ((((arr_13 [i_2] [i_3 - 1] [i_9] [i_9 - 2]) + var_11))))))));
                            arr_29 [i_2] [i_3] [i_9 + 2] [i_2] [i_10] = ((((var_7 ? (arr_5 [i_2]) : var_7)) + ((var_3 ? var_17 : (arr_5 [i_2])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            {
                                arr_46 [i_15] [i_13] [i_13] [i_14] [i_15] [i_13] = (((((~(((arr_36 [12] [i_14 + 2] [i_12]) ? (arr_38 [i_14] [i_11]) : var_2))))) ^ ((((max(var_0, var_3))) % var_8))));
                                var_27 = (max(var_27, (((((((var_5 - var_9) - ((((arr_2 [i_12] [i_13] [21]) || var_4)))))) ? ((min((((arr_0 [i_14] [i_13]) ? var_0 : var_9)), (!13347)))) : (max((arr_36 [i_12] [i_14 + 3] [i_12]), (max(var_11, (arr_44 [17] [i_12] [i_12]))))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            {
                                arr_53 [i_17] [i_13] [i_13] [i_11] [i_11] = (!((min((arr_39 [i_13] [i_13] [i_13]), (arr_39 [i_11] [i_12 + 1] [i_13])))));
                                arr_54 [i_11] [i_13] [i_11] [4] [i_11] [i_11] = (min(((((min(0, var_9))) ? (var_13 ^ var_9) : (!var_12))), (((arr_45 [14] [i_12 - 1] [i_12 - 2] [i_12 - 1] [i_12 + 1] [i_13] [i_17]) ? ((var_4 ? var_13 : -918141060)) : (arr_34 [i_13] [i_11] [i_11])))));
                                var_28 = (((arr_47 [i_11] [i_12 + 3] [i_12 - 1] [i_12 + 1] [i_12 + 2] [i_13]) == ((((arr_42 [i_12 - 2] [i_13] [i_16]) + (arr_39 [i_11] [23] [i_13]))))));
                                var_29 = (arr_32 [i_16]);
                                var_30 = (min(var_30, (((var_0 | ((((max(-5, var_15))) ^ (arr_2 [i_11] [i_12 - 1] [i_13]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = var_14;
    #pragma endscop
}
