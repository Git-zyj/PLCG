/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_8 == var_14);
    var_16 = (var_11 * var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_0] [i_2] = (((arr_8 [i_0] [i_1] [i_0]) == var_7));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_17 = var_2;
                        arr_16 [i_0] [16] [i_2] [21] [i_0] [i_3] = (arr_3 [i_1]);
                        arr_17 [i_0] [i_0] [i_0] [16] = var_13;
                    }
                }
            }
        }
    }
    var_18 = (((-var_9 & (~var_10))));
    #pragma endscop
}
