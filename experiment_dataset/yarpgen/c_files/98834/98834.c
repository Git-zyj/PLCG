/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_11 + var_15);
    var_18 = (max(var_18, var_16));
    var_19 = (min(var_19, ((((((var_5 - (((var_10 ? var_3 : var_13)))))) ? var_8 : (((((max(var_0, var_11))) && var_16))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] &= var_16;
                    var_20 = (((arr_5 [i_1 - 1] [i_1] [i_1 - 1]) ? (arr_5 [i_1 - 1] [i_1] [i_1 - 1]) : (arr_5 [i_1 - 1] [i_1 - 1] [i_2])));
                    arr_10 [9] [9] = (arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_21 ^= var_1;
                    var_22 = var_5;
                    arr_14 [i_3] [i_3] = (arr_13 [i_0]);
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {

                            for (int i_6 = 1; i_6 < 13;i_6 += 1)
                            {
                                var_23 = (arr_22 [i_4]);
                                arr_23 [i_0] [i_4] [i_0] |= ((var_12 < ((2591986790 ? 2591986790 : (arr_7 [i_1] [i_1 - 1] [i_1])))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 17;i_7 += 1)
                            {
                                arr_26 [i_7] [i_7] [i_5] [i_7] [i_5] = (3668893839 ? 1 : (arr_7 [i_1 - 1] [10] [10]));
                                arr_27 [15] [15] [i_5] = arr_22 [i_0];
                                var_24 = (min(var_24, (((arr_19 [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 1]) ? ((3489023754 >> (2147483647 - 2147483623))) : ((1 ? 1702980506 : 805943540))))));
                            }
                            arr_28 [6] [i_5] [9] [i_5] = (max(((((((var_9 ? var_14 : var_8))) ? (arr_20 [i_0] [i_1] [i_4] [3] [i_1 + 1] [i_4] [i_5]) : (arr_24 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])))), ((((((arr_21 [i_0] [i_0] [i_4] [i_0] [i_0]) ^ var_11))) ? (((arr_4 [i_0]) ? var_10 : (arr_12 [16] [i_5] [i_5]))) : (arr_4 [i_1 + 1])))));
                        }
                    }
                }
                var_25 = ((((max((arr_18 [i_0] [i_0]), (max(var_7, (arr_25 [1] [10] [i_1 - 1] [i_1] [0])))))) ? ((var_11 ? (max(1, 9014630689980131882)) : ((((arr_22 [i_0]) ? (arr_4 [i_0]) : (arr_19 [i_0] [i_0] [i_0] [1] [i_0])))))) : ((((arr_1 [i_0]) | ((((arr_7 [i_1] [i_1] [i_1 - 1]) ? (arr_15 [8]) : (arr_5 [14] [i_1] [i_1 - 1])))))))));
            }
        }
    }
    #pragma endscop
}
