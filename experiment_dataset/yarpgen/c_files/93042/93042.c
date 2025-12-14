/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((-1184945021 + 2147483647) << (var_7 - 45353)))));
    var_14 = (((((1 != ((max(1, var_4)))))) + ((((min(var_6, var_5))) ? var_4 : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((((var_4 ? var_3 : var_8)))) ? var_10 : (((-((var_10 ? 1 : -86)))))));

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] = -32063;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] = ((((min(((max(var_2, 1))), var_1))) ? var_2 : (((((var_9 ? 101 : var_1))) ? var_1 : var_12))));
                                arr_14 [i_0 + 2] [i_1] [i_2] [i_2] [i_4] = 1;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    arr_18 [i_1] = 32062;
                    arr_19 [i_1] [i_1] [i_5] [i_5] = var_7;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_5] [i_1] [2] [i_7] = (((var_3 + var_2) ? ((25938 ? 16541487211971374654 : 17039430928252930850)) : (((var_3 ? 1 : -2067315245325664093)))));
                                arr_26 [1] [i_1] [0] [i_6] [i_7] [i_1] = ((var_4 ? var_5 : (var_9 | var_7)));
                                var_15 ^= var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
