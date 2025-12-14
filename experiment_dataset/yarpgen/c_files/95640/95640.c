/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [6] |= var_11;
                arr_6 [i_0] [i_1] = var_19;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_2] [i_3] [i_2] = 942775947329526641;
                    var_20 = (min(var_20, 6066));
                }
            }
        }
    }
    var_21 += var_12;
    var_22 = ((-var_19 ? var_13 : (942775947329526644 / var_9)));
    #pragma endscop
}
