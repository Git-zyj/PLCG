/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(398719026, ((-((1 ? var_16 : var_2)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = (((arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (~1) : (((arr_3 [i_1 + 1]) - -28))));
                    arr_9 [i_2] [i_2] [i_2] = (((arr_3 [i_0]) | (~18238665822794660418)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_2] [i_3] [i_1] [i_1] [i_2] [3] = ((((((((28323 ? (arr_6 [i_0] [i_0] [i_2]) : (arr_4 [i_2])))) ? ((max((arr_14 [i_2] [2] [i_2] [i_1] [i_0]), (arr_1 [i_0])))) : ((var_9 ? var_6 : 5347506279782785104))))) ? (((((923214780 || var_12) >= (arr_8 [i_0] [i_0] [i_0] [i_2]))))) : (((arr_2 [i_0]) ? (min((arr_10 [i_4] [i_3] [i_3] [i_2] [i_0] [i_0]), var_5)) : 1))));
                                var_19 = var_14;
                                arr_17 [i_4] [i_1] [i_2] [i_2] [i_4] [i_2] [i_3] = (arr_7 [i_0] [i_1] [i_1 + 1]);
                            }
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            var_20 = (((arr_6 [i_5] [i_0] [i_0]) ? (arr_15 [i_5 + 2] [i_0] [i_5] [4]) : -var_6));
            var_21 = (((((!(arr_11 [i_0] [12] [i_5] [0] [i_0] [i_0])))) >= (arr_18 [i_0])));
            var_22 &= (-2147483647 - 1);

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_22 [i_5 + 4] [i_5] [i_5 + 2] [i_5] = 21397;
                arr_23 [i_0] [i_5] [i_5] [i_5] = ((~((-(arr_2 [i_6])))));
                var_23 *= -var_11;
            }
            arr_24 [i_0] [i_5] [i_5 + 2] = (((arr_6 [i_0] [i_5 + 1] [i_5 + 4]) ? -11606 : var_4));
        }
    }
    var_24 = var_10;
    #pragma endscop
}
