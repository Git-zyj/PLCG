/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] = (((max(((var_8 & (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]))), 3694442072)) - (((+(max((arr_4 [i_3] [i_4]), 1300114465)))))));
                                var_12 = var_1;
                            }
                        }
                    }
                }
                arr_16 [i_1] [i_1] [i_1] = (((((var_6 || (var_0 << 5)))) - 8));
            }
        }
    }
    var_13 -= (1 * 0);
    #pragma endscop
}
