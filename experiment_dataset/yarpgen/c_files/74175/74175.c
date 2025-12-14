/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = 1;
                var_18 |= ((254 ? (arr_0 [i_0 - 1] [i_1]) : 13));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_3 - 1] [4] [i_1] [i_0] = (!-1);
                            arr_10 [i_3] [i_0] = 8321475267896430703;
                            var_19 = (max(var_19, var_8));
                            arr_11 [i_0 - 3] [i_1] [i_1] [i_3 - 1] &= ((((min((arr_7 [i_0 - 2] [i_3 - 1] [i_2] [i_2]), 0))) || -1));
                            arr_12 [i_0 + 1] [i_1] = (((arr_4 [i_0] [i_1]) ? ((((var_16 & (arr_2 [8]))) | var_3)) : (((var_15 ? -var_4 : var_7)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_20 = (arr_1 [i_0]);
                                arr_22 [i_4 + 1] [i_0 + 1] [i_4 + 1] [i_0 + 1] [i_0 + 1] = ((((min(var_11, -2147483622))) < ((-(var_5 < 38737)))));
                                arr_23 [i_0 - 2] [7] [i_4] [10] [22] [i_5] = ((((arr_16 [i_6 - 1] [i_4 + 1] [i_0 + 2]) ? var_10 : (arr_16 [i_6 - 1] [i_4 - 1] [i_0 - 2]))));
                                arr_24 [i_0] [i_1] [i_4] [15] [i_5] [i_4] = var_4;
                                var_21 = (max(((((arr_7 [i_4 + 1] [i_6 - 1] [i_6] [i_6]) != (arr_7 [i_4] [i_6 - 1] [i_6] [i_6 - 1])))), (max(var_3, var_13))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (((((max(var_13, var_16)))) ? ((var_7 ? (~var_12) : (var_15 > 6))) : var_9));
    #pragma endscop
}
