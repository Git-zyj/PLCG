/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((((var_2 | var_8) + 9223372036854775807)) >> (var_0 + 1641397520))))));
    var_17 = ((-2533887473607335394 <= (var_10 & var_1)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (max((((!(arr_1 [i_0])))), (((arr_5 [i_0] [i_1] [i_2]) ? var_12 : (!2533887473607335386)))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] = (max(-2533887473607335394, -20));
                                arr_13 [i_0] [4] [i_2] [i_1] [i_0] = (max(1984, (((arr_9 [i_0] [0]) + (((arr_5 [i_3] [i_3] [i_0]) ^ (arr_1 [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = (((103 ? (arr_15 [i_5]) : 3)) * (((((arr_14 [i_5]) < var_3)))));
        var_18 -= ((135 ? (arr_15 [i_5]) : (arr_15 [i_5])));
        var_19 *= ((-var_0 - (arr_14 [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 16;i_7 += 1)
            {
                {

                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        arr_26 [6] [i_6] [i_8] = ((arr_25 [i_6] [i_8] [14] [i_8] [i_8 - 1]) & (arr_20 [11] [i_6] [i_6]));
                        var_20 *= (arr_19 [i_7] [i_7 + 1] [i_8 - 1]);
                        var_21 = (max(var_21, (arr_19 [i_5] [i_6] [i_6])));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_22 = (max(var_22, ((((((arr_29 [i_10] [i_5] [i_7] [i_7] [i_5] [i_5]) + 9223372036854775807)) >> (((arr_28 [i_5] [i_6] [i_6]) - 1207808391433954655)))))));
                                arr_31 [i_5] [i_6] [12] [i_9] [i_7] &= (~-1);
                            }
                        }
                    }
                    arr_32 [i_5] [i_6] [i_6] [i_7 - 3] = var_1;
                    arr_33 [i_5] [i_6] = 1984;
                    arr_34 [i_5] [i_5] [i_6] [i_6] = (((!var_14) != (arr_14 [i_6])));
                }
            }
        }
    }
    #pragma endscop
}
