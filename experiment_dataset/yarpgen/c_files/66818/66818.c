/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((max(var_4, (var_6 % 6246721687582636562))), var_2));
    var_19 = ((~(max(2303287025, (~1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_20 = ((~(max((9 & 1749888746), var_5))));
                        var_21 = ((((((max(var_16, 4))) | ((~(arr_2 [i_1]))))) | (((((arr_0 [i_1] [i_2 - 2]) % 1)) * (max(var_2, var_0))))));
                        var_22 = (min(var_22, 60371));
                        var_23 = ((~((~(arr_9 [i_2] [i_2] [i_2 - 3])))));
                    }
                    var_24 |= ((~((-(arr_4 [i_1 - 1] [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_25 = ((+(((arr_15 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1] [11] [i_5]) - var_10))));
                                arr_17 [i_5] [i_2] [i_0] [i_2] [i_0] = (5902 / -18);
                                var_26 *= ((var_12 / var_2) & 0);
                            }
                        }
                    }
                    arr_18 [i_0] [1] [i_2] [i_2 - 3] = (min(((max((~236), (arr_5 [14] [i_2] [i_0])))), (max((max(var_8, (arr_5 [i_0] [i_2] [i_2]))), (1 != 3025685122641935641)))));
                }
            }
        }
    }
    var_27 = (65132 == 1);
    #pragma endscop
}
