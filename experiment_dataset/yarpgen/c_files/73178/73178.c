/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 = ((~((~(arr_6 [i_1])))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_21 = (arr_3 [i_0] [i_1]);
                        var_22 = (((arr_2 [i_0 + 1]) | (((~(arr_6 [i_1]))))));
                        var_23 ^= ((var_2 ? 57281 : 197));
                        var_24 = (((arr_8 [22] [1] [i_2] [20]) ? (((arr_0 [i_2]) * var_3)) : (var_12 - var_6)));
                        var_25 &= (((arr_7 [i_1] [i_2] [i_3 + 1] [i_3 + 2]) ? var_1 : (arr_7 [i_0 + 2] [i_2] [i_3 - 1] [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_26 = var_5;
                        var_27 &= (min((((arr_3 [i_0 + 2] [i_0 - 1]) >= var_11)), ((var_14 && (arr_3 [i_0 - 1] [i_1])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_28 = ((((-(arr_6 [i_1]))) < var_16));
                        arr_16 [i_1] [i_1] [i_1] [i_2] [i_2] [i_5] = ((-(arr_11 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0])));
                        arr_17 [i_0 - 1] [i_1] [6] [i_1] [i_2] [i_5] = var_17;
                    }
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        arr_21 [i_1] = (((((var_4 || (arr_7 [i_0] [i_1] [i_2] [i_6 + 1])))) & ((max(var_10, var_18)))));

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            arr_25 [i_1] [i_1] = ((var_5 + (arr_22 [i_0] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 + 2])));
                            arr_26 [i_1] [i_1] [i_2] = ((+(((arr_9 [i_0] [i_0] [i_2] [i_1]) ? var_9 : (arr_18 [i_0] [0] [i_2] [i_1] [i_7] [i_7])))));
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                        {
                            var_29 = ((-((((min((arr_14 [i_0] [i_0] [i_0]), (arr_5 [i_6] [i_0 - 1]))) < (var_17 != var_12))))));
                            var_30 = ((((((var_13 < (arr_2 [i_8]))) ? ((((arr_24 [i_0] [i_1] [i_2] [i_6] [i_8]) << (var_12 - 98)))) : (((arr_29 [i_0] [i_0] [i_2] [13] [i_0 + 1] [13] [13]) + var_2)))) < (arr_27 [i_0] [i_1] [i_1] [i_0] [i_0 - 1] [i_0 + 1] [i_6 + 2])));
                            arr_30 [i_0] [i_0 - 1] [i_1] [1] [i_6] [i_1] = (arr_27 [i_0 - 1] [i_1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1]);
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                        {
                            var_31 = (((arr_6 [i_1]) & (arr_6 [i_1])));
                            var_32 = ((-(arr_6 [i_1])));
                            var_33 = (((arr_15 [i_0 + 1] [i_1] [i_2] [i_6 - 3] [i_9]) | var_15));
                            arr_34 [i_0] [23] [i_2] [i_9] [i_9] [i_1] [i_0] = (-(arr_27 [i_6 - 2] [i_1] [i_6] [i_6 + 2] [i_6 - 1] [i_6 - 1] [18]));
                            var_34 = ((var_13 * (arr_31 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 2])));
                        }
                        for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                        {
                            var_35 = (i_1 % 2 == 0) ? ((((((var_18 >> (((arr_27 [i_0 + 1] [i_1] [i_0 + 1] [i_6] [i_6 - 1] [i_1] [i_2]) - 8370))))) ? ((max((arr_27 [i_0] [i_1] [i_0 + 1] [11] [i_6 + 2] [i_1] [i_6]), var_5))) : (arr_27 [i_10] [i_1] [i_0 - 1] [i_1] [i_6 + 1] [i_1] [i_1])))) : ((((((var_18 >> (((((arr_27 [i_0 + 1] [i_1] [i_0 + 1] [i_6] [i_6 - 1] [i_1] [i_2]) - 8370)) - 20770))))) ? ((max((arr_27 [i_0] [i_1] [i_0 + 1] [11] [i_6 + 2] [i_1] [i_6]), var_5))) : (arr_27 [i_10] [i_1] [i_0 - 1] [i_1] [i_6 + 1] [i_1] [i_1]))));
                            var_36 = (((arr_28 [i_0 + 2] [i_0 + 2] [i_2] [i_2] [i_10] [i_1]) && var_7));
                        }
                    }
                    arr_38 [i_1] [i_1] [i_2] [i_1] = (2516701304 / 17930721328754402161);
                }
            }
        }
    }
    var_37 = ((!(((((var_1 ? var_15 : var_13)) ^ (var_10 ^ var_8))))));
    #pragma endscop
}
