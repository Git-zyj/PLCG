/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = 5001520277482475873;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [11] = (max((arr_0 [i_0]), (((~-29467) ? 68 : (1 > -425)))));
                    arr_10 [i_0] [7] [i_2] = -679596436520035089;
                    var_17 = (((var_6 ? (arr_6 [i_1 - 2] [17] [i_2]) : (arr_8 [i_1 + 1] [2] [i_1] [i_2 - 2]))));
                    var_18 = (3188 / -1730241004);
                    arr_11 [i_2] [i_2] [i_0] = ((max((arr_5 [i_1 - 2]), (arr_5 [i_1 - 2]))));
                }
            }
        }
    }
    #pragma endscop
}
