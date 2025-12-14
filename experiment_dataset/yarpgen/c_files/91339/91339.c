/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 118;
    var_21 = ((-(255 / var_16)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] |= -24913;
                    arr_8 [i_0] [i_0] = ((((arr_5 [i_2 + 2] [i_2 + 2] [i_2] [i_2 - 1]) > (arr_4 [i_0] [i_1] [i_2 + 2]))));
                    var_22 = ((((((4294967295 >> (var_15 - 64141))) <= (((max(-24754, 1)))))) ? (((4294967295 > (arr_2 [1])))) : (((!(arr_2 [1]))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_13 [i_3] [i_1] [i_2] [i_3] = (~1);
                        arr_14 [i_3] [i_2] [i_1] [i_0] = ((~((250 ? 153669374 : (arr_0 [i_0] [i_0])))));
                        var_23 = var_2;
                        var_24 = (((26844 ? (arr_3 [i_3] [i_1] [i_1]) : 1)));

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_1] [i_4] = (1 || 15728640);
                            arr_19 [i_4] [i_1] [i_2 - 1] [i_3] [i_4] [i_1] = (((arr_2 [i_0]) | (arr_16 [i_2 + 2] [i_2 - 1] [i_2 + 3] [i_2 - 2] [i_2 - 2])));
                            var_25 = ((((~(arr_11 [i_0] [i_1])))) ? (arr_16 [i_0] [i_1] [i_0] [i_3] [i_4]) : ((-(arr_1 [i_2]))));
                            arr_20 [3] [i_2] [i_2] [i_4] = 146;
                            var_26 = ((~((((arr_16 [i_4] [i_3] [i_0] [i_0] [i_0]) < var_19)))));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_27 += ((var_3 ? 116 : (((!(arr_21 [4] [4] [23] [i_2] [i_3] [i_5] [i_5]))))));
                            var_28 = (arr_6 [i_2] [i_2] [i_2 - 3]);
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_26 [i_6] [i_2] [i_1] [i_0] = (arr_25 [i_0] [24] [i_0] [i_6]);
                        var_29 |= (arr_3 [i_2 - 2] [i_2] [i_2 + 1]);
                        arr_27 [i_0] [1] [i_2] = ((31 ? 188 : 251));
                    }
                    arr_28 [i_0] [i_2] = 1;
                }
            }
        }
    }
    var_30 &= ((1332592518 + (1 / 314365953)));
    #pragma endscop
}
