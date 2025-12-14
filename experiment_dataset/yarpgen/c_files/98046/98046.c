/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = (min(-var_7, var_11));
    var_15 = ((var_11 >= var_7) >> (var_1 - 4961));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (((arr_3 [i_0 + 3] [i_0 + 2]) < (((arr_2 [i_0 + 3] [i_0 + 3]) | var_4))));
                var_17 = ((-3068360899909783545 > (max((((arr_2 [i_0] [i_1]) * (arr_1 [10]))), var_7))));
                var_18 -= (arr_4 [i_0] [i_0] [i_1]);
                var_19 *= var_6;
            }
        }
    }
    #pragma endscop
}
