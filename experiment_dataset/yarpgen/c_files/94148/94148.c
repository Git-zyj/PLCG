/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_12);

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_15 = (max(var_15, (((((((arr_2 [i_0 - 1] [i_0]) - (arr_2 [i_0 + 1] [i_0])))) + (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0 - 1]) : (arr_1 [i_0] [4]))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3] [i_2 - 3] [i_3] [i_0] = (i_3 % 2 == 0) ? ((max((((arr_11 [i_3] [i_3]) << (((arr_11 [i_3] [i_3]) - 4189007975963864706)))), (((arr_11 [i_3] [i_3]) ? (arr_11 [i_3] [i_3]) : (arr_11 [i_3] [i_3])))))) : ((max((((arr_11 [i_3] [i_3]) << (((((arr_11 [i_3] [i_3]) - 4189007975963864706)) - 13413278915172184512)))), (((arr_11 [i_3] [i_3]) ? (arr_11 [i_3] [i_3]) : (arr_11 [i_3] [i_3]))))));
                                var_16 = (min((((((arr_0 [i_0]) ? (arr_1 [7] [i_1 - 1]) : 63429)))), (max((((arr_12 [16] [0] [i_4] [i_3] [i_2] [16] [0]) ? 1409106634968730752 : (arr_5 [i_2 - 2]))), (arr_12 [i_0] [i_0] [6] [i_0] [i_2] [i_0] [2])))));
                            }
                        }
                    }
                    var_17 = ((((arr_8 [16] [i_2] [i_2] [i_1]) ? (max((arr_11 [i_0] [i_2]), var_10)) : ((((arr_3 [i_2 - 2]) / 6332933461512762680))))));
                    arr_14 [i_0] [9] [i_2] = (((~-6332933461512762681) == 17037637438740820864));
                    arr_15 [7] [1] [1] [1] = max(((((((-(arr_2 [i_0] [i_0])))) ? (arr_8 [i_1 - 1] [i_2] [14] [i_2 + 1]) : (arr_9 [i_2] [i_1] [1] [i_2 - 1])))), (arr_12 [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 4] [i_2 - 2]));
                }
            }
        }
    }
    #pragma endscop
}
