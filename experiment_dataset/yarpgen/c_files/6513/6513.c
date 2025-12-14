/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_2] = ((((((arr_2 [i_2 - 3] [20] [i_1 - 1]) ? (arr_4 [i_2 - 3] [i_1]) : (arr_4 [i_2 - 3] [i_0])))) ? (arr_4 [i_2 - 3] [i_0]) : (arr_1 [i_2 - 3] [i_2 + 3])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [22] [i_1] [i_1 + 2] [i_1] [0] &= ((min((arr_1 [i_0] [i_1 + 2]), (arr_1 [23] [i_1 - 1]))));
                                arr_15 [i_2] = (arr_4 [14] [i_1 - 3]);
                                var_12 = (max(var_12, (arr_8 [5] [i_1 - 1] [i_2 + 3] [i_2 + 3])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = ((((((max(var_11, var_9))) ? (var_6 && var_5) : (((var_0 && (-2147483647 - 1)))))) - var_7));
    var_14 = var_11;
    var_15 = var_5;
    var_16 = var_5;
    #pragma endscop
}
