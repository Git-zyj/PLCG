/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = (1 ? (arr_2 [i_1]) : var_11);
                    arr_9 [i_1] [i_2] |= ((((((arr_1 [i_2]) << ((((1 ? var_13 : (arr_3 [i_0] [i_0]))) - 7088337680674961604))))) ? (min(((-(arr_2 [i_0]))), (arr_4 [i_0] [i_0]))) : (min(((min(1, 1))), var_3))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            {
                var_21 = (min(1, 1141188959));
                var_22 = -1;
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
