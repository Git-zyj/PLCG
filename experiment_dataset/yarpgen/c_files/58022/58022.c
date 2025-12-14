/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    var_21 = ((22728 ? 1 : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((-(((arr_2 [i_0]) ? 0 : (arr_2 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] = (arr_2 [i_0]);

                            for (int i_4 = 2; i_4 < 21;i_4 += 1)
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_4 - 1] = ((-7403 | (~var_16)));
                                var_22 = (((((arr_14 [21] [1] [i_1] [i_2] [i_1] [i_0]) ? var_7 : (arr_11 [i_0] [i_1] [i_0] [i_0] [i_4])))));
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 24;i_5 += 1)
                            {
                                arr_19 [i_0] = (-(arr_12 [i_0] [i_0] [i_0]));
                                arr_20 [9] [i_1] [i_5 - 1] [0] [i_0] [20] [i_5] = (arr_2 [i_0]);
                            }
                            for (int i_6 = 0; i_6 < 25;i_6 += 1)
                            {
                                arr_23 [i_2] [i_0] [i_0] [i_1 + 1] = (arr_12 [i_0] [i_2] [i_3]);
                                var_23 = (((arr_12 [5] [i_1] [i_6]) ? (arr_9 [i_0] [i_1 + 1] [i_1]) : (~1134369537)));
                                var_24 = 3344438102;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
