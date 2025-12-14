/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_15 ? -var_8 : (((var_4 ? var_15 : var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = (min(124, 10523243657195098551));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_20 &= (((((-(arr_1 [i_2])))) ? ((var_15 ? (arr_2 [i_2]) : var_14)) : (((((arr_11 [i_0] [i_1] [i_2] [i_3] [7]) == var_9))))));
                                arr_12 [i_3] [i_1] = ((var_7 ? ((~(arr_11 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 3]))) : var_15));
                                arr_13 [10] [i_1] [15] [i_3] [i_4] = ((21356 || (3825194655 | 51011)));
                            }
                        }
                    }
                    var_21 = ((var_9 ? (arr_1 [i_1]) : (arr_0 [i_0 + 1])));
                    var_22 = ((10600106698308192571 ? 7846637375401359045 : 108740851));
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_23 *= ((var_12 ? (10600106698308192571 < 0) : (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 2])))));

                            for (int i_7 = 0; i_7 < 25;i_7 += 1)
                            {
                                var_24 = (min(((((min(var_6, var_13)) != (arr_9 [i_5 + 2] [i_5] [i_6] [i_7] [i_7])))), var_16));
                                var_25 ^= var_10;
                                var_26 = (min(var_26, ((min(3825194653, 3825194657)))));
                                arr_23 [i_5] [i_5] [i_5] = var_16;
                            }
                            var_27 -= (min((max((((arr_18 [i_0] [i_1] [i_5] [i_1] [i_5 + 2]) ^ (arr_4 [i_0 + 1] [17] [i_6]))), var_6)), (min(-var_3, (max(var_13, (arr_18 [10] [i_6] [10] [i_6] [i_1])))))));
                        }
                    }
                }
            }
        }
    }
    var_28 = ((((min(4194303, -18))) ? (((((var_12 ? var_8 : var_5))) - -var_17)) : ((max(var_8, (min(var_1, var_8)))))));
    #pragma endscop
}
