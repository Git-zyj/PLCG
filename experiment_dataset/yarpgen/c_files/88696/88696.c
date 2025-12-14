/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_15 -= var_13;
        arr_2 [i_0] [i_0] = (((((!((((arr_1 [8] [i_0]) ? var_12 : var_9)))))) | ((~(arr_1 [i_0 + 2] [i_0])))));
        var_16 = (((((~(arr_1 [i_0 + 2] [i_0])))) ? (max((arr_0 [i_0]), (((arr_0 [i_0]) * (arr_1 [i_0] [i_0]))))) : -var_14));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_17 [i_2] [i_1] [i_2] = 16383;
                                var_17 = ((arr_10 [i_2] [i_2] [i_2]) == (((arr_10 [i_2] [i_1 + 3] [i_3]) / (arr_10 [i_2] [i_1 + 1] [i_4]))));
                                var_18 = (arr_14 [i_1] [i_2] [i_3] [i_1] [i_5]);
                            }
                        }
                    }
                }
                var_19 -= (((((-9223372036854775804 * (!var_5)))) ? ((-(arr_5 [i_2 - 1] [i_2 - 1]))) : ((((arr_12 [i_2 + 2] [i_2] [i_1 + 3] [14] [i_1]) >= (arr_5 [i_2 + 2] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
