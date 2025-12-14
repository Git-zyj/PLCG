/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_7 [2] [i_1] = (var_1 - var_1);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [i_0] [i_1] [i_4] |= (arr_1 [i_4]);
                                var_15 = (max(var_15, ((max((min((arr_9 [i_0] [i_0] [i_3] [i_4]), (arr_17 [i_0] [i_1 + 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4]))), -1872213456)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_10;
    #pragma endscop
}
