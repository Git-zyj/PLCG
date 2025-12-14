/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 -= ((61440 >> ((((61412 ? 4111 : (1 + 4085))) - 4103))));
                                var_13 = (min(var_13, var_9));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_18 [i_6] [i_5] [i_2] [i_1] [i_0] = (max((arr_9 [i_6] [8] [i_6] [i_6]), (((((arr_10 [i_0] [i_1] [i_2] [7] [21] [i_1]) ? (arr_11 [i_0] [15] [i_0 + 1] [i_0] [15]) : 1295577896948337577))))));
                                var_14 = (arr_4 [21]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    var_15 ^= (max(((((arr_11 [1] [i_7] [i_8] [i_9] [i_9]) ^ (arr_11 [i_7] [i_8] [i_8] [i_8] [i_9])))), var_1));
                    var_16 = (((max((((var_0 ? var_6 : 4136))), -var_9)) % (((((arr_23 [i_9]) | var_8)) * var_4))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_17 *= ((var_5 ? (arr_28 [i_10]) : (arr_29 [i_10])));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 23;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            {
                                arr_42 [i_11] = (arr_41 [i_10] [i_11] [i_11] [21] [i_13] [2]);
                                var_18 = (((arr_34 [i_10] [i_10] [23]) ? var_3 : 4135));
                                var_19 += ((61440 ? ((((arr_30 [i_12] [i_12]) * (arr_39 [i_10] [i_11] [i_13] [i_13])))) : (((arr_37 [i_10]) & var_2))));
                                arr_43 [13] [i_11] [i_12] [i_11] [13] = (arr_41 [i_12 - 1] [i_12] [i_12 - 3] [i_12 - 3] [i_12] [i_12]);
                            }
                        }
                    }
                    var_20 = ((((((var_4 + 2147483647) << (((arr_29 [i_10]) - 701581438))))) ? (~var_8) : var_8));
                }
            }
        }
    }
    for (int i_15 = 3; i_15 < 22;i_15 += 1)
    {
        arr_48 [i_15] = (4123 && var_5);
        arr_49 [i_15] = var_6;
        var_21 = (max(((((min(var_0, 61412))) ? var_9 : (928797844299412673 && 1))), (((((min(var_4, var_1))) == -var_0)))));
    }
    var_22 += var_0;
    var_23 = var_1;
    #pragma endscop
}
