/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(-2147483623, 1)));
    var_18 = (!-1872793037498556439);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_19 = (~1);
                            arr_9 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = ((-((2147483640 ? -921964415312721381 : var_8))));
                            var_20 ^= (((arr_0 [i_3 - 1] [i_3 + 2]) & (arr_3 [i_3 + 2])));
                        }
                    }
                }
                arr_10 [13] = (max((((arr_6 [i_0 + 1] [i_1] [i_1] [i_1]) ? var_2 : ((var_0 ? (arr_8 [i_0] [i_0] [i_0 + 1] [i_0] [i_1]) : var_1)))), (1 && var_0)));
                arr_11 [i_0] [12] [i_1] = 921964415312721378;
            }
        }
    }
    var_21 = (max(var_21, -1));
    #pragma endscop
}
