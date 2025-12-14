/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (arr_0 [6])));
                arr_7 [i_1 + 2] [20] = (arr_4 [3] [i_1 + 1]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_12 += (arr_11 [3] [1] [i_0] [14] [i_1 + 2]);
                            arr_15 [i_0] [12] [0] [2] = max((((arr_12 [13] [20] [i_2 - 1] [i_3]) - var_8)), (arr_11 [i_0] [i_0] [16] [19] [16]));
                            arr_16 [15] [i_1 - 3] [21] [i_1 + 2] [2] [17] = ((((((max((arr_0 [i_0]), (arr_5 [4] [i_1] [18])))) - (var_5 >= var_10)))) ? var_10 : (min(var_7, (arr_4 [i_1 + 1] [i_2 + 1]))));
                            arr_17 [i_3] [i_3] [21] [i_1] [17] = var_8;
                        }
                    }
                }
            }
        }
    }
    var_13 *= ((((max(var_9, var_2))) ? (max((((var_6 ? var_1 : var_4))), var_1)) : ((min((var_10 | var_8), var_0)))));
    var_14 = var_6;
    #pragma endscop
}
