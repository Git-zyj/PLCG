/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 = (~var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [13] [i_0] [i_1] [i_1] = (max((((((127 ? -101 : var_1))) + ((var_11 ? 1796199094 : var_5)))), (((var_13 || 2498768201) ? ((var_7 % (arr_7 [i_1] [i_1] [i_3 - 2] [i_4]))) : var_0))));
                                arr_18 [i_1] = ((((((((var_4 ? var_11 : var_11))) ? ((var_3 ? (arr_9 [i_4] [i_4] [i_4] [i_1]) : (arr_15 [i_0] [i_3 - 2] [i_4] [i_3] [i_3 - 2] [i_1]))) : ((var_10 ? (arr_10 [i_0] [i_1] [i_0] [i_1 - 1]) : var_6))))) >= -2498768205));
                                arr_19 [i_0] [i_1] [i_1] [i_1] [i_4] = (i_1 % 2 == zero) ? (((-((1796199089 << (((arr_6 [i_1] [i_2 + 2] [i_1]) + 27396))))))) : (((-((1796199089 << (((((arr_6 [i_1] [i_2 + 2] [i_1]) + 27396)) - 13995)))))));
                                arr_20 [19] [i_1] [i_1] [i_3] = ((((((2498768201 != (2498768202 * var_2))))) / 2498768202));
                                var_16 += ((((((((1796199095 >> (1796199094 - 1796199081)))) ? 1796199094 : (arr_9 [i_0] [i_1] [i_3] [i_3])))) ? (((((((arr_14 [i_0] [7]) | 1796199095))) ? ((max(var_8, var_2))) : var_11))) : (((((var_7 ? 2498768202 : var_4))) ? 2498768202 : (arr_6 [i_0] [i_1] [i_0])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_17 = (~var_8);
                                var_18 = ((2498768204 / 2498768182) / (min((min(1796199087, (arr_12 [i_0] [i_1]))), (arr_15 [i_0] [14] [i_1 + 1] [i_1 + 1] [i_1] [i_1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
