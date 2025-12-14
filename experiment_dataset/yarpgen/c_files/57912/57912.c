/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_16 -= -12224458722435612151;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3 + 1] = (((arr_4 [i_1] [i_2]) != 3125256147));
                        arr_12 [i_0 - 1] [i_1] [i_1] [i_0 - 1] = -2360854214310209225;
                        var_17 = (arr_3 [i_0 + 1]);
                    }
                }
            }
        }
        arr_13 [i_0] = (((((24892 ? 43565 : 3125256127))) == -3600452779296737012));
        arr_14 [23] [i_0 + 2] = (((arr_3 [i_0 + 1]) ? (arr_3 [i_0 - 1]) : 3125256127));
        arr_15 [i_0] = (1 - (arr_0 [i_0 + 2]));
    }
    var_18 = (24892 ? var_3 : (min(((var_9 ? 24884 : var_8)), (3125256108 <= var_9))));
    #pragma endscop
}
