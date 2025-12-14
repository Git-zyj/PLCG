/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (arr_6 [i_0]);
                    arr_7 [i_0] [i_2] [i_0] = ((arr_6 [i_2 + 1]) ? (arr_6 [i_2 - 1]) : (arr_6 [i_2 - 1]));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        arr_17 [i_0] [i_0] = 5255184493689272640;
                        arr_18 [i_0] [9] [i_0] [i_0] [i_0] [9] = (arr_16 [i_0] [i_3] [i_4] [i_5]);

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_21 [i_0] [i_3] [i_4] [i_4] [i_5] [i_5] [i_6] = (((arr_2 [i_3] [i_3 + 1]) && var_0));
                            var_20 = (((764 ? var_7 : 65521)));
                            arr_22 [i_6] [i_3] [i_4] [i_5] [4] [i_0] [3] = (arr_1 [i_0]);
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_21 ^= var_0;
                            arr_25 [i_0] [i_3] [i_3] [9] [i_7] = ((!(arr_11 [10])));
                            arr_26 [i_0] [i_0] [i_4] [i_5] = (((arr_15 [i_3 - 2]) ? (arr_14 [i_0] [i_3] [i_4] [i_5] [i_3 - 1] [i_3]) : ((((arr_15 [i_3]) ? var_13 : var_14)))));
                            var_22 = (max(var_22, (arr_12 [i_0] [i_4] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_23 = var_9;
    #pragma endscop
}
