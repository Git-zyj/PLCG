/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(20674, 64));
    var_12 ^= var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((max(78, -50)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_14 = ((-(max((arr_11 [i_0] [i_1 + 3] [i_3] [i_4 - 4] [i_1 + 3] [i_4]), (arr_11 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_4 - 4] [i_4] [i_4 - 1])))));
                                var_15 = var_3;
                                arr_14 [i_0] [3] [i_2] = (min((arr_6 [i_0] [i_0] [i_0]), (((max((arr_12 [i_0] [i_0] [5]), var_3)) ? (arr_3 [i_3]) : (((arr_4 [9] [i_3]) % (arr_6 [i_0] [i_1 + 2] [i_0])))))));
                            }
                        }
                    }
                    var_16 = (max((((arr_10 [2] [5] [i_2] [i_2] [i_2]) % ((22 ? (arr_13 [i_0] [i_2]) : (-127 - 1))))), (arr_12 [i_0] [i_1 - 1] [i_2])));
                    arr_15 [i_0] [i_2] = (arr_2 [i_0]);
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_17 ^= (((137438953440 & 28) <= (((-22 ? 1 : 42)))));
        var_18 = (min(var_18, var_7));
        var_19 = var_1;
        var_20 = (max(1, ((((((arr_16 [17]) % -15)) > (arr_16 [i_5]))))));
    }
    #pragma endscop
}
