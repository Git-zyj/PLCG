/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 + 1] = var_1;
        var_13 = (max(var_1, (arr_0 [i_0 - 2] [i_0 + 2])));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_14 |= (4611686018427383808 ? 13835058055282167807 : 14856907020937292800);
                    var_15 = (min(var_15, (((max((arr_6 [i_1] [i_1]), 16781119834373594394))))));
                }
            }
        }
    }
    #pragma endscop
}
