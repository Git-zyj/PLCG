/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                arr_13 [1] [i_4] [i_2] [1] [i_4] = ((-(arr_8 [i_3 - 4] [i_3 + 2] [i_3 - 4] [i_3 + 2])));
                                arr_14 [4] [6] [i_2] [i_3] [i_4] |= (arr_8 [i_1] [i_2] [i_3] [i_4]);
                                var_16 -= ((~((116 ? (arr_6 [11]) : (arr_6 [i_0])))));
                                var_17 += -17823803353649985132;
                            }
                            for (int i_5 = 2; i_5 < 17;i_5 += 1)
                            {
                                arr_17 [i_0] [i_0] [i_1] [9] [i_3 - 4] [10] |= ((((((~1912147968) > ((((arr_7 [5] [1]) ? (arr_6 [i_5 - 2]) : (arr_6 [i_3 - 4]))))))) > (arr_0 [i_1])));
                                var_18 = (((arr_15 [i_0] [5] [i_1] [i_3 + 2] [i_2]) ? (((!(arr_9 [7] [11] [i_2] [i_5 - 2])))) : (((~116) ? (arr_0 [i_5 - 1]) : ((max(149, (arr_10 [i_5 - 2] [1] [2] [17] [8] [12] [i_0]))))))));
                                var_19 ^= (arr_3 [i_5 - 1] [i_1] [i_0]);
                                arr_18 [i_0] [i_2] [i_2] [i_5 - 2] [5] = (~149);
                                arr_19 [i_0] [i_0] [i_0] [i_0] [5] [i_0] [i_0] = ((((((((((arr_12 [i_0] [i_0] [1]) + 9223372036854775807)) >> (((arr_4 [i_5 - 2] [i_0]) - 1762476421))))) ? ((((arr_10 [10] [i_3] [11] [i_2] [i_2] [i_1] [i_0]) || 180))) : (arr_10 [14] [i_1] [1] [i_2] [1] [15] [15])))) ? (~116) : ((~(arr_11 [i_0] [i_1] [6] [i_0] [i_5 + 1] [i_5 + 1]))));
                            }
                            var_20 = ((~(arr_12 [i_0] [4] [i_2])));
                        }
                    }
                }
                var_21 = (min(var_21, ((min((arr_3 [i_1] [i_1] [i_0]), (((!(~5425754393485786371)))))))));
                arr_20 [i_0] [i_0] [i_0] = ((+(((arr_12 [i_0] [1] [1]) ? (((((arr_8 [10] [1] [i_0] [i_0]) == (arr_8 [i_0] [1] [i_0] [7]))))) : (((arr_16 [i_1]) ? 569778906630877494 : -1368775097))))));
            }
        }
    }
    var_22 = (~var_6);
    var_23 = (max(((var_6 ? (var_4 && var_9) : var_10)), (~var_0)));
    #pragma endscop
}
