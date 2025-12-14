/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (max(var_6, (0 && 7352367539541293211)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [7] [6] = (93 | 32174);
                                var_18 = (!((((arr_11 [i_4] [5] [i_2] [i_2]) ? (arr_11 [i_0] [i_2] [11] [1]) : (arr_11 [i_0] [5] [i_2] [1])))));
                            }
                        }
                    }
                }
                var_19 -= (max((((((arr_11 [8] [i_0] [i_0] [i_0]) & var_2)) + (arr_3 [2] [0]))), ((((max(var_9, (arr_12 [2] [0] [1] [1]))))))));
                var_20 = (max(var_20, ((((((((max(var_6, var_8))) != (arr_10 [3])))) | (max(var_4, var_0)))))));
            }
        }
    }
    var_21 = (var_11 | 1);
    var_22 = ((var_14 ? 0 : ((var_2 / ((var_12 ? var_13 : var_11))))));
    #pragma endscop
}
