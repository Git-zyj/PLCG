/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 65535));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = 142;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_12 [i_3] [i_2] [i_1 - 1] [i_0] = var_9;
                        var_14 = (arr_10 [i_1] [i_2] [i_3]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_19 [i_0 - 1] [i_1] [i_2] [i_4] [i_5] = 14862447053070911184;
                            var_15 = -742212366;
                            var_16 = -742212350;
                        }
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            var_17 *= -446312272;
                            arr_24 [i_6 + 1] [15] [i_1] [i_4] [i_0 + 2] [i_1] [i_0 + 2] = -742212355;
                            var_18 = (max(var_18, (arr_17 [i_0 + 1] [i_0] [i_0] [i_0] [i_0])));
                            arr_25 [i_1] [i_1 - 2] [i_1] [9] [i_1] = 0;
                        }
                        var_19 = (arr_5 [i_0] [i_2] [i_0]);
                        arr_26 [i_0] [8] [i_0] [i_2] [i_4] [i_4] = 255;
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_29 [i_0] [5] [0] [13] = 1;
                        var_20 = (max(var_20, (arr_21 [i_2] [i_1])));
                    }
                    var_21 += (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
