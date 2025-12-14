/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = (var_7 && var_2);
                    var_11 = (arr_0 [i_2 + 2]);
                    arr_8 [i_2] [i_0] [i_0] = (max((((!(arr_4 [i_0] [i_1] [i_2 + 1])))), (((arr_4 [i_0] [i_0] [i_2 - 2]) + (arr_4 [i_0] [i_1] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 = (((arr_11 [i_0] [i_1] [i_2 - 2] [i_0] [i_4 + 1] [i_4 + 1] [i_4 + 1]) / (arr_11 [i_0] [i_1] [i_0] [i_0] [i_4] [i_0] [i_2])));
                                var_13 -= 34519;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [7] [i_2] [i_5] = (arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0]);

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_0] [i_2 - 2] [i_2 + 2] [i_5] [14] = -589350372;
                            arr_20 [i_6] [i_5] [i_0] [i_1] [i_0] [i_0] [i_0] = ((-(((!(arr_11 [i_2 - 2] [21] [i_2] [i_0] [i_6] [i_0] [0]))))));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_14 = var_2;
                            arr_24 [i_0] [i_1] = ((((23276 << (((arr_13 [i_0] [i_1] [4] [i_5] [i_7]) - 23)))) & (arr_9 [i_0] [i_0] [5] [i_5])));
                            var_15 = 35100;
                            var_16 = ((-(arr_2 [i_2 - 1])));
                            var_17 = (arr_9 [i_1] [i_2 - 1] [i_2 - 2] [i_5]);
                        }
                    }
                }
            }
        }
    }
    var_18 = (1 % (min(4294967295, 17130957794453687618)));
    var_19 = var_9;
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 6;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 8;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_20 = (((arr_16 [2] [i_10 - 1] [i_10] [i_12] [i_12] [i_12]) > (arr_9 [i_10] [i_10 - 1] [i_10 - 1] [i_10])));
                                arr_38 [i_11] [i_11] [i_11] [i_8] [i_11] = (((((arr_11 [i_8 + 1] [i_8 + 1] [i_8 + 3] [i_8] [i_8 + 2] [i_8 + 4] [i_8 + 2]) / (arr_11 [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_8] [i_8 + 4] [i_8 + 4] [i_8 - 1]))) * (arr_11 [i_8 + 2] [i_8 + 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8 + 4] [i_8 + 2])));
                                arr_39 [i_8] [i_11] [i_10 + 1] [i_8] [i_8] = 1315786279255863984;
                            }
                        }
                    }
                    var_21 = ((589350367 || (var_3 & var_7)));
                }
            }
        }
    }
    var_22 = (min(var_22, var_5));
    #pragma endscop
}
