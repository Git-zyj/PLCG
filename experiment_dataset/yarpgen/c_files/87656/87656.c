/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_15 += (arr_6 [i_0] [i_0] [i_0 + 1] [i_0 - 3]);
                            arr_11 [i_1] [i_0] [i_1] [1] [i_2] = (arr_4 [i_0 - 4] [i_0 - 1] [i_0 - 1]);
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_16 = (min(var_7, (((var_3 ? ((var_0 ? var_11 : (arr_5 [i_0] [i_0] [i_0] [i_4]))) : ((max((arr_5 [i_0] [i_0] [i_0 - 4] [i_0 - 2]), (arr_3 [i_0] [i_0])))))))));
                    var_17 = -2012259918;
                    var_18 = (max((arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 4] [i_0 - 1]), (arr_10 [4] [4] [i_0 - 2] [i_1])));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_19 = (arr_6 [6] [i_1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_0 - 1] [i_0 - 4] [i_0 - 4] [i_0] [i_6] [i_0 - 3] = (((arr_12 [i_5] [i_5]) ? (arr_2 [i_7] [i_7] [i_5]) : (max((arr_22 [i_0] [i_6] [i_5] [i_0 - 4] [i_7 - 2]), (arr_7 [i_0] [i_7 - 2])))));
                                arr_25 [i_6] [i_6] = arr_8 [i_0] [i_1] [i_5] [i_5];
                                arr_26 [i_6] = (min((((max((arr_14 [i_1] [i_1]), (arr_18 [i_1] [i_6]))) != (arr_17 [i_5] [i_5] [1]))), ((92 >= ((max((arr_21 [i_0] [i_1] [i_5] [i_6] [i_6]), 218)))))));
                                var_20 *= (-59 ? (((-(arr_3 [i_0 - 3] [i_7 - 2])))) : (arr_10 [i_0 - 3] [i_7 - 2] [i_7 - 2] [i_7 - 2]));
                            }
                        }
                    }
                    arr_27 [i_5] [i_5] [i_1] [i_0] = ((min(var_1, var_4)));
                    var_21 = ((((min((arr_9 [i_0 - 1] [i_5] [i_5] [i_5] [i_5]), (arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1])))) & (min((-4150947212465378473 && var_3), var_4))));
                }
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    arr_31 [i_8] [i_1] [i_0 + 1] [i_0 + 1] = var_0;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_22 = (((max(-59, (arr_16 [i_0] [i_1] [i_0] [i_10 + 1])))));
                                arr_39 [3] [3] = (max(((var_8 + (arr_13 [i_0 - 3]))), ((((var_2 ? -59 : (arr_6 [10] [i_9] [i_1] [i_1])))))));
                                var_23 = 0;
                                var_24 *= ((255 || ((max((!var_10), ((var_8 ? -127994524 : var_12)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((min((max(var_5, -1509346016606421589), var_3))));
    #pragma endscop
}
