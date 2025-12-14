/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1 - 1] [i_0] = ((+(((((arr_4 [i_0]) ? 2416 : -346625094)) | var_6))));
                arr_7 [i_0] [i_1] = (min((arr_1 [i_1 + 1]), var_3));
                arr_8 [i_1] = -1381563126;
                arr_9 [i_0] = var_1;
            }
        }
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_12 [i_2] = ((((((arr_5 [i_2] [i_2] [i_2]) ? -20938 : -1008027544))) ? (max((max(-1, 31682)), var_8)) : -1575729591));
        arr_13 [5] [6] = -31684;
        arr_14 [i_2] [i_2] = arr_5 [i_2] [21] [i_2];
    }
    #pragma endscop
}
