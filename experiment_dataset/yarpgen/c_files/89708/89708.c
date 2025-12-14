/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (max(((max(((min((arr_1 [i_0 - 1]), var_8))), (min((arr_0 [i_1 - 1] [i_1 - 1]), 2805038836))))), (min(((max(65535, 1489928460))), (min(-8114633034215346256, (arr_4 [i_0 - 1] [i_1 - 1] [0])))))))));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_20 = (max(((max((min(77, 0)), 111))), (min(((min(var_6, var_10))), (max(var_3, (arr_6 [i_0] [i_1 - 1] [15] [i_3 + 1])))))));
                        var_21 = (max((min(((max((arr_0 [i_0] [i_0 - 1]), (arr_0 [i_1] [i_1])))), (max(4095, var_13)))), (min(((max(var_18, -8114633034215346256))), (min(var_9, (arr_5 [6] [3] [i_2])))))));
                    }
                    arr_9 [i_0] = (min(((max(255, 36671))), (max(((min((arr_0 [i_0] [i_2]), 29904))), (max(var_3, (arr_2 [i_0])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((min(1, 26)))));
                            var_23 = (min(((max((max(96, 1)), (max((arr_11 [i_4] [i_5]), (arr_22 [15] [i_5] [i_5] [i_7])))))), (max(((max(4101, (arr_13 [i_5])))), (max(1489928469, var_4))))));
                            arr_23 [i_7] [4] [i_6] [i_5] [i_4] = (min((max((min(179, var_17)), (min((arr_12 [i_5] [i_6]), var_12)))), (min(((min(var_7, (arr_11 [i_7] [1])))), (min(var_10, var_12))))));
                        }
                    }
                }
                var_24 = (min((max(((max(var_10, var_6))), (min(var_14, -1)))), ((min(((min(var_10, var_6))), (max((arr_22 [19] [6] [i_4] [11]), var_14)))))));
                arr_24 [15] [i_4] [i_4] = (min(((max(((max(76, 11234))), (min(511, -4102))))), (min(((min(var_10, (arr_12 [i_4] [i_4])))), (min((arr_21 [i_4] [i_5]), var_14))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                {
                    arr_32 [5] = (max(63, -8514301736135449422));
                    var_25 = min(((max(((min(var_18, (arr_20 [i_8] [7] [1] [i_10])))), (max(var_6, (arr_10 [i_8] [0])))))), (min((min((arr_15 [i_8]), (arr_29 [i_8] [i_8] [i_8]))), ((min((arr_10 [i_8] [1]), 3636))))));
                }
            }
        }
    }
    #pragma endscop
}
