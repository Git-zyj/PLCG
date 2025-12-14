/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 *= (max(((max(-13283, 0))), (arr_0 [i_0])));
        var_20 = (max(var_20, (arr_0 [i_0])));
        var_21 = (min(var_21, ((min((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (((arr_1 [i_0] [i_0]) & 1)))), 1)))));
        arr_2 [10] = (1 % 511);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_22 = 60335;
                    arr_12 [i_1] [i_1] [i_2] [i_3] = (((arr_4 [i_1]) ? var_3 : (arr_4 [i_1])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_23 *= (arr_0 [i_1]);
                                var_24 = (((((var_16 ? 32 : 60235))) ? 1 : 1));
                                var_25 = 1;
                                var_26 = (((-1 ? (arr_13 [i_1] [i_1]) : 1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_27 *= 61364;
                                var_28 ^= ((48968 ? 0 : -63));
                                arr_23 [i_3] [i_2] [i_7] [i_6] [i_7] = (((arr_8 [i_1] [i_1] [i_1]) ? (((arr_5 [i_3] [i_7]) * var_13)) : var_15));
                            }
                        }
                    }
                }
            }
        }
        arr_24 [10] [i_1] = ((-113 ? var_11 : (((arr_4 [i_1]) ? var_6 : -5424783975401121832))));
        var_29 = 47;
    }
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        arr_28 [i_8] = -48956;
        var_30 = (min(61, (arr_27 [i_8])));
        var_31 *= 1;
        var_32 = (min(var_32, ((max(-23914, ((5341815126351089506 ? 1 : 2147483647)))))));
    }
    var_33 = var_2;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            {
                arr_35 [i_10 - 1] [11] [i_9] = (max((((0 > (((arr_27 [i_10 - 1]) ? -1 : 653994997))))), (max((max((arr_29 [i_9] [i_9]), var_7)), ((min((arr_26 [i_9] [i_9]), 65532)))))));
                var_34 = (max(var_34, (((2793 ? -1 : var_13)))));
                arr_36 [i_9] [i_10 - 1] = (((arr_33 [i_9] [i_9]) / ((((((-(arr_26 [i_9] [i_9])))) ? ((min(var_1, -14))) : ((var_10 / (arr_1 [i_9] [i_10 + 1]))))))));
                var_35 = (((1 ? 109 : -5424783975401121832)));
            }
        }
    }
    #pragma endscop
}
