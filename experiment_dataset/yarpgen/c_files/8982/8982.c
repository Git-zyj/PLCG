/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_0] [i_2] = (max(((-((-25487 ? 25511 : 25508)))), (585 >= -3370857441375594097)));
                            arr_11 [i_1] [i_1] [i_2] [i_2] = -580;
                            arr_12 [i_2] = ((~(16 - 1)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_12 = ((25487 ? 25486 : 18));
                            arr_18 [i_5] [i_1] [i_4 + 1] [i_5] [i_4] = (max((((!(arr_16 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [0])))), ((-25510 / (arr_6 [9] [i_1 - 1] [i_4] [i_4])))));
                        }
                    }
                }
            }
        }
    }
    var_13 = ((-3370857441375594100 ? 25511 : var_3));
    #pragma endscop
}
