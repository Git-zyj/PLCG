/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = (var_12 >= var_8);
                arr_8 [i_1] [4] [i_0] |= -1036328659;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] [15] [i_3] [3] = ((((min(-var_8, -var_7))) ? (arr_5 [i_0] [i_0] [i_0]) : var_7));
                                var_14 = (max((arr_12 [i_0]), (arr_0 [i_3] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_13;
    #pragma endscop
}
