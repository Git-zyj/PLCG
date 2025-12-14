/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((!var_16) ? var_12 : ((((2708214804 ? 1 : var_8))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = var_9;
        var_18 = 51973;
        arr_3 [i_0] [i_0] |= (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 = (arr_7 [i_1]);

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_20 -= -971;
            var_21 = (arr_8 [i_1]);
            var_22 = var_0;
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_23 ^= -var_15;
                            var_24 -= (((arr_21 [20] [i_5] [i_4] [i_3] [i_3] [2]) ? var_14 : (arr_12 [i_4 - 2])));
                            var_25 = (var_13 / (((arr_21 [i_6] [i_5] [i_4] [i_3] [i_3] [i_1]) ^ (arr_14 [13] [i_3] [i_6]))));
                        }
                    }
                }
            }
            var_26 = (((var_14 + 2147483647) << (((arr_20 [i_1] [i_1] [0] [i_3] [20]) - 1305483023))));
            var_27 *= ((arr_18 [i_1]) / (arr_18 [i_1]));
            arr_22 [13] [i_3] [i_1] = ((+(((arr_19 [i_1]) ? 1 : var_16))));
        }
        var_28 = ((~(((!(arr_7 [8]))))));
    }
    var_29 = (min(var_29, (min(246, 1))));
    #pragma endscop
}
