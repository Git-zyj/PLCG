/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_1);
    var_12 = (((!((min(var_10, var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 &= (arr_3 [i_1 + 3] [i_1 + 1]);
                    var_14 = 31;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 = 42753735;
                                var_16 = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
