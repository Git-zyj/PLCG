/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_2 ? ((-var_0 - (var_5 - var_6))) : var_9);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (max((((arr_2 [i_0 - 1]) / var_7)), ((((((var_4 ? -797850884 : var_14))) - (65522 | 0))))));
                    arr_10 [i_1] = (max((arr_1 [i_0] [i_0]), (((-20 / var_4) >> ((var_0 ? 0 : 0))))));
                    arr_11 [i_0 - 1] [6] [i_0 - 1] = (((((-(arr_6 [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2])))) ? var_14 : (arr_3 [i_1] [0])));
                    arr_12 [0] [i_2 + 2] [0] [0] = ((-(min(((40758 ? var_4 : var_13)), (arr_2 [i_0 - 2])))));
                }
            }
        }
    }
    #pragma endscop
}
