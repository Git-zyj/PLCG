/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (((((var_3 ? var_4 : var_4))) ? ((var_9 ? var_0 : var_10)) : var_2));
                    arr_7 [i_0] [i_1] [1] [i_1] = var_3;
                    arr_8 [i_0] [i_1] [i_2] = var_6;
                    arr_9 [i_0 - 3] [i_1] [8] = ((var_0 ^ (var_8 && var_7)));
                }
            }
        }
    }
    var_12 = var_0;
    var_13 = var_8;
    var_14 = ((var_0 ? var_4 : var_4));
    #pragma endscop
}
