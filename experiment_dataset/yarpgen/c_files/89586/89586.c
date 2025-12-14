/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(-15141283061982316606, ((min(((var_3 ? 32767 : var_14)), (var_16 % var_2))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((var_17 * ((max((var_18 > var_13), 32767)))));
        var_21 = ((var_15 ? (min(var_6, (!var_1))) : -32740));
        arr_5 [i_0] = (((max(0, 9223372036854775807))));

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            arr_9 [i_1] [i_0] [i_0] = -25973;
            arr_10 [i_1] = ((((arr_3 [i_1 - 1] [i_1]) ? var_6 : -32761)));
        }
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            arr_13 [20] [i_2] = ((var_19 ? ((~(((arr_3 [i_0] [i_2 + 3]) ? 32767 : (arr_8 [i_0]))))) : ((7 ? (max((arr_6 [i_0] [i_0] [i_2]), (arr_2 [i_2] [i_2]))) : ((max(var_13, (arr_8 [i_0]))))))));

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_22 = ((((((((1 ? var_14 : var_5))) ? (max(0, 0)) : (arr_2 [i_0] [i_3])))) ? (((45606 > (-2147483647 - 1)))) : (arr_14 [i_3])));
                var_23 += ((-(min((arr_15 [i_2 + 2] [i_2] [16]), 0))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_24 [i_0] [i_2] [i_5] [i_4] [i_5] [i_5] = arr_3 [i_2] [i_4];
                            var_24 = (max((-1 && 127), ((20 ? (arr_20 [i_5 + 1] [11] [i_3] [i_2 - 1]) : 32740))));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                arr_27 [1] [1] [i_6] [i_6] = ((!(arr_17 [i_6] [i_6] [i_6])));
                var_25 -= ((-(((arr_22 [4] [i_0] [i_2] [i_2] [i_6] [i_6] [i_6]) ? 92 : var_4))));
                arr_28 [i_0] [i_2] [i_0] [i_6] &= ((!(arr_23 [i_2 + 2] [i_2 - 1] [i_2 + 2] [21] [i_2 + 2])));
                arr_29 [i_6] [i_2 - 3] [i_0] = ((2825016527 != (arr_21 [i_6] [4] [i_6] [i_2] [i_6] [i_0] [i_0])));
                arr_30 [i_0] [i_2] [i_2] [i_6] = (arr_22 [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 3] [i_2] [i_2 + 1] [i_2 - 2]);
            }
            var_26 = ((max(-32731, var_4)));
        }
    }
    #pragma endscop
}
