/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 6857171562925525970;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = -218;
                arr_6 [i_0] [1] [2] = ((((arr_2 [i_0 + 2] [i_0] [i_1 - 3]) << (arr_2 [i_0 - 1] [i_1] [i_1 - 3]))) >> (((~79859764) - 4215107509)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 6;i_4 += 1)
                        {
                            {
                                var_15 = (arr_3 [i_4] [i_4 + 2] [i_1 - 2]);
                                arr_13 [i_0] [3] [i_2] [i_3] [i_3] = ((max((arr_2 [i_1 - 3] [i_4 + 2] [i_4 - 2]), (arr_2 [i_1 - 3] [i_4 + 2] [i_4]))));
                                arr_14 [i_0 + 1] [i_4] [i_4] [i_4] [i_4 + 4] [i_2] = var_6;
                            }
                        }
                    }
                }
                var_16 = (max(((((arr_3 [i_1] [i_0 - 1] [i_0]) || 7159406404947472070))), (((arr_4 [i_0] [i_0 - 1] [i_0 + 1]) ? (arr_4 [i_1 + 1] [i_0 - 1] [i_0]) : (arr_3 [i_0 - 1] [i_0 - 1] [i_0])))));
                arr_15 [i_0] [i_1] = (((((((arr_10 [3] [i_1] [i_0 + 2] [7]) ? 59 : -7159406404947472064)) * ((var_10 ? (arr_8 [5] [i_1] [i_1 - 2] [i_1 - 3]) : var_5)))) & ((((!(!var_0)))))));
            }
        }
    }
    var_17 = var_12;
    var_18 = (max(var_10, (((var_4 ? 25 : 100)))));
    var_19 = var_1;
    #pragma endscop
}
