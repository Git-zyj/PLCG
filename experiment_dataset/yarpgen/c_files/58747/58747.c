/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-127 - 1) / -2500184857310528024));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (1 | -14232)));
                var_14 ^= var_10;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_1 - 2] = ((!(((-9789 ? 1 : 34919)))));
                            arr_11 [i_0] [i_3] [i_2] [i_0 - 1] [20] [i_2 - 1] = ((var_9 && (!var_7)));
                            arr_12 [i_0] [i_0] [i_3] = var_4;
                            arr_13 [i_3] = ((!(~var_10)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_23 [i_6] [i_1 + 2] [3] [11] [1] = var_11;
                                var_15 = (max(var_15, (((~(var_5 <= var_6))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
