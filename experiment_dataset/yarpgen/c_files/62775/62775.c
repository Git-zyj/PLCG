/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((!(((var_9 * (var_13 * var_1))))));
    var_16 = var_1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = var_10;
                    arr_8 [i_2] [i_2] [i_1] [1] = (arr_4 [i_0] [i_0 + 2] [i_2 + 1]);
                }
            }
        }
        arr_9 [i_0] [i_0] = ((-(((!(arr_5 [i_0] [i_0] [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_18 = 13107829204559338210;
                    var_19 = (((var_1 ? var_9 : (arr_3 [i_0] [i_3] [i_0]))));
                    var_20 = arr_12 [i_0] [i_3] [i_3];
                    var_21 *= ((arr_15 [i_0] [i_0 - 1] [i_4] [i_4]) | (arr_15 [i_0] [i_0 - 1] [i_0] [i_0]));
                }
            }
        }
        var_22 = (((arr_11 [i_0] [i_0 - 1]) ^ (arr_11 [i_0] [i_0 + 2])));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_23 *= (arr_19 [i_6 - 1] [i_6 + 1] [i_7]);
                    var_24 = 13107829204559338200;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_25 = (((arr_28 [i_5] [i_6 - 1] [i_7] [i_8] [i_7]) || (((var_12 - (arr_7 [7] [i_6 - 1] [i_6] [i_8]))))));
                                arr_30 [i_8] [i_8] [i_7] [i_6] [i_8] = (min((((arr_7 [i_5] [i_6 - 2] [19] [19]) ? 5338914869150213405 : var_11)), var_7));
                                arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_8] = (((arr_27 [i_8] [i_8]) > var_0));
                                var_26 ^= (max(var_11, (((arr_6 [i_5] [i_6] [i_6 + 1]) ? (arr_6 [i_5] [i_5] [i_6 + 1]) : (arr_6 [i_6 + 1] [i_6] [i_6 + 1])))));
                            }
                        }
                    }
                    arr_32 [i_5] [i_5] [i_7] [i_7] = (528482304 == 1);
                    var_27 = 5338914869150213422;
                }
            }
        }
        var_28 = (((((min(var_12, var_8))) | (arr_20 [i_5] [i_5]))) & -5206);
        arr_33 [i_5] = ((!((max(13107829204559338204, (((var_6 ? -107 : 4294967295))))))));
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            {
                                var_29 = ((((((arr_47 [i_10] [i_10] [5] [i_10] [i_10]) + ((((arr_2 [6]) ? (arr_44 [i_11]) : var_9)))))) * (max(5338914869150213378, var_0))));
                                arr_48 [i_10] = (!5338914869150213394);
                                arr_49 [i_10] [i_11] = ((5338914869150213404 ? 5338914869150213378 : -1822957382));
                            }
                        }
                    }
                    var_30 ^= (arr_11 [i_10] [i_11]);
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        for (int i_16 = 3; i_16 < 10;i_16 += 1)
                        {
                            {
                                var_31 = ((arr_41 [i_10] [i_10] [i_16 + 4] [i_10] [i_16 - 1]) - ((min((max(var_8, var_5)), var_0))));
                                var_32 = ((((((~(max((arr_15 [i_10] [i_16 + 1] [i_12] [i_15]), (arr_34 [i_12]))))) + 9223372036854775807)) << ((((-(arr_42 [i_10]))) - 551629941))));
                            }
                        }
                    }
                }
            }
        }
        var_33 = (((+(min((arr_36 [0] [7] [i_10]), var_1)))));
    }
    /* vectorizable */
    for (int i_17 = 1; i_17 < 9;i_17 += 1)
    {
        var_34 = (!-var_14);
        var_35 = (~13107829204559338233);
        arr_57 [6] [i_17] = var_2;
    }
    #pragma endscop
}
