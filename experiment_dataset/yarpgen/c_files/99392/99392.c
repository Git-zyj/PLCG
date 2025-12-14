/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_9 [0] = (arr_5 [i_2 + 1]);
                        var_16 = 65535;
                        arr_10 [i_2] [i_2] [i_0] [i_0] = var_14;
                        var_17 = (arr_3 [i_0] [i_1]);
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = ((-((var_15 ? 2446433233057210263 : var_12))));
    }
    var_18 |= var_5;
    #pragma endscop
}
