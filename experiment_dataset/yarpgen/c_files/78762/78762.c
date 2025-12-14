/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (((((214 ? ((max(var_0, 1))) : ((min(var_8, 15005)))))) ? -var_3 : (((((min(var_1, var_0))) ? ((min(var_5, var_6))) : ((var_11 ? var_10 : var_8)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (min((min((var_11 * var_9), (var_5 / var_1))), var_11));
                                var_16 -= var_4;
                                var_17 ^= -var_8;
                                arr_15 [i_2] = (((((~(var_8 & var_11)))) ? ((((var_9 ? var_12 : var_4)) - (((var_1 ? var_0 : var_1))))) : ((((!var_0) ? ((max(255, 1))) : var_9)))));
                            }
                        }
                    }
                    arr_16 [i_0] [1] [i_0] [i_2] = (max((((((~var_4) + 2147483647)) << (((var_5 + 17576) - 27)))), (((((var_5 ? var_2 : var_9))) ? var_4 : ((15214981234441380916 ? var_2 : 96))))));
                    arr_17 [9] [i_1] [i_2 + 1] [i_2] = (((((((var_0 ? var_2 : var_11))) ? var_7 : ((var_0 ? var_4 : var_2)))) & ((var_5 ? (!var_9) : var_7))));
                    arr_18 [i_0] [i_0] [i_2] [i_0] = (~var_5);
                }
            }
        }
        var_18 = ((14967183657444768773 ? 662594899475032840 : 184));
        var_19 = (min(((14 ? 32767 : ((-22675 ? 1698386757619415809 : -1901826998)))), var_12));
        arr_19 [i_0] = (((((-var_12 ? ((var_3 ? var_4 : var_6)) : ((var_5 ? var_8 : var_7))))) ? var_13 : ((var_8 ? (min(32767, var_10)) : var_7))));
    }
    var_20 = (((((~((var_4 ? var_1 : var_7))))) || (((((max(var_5, var_4))) ? var_6 : ((var_5 ? var_13 : var_6)))))));
    #pragma endscop
}
