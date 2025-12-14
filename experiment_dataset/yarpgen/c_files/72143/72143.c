/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    arr_7 [i_2 + 1] [i_2] = arr_4 [i_2 + 1] [i_2] [i_2];

                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        arr_10 [i_1] = ((((((22967 || (arr_6 [i_2 + 2] [i_2] [i_2] [i_2 - 3]))))) <= ((-((208048066 ? -39 : -1932222512157382221))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_21 += (((arr_3 [0] [i_2 + 1] [i_2]) << (((arr_3 [i_0] [i_2 + 1] [8]) - 455233359))));
                            var_22 = (((arr_3 [i_3 - 2] [i_2 + 2] [i_2]) ? (arr_8 [i_3 + 1] [i_2 - 4] [i_3 + 1] [i_3 + 1] [i_4] [i_3 + 1]) : (arr_8 [i_3 + 3] [i_2 - 4] [i_3 + 3] [i_3 + 3] [i_2 - 1] [i_2 - 1])));
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_23 = (max(var_23, ((max((((arr_6 [i_3 - 3] [i_3 - 3] [i_3 - 2] [i_3]) | (arr_15 [i_5] [i_5] [0] [i_2] [3] [i_0] [i_0]))), (((arr_3 [2] [i_1] [i_0]) ? (((arr_12 [i_0] [6]) ? (arr_2 [i_0]) : 86)) : ((max((arr_15 [i_5] [i_3] [i_3] [i_2 + 1] [i_0] [i_1] [i_0]), (arr_9 [6] [6])))))))))));
                            var_24 = ((((arr_9 [8] [3]) ? (!-1932222512157382221) : var_0)));
                        }
                    }
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_6 - 1] [i_6 - 1] [i_6 + 2] [i_6]);
                        arr_21 [i_0] [i_1] [i_0] [i_6 - 1] = (((((((var_1 ? var_10 : 86))) ? (((arr_2 [i_2]) | 97)) : 117)) ^ (arr_17 [3] [i_1] [i_1] [i_1])));
                        var_25 = (((max(42557, -123))) ? (arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_6 - 1]) : (arr_17 [i_0] [i_0] [i_0] [i_0]));
                    }
                }
            }
        }
    }
    var_26 += ((((max(var_5, (!372059560)))) ? ((max((!-1932222512157382195), var_13))) : var_9));
    #pragma endscop
}
