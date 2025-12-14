/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((((((~1) ^ (var_14 & var_12)))) != ((0 ? (var_10 - 268402688) : (~var_3))))))));
    var_19 = (var_15 % var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = ((~14755755349399691027) && (arr_4 [6] [8] [i_2]));
                                arr_11 [i_0] [i_1] [i_0] [i_3] [i_4] = 3690988724309860588;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_21 = (max(var_21, var_2));
                            var_22 += ((((18446744073709551615 ? 268402670 : 268402688)) + (((arr_0 [i_5] [i_6]) ? (arr_0 [i_0] [i_6]) : (arr_0 [i_0] [i_1])))));
                            var_23 = (max(var_23, (231 != 0)));
                            var_24 = var_7;
                        }
                    }
                }
                var_25 = 0;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_26 ^= 3;
                            var_27 = (((-var_3 ? (arr_5 [i_8]) : ((max((arr_0 [i_7] [i_1]), var_5))))));
                            var_28 = var_12;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                {
                    arr_29 [i_11] [i_10 - 1] [18] [i_9] = var_12;
                    arr_30 [i_11] = (min((((1 / (0 <= var_2)))), ((1 ? 0 : 1))));
                    var_29 *= (max((var_9 / var_7), (((268402688 ? 1 : (arr_25 [i_9] [i_10 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_12 = 4; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                arr_36 [i_9] [i_9] [i_11] [i_12] [i_13] = ((15994 ? 1 : 43119));
                                arr_37 [i_13] [4] [i_11] [i_10] [1] = var_5;
                            }
                        }
                    }
                    arr_38 [i_9] [i_9] [5] = (min((max(1794787973685533079, (~var_7))), (((var_2 ? 0 : (arr_27 [i_11] [i_10] [i_9]))))));
                }
            }
        }
    }
    #pragma endscop
}
