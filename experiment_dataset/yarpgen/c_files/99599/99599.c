/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1 - 1] = (!(((1 ? ((((arr_4 [i_0] [i_0] [i_0]) | var_6))) : (arr_6 [i_1 + 2] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 += ((((((arr_1 [i_0]) ? (arr_7 [i_3] [i_2]) : 1))) + (((arr_12 [i_4] [18] [6] [i_1 + 2] [i_1 + 1]) / var_9))));
                                var_14 -= (((((((arr_10 [5] [i_1] [i_1 - 2]) ? var_11 : 15544235129232722592))) ? -389306456959096952 : -var_2)));
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0] = (arr_11 [i_3]);
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_1 + 1] [i_2] = (((((max((arr_2 [i_0]), (arr_0 [i_1])))) ? (arr_6 [i_0] [i_0]) : 9223372036854775807)) ^ ((((arr_2 [i_1 - 3]) & (arr_2 [i_1 - 1])))));
                }
            }
        }
    }
    var_15 = ((((((((~var_6) + 2147483647)) << (((((var_2 | var_4) + 30)) - 29))))) ? ((((1 ? 110 : 4410550894289020310)) << ((((var_8 ? var_5 : var_11)) - 93)))) : (max((4410550894289020309 | var_9), var_7))));
    #pragma endscop
}
