/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_11 = (max(var_11, (arr_0 [4])));

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            arr_5 [7] [i_1] [0] = (arr_1 [3] [3]);
            arr_6 [i_1] [i_1 - 2] = ((225 ? -1 : var_8));

            /* vectorizable */
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_12 = (arr_7 [i_1] [i_0 + 2] [i_0] [i_1]);
                            var_13 = -var_9;
                            arr_17 [i_4] [i_4] [6] [i_4] [i_4] [i_1] [i_4] = arr_10 [i_0 - 1] [i_0 - 1];
                            arr_18 [i_4] [9] [i_4] [i_1] [i_4] = (((arr_7 [i_1] [2] [0] [i_3]) ? (arr_8 [i_0 - 2] [i_2 + 2]) : (((arr_13 [i_0] [3]) ? (arr_8 [i_0] [1]) : (arr_9 [i_1] [i_2 + 1] [i_3] [i_4])))));
                        }
                    }
                }
                var_14 = (min(var_14, ((((arr_16 [i_0] [i_0] [11] [i_0] [i_0] [i_0 - 2] [i_1 - 2]) ? var_0 : (arr_16 [i_0] [i_0] [i_0] [0] [0] [i_0 + 2] [i_1 + 1]))))));
            }
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                var_15 = (arr_7 [i_1] [i_5] [i_1] [i_1]);
                var_16 = (!var_8);
                var_17 = (arr_12 [i_1] [i_1] [i_1] [i_1]);
                var_18 = (arr_11 [i_0] [i_0] [14]);
                var_19 = (arr_16 [i_5 + 1] [i_1] [8] [i_1 - 2] [3] [i_0] [i_0]);
            }
        }
        var_20 = (~225);
    }
    var_21 = var_9;
    #pragma endscop
}
