/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(var_12, var_12);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (min(var_15, 24));
        var_16 = (max(7, var_4));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_17 += 24;
                            var_18 += var_3;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 8;i_6 += 1)
                    {
                        {
                            arr_18 [i_1] [i_2] [i_2] [i_1] = (min((max(var_0, 22589)), 1));
                            var_19 = (min((9223372036854775807 + var_3), (((-9223372036854775807 - 1) + 1020))));
                            var_20 -= ((~(max(4294966276, var_4))));
                            arr_19 [i_1] [i_2] [i_5] [i_2] = ((~(~1020)));
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(var_9, var_11));
    var_22 += var_1;
    #pragma endscop
}
