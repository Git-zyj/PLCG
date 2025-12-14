/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_13 = 13;
                    arr_7 [i_0] [i_1] = (var_10 ? ((max(0, -192186274))) : ((5682 ? var_1 : var_11)));
                    arr_8 [i_0] [i_0] [i_0] = (((((max(var_12, 1))) ? ((max(var_6, -16611))) : (!-16611))) != (var_5 | 16611));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_6, ((-16625 ? var_0 : var_9))));
                                arr_14 [i_0] [i_1] [8] [8] [14] [i_4] = ((((((var_1 ? var_1 : 16616)))) ? (((~(((-2147483647 - 1) ? -16625 : var_5))))) : ((var_11 ? ((0 ? var_4 : -41)) : 2147483647))));
                            }
                        }
                    }
                    arr_15 [i_1] [1] = var_3;
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_19 [1] [5] = (((-16616 && var_11) << (16604 - 16581)));
                    var_15 = ((var_11 ? 866208844008215058 : 16609));
                }
                var_16 = (max(-var_11, (((3541286913 ? -305086055 : 16628)))));
                var_17 ^= ((0 ? (((var_2 | -121) ? var_0 : (((max(-4569, 16620)))))) : (max(((max(var_6, 2147483647))), 3541286892))));
                arr_20 [i_1] [i_0] = ((((max(var_2, var_1))) ? 4570 : ((max(var_3, var_10)))));
            }
        }
    }
    var_18 = (max(((-var_11 ? var_0 : ((65249 ? 3819867066698613050 : var_6)))), ((((((2147483647 ? var_5 : var_9))) ? 753680382 : (((var_3 ? 2147483647 : 47771))))))));
    #pragma endscop
}
