/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(min(var_10, var_3))));
    var_18 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (arr_1 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, (arr_8 [i_0])));
                            var_21 = (max((((1363088434 >> (var_12 - 7303409857493371011)))), (arr_2 [i_3])));
                            var_22 = var_11;
                            arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] = var_8;
                            var_23 = ((-((((arr_4 [i_0] [i_0]) >= var_7)))));
                        }
                    }
                }
                var_24 = (min(var_24, (((1 - (min(((((arr_6 [i_0] [i_1] [i_1]) ? (arr_10 [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_1] [i_1])))), var_5)))))));

                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    var_25 = (max(((((arr_11 [i_0] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) == 1))), ((922184601 ? 1 : 1))));
                    var_26 = (min(var_26, ((((min((arr_14 [i_4 + 1] [i_4 + 1]), 1870141558)) < var_3)))));
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    arr_20 [i_0] = ((-(arr_15 [i_0] [i_0] [i_5])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_27 = (339405978 ^ (min((arr_5 [i_7]), ((9223372036854775807 | (arr_17 [i_0] [i_1] [i_1] [i_1]))))));
                                arr_26 [i_0] [i_0] [i_0] = ((((arr_15 [i_6] [i_1] [i_0]) & (arr_15 [i_7] [i_1] [i_1]))) & ((max(1, 1870141577))));
                            }
                        }
                    }
                    var_28 = (max(var_9, (1 || 1)));
                    var_29 ^= ((((min((arr_21 [i_5] [i_5] [i_5] [i_5] [i_5]), 32))) ? (((var_8 ? (1 >= var_11) : ((var_6 ? var_15 : (arr_7 [i_0] [i_0] [i_0] [i_1])))))) : (max((var_5 | var_2), var_14))));
                }
                for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
                {
                    arr_29 [i_0] [i_0] [i_0] [i_0] = ((((max(var_9, var_7))) ? (((min(1, 144)))) : ((var_10 / ((var_6 ? 48 : var_3))))));
                    var_30 = (max(var_30, ((((((min((arr_19 [i_8 + 1] [i_8 + 1] [i_8] [i_8]), var_4)) + 2147483647)) >> (arr_2 [i_1]))))));
                }
                for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
                {
                    var_31 = (min((((arr_11 [i_9 + 1] [i_9 + 1] [i_9] [i_9] [i_9 + 1]) ? (arr_7 [i_9 + 1] [i_1] [i_0] [i_9 + 1]) : var_3)), (min((arr_11 [i_9 + 1] [i_1] [i_9] [i_9] [i_9]), (arr_11 [i_9 + 1] [i_1] [i_9] [i_1] [i_0])))));
                    var_32 -= var_3;
                    arr_34 [i_0] [i_1] [i_9] [i_9] = (min(var_12, (((var_5 ? 1 : (var_13 + -32758))))));
                    arr_35 [i_9] [i_1] = arr_1 [i_0] [i_0];
                    var_33 = ((var_13 <= ((-(arr_5 [i_9 + 1])))));
                }
            }
        }
    }
    var_34 = (var_3 ? (var_16 + var_9) : ((var_14 ? var_14 : var_12)));
    #pragma endscop
}
