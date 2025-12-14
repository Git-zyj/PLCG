/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (((~6928765276213886056) >= var_4));
                                var_18 -= (max((min((arr_8 [i_0] [i_1] [12] [i_3] [i_4] [i_4]), (arr_1 [i_3]))), -67));
                                var_19 = ((((((arr_5 [i_1] [i_0]) ? (((arr_9 [i_0] [i_1] [i_4]) ? (arr_9 [i_0] [i_2 - 3] [i_3]) : var_0)) : ((min(var_3, -70)))))) ? (((arr_7 [i_0] [i_1]) ? 0 : -20)) : ((min((arr_3 [i_0 + 3] [i_2 - 1]), (arr_3 [i_0 + 2] [i_2 - 3]))))));
                                var_20 = (i_0 % 2 == zero) ? (((var_2 ? (((((((arr_4 [i_0 + 2] [i_1] [13]) ? -67 : (arr_3 [i_3] [i_4]))) + 2147483647)) >> (((arr_5 [i_0 + 3] [i_0]) - 1040292084)))) : -118))) : (((var_2 ? (((((((arr_4 [i_0 + 2] [i_1] [13]) ? -67 : (arr_3 [i_3] [i_4]))) + 2147483647)) >> (((((arr_5 [i_0 + 3] [i_0]) - 1040292084)) - 608166171)))) : -118)));
                                var_21 = ((~(arr_4 [i_0] [i_0] [i_0 + 1])));
                            }
                        }
                    }
                    var_22 = (((((arr_7 [i_2 + 1] [i_2 - 3]) && (arr_7 [i_2 - 3] [i_2 - 1]))) ? (((arr_7 [i_2 - 3] [i_2 - 2]) ? (arr_7 [i_2 - 1] [i_2 - 1]) : var_2)) : (arr_7 [i_2 - 1] [i_2 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
