/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_1] = var_6;
                    arr_8 [i_0] [i_1] [i_2 + 2] = ((var_1 ? ((min(var_1, var_8))) : (((~(!var_7))))));
                    var_11 = ((max((arr_6 [i_1] [i_1] [i_0 + 3] [i_2 + 1]), (arr_6 [i_0] [i_1] [i_0 - 1] [i_2 - 1]))) ? ((min(var_8, (max(var_8, -194962043))))) : (((arr_3 [i_0] [i_0 + 2]) ? 24846 : (arr_3 [i_0] [i_0 + 2]))));
                }
                for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
                {
                    var_12 -= (arr_0 [i_0 + 1]);
                    arr_12 [9] [9] [i_1] [i_0] = ((((((arr_4 [i_0] [i_0 + 2] [9]) ? 7 : (arr_2 [i_0] [i_0 + 1])))) ? (min((arr_0 [i_0]), var_3)) : (var_7 && 24846)));
                }
                for (int i_4 = 3; i_4 < 8;i_4 += 1)
                {
                    var_13 = ((-(((arr_1 [i_0 + 1] [i_4]) ? (arr_11 [i_0 - 1] [i_0]) : var_0))));
                    var_14 = min((((((((arr_0 [i_4]) ? var_5 : (arr_2 [i_1] [i_0])))) > ((24864 - (arr_15 [i_0 + 2] [i_1] [i_4] [i_4])))))), (((((-194962032 ? 12862 : (arr_13 [i_0] [i_1] [i_4] [i_4])))) ? (arr_5 [i_4 - 2] [i_1] [i_0 + 1]) : (arr_3 [i_0 - 1] [i_4 + 2]))));
                    arr_16 [i_4] [i_4] = ((arr_6 [i_4] [3] [i_4 + 1] [i_4 - 2]) > (arr_9 [i_0] [i_0] [i_4] [i_4]));
                }
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    var_15 = 40689;
                    var_16 = (min(var_16, var_0));
                    var_17 = ((((min(181, 182331940))) ? (((min((arr_13 [i_0 + 2] [i_0 + 2] [i_5] [i_5 + 1]), (arr_17 [i_1] [i_1]))) ^ (var_2 + var_3))) : ((((arr_18 [i_5 + 1] [i_5] [i_5]) / var_7)))));
                    arr_21 [i_0] [i_1] [i_0] [i_0] = (((((var_9 ^ (arr_2 [i_0] [i_1])))) > (var_9 - var_1)));
                }
                var_18 ^= (min(1597610202, 1));
                var_19 |= ((var_9 | (min((arr_14 [i_1] [i_0] [i_0] [i_0]), 8368296166787950562))));

                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    var_20 = var_6;

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_21 = -110;
                        var_22 ^= (arr_6 [i_0] [i_1] [i_7] [i_6 + 1]);
                    }
                    arr_28 [i_0 + 2] [i_0] [i_0 + 2] [i_0] = (max((((arr_23 [i_0 + 1]) == 1844093271)), (1 != -1249333254)));
                }
            }
        }
    }
    var_23 = (((33324 ? -57 : 0)));
    #pragma endscop
}
