/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [0] [i_1] = (((((arr_3 [i_0 - 1]) ? (((var_3 ? (arr_4 [i_1]) : 816410270))) : 2476123610149053986))) / (((min(var_3, 1620500144)) | 174)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_11 -= ((559048406 ? (((-1916668355 / (var_9 / 84)))) : ((((((arr_7 [7] [4] [i_3 - 2]) * var_4))) + ((1156424320 + (arr_7 [i_2] [i_2] [i_2])))))));
                            var_12 = (max(var_12, var_10));
                            arr_12 [i_0] [i_2] [i_2] [i_3 + 1] |= ((((((arr_4 [i_0 - 1]) >> (((arr_4 [i_0 + 1]) - 3088))))) < -1415207605846794482));
                        }
                    }
                }
                arr_13 [2] [i_1] [2] &= (min((max((382498349 <= -18253), 11156063064080808465)), (arr_11 [i_0 + 1] [i_1 - 1] [i_0 + 1] [i_0 + 1] [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                arr_22 [i_4] [i_4] = (arr_19 [i_4] [i_4] [i_4]);
                arr_23 [i_4] [i_4] = (i_4 % 2 == zero) ? (((((var_8 | (arr_21 [i_5] [i_4] [i_4]))) >> (((((arr_21 [i_5] [i_4] [i_4]) ? (arr_21 [i_5] [i_4] [i_4]) : (arr_21 [i_4] [i_4] [17]))) - 17474353975523178688))))) : (((((var_8 | (arr_21 [i_5] [i_4] [i_4]))) >> (((((((arr_21 [i_5] [i_4] [i_4]) ? (arr_21 [i_5] [i_4] [i_4]) : (arr_21 [i_4] [i_4] [17]))) - 17474353975523178688)) - 4760809215816554613)))));
                var_13 = (max(var_13, ((((((((var_9 <= (arr_21 [i_5] [i_5] [i_4]))) ? (((((arr_0 [i_4] [3]) < var_8)))) : (min(-2476123610149053993, 171))))) ? ((max((~var_6), (min((arr_5 [i_4]), var_10))))) : (max(((min(var_9, 63))), (max(var_3, var_9)))))))));
                arr_24 [18] [i_4] [18] = 17;
                var_14 = ((-382498352 ? ((((arr_18 [i_4]) ? 382498353 : (min(var_0, var_6))))) : 11156063064080808465));
            }
        }
    }
    #pragma endscop
}
