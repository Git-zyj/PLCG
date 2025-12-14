/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] = var_14;
                                var_15 = (min(var_15, (((((((119 ? -1935528272 : var_11))) ? 8176 : var_14))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_16 = var_5;
                                var_17 = (((((4294967295 ? var_2 : 0))) ? ((var_3 ? var_2 : 32704)) : (135 | var_11)));
                                var_18 *= var_2;
                                arr_18 [8] [8] [i_2] [i_2] [i_2] = (((var_11 ? 4294967295 : var_12)) << 0);
                            }
                        }
                    }
                    var_19 = var_14;
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_20 *= (~1);
        var_21 = (max(var_21, var_5));
    }
    var_22 = var_8;
    #pragma endscop
}
