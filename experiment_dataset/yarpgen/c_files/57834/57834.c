/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_3;
    var_17 = max((((-837355415 ? ((var_5 ? 1546852230 : 53)) : var_10))), (((((var_5 ? var_2 : (-2147483647 - 1)))) ? 1649840598 : var_8)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (((min((arr_0 [i_0]), (!var_2)))) <= (arr_1 [i_0] [i_0]));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_19 = (((arr_4 [i_3]) ? ((((-9223372036854775807 - 1) ? ((max((arr_1 [i_0] [i_1]), (arr_2 [i_0] [i_0] [i_0])))) : ((((arr_10 [i_2]) >= (arr_11 [i_0] [i_1] [i_2] [1] [2]))))))) : (max(var_8, (arr_3 [i_0] [i_1])))));
                            var_20 ^= (((((((var_15 ? var_12 : (arr_3 [i_1] [i_1])))) ? ((max((arr_7 [i_0] [i_2]), (arr_0 [i_0])))) : -var_7)) * ((+(((arr_9 [i_4] [i_3] [i_2] [i_1] [i_0] [i_4]) ? var_0 : var_0))))));
                            arr_16 [i_4] [i_4] [i_2] [i_2] [i_1] [i_4] [i_0] |= (arr_1 [i_0] [i_0]);
                        }
                    }
                }
            }
            var_21 = (arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_0]);
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_22 += (~1);
            var_23 = (max(var_23, ((((((1 ? 11380853455083841967 : 0))) ? (arr_4 [i_0]) : (arr_4 [i_5]))))));
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_24 += (arr_12 [i_0] [i_6] [i_6]);

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_25 -= ((~(arr_20 [i_6] [i_6])));
                            var_26 ^= ((!((min((arr_17 [i_0] [i_6] [i_7]), (max((arr_13 [i_0] [i_0] [i_0] [i_0]), var_7)))))));
                            var_27 = ((var_10 > (((!((((arr_28 [i_0] [i_0] [i_7] [i_9]) / var_1))))))));
                        }
                    }
                }
                var_28 = -89;
            }
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                var_29 = 9223372036854775807;
                var_30 = (max(var_30, ((((~34) ? 32589 : (arr_27 [i_0] [i_6] [i_6] [i_6]))))));
            }
        }
    }
    var_31 ^= var_13;
    #pragma endscop
}
