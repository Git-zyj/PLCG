/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = var_1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_18 = (((arr_6 [i_1]) + ((max(((var_2 ? 1 : (arr_7 [i_0] [i_1] [i_1]))), (min(51, (arr_10 [i_1] [i_1] [i_2] [i_2] [i_1] [i_2]))))))));

                            for (int i_4 = 3; i_4 < 11;i_4 += 1)
                            {
                                var_19 &= ((~((~(arr_1 [i_0])))));
                                var_20 = (arr_12 [i_1]);
                                var_21 = ((((((arr_10 [i_1] [4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4]) ? (arr_10 [i_1] [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 3]) : 1))) ? (arr_10 [i_1] [10] [i_4 + 1] [i_4] [i_4 + 1] [i_4]) : (arr_10 [i_1] [i_1] [i_4 + 1] [i_1] [i_4 + 1] [3])));
                                var_22 = (max(var_22, -1));
                            }
                            var_23 = var_4;
                        }
                    }
                }
                var_24 = -5453397188123339097;
            }
        }
    }
    var_25 = 1;
    var_26 = (max(6854, -var_15));
    #pragma endscop
}
