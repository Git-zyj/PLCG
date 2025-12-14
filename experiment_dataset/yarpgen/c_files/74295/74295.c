/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 *= ((max((min(22849, 8682103549124319713), (64 == 8682103549124319713)))));
                                var_20 = (max(((max((var_9 > var_6), (min(1, (arr_6 [i_0])))))), 15));
                                arr_13 [i_0] [i_1 + 1] [i_0] [i_0] [11] = var_3;
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] = ((-(min(14, 11227753454353997204))));
                                var_21 = (arr_9 [i_4 - 2] [i_1] [i_2 - 1] [i_4 + 1] [i_0]);
                            }
                        }
                    }
                    var_22 = (max(var_22, 1));
                    var_23 = var_4;
                    var_24 = (i_0 % 2 == zero) ? ((((((arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [7]) ? (arr_8 [i_0] [i_2 - 1] [7] [i_2 + 1]) : (arr_8 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) <= (((((arr_8 [i_0] [i_2 - 1] [i_2] [i_2 - 1]) + 2147483647)) << (((arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1]) - 10))))))) : ((((((arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [7]) ? (arr_8 [i_0] [i_2 - 1] [7] [i_2 + 1]) : (arr_8 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) <= (((((((arr_8 [i_0] [i_2 - 1] [i_2] [i_2 - 1]) - 2147483647)) + 2147483647)) << (((arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1]) - 10)))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_25 = (((arr_10 [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 1]) > var_13));
                        arr_18 [i_5] [i_0] [i_0] [8] = (arr_3 [i_0]);
                        var_26 ^= (((((var_5 ? 80 : 256785495))) || (arr_15 [1] [1] [i_1 - 1] [1])));
                        var_27 = (((arr_4 [i_0]) ? var_16 : (arr_2 [i_0])));
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = var_6;
                    }
                }
            }
        }
    }
    var_28 -= 13328015909561580567;
    #pragma endscop
}
