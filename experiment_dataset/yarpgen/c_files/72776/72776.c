/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_2 [19] [18] = 13261560738670691237;
        var_14 = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = ((-(arr_5 [i_2 + 3] [i_1 + 1])));
                    arr_7 [i_0] = (((arr_3 [i_0 + 2] [i_0 + 2] [i_1 + 1]) ? (arr_3 [i_0 + 2] [i_0 - 2] [i_1 + 1]) : (arr_5 [i_0 - 3] [i_0 - 3])));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {
        var_16 = ((!((!(~var_12)))));
        arr_10 [i_3] = 13261560738670691237;
    }
    var_17 = (min((((~var_9) | var_6)), 0));
    #pragma endscop
}
