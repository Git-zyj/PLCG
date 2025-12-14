/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 += (max(-880845260, 15));
                                arr_12 [11] [i_0] [i_1] [11] [i_1] [i_4] = (arr_3 [13] [13] [13]);
                                arr_13 [i_2] [i_1] = ((((((((!(arr_3 [i_0] [i_0] [i_0])))) * (arr_1 [i_0 - 1])))) ? (((((~(arr_7 [i_0] [i_1] [16] [16])))) ? 1278069233 : (min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_2] [i_0]))))) : (arr_5 [8] [i_1 - 1])));
                                var_19 = (max(var_19, (arr_9 [i_0] [i_0] [i_0 - 1] [i_1 + 2] [i_2 + 1])));
                            }
                        }
                    }
                    var_20 = ((7660131123867887550 ? (arr_3 [i_0 - 1] [i_2 - 1] [i_2]) : (max(-4065297553343950691, var_15))));
                    var_21 = (~9223372036854775807);
                    var_22 = (min(var_22, (((-((-(!1))))))));
                }
            }
        }
    }
    var_23 -= ((-((var_9 ? var_4 : var_16))));
    #pragma endscop
}
