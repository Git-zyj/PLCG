/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-var_6 < (min(-9223372036854775790, (max(13230090574435552816, 3708823479))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0 + 2] [i_0 + 3]);
        var_17 = (((arr_0 [i_0] [i_0 + 2]) >= (arr_2 [i_0 - 1])));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            {
                arr_9 [i_2] = ((((max((var_2 >= 4284720546), -var_1))) ? (max(7337575539852699627, (min(var_15, (arr_7 [i_1 - 1] [i_1 - 1]))))) : (((max(var_1, -7337575539852699622))))));
                arr_10 [i_2] [i_2] [i_2 - 1] = var_13;
                arr_11 [i_2] [i_2 - 1] [i_2] = (arr_6 [i_1] [i_1] [i_1 - 1]);
            }
        }
    }
    #pragma endscop
}
