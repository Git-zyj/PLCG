/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = var_0;
                arr_4 [i_1] [i_1] = 14172138668601763230;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_12 = ((13073 ? ((41942 ? 27631 : 14172138668601763215)) : var_1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = ((7168 ? var_5 : 32736));
                                var_14 = ((5122 ? (arr_5 [i_0] [i_0] [i_1 + 3]) : 252201579132747776));
                                var_15 = ((arr_3 [i_1 + 3] [i_1]) ? 1069461796738622809 : (arr_8 [i_1 + 3] [i_1] [i_1 + 2] [i_1 - 1] [i_1]));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_14 [i_1] [i_1] = (((0 || 37874) > ((((-(arr_2 [i_5]))) << (var_3 - 52604)))));
                    var_16 = (max(var_16, (32794 | 13051)));
                    var_17 = (min(var_17, ((min((min(var_2, (((arr_1 [i_5]) & var_0)))), -32736)))));
                    var_18 = ((((((65520 << (3918842139039890068 - 3918842139039890060)))) ? var_2 : (arr_2 [i_0]))));
                    var_19 = -562949953421311;
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    arr_17 [i_0] [i_1] [i_1] [i_6] = 3805217567894109286;
                    var_20 = max(var_4, ((((((arr_7 [i_0] [i_6] [i_6] [i_0]) ? (arr_12 [i_0] [i_6] [i_6]) : 14527901934669661559)) > (arr_9 [i_0] [i_1] [i_6])))));
                }
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    var_21 = ((+((52476 ? (562949953421323 <= 55045) : 34157))));
                    var_22 = (min(var_22, (((7037152682133201468 ? 8578594046640068611 : 2499347376761985059)))));
                }
                var_23 |= arr_15 [i_0] [10];
            }
        }
    }
    var_24 += (((((-(var_8 && var_4)))) && var_10));
    #pragma endscop
}
