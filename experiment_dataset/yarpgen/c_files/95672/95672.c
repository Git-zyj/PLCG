/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = -1;
                    var_17 -= (((arr_4 [i_0] [0] [i_0]) ? ((var_7 ? (((-7218202754533952150 ? 1 : (arr_5 [1])))) : ((109 ? -8 : (arr_0 [i_0] [i_0]))))) : -9));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = (((var_4 + 9223372036854775807) << (((((arr_6 [i_0]) + 1393349553484282361)) - 18))));
                        var_19 = (max(var_19, (((-(((~var_0) ? (var_6 / var_9) : (~0))))))));

                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            var_20 = (!((-1 != (arr_9 [i_0] [i_1] [i_1] [i_0]))));
                            var_21 *= var_14;
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            arr_19 [0] [0] [i_0] [0] [i_0] |= (arr_15 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1]);
                            var_22 = (arr_17 [i_0] [i_1] [i_1] [i_1] [i_5]);
                            arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = var_3;
                        }
                    }
                    for (int i_6 = 3; i_6 < 7;i_6 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_0] = (max((arr_11 [i_1] [i_1] [i_1] [i_6 + 4]), (((((min((arr_12 [i_2] [i_2] [i_2] [i_1] [1]), (arr_2 [i_0])))) ? (arr_3 [i_6 + 3] [i_6 - 1] [i_6 + 4]) : (((arr_16 [i_0] [i_1] [i_2] [3] [i_2] [i_2] [i_6 - 1]) - -7)))))));
                        arr_24 [1] [i_1] [i_1] [i_6] = (arr_14 [i_0] [i_1] [2] [i_0] [2] [1] [i_6]);
                    }
                    for (int i_7 = 2; i_7 < 8;i_7 += 1)
                    {
                        arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((min(14, 22))) ? ((((((arr_7 [i_1]) * (arr_22 [i_0] [i_0] [i_0]))) / ((-32750 ? var_1 : (arr_16 [i_0] [i_1] [i_1] [i_2] [i_1] [i_2] [9])))))) : ((-(((arr_18 [i_2] [i_2] [i_0]) ? var_9 : (arr_4 [i_0] [i_1] [i_0]))))));
                        arr_28 [i_1] = ((((((arr_6 [i_1]) / (arr_4 [i_0] [i_0] [i_2])))) ? var_3 : ((max((arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [1] [i_2]), ((max(1, 1))))))));
                        var_23 = (max(var_23, (((!((max((arr_13 [i_7 - 1] [i_7 - 2] [i_7 + 2] [6] [6] [i_7]), (arr_1 [i_0])))))))));
                        arr_29 [i_0] [i_0] [i_1] [i_7] [i_2] = (min((((max((arr_18 [i_0] [i_1] [i_7]), 1)))), (min((arr_16 [i_0] [i_0] [3] [i_2] [i_2] [7] [i_0]), 856831547))));
                    }
                    arr_30 [i_0] [i_1] [i_1] = ((!((((arr_7 [i_1]) ? (arr_3 [i_0] [i_0] [i_2]) : (14 * 7))))));
                }
            }
        }
    }
    var_24 = (~48);
    var_25 = 65;
    #pragma endscop
}
