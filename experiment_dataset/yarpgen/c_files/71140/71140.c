/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = ((13482658984307095028 ? 4964085089402456587 : 63));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [4] [i_3] [i_3] [i_3] |= (max(((var_5 ? var_7 : -var_12)), var_11));
                                arr_15 [i_0] [i_0] [i_2] [5] [i_4] = arr_9 [i_0] [i_0] [i_0] [i_0];
                                arr_16 [i_3] [0] [i_2] [i_1] [i_3] &= 13482658984307095028;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 *= (max(((-(13482658984307095028 - 18446744073709551601))), (6394 + var_8)));
    #pragma endscop
}
