/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_8 ? (var_4 && var_0) : 22614));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (arr_0 [i_0]);

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_9 [18] [i_0] [i_2] [i_0] = var_6;

                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [9] [i_1] [i_4 - 1] [i_4 - 1] [i_0] = (min((max(((max((arr_2 [i_0] [i_0]), 31543))), (((arr_7 [i_2] [i_1] [i_2] [i_3] [i_0] [i_4]) ? var_0 : (arr_7 [i_0] [i_1] [i_1] [i_3] [i_0] [i_4]))))), var_10));
                            arr_14 [i_4] [i_3] [i_0] [i_1] [i_0] = var_2;
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_14 = (max(var_14, ((((((((max(-17835, (arr_0 [i_0])))) ? ((-28169 ? var_7 : 18203)) : ((var_0 ? 18191 : 6625))))) ? var_7 : 8398)))));
                            arr_17 [7] [i_0] = (max(((18216 ? ((var_7 ? var_5 : var_12)) : (7672 < var_2))), var_2));
                            var_15 = 6613;
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_16 &= ((!(((-6645 ? -19941 : var_6)))));
                        var_17 += ((var_6 ? var_9 : 18203));
                        var_18 = arr_8 [i_0];
                    }

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_24 [i_0] [10] [2] [12] &= ((var_3 ? ((min(9138, 6611))) : ((var_9 ? -7263 : var_6))));
                        arr_25 [i_0] [i_0] [i_0] [i_7] [i_2] [15] = (((((((max(var_4, var_11))) ? (((arr_23 [7] [i_1] [i_2] [i_7]) ? -6616 : -19119)) : (var_11 && var_3)))) ? ((((min(6611, var_6))) ? var_8 : (var_9 * 1792))) : (((((var_5 ? 6641 : var_2))) ? ((max(9162, (arr_16 [i_0] [i_1] [i_2] [12] [i_1])))) : 6644))));
                    }
                    var_19 = var_7;
                    var_20 |= ((var_10 - (max(-6611, ((-9138 ? 6641 : -6641))))));
                }
            }
        }
    }
    var_21 = var_1;
    #pragma endscop
}
