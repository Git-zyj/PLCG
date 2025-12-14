/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((min((((281474976709632 ? var_17 : (arr_1 [i_0])))), (arr_1 [i_0]))));
                var_21 = (((((((((arr_1 [i_0]) / 281474976709632))) ? 65535 : 5811868146640442324))) ? ((-((~(arr_0 [i_1] [i_1]))))) : var_18));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_22 = ((var_3 > ((5811868146640442324 ? 0 : var_11))));

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_23 = (max(var_23, ((((arr_1 [i_5]) >> (((arr_14 [i_5 + 2] [i_5] [i_5] [i_5 - 2]) + 5188886638793129607)))))));
                        var_24 = (min(var_24, ((((arr_14 [i_5 + 1] [i_5 + 3] [i_5 + 3] [i_5 - 2]) ? (((arr_14 [i_5] [i_4] [i_2] [i_2]) | (arr_14 [i_2] [i_2] [i_2] [i_2]))) : (((var_4 ? (arr_13 [i_2] [i_3] [i_5]) : 7600))))))));
                        var_25 = (min(var_25, ((((((arr_9 [11]) ? var_6 : 7808814047934580161)) & ((((!(arr_11 [i_3] [i_3] [i_5 + 1]))))))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_26 |= ((-(arr_17 [i_2] [i_2] [i_6] [i_2] [i_2] [i_2])));
                        var_27 = (max(var_27, (((7600 ? -281474976709631 : 148)))));
                        var_28 = 1;
                        arr_18 [i_2] [i_4] [i_4] [i_6] = (((arr_9 [i_2]) != 18446744073709551609));
                        var_29 = (arr_5 [i_4]);
                    }
                    arr_19 [i_2] [i_2] [i_4] [i_4] = (((((((arr_6 [i_3]) >= 48)))) > (~5598940577764804397)));

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        arr_24 [i_3] [i_4] [i_3] [i_3] [i_4] [i_2] = ((((max(((((arr_17 [i_2] [i_3] [i_4] [i_4] [i_7] [i_7]) && (arr_17 [i_2] [i_2] [i_4] [i_4] [i_2] [i_7])))), (min(var_8, (arr_8 [i_2] [i_2])))))) ? 18446744073709551615 : ((((!(((var_2 / (arr_21 [i_4] [i_4]))))))))));
                        var_30 = (((28 ? -1 : 32256)) == 32256);
                    }
                }
            }
        }
    }
    var_31 = ((((-49 && 221) & var_9)));
    #pragma endscop
}
