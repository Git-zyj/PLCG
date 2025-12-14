/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = 1;
                    arr_9 [12] [i_1 - 1] [i_1 - 1] [i_0] = (arr_0 [i_0] [i_2]);
                }
            }
        }
    }
    var_15 = ((1 ? 2676736435 : 11864));
    var_16 = ((max(((min(92, var_5))), ((var_4 ? var_6 : 674706919829462274)))));
    var_17 += var_11;
    var_18 = ((var_11 ? (((~(~1)))) : (min((min(1, var_1)), var_5))));
    #pragma endscop
}
