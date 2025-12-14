/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_3] [i_3] [11] [11] [i_0] = 1;
                                var_19 = (min(var_19, var_1));
                                var_20 = 0;
                            }
                        }
                    }
                    var_21 = var_2;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_22 = ((~(arr_9 [i_2 + 1] [i_2] [i_2] [i_2 + 1])));
                        var_23 = ((187055573 ? ((~(arr_13 [i_5] [i_2] [i_2] [i_1] [i_0]))) : (arr_11 [i_5] [3] [i_0] [i_0])));
                    }
                }
            }
        }
    }
    var_24 = (max((~1), ((-1179 & (var_2 | 18446744073709551615)))));
    #pragma endscop
}
