/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = ((var_5 * ((((min(var_3, var_8))) ? var_8 : (255 >= 70231305224192)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_17 = (!4294967279);
                            var_18 = (((((+(((arr_8 [i_0] [i_1] [12] [i_2] [i_2] [i_2]) - 255))))) ? ((((arr_2 [i_0]) & (arr_0 [10] [i_1])))) : (((((arr_4 [i_0] [i_2] [i_3 - 1]) ? (arr_4 [i_0] [i_1] [i_2]) : var_11)) - (var_13 & 1)))));

                            for (int i_4 = 2; i_4 < 13;i_4 += 1)
                            {
                                var_19 ^= ((!(((((min(22, 22))) ? (min((arr_3 [i_0 - 1]), (arr_4 [i_4 + 1] [i_2] [1]))) : (((~(arr_10 [4] [0] [4] [i_3 + 1] [i_4 + 1])))))))));
                                var_20 = (max(((((var_10 * 65513) < (4294967272 * 22)))), (max((arr_1 [i_0]), var_13))));
                                var_21 = ((!(arr_3 [i_0 - 1])));
                            }
                            for (int i_5 = 0; i_5 < 14;i_5 += 1)
                            {
                                arr_15 [i_0] [i_1 - 2] [13] [13] [i_0 - 1] [i_1 - 2] = var_1;
                                arr_16 [i_0] = ((~(min(1, (var_7 ^ 32767)))));
                            }
                        }
                    }
                }
                var_22 = (min(var_22, (((+(((arr_3 [i_0 - 1]) ? (arr_8 [i_0] [1] [i_0 - 1] [i_1] [i_1 + 2] [i_1 + 2]) : (arr_3 [i_0 + 1]))))))));
            }
        }
    }

    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        arr_19 [i_6] = (arr_3 [1]);
        arr_20 [i_6] = ((((326090669 ? var_8 : ((144115188075855616 | (arr_7 [1] [8] [1]))))) >= 1688969269));
        var_23 = ((((max(var_11, 1478))) ? (((((arr_8 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) == 3734265352)) ? (((arr_14 [i_6]) ? (arr_7 [i_6] [0] [i_6]) : 191920854366357275)) : (min(18446744073709551612, var_5)))) : (arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [1])));
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_26 [i_7] [11] [i_8] [i_7 - 3] = (((arr_8 [i_7] [i_7] [i_7 + 3] [i_7 - 2] [10] [i_7]) ? ((((arr_8 [i_7] [i_7] [i_7 - 3] [i_7 - 2] [i_7] [0]) | (arr_13 [i_7] [i_7] [i_7 - 3] [i_7 - 2] [i_7 + 2] [i_7])))) : (min(82648185, var_8))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_24 += (arr_24 [i_6] [0] [1]);
                                var_25 = 144115188075855594;
                                var_26 = (min(var_26, ((min((25424 && 14), (min((arr_22 [i_6] [i_6]), (arr_22 [i_8] [i_8]))))))));
                                arr_34 [i_6] [i_6] [i_8] [i_7] [i_6] = var_14;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
