/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_21 = -1799532896;

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_22 = var_12;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_23 &= 277866940;
                        var_24 = (!var_0);
                        var_25 = -19187;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_26 = (((arr_12 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_5 + 1] [8]) & 1));
                            arr_15 [i_6] [i_5] [i_4] [9] [i_0] [i_0] [i_0] = (arr_12 [5] [i_5] [10] [i_5 - 1] [i_6]);
                            var_27 = 45400;
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_28 -= (((-4664189011908297618 / 107) & (~0)));
            var_29 = 1;
            var_30 ^= -65535;
            var_31 = (min(var_31, (~var_11)));
        }
    }
    var_32 = 255;
    var_33 = var_16;
    #pragma endscop
}
