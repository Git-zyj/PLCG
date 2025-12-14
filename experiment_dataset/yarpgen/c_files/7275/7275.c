/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (arr_2 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = var_5;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (arr_9 [i_1]);
                    arr_10 [i_0] [i_1] [i_1] = (arr_6 [i_1 + 2] [i_2]);
                    arr_11 [i_1] = (min((arr_8 [i_2 + 3] [i_2 + 3] [i_1] [i_2]), var_0));
                    arr_12 [i_1] [i_1 - 1] = (arr_5 [i_0] [i_1] [i_0]);
                }
            }
        }
    }
    var_17 = var_0;
    #pragma endscop
}
