/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(var_6, var_10);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (26053 / -26053);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 = ((!(arr_10 [i_4 - 2] [i_4] [i_4 - 1] [i_4] [8] [i_4 + 1])));
                                var_22 = ((16084290770096154962 && (arr_10 [i_2] [i_3] [i_3 + 1] [i_4] [i_4] [i_4 + 1])));
                                var_23 ^= -13791;
                                arr_16 [i_0] = (var_3 || (arr_9 [i_3 - 1] [i_0] [i_0]));
                                var_24 *= 2952066169;
                            }
                        }
                    }
                    var_25 = (min(var_25, (((1 << (((arr_1 [i_1 - 1] [i_1 - 1]) - 3191630717)))))));
                    arr_17 [i_0] [i_1] [6] = 1;
                    arr_18 [i_0] [i_2] = -16768;
                }
            }
        }
        arr_19 [i_0] = (arr_5 [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {

                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        var_26 = (min(var_26, ((((arr_4 [i_0] [i_0]) * (((arr_21 [i_6]) / var_2)))))));
                        arr_27 [i_0] [i_5] [i_5] [i_7 + 1] = (arr_23 [i_5] [i_6]);
                        var_27 = 26053;
                    }

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_28 *= ((((var_1 ? var_16 : (arr_5 [i_0] [i_6] [1]))) >> (((arr_20 [2] [i_0] [i_0]) - 12078245031070698967))));
                            arr_35 [i_5] = 9230;
                            arr_36 [i_5] [i_8] [8] [i_5] [i_5] [i_5] = (((arr_30 [i_5] [i_6] [i_5]) * ((-1832 ? var_5 : (arr_3 [i_9])))));
                        }
                        arr_37 [i_5] = -0;
                    }
                }
            }
        }
        arr_38 [i_0] [i_0] = (((arr_25 [10]) ? 13790 : (arr_25 [6])));
    }
    var_29 = (min((min(((max(-26063, var_8))), ((1 ? var_8 : var_19)))), var_12));
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 14;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 15;i_12 += 1)
            {
                {
                    arr_47 [i_10] [i_10] [i_10] [i_12 - 2] = (max((arr_43 [i_10] [i_11] [i_12]), ((-(arr_43 [i_12] [i_11 + 3] [i_10])))));
                    var_30 = -13802;
                }
            }
        }
    }
    #pragma endscop
}
