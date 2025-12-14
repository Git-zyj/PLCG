/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, (((var_14 == (arr_0 [i_0 + 1]))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_19 = 28;
                            var_20 = (((arr_7 [i_3] [i_2 + 3] [i_0 - 1] [i_0 - 1]) <= (arr_1 [i_0 - 1] [i_2 + 3])));
                        }
                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            var_21 = ((arr_0 [i_0 - 2]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2]));
                            arr_13 [i_2] [i_1] = (((arr_3 [i_5 + 1] [i_0 - 2]) && ((((arr_11 [i_0] [i_3] [13] [i_3]) ? var_3 : 42558)))));
                            var_22 = (max(var_22, ((((4127660643 | 167306629) || 4127660643)))));
                        }
                        arr_14 [i_0] [i_1] [i_2] [i_3] = (arr_0 [i_0]);
                        var_23 = (((arr_12 [i_2 + 2] [i_2] [5] [i_2]) ? (arr_2 [i_0 - 2] [i_2 + 2]) : (var_4 != 19470)));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_24 = ((max((((arr_3 [i_6] [i_1]) ? var_5 : (arr_1 [i_0] [i_6]))), ((var_7 ? 839291965 : 4)))));
                        var_25 = 4294967270;
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [1] [i_2] [i_2] [i_7] = ((((min((((arr_19 [i_1] [i_2] [i_7]) ? var_5 : (arr_5 [i_7] [5] [i_1] [i_0]))), (arr_16 [i_0 + 1])))) <= ((((var_1 > (arr_8 [i_7] [i_7] [i_7]))) ? (arr_10 [i_2 + 3] [i_0 - 2] [5]) : var_8))));
                        var_26 = (arr_20 [1] [i_0] [0] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                    }
                    arr_22 [12] [i_1] [i_2] = ((((arr_16 [i_1]) ? ((-33554432 & (arr_15 [i_0] [i_2]))) : (arr_5 [i_2] [i_1] [i_2] [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_27 = ((((((((arr_12 [14] [9] [14] [i_8]) < 13776460373435729287)) ? var_11 : ((((var_1 > (arr_7 [i_8] [i_0] [i_1] [i_0])))))))) ? ((((!(arr_8 [i_0 + 1] [i_0 - 2] [i_2 + 1]))))) : (((arr_10 [i_0] [i_2] [i_9]) & (arr_9 [i_0] [3] [i_0] [10] [i_0] [i_0] [i_0])))));
                                arr_27 [i_0] [i_1] [i_2] [i_1] [i_9] = ((!((((arr_15 [i_2 + 3] [i_0 + 1]) ? (arr_15 [i_2 + 3] [i_0 + 1]) : (arr_2 [i_2 + 3] [i_0 + 1]))))));
                                var_28 = (max(((((((arr_15 [i_9] [i_9]) << (32767 - 32766)))) ? var_9 : 33554431)), (((-(arr_2 [i_2 + 3] [i_0 - 1]))))));
                            }
                        }
                    }
                    var_29 = (max(var_29, 1));
                }
            }
        }
    }
    #pragma endscop
}
