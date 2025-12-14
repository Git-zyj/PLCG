/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_19 = 31;
        var_20 -= (var_11 ^ var_18);
    }

    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_21 -= var_13;
                        var_22 = (min(var_22, ((max((((((max(11816, 72))) || var_4))), (max(-2002674446, 1)))))));
                    }
                }
            }
        }
        var_23 = (min(var_23, (~1)));
    }
    #pragma endscop
}
