/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = ((158 ? ((max((arr_1 [i_0 + 4] [i_0]), (51 || 0)))) : (((arr_1 [i_2] [i_0 - 2]) ? ((max(98, 97))) : var_8))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_18 = 5959483287484824116;
                        var_19 = 157;
                        arr_10 [i_0] [i_3] [13] [2] [i_1] [i_1] = (max(var_11, (max((arr_3 [i_0 + 3] [i_1]), 11091716758922428807))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_20 = (min(var_20, (1 / 1)));
                        arr_13 [i_1] = (((~var_0) < (((-32767 - 1) ? (((max(36, var_5)))) : (((arr_6 [i_1] [18] [i_2]) | 32))))));
                        arr_14 [i_0] [19] [i_1] [i_4] = -8100;
                        var_21 = (arr_2 [i_0 + 1] [i_0 + 4]);
                    }
                    var_22 = (max(var_22, ((((((arr_4 [i_0 - 1]) ? 11374529365861054788 : var_10)) <= 104)))));
                }
            }
        }
    }
    var_23 = ((var_6 << (var_5 - 24)));
    var_24 = var_8;
    var_25 = -14;
    #pragma endscop
}
