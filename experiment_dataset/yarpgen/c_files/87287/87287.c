/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((max(var_9, var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = (((arr_5 [i_1] [i_2] [i_1] [1]) ? (arr_8 [i_0] [i_0] [i_0] [i_3]) : 4661254978656521741));
                                arr_11 [i_2] [1] [i_2] [i_2] [i_4 - 3] = ((((!(arr_7 [i_4 - 1] [i_4 + 4] [i_4 + 4] [i_4 - 1] [i_4 - 1]))) || 33554431));
                            }
                        }
                    }
                }
                arr_12 [i_1] [i_1] = (~(((((arr_1 [i_0] [i_0]) + (arr_10 [i_0] [1] [i_1] [9] [i_0] [i_1] [1]))) ^ (241 - var_11))));
            }
        }
    }
    var_20 = var_8;
    var_21 = ((((max((~var_16), ((693184882 ? var_14 : var_6))))) ? var_11 : (~2147483647)));
    #pragma endscop
}
