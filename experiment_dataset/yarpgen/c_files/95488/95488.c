/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(var_2, (min((29904 <= var_10), var_6)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (((arr_7 [i_0] [i_0]) >> (!var_0)));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3] [3] [i_0] = arr_0 [i_0];
                        arr_13 [i_0] [i_0] [i_2] [i_3] [i_0] = ((((((min((arr_11 [i_0] [i_1] [i_2 - 2] [i_2 - 2]), var_7)) + (arr_5 [i_0] [i_2 - 2] [i_0])))) ? (((arr_0 [i_1]) / (max((arr_11 [i_0] [6] [i_2 + 2] [i_0]), var_11)))) : (((arr_1 [17] [i_0]) * (arr_11 [i_0] [i_1] [i_2 - 1] [i_2])))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        arr_17 [13] [i_0] [i_2] [i_2 - 3] = ((var_0 && (arr_16 [i_2 + 1] [i_0] [i_4] [i_4] [i_4])));
                        arr_18 [i_0] [19] [i_2 + 2] = (((arr_0 [i_2 - 4]) | var_5));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_22 [i_0] [i_2] [i_0] [i_0] = (max(2756995718, (min(2756995732, (max((arr_20 [15] [i_1] [20] [i_5] [i_5]), (arr_19 [i_0] [i_1] [i_0] [i_5])))))));
                        arr_23 [12] [i_0] [i_2] = (arr_21 [i_5] [i_0] [i_2] [i_1] [i_1] [i_0]);
                        arr_24 [2] [2] [i_1] [i_0] [i_5] = (arr_15 [i_0] [i_1] [i_0]);
                    }
                }
            }
        }
    }
    var_18 = var_9;
    #pragma endscop
}
