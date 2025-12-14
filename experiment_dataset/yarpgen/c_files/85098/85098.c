/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 = ((var_11 > (min((min(60, 61234349)), (!1652470694)))));
    var_18 = var_7;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [9] [i_0] = (((((var_6 * var_1) ? (!var_2) : ((max(1, var_11))))) == -30816));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        var_19 -= (max((((max(var_1, var_4)))), (min((arr_12 [i_2] [i_2 - 1] [i_3 + 4] [8]), var_2))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_4] = (~2642496601);
                            var_20 = var_9;
                            arr_17 [i_2] = (max(var_3, (var_12 % var_5)));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_21 = (max((arr_1 [i_1]), ((((arr_1 [i_0]) && var_2)))));
                            arr_20 [i_5] [i_3] [i_2] [i_1] [i_5] &= (min(8982535533148923575, ((((arr_13 [i_5]) > (arr_8 [i_5] [i_5]))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_23 [i_0] [i_1] [i_1] [i_2] [3] [i_6] = var_14;
                            var_22 -= var_0;
                        }
                    }
                }
            }
            arr_24 [i_0] = 1652470678;
            var_23 = (arr_13 [4]);
        }
        for (int i_7 = 2; i_7 < 22;i_7 += 1)
        {
            var_24 &= (~(min(var_15, var_13)));
            arr_27 [i_0] [i_7] [i_7 - 2] = ((var_3 ? ((((((max(48718, var_11))) && ((min((arr_13 [i_7]), 1))))))) : (min((13 || 15240761307611612929), (((arr_14 [i_0] [i_0] [i_0] [i_0] [17] [i_7 - 2] [i_7 + 2]) / 2642496602))))));
        }
    }
    var_25 = (max((~var_7), ((((var_10 ? var_0 : 1))))));
    #pragma endscop
}
