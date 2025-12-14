/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -0;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_12 = (~43252);
        arr_2 [9] = var_1;
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_13 = ((!((max(0, (arr_0 [i_1 - 1]))))));
        arr_5 [i_1 - 1] = (arr_3 [i_1 + 1] [i_1 + 1]);
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                {
                    var_14 = ((105 ? (arr_11 [i_2 - 2] [i_3 + 1] [i_4 - 2]) : var_8));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_15 ^= (((28068 / var_1) / (((arr_7 [i_5]) ? (arr_14 [i_6] [i_3] [i_6] [13]) : 1536))));
                                var_16 |= (arr_10 [i_4 - 2] [i_4 + 1] [i_4 + 1]);
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    {
                        var_17 = (arr_22 [i_8 - 1] [i_8] [i_8] [i_8 - 1]);
                        var_18 = 0;
                        var_19 = (arr_24 [2] [i_8] [i_8] [4] [3] [11]);
                        var_20 = ((+((((arr_26 [i_2 - 4] [i_7 - 2] [i_8] [6]) > (arr_6 [1]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
