/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((~-1) ? ((var_5 ? -15 : var_1)) : var_2));
    var_11 = 18;
    var_12 = (min(var_12, var_0));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [3] [i_0] [i_0] [1] = ((((max((arr_8 [i_0] [i_0 + 1] [i_0] [i_1]), 2217951503))) ? 255 : -7));
                    var_13 = var_4;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        var_14 = ((!(arr_12 [i_0 + 1] [i_0 - 3] [4] [i_0])));
                        var_15 = ((39 ? -1363867860 : (arr_12 [i_0] [1] [i_0 - 1] [6])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_16 = (~6);
                        var_17 = (min(var_17, (arr_8 [i_0 - 3] [8] [8] [i_0 - 3])));
                        arr_17 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [9] = (arr_8 [19] [16] [i_0] [i_2]);
                    }
                    arr_18 [i_0] = var_6;
                }
            }
        }
    }
    #pragma endscop
}
