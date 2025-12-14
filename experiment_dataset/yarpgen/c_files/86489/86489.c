/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((((!-4264) ? var_11 : (max(1, (arr_2 [i_0] [i_0])))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_2] [i_1] [i_3] [i_0] = var_1;
                                var_13 = (max(var_13, var_3));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_14 = (min(var_14, (((-(max(((max(1, var_1))), ((2405337052 ? var_10 : var_9)))))))));
                            arr_19 [i_0] [i_0] [i_0] [i_1] = var_2;
                            var_15 = (arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_16 = ((var_8 || (((var_10 ? ((var_5 ? 1902757381850428968 : var_11)) : 594477341)))));
    var_17 = var_11;
    var_18 *= var_5;
    #pragma endscop
}
