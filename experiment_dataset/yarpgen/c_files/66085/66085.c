/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -2101694661;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3 - 3] = var_8;
                            var_20 *= (arr_6 [i_0]);
                            arr_11 [i_0] = var_5;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_1] [i_4] [i_5] [i_5] = (arr_3 [i_0] [i_1]);
                            var_21 = 7354577178661953216;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 8;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_22 = arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                            var_23 = ((((((((!(arr_23 [i_0])))) << (var_10 + 17021)))) ? ((((arr_8 [i_0] [i_1] [i_6 - 2] [i_7] [i_1] [i_1]) > (arr_2 [i_0])))) : (((((var_11 ? (arr_16 [i_0] [i_7] [i_6] [i_7] [i_1] [i_7]) : -2227965432822724626))) ? (arr_22 [i_0] [i_0] [i_6 - 2] [i_7] [i_7] [i_6 + 1]) : -466113309))));
                            arr_24 [i_0] = (!-1058949161);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_31 [i_1] [i_1] [i_8] [i_9] [i_9] [i_0] = (arr_16 [i_0] [i_1] [i_8] [i_8] [i_8] [i_9]);
                            var_24 = (max(var_24, (arr_8 [i_9] [i_0] [i_0] [i_9] [i_0] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_25 = var_16;
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 16;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_26 = var_14;
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 13;i_14 += 1)
                        {
                            {
                                arr_42 [i_10 - 2] [i_11] [i_13 - 2] [i_14] = ((~((13 | (arr_34 [i_10 + 1] [i_10 + 1])))));
                                var_27 = ((-(((255 || (!9096))))));
                                var_28 = (((((((((arr_35 [i_10 - 2]) ? (arr_39 [i_10 - 1] [i_11] [i_12] [i_13 + 1] [i_13 - 2] [i_14 + 4]) : (arr_32 [i_13] [i_11])))) ? ((-1711581517 + (arr_37 [i_10] [i_10 - 2] [i_10 - 1]))) : (arr_32 [i_10 + 1] [i_11])))) ? var_17 : (var_4 * var_3)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        for (int i_16 = 4; i_16 < 13;i_16 += 1)
                        {
                            {
                                var_29 = var_14;
                                arr_50 [i_10 - 1] [i_11] [i_12] [i_15] [i_12] = ((((((max(var_3, (arr_44 [i_10 - 2] [i_11] [i_12])))) ? ((-(arr_48 [i_10 - 2] [i_10 - 2] [i_10 + 1]))) : (arr_39 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))) <= (max(((-1 ? -1711581524 : -596998038)), 1711581532))));
                                arr_51 [i_10 - 1] [i_11] [i_12] = -1;
                                arr_52 [i_10] [i_11] [i_16] [i_15] [i_16] = var_13;
                                arr_53 [i_16] [i_15] [i_12] [i_11] [i_10 - 1] = var_17;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
