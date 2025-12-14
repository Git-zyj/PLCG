/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_11 = (max(var_11, var_0));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 ^= ((-((-(arr_7 [i_0] [i_1] [i_2] [i_4])))));
                                arr_17 [i_4] [i_3] [i_2] [i_1] [i_0] = ((-3167288367 ? (arr_12 [i_3 + 1]) : (var_3 * 0)));
                                var_13 = ((-26268 ? var_2 : 1));
                                var_14 = ((5060 ? (arr_7 [i_4 - 3] [i_2] [i_1] [i_0]) : var_6));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [7] [i_0] [i_6] [11] = ((0 <= (arr_11 [i_6] [9] [i_5 + 2] [9] [i_1])));
                                var_15 = var_2;
                                var_16 = (max(var_16, 106));
                            }
                        }
                    }
                    arr_25 [4] [1] [i_2] = var_5;
                }
            }
        }
        var_17 ^= (var_2 <= 113077343);
    }
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        arr_29 [4] [4] &= (min((min((arr_28 [15] [i_7 + 1]), (arr_26 [2]))), (arr_26 [1])));
        var_18 = (((((-(arr_28 [i_7] [i_7])))) - (max(((((arr_26 [i_7]) / var_1))), 0))));
    }
    var_19 += (((min(-1645046149, (var_9 ^ 4294967291))) >= (((((var_7 ? -148 : 39256)) | var_4)))));
    var_20 = (max(var_20, var_7));
    #pragma endscop
}
