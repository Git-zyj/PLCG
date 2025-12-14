/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        var_12 = 117;
                        var_13 = ((((((arr_8 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) ? var_0 : var_9)) % ((var_4 ? (arr_2 [i_0] [i_0] [1]) : var_5)))));

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_14 = (((var_9 % var_7) ? (((((var_0 ? (arr_7 [i_1] [i_1] [i_3] [i_4]) : var_10))) ? (arr_11 [i_0] [i_1] [i_0] [i_4]) : (((arr_1 [i_0] [i_1]) ? (arr_10 [i_4] [i_2] [i_2] [i_1]) : var_4)))) : 16571201472534348192));
                            var_15 = (((((var_6 ? var_9 : (var_2 / var_1)))) ? (((-9223372036854775807 - 1) ? var_0 : (arr_3 [i_0] [i_1] [i_1]))) : var_4));
                            var_16 = ((-9223372036854775807 - 1) || (arr_11 [13] [i_1] [i_0] [i_1]));
                        }
                        arr_14 [i_0] [11] [i_0] = (arr_9 [i_0]);
                        var_17 = (((((65387 ^ 11266389479184265763) + (arr_13 [i_0] [i_0] [i_2] [i_3] [i_3]))) << (((((-6062897939010523833 ? 106 : (arr_3 [i_0] [i_0] [i_0]))) != (((((arr_9 [i_0]) || (arr_0 [i_0] [i_1]))))))))));
                    }
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_0] = (i_0 % 2 == zero) ? (((((((arr_15 [i_0] [i_1] [i_1] [i_0]) || (arr_9 [i_0])))) >> (((((arr_0 [i_0] [i_5]) - var_11)) - 8475644854051402417))))) : (((((((arr_15 [i_0] [i_1] [i_1] [i_0]) || (arr_9 [i_0])))) >> (((((((arr_0 [i_0] [i_5]) - var_11)) - 8475644854051402417)) + 49)))));
                        var_18 = (min(var_18, var_4));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_19 = arr_13 [i_7] [i_0] [i_2] [i_0] [i_0];
                                var_20 = (max(var_20, (((((((11939531798966479522 ? 1 : 8508820863539099172)) & (var_1 != var_5))) >= (((((var_10 ? var_9 : var_11))))))))));
                                var_21 = 49141;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 22;i_9 += 1)
        {
            {
                var_22 = (((var_5 ? (((arr_26 [i_8 + 1] [i_9]) & (arr_24 [i_9]))) : ((((arr_24 [14]) ? var_5 : (arr_25 [i_9 - 3])))))));
                var_23 = (((arr_25 [i_8]) && var_3));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 24;i_11 += 1)
                    {
                        {
                            arr_34 [i_8] [7] [i_8] [i_10] = arr_29 [i_8] [i_9 - 1];

                            for (int i_12 = 0; i_12 < 1;i_12 += 1)
                            {
                                arr_37 [i_8] [i_11] [i_8] = (((((arr_30 [i_8] [9] [i_8]) ? (arr_24 [i_8]) : (arr_29 [i_8] [i_8])))));
                                arr_38 [i_8] [i_9 - 2] [i_9] [i_11] = (((((arr_33 [i_8] [i_8] [i_10] [i_11] [i_12]) / var_2))));
                            }
                            arr_39 [i_8] [i_9] [i_10] [i_8] [i_11] = ((((var_5 == (arr_29 [i_8] [i_11 + 1])))));
                        }
                    }
                }
                arr_40 [i_8] [i_9] = ((((((((var_2 != (arr_27 [9] [9]))) ? 11620586669921064470 : (var_2 >= var_1))) + 9223372036854775807)) >> ((((3207218727572689471 ? (var_11 + var_6) : (((var_5 ? (arr_35 [i_8]) : var_2))))) + 8475644854051402360))));
            }
        }
    }
    var_24 = (min(var_24, (var_0 >= var_6)));
    var_25 = (max(var_25, var_10));
    var_26 = var_7;
    #pragma endscop
}
