/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3 - 1] [i_3] [i_1] = max(((-(arr_3 [i_0 + 3] [i_2 - 1]))), (arr_3 [i_3] [i_4 + 1]));
                                var_14 &= (!(min(0, 0)));
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_1] |= (max((arr_3 [i_0] [i_1]), -1));
                var_15 ^= (min((~1), ((-(max(var_10, 1))))));
                arr_14 [i_1] |= 1;
            }
        }
    }
    var_16 = var_0;
    var_17 = (min(var_6, var_10));
    #pragma endscop
}
