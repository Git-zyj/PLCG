/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 8813050180020247536;
    var_19 = var_10;
    var_20 = (max(var_20, (var_3 | var_10)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [4] = (max((arr_8 [i_0]), ((min(0, 9223372036854775807)))));

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_21 &= 903408774;
                        var_22 = (-((max(164, (arr_10 [i_0] [i_1] [i_3 + 3] [i_3 + 2])))));
                        var_23 |= (max(var_14, (max(-30, ((((arr_2 [i_0]) >= 92)))))));
                        arr_12 [i_0] [i_2] [i_2] [i_1] [i_0] = (min((arr_4 [i_0]), (((-(arr_8 [i_3 + 1]))))));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_24 = (min(var_24, (((((arr_15 [7] [i_1] [i_1] [i_1] [i_1]) * ((max(127, (arr_11 [i_2]))))))))));
                        arr_16 [10] [i_0] [i_1] [i_2] [i_4] [i_4] = max((((((min((arr_6 [i_4] [i_2] [i_0]), 146)) + 2147483647)) >> ((((0 ? 0 : 2912)) - 2895)))), (~559047906));
                        arr_17 [i_0] [i_0] [i_1] [10] [i_4] [21] = (max((arr_0 [i_4]), (min((arr_5 [i_0] [i_0] [i_2] [i_4]), (arr_0 [i_0])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 22;i_5 += 1)
                    {
                        var_25 = (((arr_10 [5] [i_1] [i_2] [i_5 - 1]) ? ((((24 > (arr_18 [i_0] [i_1] [i_1] [5] [5] [i_5 - 4]))))) : (arr_7 [3])));
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((30 ? (arr_15 [i_5 + 1] [i_0] [i_2] [i_1] [i_0]) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_26 = (((arr_18 [i_1] [i_1] [i_1] [i_5 - 2] [i_0] [8]) % 31));
                        var_27 = 1;
                        var_28 = (min(var_28, -25));
                    }
                }
            }
        }
    }
    #pragma endscop
}
