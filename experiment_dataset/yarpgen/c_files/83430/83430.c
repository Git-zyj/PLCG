/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_10 ^= (arr_3 [4] [4] [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 6;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            var_11 = 80;
                            var_12 *= 235;
                            arr_14 [i_0] [i_1] [i_2] = 1;
                            var_13 = (!var_2);
                        }
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            var_14 *= ((-(~1)));
                            var_15 ^= 0;
                        }
                        var_16 = var_2;
                        arr_17 [i_0] [i_1] [i_0] [i_3 - 1] = (((arr_3 [i_0] [i_2 + 1] [i_3 + 4]) != 7));
                    }
                }
            }
        }

        for (int i_6 = 2; i_6 < 7;i_6 += 1)
        {
            var_17 *= (+((var_4 ? (arr_11 [i_6] [i_6 + 3] [i_6] [5] [i_0]) : (arr_18 [i_6]))));
            var_18 *= 1;
            var_19 ^= 1;
            var_20 = var_3;
        }
        for (int i_7 = 3; i_7 < 8;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 4; i_8 < 8;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 8;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 7;i_10 += 1)
                    {
                        {
                            var_21 = (max(var_21, var_7));
                            var_22 = (-6137592823805387107 ? (arr_22 [i_0] [i_10 - 2] [i_8 + 1]) : 16522);
                            arr_34 [i_10] [i_7] |= ((~(arr_7 [i_9] [i_10] [i_0])));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_11 = 3; i_11 < 8;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 9;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 9;i_13 += 1)
                    {
                        {
                            var_23 |= -21;
                            var_24 = (min(var_24, ((((~var_0) ? ((-7668 ? 6137592823805387119 : 0)) : 5860088465194522079)))));
                            var_25 = (((((520093696 ? 64811 : 255))) ? var_9 : (arr_10 [i_0 - 1])));
                        }
                    }
                }
            }
        }
        for (int i_14 = 1; i_14 < 9;i_14 += 1)
        {
            arr_49 [i_0] [i_0] = (arr_3 [i_0] [i_14] [i_0]);
            arr_50 [6] [6] |= (((arr_28 [i_0 - 1] [i_0 - 1] [i_14 - 1] [i_0 - 1] [i_0 - 1] [i_14]) & (arr_23 [i_14 + 1] [2] [i_0 - 1])));
            var_26 -= var_1;
        }
    }
    var_27 = var_5;
    var_28 = ((((((var_2 ? var_1 : 11))) ? (var_0 & -520093705) : var_6)));
    #pragma endscop
}
