/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = 15872;
                    var_19 |= (min(-var_12, ((1 ? 0 : 0))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = (((~(arr_3 [i_0]))));
                                var_21 = (((((min(886787054, (arr_3 [i_0])))) ? var_9 : (arr_3 [i_3]))) < ((((arr_9 [i_3] [i_0 - 3] [i_0] [i_0] [i_0 - 3] [i_0 - 2] [i_0]) <= var_5))));
                                var_22 = (min(var_22, ((((arr_5 [4] [i_1] [8] [i_3]) | ((((arr_4 [i_2] [i_3] [i_2]) == (!1)))))))));
                                arr_12 [i_0] [i_0] [3] [i_2] [2] [i_3] [i_4] = 8963;
                                var_23 |= (max(-0, 0));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
