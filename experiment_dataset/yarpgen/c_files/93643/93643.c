/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_5 | ((((max(-8555, var_5)))))));
    var_13 = var_8;
    var_14 = 17894;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((((arr_0 [i_0 - 2]) + (arr_2 [i_0] [i_0 + 1]))) | 54208));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_15 = ((~(~9223372036854775805)));
                                var_16 = (((((2972936571 ? (arr_8 [i_4 + 3] [i_4] [i_4] [i_4 + 3] [i_3 + 1] [i_0 + 1]) : (arr_8 [i_4] [3] [i_4] [i_4 - 1] [i_3 + 1] [i_0 + 2])))) ? -32765 : (var_1 == var_5)));
                                var_17 = (((((2854 ? -2854 : (arr_11 [i_4] [i_4] [i_4 - 1] [i_4] [i_4 + 1] [i_4] [i_4 - 1])))) ? (-124 < 3) : (max(1322030725, 128))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 -= var_0;
    #pragma endscop
}
