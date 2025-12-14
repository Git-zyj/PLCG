/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 &= var_6;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] = (i_0 % 2 == zero) ? (((var_9 << (((arr_4 [i_0]) + 3273052900046902975))))) : (((var_9 << (((((arr_4 [i_0]) - 3273052900046902975)) - 5372996253249728002)))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] [i_1] = ((var_8 ? ((var_5 ? (arr_0 [i_1] [i_2]) : var_0)) : var_0));
                            var_12 ^= ((var_2 ? (arr_1 [5]) : (((var_7 ? (arr_10 [i_2] [i_1] [i_2]) : var_4)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_5] = ((var_0 ? (arr_11 [i_5] [i_5 - 1] [5] [i_5 - 1] [i_5] [i_5 + 1] [i_5 - 1]) : var_3));
                            arr_18 [i_5] [i_0] [i_0] [i_0] [i_0] = (var_1 && var_8);
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            var_13 = var_5;
                            var_14 = ((var_3 >= ((var_7 ? var_2 : var_2))));
                            var_15 = var_8;
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_16 = (max(var_16, (((((((var_0 ? (arr_12 [i_0 - 1] [i_1] [i_2] [i_3] [7]) : var_8)) >= var_6)) && (((((((arr_19 [i_1] [i_1] [i_1] [i_1] [i_0]) ? var_6 : var_1))) ? var_6 : ((var_3 ? (arr_0 [i_0] [i_3]) : (arr_19 [10] [i_2] [10] [i_3] [i_7])))))))))));
                            var_17 ^= (((((arr_10 [i_2] [8] [10]) ? ((var_9 ? var_5 : var_8)) : (arr_0 [9] [i_3]))) & var_5));
                            arr_23 [i_0] [i_3] [i_2] [i_1] [i_0] = var_2;
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_7] [i_1] [i_3] = ((((((var_7 ? 3456416173 : 16))) ? var_7 : ((var_1 ? var_8 : var_6)))));
                        }
                        arr_25 [i_0 + 1] [i_0] [i_2] [i_3] = ((((((arr_22 [i_0] [i_0] [i_0] [i_3] [i_3] [i_1]) ? var_4 : var_7))) ? var_6 : ((var_1 ? var_4 : var_9))));
                        var_18 = (min(var_18, var_6));
                    }
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        var_19 = ((1571700561 ? 8431430043454383340 : 24));
                        var_20 -= ((0 ? 2 : (-9223372036854775807 - 1)));

                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_2] [i_8 + 1] [i_0] = var_2;
                            arr_31 [i_8] [i_8] [i_0] [i_8] [i_0] = ((((((arr_8 [10] [i_0] [i_2]) ? var_7 : ((((var_0 <= (arr_8 [i_0] [i_8] [i_2])))))))) ? var_2 : (arr_16 [i_0] [i_1] [i_2])));
                            arr_32 [i_0] [i_1] [12] [i_0] [i_9 - 2] [i_0] = ((arr_15 [i_0] [i_9 + 1]) ? (((arr_27 [i_0 - 2] [i_9 + 1] [i_0] [i_0 + 1] [i_9 + 1] [i_8 - 1]) ? var_5 : (arr_27 [i_1] [i_9 + 1] [i_0] [i_0 + 1] [i_9] [i_8 - 1]))) : (((arr_15 [i_0] [i_9 + 1]) ? (arr_15 [i_0] [i_9 + 1]) : var_7)));
                            var_21 = (min(var_21, (arr_5 [i_1])));
                        }
                        var_22 = (min(var_22, ((((((arr_16 [i_8] [i_8 - 1] [i_0 - 3]) ? var_6 : (arr_16 [i_8] [i_8 - 1] [i_0 - 3])))) ? (arr_16 [i_8] [i_8 - 1] [i_0 - 3]) : ((var_1 ? var_9 : (arr_20 [i_8 + 1] [i_8] [i_8] [i_8 + 1] [i_8] [i_8 - 1] [i_0 - 3])))))));
                    }
                    arr_33 [i_0] = ((((((-6631341872745290655 ? var_1 : 1)))) >= (var_8 / var_8)));
                    arr_34 [i_0] [i_0] [i_1] [i_2] = var_2;
                }
            }
        }
    }
    #pragma endscop
}
