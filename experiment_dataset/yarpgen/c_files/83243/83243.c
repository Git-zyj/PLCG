/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = -18007;
                                arr_14 [i_0 - 1] [i_1] = var_5;
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] = (min(18007, 8646911284551352320));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_6] [i_0] [i_0] [i_0 + 1] = ((-(arr_2 [i_0 + 1])));
                                var_17 ^= (((arr_3 [i_0 - 1] [i_0 + 1]) ? (((((arr_3 [i_0 + 1] [i_0 - 1]) && (arr_3 [i_0 - 1] [i_0 + 1]))))) : (min((arr_3 [i_0 + 1] [i_0 + 1]), 572027492))));
                                arr_22 [i_6] [i_1] [i_1] [i_2] [i_5] [i_6] [i_6] = ((((-18007 && (((var_13 ? (arr_11 [i_0 + 1] [i_0 + 1]) : var_6))))) ? 1146244849 : (((((-(arr_1 [i_2])))) * (max((arr_4 [i_5] [i_1]), (arr_8 [i_2])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_18 = 12975;
                                arr_28 [i_0] [i_1] [i_2] [i_8] [i_8] = (((((-(arr_24 [i_7 + 2] [i_0 + 1] [i_0 - 1] [i_0] [i_0])))) ? (max((((-(arr_23 [i_0] [i_1] [i_0] [i_7])))), (((arr_2 [i_2]) ? (arr_9 [i_7]) : var_8)))) : ((((((((arr_3 [i_0] [i_1]) + 9223372036854775807)) >> (12313060850015643520 - 12313060850015643491))))))));
                                var_19 = var_6;
                            }
                        }
                    }
                    arr_29 [i_0 - 1] = (arr_19 [i_0] [i_0] [i_0] [i_0 - 1] [i_1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            {
                var_20 = ((min(((var_11 * (arr_32 [i_9])), (var_10 - var_15)))));
                arr_35 [i_10] [i_10] [i_10] = ((4670852891176053964 ? -1515462119 : ((-(max(var_6, -532723826))))));
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_43 [i_13] = ((!(arr_36 [i_9 + 1] [i_12] [i_13 + 1] [i_13 + 4])));
                                var_21 ^= var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
