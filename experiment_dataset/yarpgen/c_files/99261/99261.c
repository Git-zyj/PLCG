/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            var_11 = (((arr_9 [i_0] [i_0] [i_3] [i_3]) > (arr_1 [4])));
                            var_12 = (arr_3 [i_2 + 1]);
                            var_13 = ((var_4 ? var_3 : (((((arr_4 [i_0] [i_0] [i_2]) + 2147483647)) << (((arr_8 [i_0] [i_3] [i_0] [i_0]) - 62))))));
                            var_14 = (((arr_7 [6] [1] [i_4 + 1]) % var_8));
                        }
                        for (int i_5 = 1; i_5 < 7;i_5 += 1)
                        {
                            var_15 = (min(var_15, (0 <= 1)));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] [i_5] = (((-127 - 1) ? (-1321925088 || 255) : 29762));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_16 = ((arr_7 [i_1] [i_1] [i_1]) & ((-1249177973 ? var_2 : 26548)));
                            arr_18 [i_0] [i_1] [i_3] [1] = 22;
                            var_17 = (max(var_17, ((((arr_17 [i_0] [i_0] [i_1] [i_2 + 3] [i_2 + 1]) ? (arr_14 [i_0] [i_1] [i_2 + 3]) : (arr_0 [i_2 - 2]))))));
                        }
                        var_18 |= (((arr_9 [i_2 - 1] [i_2 + 1] [i_1] [i_2 - 1]) > 1));

                        for (int i_7 = 2; i_7 < 8;i_7 += 1)
                        {
                            var_19 = (arr_2 [i_2 - 2]);
                            arr_22 [i_0] [3] [i_1] [i_1] [i_3] [i_3] [3] = var_2;
                            arr_23 [i_0] [i_3] [i_0] [i_3] [i_7] = (((9223372036854775800 & -17086) - ((((-1321925088 + 2147483647) << (var_9 - 899643515))))));
                        }
                    }
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        arr_26 [i_0] [i_0] [4] [5] [5] = (arr_12 [i_1] [i_2 + 1] [i_2 + 2] [1] [i_2 + 1]);

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_30 [i_0] [i_1] [i_2] = (var_6 - var_5);
                            var_20 = 428508747959029594;
                        }
                    }
                    var_21 = (arr_9 [i_0] [i_1] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 9;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_22 = (((((arr_1 [8]) ? var_0 : 9223372036854775807)) + var_4));
                                var_23 = var_2;
                            }
                        }
                    }
                    var_24 &= (arr_17 [i_1] [i_0] [i_1] [8] [8]);
                }
                /* LoopNest 3 */
                for (int i_12 = 1; i_12 < 8;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            {
                                arr_46 [i_1] [i_13] [i_12] [i_0] [i_1] |= (max((((arr_37 [i_14] [i_14]) >> (var_2 + 347435943))), ((max((arr_4 [i_1] [i_13] [i_14]), var_10)))));
                                var_25 = (min(var_25, ((max((((arr_38 [i_14] [i_14] [i_12 + 1] [i_13]) ? (arr_8 [i_12 + 2] [i_14] [i_12 - 1] [i_12 + 2]) : (arr_8 [2] [i_13] [i_12 + 2] [i_13]))), (arr_8 [i_1] [i_13] [i_12 - 1] [i_12]))))));
                            }
                        }
                    }
                }
                var_26 -= (--1249177973);
                var_27 = ((!((max(var_8, ((((arr_10 [i_0] [i_1] [i_1] [i_1] [i_1]) == 9223372036854775807))))))));
            }
        }
    }
    var_28 = ((1249177988 ? ((var_9 & ((var_4 ? var_3 : var_9)))) : ((((-27054 != (max(var_7, var_8))))))));
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            {
                var_29 = (min(var_29, (arr_47 [4])));
                var_30 |= (~(((arr_47 [i_15]) & var_1)));
            }
        }
    }
    var_31 |= ((((((-1338 ? var_5 : var_0)) - -var_0)) <= var_4));
    #pragma endscop
}
