/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1432901780559729778;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        var_19 &= (!-1432901780559729779);
                        var_20 = 3105860743209887374;
                    }
                }
            }
        }
        var_21 = (arr_5 [6] [i_0]);
        arr_11 [i_0 - 1] = 141;
        arr_12 [i_0] [i_0] = var_16;
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 7;i_4 += 1)
    {
        arr_16 [i_4] = (!var_14);
        arr_17 [i_4] [i_4] = (122 && 122);
        arr_18 [i_4] [i_4] = (~var_5);
    }
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        var_22 = ((~(((arr_20 [i_5 - 2] [i_5]) ? var_7 : var_16))));
        var_23 = (min(var_23, (((~(~var_15))))));
    }
    #pragma endscop
}
