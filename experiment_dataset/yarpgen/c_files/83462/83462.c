/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((max(8070450532247928832, var_12)) / var_11)) * (max((min(8070450532247928832, var_10)), var_2))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = -1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = (~(max((!1), (min(-1, var_9)))));
                                var_16 = (max(var_16, (arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [3])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
