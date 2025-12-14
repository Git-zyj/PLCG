/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_1] [i_2] = (((!var_0) || ((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_5 [i_0] [i_2] [i_2] [i_0]))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_10 [i_0] [i_2] [6] [1] [i_2] [i_2] = (arr_8 [i_0] [i_1] [i_0] [i_2] [i_3]);
                        var_17 = (max(var_17, (arr_4 [i_0] [i_0] [i_2] [i_3])));
                        var_18 = (min(var_11, ((max((arr_5 [i_0] [i_0] [i_2] [i_0]), (arr_5 [i_0] [i_1] [i_2] [i_3]))))));
                        arr_11 [i_0] [i_1] [i_2] = (arr_1 [i_2]);
                    }
                    var_19 = var_4;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            {
                arr_18 [i_5] [i_5] [i_4] = (arr_16 [i_4] [i_5]);
                arr_19 [i_5] [i_5] = (i_5 % 2 == 0) ? ((min((((((((arr_13 [i_4] [i_5]) < var_4))) > (((arr_16 [i_5] [4]) | (arr_15 [i_4] [i_5] [i_5])))))), (min((arr_13 [i_4] [i_5]), ((var_12 << (((arr_15 [i_4] [i_4] [i_5]) - 880233340))))))))) : ((min((((((((arr_13 [i_4] [i_5]) < var_4))) > (((arr_16 [i_5] [4]) | (arr_15 [i_4] [i_5] [i_5])))))), (min((arr_13 [i_4] [i_5]), ((var_12 << (((((((arr_15 [i_4] [i_4] [i_5]) - 880233340)) + 1772822834)) - 23)))))))));
            }
        }
    }
    var_20 = (max(((((~var_16) ? var_6 : ((var_10 ? 6262268175714394014 : var_5))))), (min(var_10, (((var_10 ? var_5 : var_7)))))));
    #pragma endscop
}
