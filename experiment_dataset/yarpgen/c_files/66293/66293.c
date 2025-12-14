/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (~-var_10);
                var_13 = (max((((arr_2 [i_0 + 2] [i_0 - 1] [i_1 + 2]) | (arr_2 [i_0 - 1] [i_0 - 1] [i_1 + 2]))), (min((~var_5), ((~(arr_1 [i_1])))))));
                arr_5 [i_1] [i_0] = ((~(max(-1999655327, -1999655327))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_14 |= (max(-1999655351, ((-(max(60, var_8))))));
                            var_15 ^= (((-59 - -11) ? ((min(-1999655316, -6788))) : (((arr_10 [i_0] [i_0] [i_0]) ? (arr_1 [i_3]) : ((8380127617692232479 ? 255 : 78))))));
                            var_16 = (max(var_16, (((-(arr_2 [i_0 + 1] [i_0 + 1] [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    var_17 += (((((0 ? -2006566979 : 2495))) ? ((max(var_4, var_10))) : (max(((4294967044 ? var_11 : var_11)), ((max(-60, var_9)))))));

    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        arr_14 [i_4] = (min((max((((33292288 ? 2147483647 : (-127 - 1)))), (arr_9 [i_4 - 1]))), (((((-76 ? 1186013605 : 0)) < (((arr_3 [i_4] [i_4]) ^ 0)))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_18 = (((arr_9 [i_5]) ? (min((arr_9 [i_4 - 1]), (arr_9 [i_4]))) : (((((arr_9 [i_6]) == (arr_9 [i_4 + 1])))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_19 = 20;
                                arr_26 [i_4] [i_4] [i_6] [i_7] [i_4] = (max(2495, ((-(arr_10 [i_8 + 1] [i_8 + 1] [i_8 + 1])))));
                                var_20 -= ((((max((min(1270518726203774735, 34481)), 65515))) ? 739072887 : 4370));
                            }
                        }
                    }
                }
            }
        }
        var_21 = (min(((~((var_11 ? -4725038402921479572 : -902468740)))), ((min(-739072888, 4370)))));
    }
    #pragma endscop
}
