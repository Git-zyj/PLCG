/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 -= var_4;
    var_12 = var_5;

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [0] = -2;
        var_13 = -271846714;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_14 = -652247499;
        var_15 = -2;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    {
                        var_16 = 681602070;
                        arr_16 [i_1] [i_2] [i_1] [i_2] [i_4] = 1;
                    }
                }
            }
        }
    }
    #pragma endscop
}
