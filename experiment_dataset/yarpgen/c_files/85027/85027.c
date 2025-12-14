/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_6 * 0) | var_7))) || ((((((var_9 ? var_5 : var_10))) ? var_4 : var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_1] |= ((((((arr_5 [i_0] [i_1] [i_2 - 1] [i_0]) ? var_4 : (arr_5 [i_0] [i_2 + 2] [i_3 + 2] [i_4])))) && (var_1 && var_8)));
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] [i_0] = (((((-((1 ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_8))))) ? ((min((arr_4 [i_1] [i_0] [i_4]), var_7))) : ((-(max(var_10, (arr_3 [i_0] [i_0] [i_0])))))));
                                arr_13 [i_4] [i_0] [i_4] [i_4] [i_4] [i_4] [i_4] = (max((arr_9 [i_0] [i_1] [i_2] [i_0] [i_4] [i_0]), (arr_10 [i_0] [i_0] [i_0])));
                                var_12 = (arr_7 [i_0] [i_0] [i_0] [1]);
                            }
                        }
                    }
                    var_13 = (max((min((((var_9 < (arr_10 [i_1] [i_0] [i_1])))), (arr_7 [i_1] [1] [i_0] [i_2]))), (((11064 % var_5) ? (((arr_5 [i_0] [i_0] [i_1] [i_2]) ? (arr_2 [i_0]) : 1)) : (((arr_8 [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_2]) : var_9))))));
                    arr_14 [i_0] = ((0 ? 3072 : (((arr_9 [i_2 - 1] [0] [i_2] [i_2 - 1] [i_0] [i_0]) ? (arr_2 [i_0]) : 8312536920935478160))));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_14 |= ((var_4 ? (arr_16 [i_1] [i_1] [i_2] [i_5]) : (min(1, (arr_7 [i_2 + 1] [i_1] [i_2 + 1] [i_2 + 1])))));
                        arr_18 [i_0] [i_1] [20] [i_0] = (var_4 == var_5);
                        arr_19 [i_0] = (1 + 528);
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        var_15 *= (((arr_2 [i_1]) ? (arr_9 [i_2 - 1] [i_2] [i_6 - 2] [1] [i_6 - 3] [i_1]) : (arr_8 [i_1] [i_1] [i_6])));
                        var_16 = (-var_10 || var_4);
                        var_17 = (((arr_9 [i_0] [i_6 - 2] [i_2] [i_2] [i_2 + 2] [i_0]) % ((var_6 ? (arr_20 [i_0] [i_0] [i_2] [i_6] [i_1]) : (arr_6 [i_0] [i_1] [i_2 - 2] [i_6])))));
                        arr_24 [i_6] [i_0] [i_0] [i_0] = ((arr_21 [i_2 + 1] [i_2] [i_2 + 1] [i_6]) ? var_0 : -var_3);
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_18 = 214;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_19 |= (((arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_29 [i_0] [i_1] [i_7] [i_8] [i_9])));
                                var_20 = ((0 ^ (arr_25 [i_0] [i_9])));
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        arr_34 [i_0] [i_0] = (((arr_3 [i_1] [5] [i_0]) ? var_9 : (((var_9 == (arr_26 [i_7] [i_10]))))));
                        var_21 = ((-((((arr_10 [0] [i_0] [i_0]) && 1)))));
                        arr_35 [i_0] [i_1] [i_0] [i_0] [i_10] = ((var_8 || (((var_7 ? (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]) : 0)))));

                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            var_22 = (min(var_22, 211397819));
                            arr_38 [i_0] [i_11] [i_1] [i_7] [i_7] [i_1] [i_0] = ((var_10 ? (arr_29 [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1] [i_11]) : ((var_9 ? 3840 : 30094))));
                        }
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            var_23 = (min(var_23, (((!(arr_9 [i_0] [i_1] [i_0] [i_7] [i_10] [i_12]))))));
                            arr_41 [i_0] [i_10] [i_0] [i_1] [i_0] = (((arr_8 [i_0] [i_1] [i_7]) || (arr_8 [i_0] [i_1] [i_7])));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_24 = (((arr_31 [i_0]) == 211397806));
                            var_25 = (!var_6);
                            arr_44 [i_0] [i_0] [i_0] [1] [13] = var_2;
                        }
                        arr_45 [i_0] [i_1] [i_1] [i_1] = var_4;
                    }
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        var_26 = (((arr_16 [9] [i_14] [10] [i_14]) ? (arr_16 [i_0] [i_1] [i_0] [i_14]) : (arr_16 [i_1] [i_1] [i_1] [i_1])));
                        var_27 = (arr_26 [i_0] [i_1]);
                    }
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_28 = var_10;
                        var_29 = (((var_1 > 30094) ? (arr_17 [i_15] [i_0] [i_0] [i_0]) : 248));
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 20;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 21;i_17 += 1)
                        {
                            {
                                var_30 = (min(var_30, (((+(((arr_27 [i_16] [i_16] [i_16] [i_16]) - (arr_55 [i_0] [i_7]))))))));
                                var_31 = (!(arr_25 [i_0] [i_0]));
                                arr_57 [i_0] [i_1] [i_7] [i_16] [i_0] = (arr_39 [i_0] [i_0] [i_0] [i_0] [1] [i_0]);
                            }
                        }
                    }
                }
                var_32 = (min(((~(arr_7 [i_1] [i_1] [i_1] [i_0]))), (((arr_7 [i_0] [i_0] [i_1] [i_1]) + (arr_0 [i_0])))));
            }
        }
    }
    var_33 = var_3;
    #pragma endscop
}
