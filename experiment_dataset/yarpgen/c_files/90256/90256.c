/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_0] = (((arr_3 [i_0] [i_0] [i_0]) ? (((((var_8 ? var_3 : (arr_5 [i_0] [i_1 + 4])))) ? (arr_1 [i_0] [11]) : (arr_8 [i_0] [14] [i_2]))) : (((-2147483647 - 1) & 48538))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] [i_1] [i_2] [2] [i_3] = ((13843 ? -1696478847 : -6101375271506744881));
                                arr_18 [i_4] [i_3] [5] [i_1 + 3] [i_3] [9] = ((((max(var_8, var_3))) ? ((-(arr_11 [i_4] [i_2] [i_1 + 4] [i_0]))) : (arr_13 [i_0] [i_1])));
                            }
                        }
                    }
                    var_18 -= ((!(arr_4 [i_0])));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] = (((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (((!(((536870911 ? 536870911 : var_2)))))) : (((!24576) % (arr_9 [i_0] [i_0] [8] [i_1 - 1])))));
                        var_19 = (min(var_19, (arr_15 [i_1 + 3] [i_1] [i_1 + 3] [i_1 + 1] [i_5] [i_5] [i_5])));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        arr_24 [9] [i_1] [i_1] [i_1] [i_1 + 3] = ((1232958889467211780 ? 51682 : -23343));
                        arr_25 [i_0] [i_1 - 1] [i_2] [i_6] = ((!(var_16 != var_9)));
                        arr_26 [i_6] [i_1] [i_1] [14] = (~2441472064);
                    }
                    var_20 = (max((((var_1 * var_8) ? (var_6 && 51718) : 37447)), ((max((arr_5 [i_0] [i_1]), var_8)))));
                }
            }
        }
    }
    var_21 = var_17;
    var_22 |= ((!((((((var_11 ? var_13 : var_15))) ? ((var_14 ? 1575648328 : var_7)) : (var_11 & 2224247727297704393))))));
    #pragma endscop
}
