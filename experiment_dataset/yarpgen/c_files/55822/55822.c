/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((min((((~((min(var_13, var_9)))))), ((((min(var_1, var_14))) ? 11406563483391216820 : (1228780103 && var_10))))))));
    var_17 -= (max((max(var_9, (min(18446744073709551615, var_14)))), var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = max((!20), (arr_5 [i_0] [i_1] [i_1]));
                var_19 = 25204;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            {
                var_20 = (min(var_20, -20157));
                var_21 = (min(var_21, ((((arr_8 [i_2 + 2]) <= (min((arr_11 [i_3]), ((var_9 ? (arr_9 [i_2 + 3]) : var_12)))))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_22 = (max(((min((((arr_10 [i_3]) ? (arr_15 [i_2 - 3] [i_2 - 1] [i_4] [i_5]) : (arr_9 [i_4]))), (!var_6)))), (max((((arr_8 [i_5]) - var_4)), (arr_11 [i_4])))));
                            var_23 = (min(var_23, ((((min((arr_15 [9] [i_5] [i_5] [i_5 - 4]), var_4))) ? (((arr_15 [i_5] [i_5] [i_5] [i_5 - 4]) + (arr_13 [i_4] [i_5] [18] [i_5 - 1]))) : ((var_0 ? var_9 : (arr_13 [i_2] [i_2] [i_4] [i_5 - 3])))))));
                            var_24 ^= ((!(arr_11 [i_2])));
                            var_25 = (min(var_25, (arr_14 [0])));
                            arr_17 [16] [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3] = (max(((((arr_14 [i_5 - 4]) || (arr_14 [i_5 + 1])))), ((~(arr_14 [i_5 - 1])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_26 ^= (arr_10 [i_3]);
                                var_27 = (arr_25 [i_2] [i_2] [i_2] [i_2] [i_2]);
                                arr_27 [i_2] [0] [i_6] [i_2] [i_8] [i_7] [i_6 - 1] = (arr_22 [i_2] [i_6] [i_7 + 3] [6]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
