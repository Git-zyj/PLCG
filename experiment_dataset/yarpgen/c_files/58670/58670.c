/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_15 = var_12;
        arr_3 [i_0] = var_14;
        var_16 = -var_11;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_17 += -var_8;
        var_18 = var_9;
    }

    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        var_19 *= ((-(!-0)));
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_2] [i_2] [i_5] = 0;
                        arr_20 [i_3] [i_4] [i_2] = ((min((!var_11), (~var_7))));
                        var_20 -= (~0);
                        var_21 -= (-127 - 1);
                    }
                }
            }
        }
        arr_21 [i_2] [i_2] = ((~((((~var_0) != (~var_12))))));
        var_22 = var_10;
        var_23 = (max(var_23, ((max(0, (~14))))));
    }
    #pragma endscop
}
