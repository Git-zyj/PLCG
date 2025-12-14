/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [7] [i_1] [i_1] [7] [13] = (((((arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1] [8]) <= -17252)) ? (max(((max(var_8, (arr_9 [i_2])))), (~37592))) : (!50)));
                                var_15 -= (((arr_1 [i_3 + 1]) - ((var_2 ? 112 : var_9))));
                            }
                        }
                    }
                    var_16 -= (50 >= 54);
                }
            }
        }
    }
    #pragma endscop
}
