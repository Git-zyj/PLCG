/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += 91;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 += ((~(max((max(4604517872464965513, (arr_3 [i_0] [i_1]))), (((1 ? var_5 : (arr_1 [i_0]))))))));

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] = var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 ^= (max((arr_4 [i_3 - 1] [i_4 + 2] [i_2 - 2]), (((arr_4 [i_3 - 3] [i_4 - 2] [i_2 + 1]) + (arr_4 [i_3 + 1] [i_4 - 2] [i_2 - 2])))));
                                var_18 = ((((((((arr_3 [i_0] [i_0]) * (arr_1 [1])))) ? -24488 : ((13330 ? (arr_10 [1] [i_1] [i_2 + 1] [i_0]) : -4396388460263032289)))) ^ 1144326596));
                                var_19 = ((~((~((var_10 ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : 52))))));
                            }
                        }
                    }
                    var_20 = 2742847754;
                    var_21 = (((arr_2 [i_2 - 1] [i_1]) == ((((var_13 || 8121) ? ((var_0 ? (arr_5 [6]) : 15)) : ((-1459 ? var_13 : (arr_10 [i_1] [i_1] [i_1] [i_0]))))))));
                    var_22 -= var_1;
                }
                arr_14 [i_0] [i_0] [i_0] = (max(var_12, ((((arr_1 [i_1]) >> (var_6 <= var_0))))));

                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    var_23 *= (((arr_11 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5] [1]) & (((((18356182645044535802 ? 15158 : 2090854093856422741))) ? (arr_7 [0] [0]) : var_2))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_22 [i_5 - 1] [i_0] = 1;
                                var_24 = (arr_12 [i_0] [i_1] [i_5] [7] [i_5] [i_7]);
                            }
                        }
                    }
                    var_25 = (max((arr_21 [i_5 - 1]), (min((arr_21 [i_5 + 1]), (arr_21 [i_5 - 1])))));
                    var_26 = ((max((arr_3 [i_0] [i_0]), (max(1743102304772058206, 1668248526)))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_27 = (((arr_24 [1] [i_1] [i_8]) | 4379));
                    arr_26 [i_0] [1] [i_8] = (arr_9 [i_0] [i_1]);

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {

                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            var_28 = (max(var_28, (((var_1 * (var_6 / var_5))))));
                            var_29 = (arr_28 [i_0]);
                        }
                        for (int i_11 = 2; i_11 < 12;i_11 += 1)
                        {
                            arr_37 [i_0] = ((~(arr_34 [i_11] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11 - 1])));
                            var_30 = (((((var_7 ? var_9 : (arr_16 [i_0] [i_1])))) ? (arr_0 [i_11 + 1] [i_11 - 1]) : (arr_35 [10] [i_11] [10] [i_11 + 1] [i_11 + 1])));
                            var_31 = var_13;
                            arr_38 [i_0] [0] [i_0] [i_9] [1] [i_11 - 2] = (arr_12 [i_8] [i_11 - 2] [4] [7] [i_11 + 1] [i_11 - 1]);
                        }
                        var_32 = (var_13 * (arr_13 [i_0] [6] [8] [i_0] [i_0]));
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        var_33 *= var_9;
                        var_34 = ((+((-1319881499 ? (arr_32 [i_0] [11] [i_8] [i_12] [9]) : -177934458))));
                        arr_43 [i_0] [i_1] [i_1] = (-124 & 1);
                    }
                    var_35 = (max(var_35, (((-((((arr_16 [9] [i_1]) < var_8))))))));
                }
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    var_36 = 2809783877;
                    var_37 = (74 <= -1690058972);
                    var_38 -= (((min((arr_25 [i_0] [i_1] [9]), (arr_16 [i_1] [i_1]))) + var_7));
                }
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    var_39 = (min(var_39, (((+(((((arr_20 [i_0] [i_1] [i_14] [i_14]) ? (arr_5 [i_0]) : -40)) & ((max(var_10, -4697))))))))));

                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        arr_52 [i_0] [i_0] = (max((max(((((arr_23 [i_0] [i_0] [11]) > (arr_45 [2] [4] [i_1] [i_0])))), ((var_8 ? (arr_31 [i_0] [i_1] [i_0] [i_15] [8] [i_15] [11]) : (arr_18 [i_0] [i_1] [i_0] [i_15]))))), ((((1403661764 % var_11) <= (arr_19 [i_0] [i_0] [1] [i_0]))))));
                        var_40 = ((((min((arr_35 [6] [i_15] [0] [6] [i_0]), (arr_35 [i_0] [i_1] [i_1] [i_14] [i_15])))) ? ((max((arr_24 [i_15] [i_14] [i_0]), (max((arr_4 [i_0] [i_0] [i_0]), 10135))))) : (arr_48 [i_0] [i_1] [i_14] [i_15])));
                    }
                }
            }
        }
    }
    var_41 = var_11;
    #pragma endscop
}
