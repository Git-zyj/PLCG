/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((1316189784519574617 ? 173 : var_0))) ? var_9 : var_0));
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] = (arr_2 [14]);
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 = var_14;
                            var_18 = -var_1;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_17 [i_6] [i_6] [i_0] [i_4] [15] = (((arr_7 [i_0] [i_1] [i_4] [i_6]) ? ((-(arr_6 [16] [i_4] [i_5] [i_6]))) : var_7));
                                arr_18 [i_4] [2] = (arr_11 [i_4] [i_5 - 2] [i_4]);
                                var_19 = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
