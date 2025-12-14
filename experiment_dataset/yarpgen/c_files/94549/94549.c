/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-((1 ? 11 : var_12))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 += ((var_1 ? var_12 : (82746171 ^ var_6)));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_15 = ((-(!var_11)));
                        var_16 = 1378786897;
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_1 - 1] [i_0] [i_0] = 19326;
                        arr_15 [i_0] [i_0] [i_2] [i_4] = var_8;
                        var_17 += ((var_9 && (var_12 / var_9)));
                    }
                }
            }
        }
        var_18 ^= (((var_9 ? var_3 : var_9)));
        var_19 += var_8;
    }
    #pragma endscop
}
