/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min((!var_3), ((-var_2 ? -var_8 : -7)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [4] [i_1] [i_2] = ((((!((max((arr_8 [22] [8] [i_1]), var_8))))) ? (arr_1 [i_0]) : 3392));
                    arr_10 [i_1] [19] [i_1] = ((-(((((1539083811 ? (arr_8 [i_2] [6] [i_1]) : 3401))) ? var_3 : 62142))));
                    arr_11 [i_0] [4] [i_2] [i_1] &= ((!((((arr_4 [i_0] [i_1]) ? 1 : 1384119578)))));
                    arr_12 [i_1] [i_1] [i_1] [i_1] = (((min((arr_2 [16] [i_1] [i_2]), (arr_2 [i_0] [i_1] [6]))) ? (((arr_3 [i_0] [15]) << (((arr_3 [i_0] [i_2]) - 835335861)))) : ((min(1, 1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_17 [17] [i_1] [i_1] = ((1 / (min((max(var_1, 2)), var_2))));
                                arr_18 [i_1] = (~((-(max((arr_8 [22] [1] [i_1]), 472918637)))));
                                var_14 = (max((var_0 - 34), ((min(var_6, var_8)))));
                                var_15 = (((arr_0 [i_1]) ? (!6) : ((19 ? -1384119586 : (arr_1 [i_2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
