/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-((-4095 ? ((var_10 ? var_0 : var_8)) : ((var_8 ? 4722816936977400781 : var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [4] [i_0] [i_1] [i_2] = var_4;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_12 = var_0;
                        arr_10 [i_0] [11] [i_0] [i_2] [i_2] [i_3] = (((arr_9 [i_0] [i_3]) & (arr_9 [i_1] [i_3])));
                    }
                    arr_11 [i_0] [i_1] [i_1] [i_2] = (((arr_8 [i_2]) / (~536870911)));
                }
            }
        }
    }
    var_13 = (max(var_13, 255));
    #pragma endscop
}
