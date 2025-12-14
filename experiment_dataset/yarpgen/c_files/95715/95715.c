/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (-111003904 / 111003896)));
    var_13 &= (((var_8 ^ var_8) ? (var_3 & var_10) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_14 = (max(var_14, (((~(arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 - 1]))))));
                                arr_16 [i_0] [i_1] [i_2] [i_4] &= (((((-(((127 <= (arr_8 [i_0] [i_3] [i_2]))))))) != (min((min((arr_1 [i_4]), (arr_3 [i_1] [i_2]))), (~0)))));
                                arr_17 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == zero) ? ((((1 * (arr_13 [i_0] [i_0] [i_4]))) >> (((arr_13 [i_0] [i_0] [i_2]) - 392278893)))) : ((((1 * (arr_13 [i_0] [i_0] [i_4]))) >> (((((arr_13 [i_0] [i_0] [i_2]) - 392278893)) - 1255738936))));
                                var_15 = (max(var_15, (115 & 1152921504606846968)));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_5] = var_4;
                                arr_21 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_5] = (arr_9 [i_1] [i_2] [i_2] [i_2 + 2]);
                                var_16 -= ((18792 * (arr_7 [i_0] [i_2 + 4] [6])));
                                arr_22 [i_0] [i_2] [i_0] = var_8;
                            }
                            for (int i_6 = 0; i_6 < 0;i_6 += 1)
                            {
                                arr_26 [i_1] [i_0] = ((min(((max(1, (arr_9 [i_2] [i_2] [i_2] [i_2])))), (((arr_8 [i_0] [i_1] [i_6]) ^ 1)))));
                                var_17 = (min(((((arr_1 [i_0]) >= (arr_3 [i_6] [i_1])))), (((arr_6 [i_0]) & (arr_12 [i_3 + 1] [i_6 + 1] [i_2] [i_3])))));
                                var_18 = (((arr_10 [i_1] [i_6] [i_6 + 1] [i_6] [i_6] [i_0]) || (arr_1 [i_0])));
                            }
                            for (int i_7 = 0; i_7 < 12;i_7 += 1)
                            {
                                var_19 = ((((~(min((arr_6 [i_0]), 251991966)))) * var_6));
                                arr_29 [i_0] [i_0] [i_0] [i_1] [i_2] [i_7] [i_7] |= 14;
                                var_20 -= (arr_19 [i_0] [i_0] [i_0] [i_0]);
                                var_21 = (min(var_21, (((((((65424 * (arr_28 [i_0] [i_1] [i_2]))))) / (arr_14 [i_7] [i_3] [i_2] [i_1] [i_0] [i_0]))))));
                            }
                            var_22 = (max(var_22, (arr_24 [i_0] [i_3] [i_2] [i_3 + 1] [i_3] [i_3] [i_1])));
                            var_23 = var_5;
                        }
                    }
                }
                var_24 = (min(var_24, ((min((arr_13 [i_0] [0] [i_1]), ((((arr_1 [6]) ^ ((min((arr_6 [10]), var_11)))))))))));
            }
        }
    }
    var_25 = -32;
    #pragma endscop
}
