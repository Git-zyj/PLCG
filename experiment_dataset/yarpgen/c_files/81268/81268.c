/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = var_9;
    var_17 = ((1497037709326395230 ? -2082809367 : 7));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0 + 2] = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_13 [i_0] = (~var_7);
                        arr_14 [i_0] [i_1] [i_0] [i_1] = arr_1 [i_0 - 2];
                    }
                }
            }
        }
    }
    #pragma endscop
}
