/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = arr_1 [i_0];
        arr_3 [i_0] = var_13;
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_16 += (arr_4 [i_1 - 1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1] [i_1] [i_4] [i_5] = var_15;
                                arr_19 [i_1 + 3] [i_2] [i_1] [i_2] [i_5] = (max((((arr_9 [i_1]) / (arr_7 [i_1 + 4] [i_1 + 4]))), (~var_2)));
                                var_17 = (((max(123, 31213))));
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = var_0;
                                arr_21 [i_1] [i_1] [i_5] [i_1] [i_5] [i_3] [i_1] = ((~(((min(var_14, (arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] [i_5]))) / (var_13 != -123)))));
                            }
                        }
                    }
                    arr_22 [i_1] = ((var_5 * (((arr_14 [i_1] [i_1] [i_3] [i_1 + 3] [i_3] [i_3]) / (arr_11 [i_1 + 1] [19] [i_2] [i_1 + 3])))));
                }
            }
        }
        arr_23 [i_1] [i_1] = var_13;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_26 [i_6] = (arr_6 [i_6] [i_6]);
        var_18 -= (((arr_9 [10]) / (arr_9 [8])));
        arr_27 [i_6] = var_8;
        var_19 = (~26002);
    }
    var_20 = var_4;
    #pragma endscop
}
