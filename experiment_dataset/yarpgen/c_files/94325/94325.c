/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~-var_10);
    var_17 = 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [13]);
        arr_3 [i_0] = (((arr_0 [i_0]) || var_12));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 |= (((arr_7 [i_1 - 3] [i_1 - 2] [i_1] [i_1 - 3]) ? (arr_4 [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1 + 2] [i_1])));
                    var_19 = (arr_7 [1] [i_1 + 2] [i_2] [i_1 - 2]);
                }
            }
        }
    }
    #pragma endscop
}
