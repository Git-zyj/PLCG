/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((min(98, 14175475731947893842))) ? (0 + 1) : ((var_4 ? 90 : var_16)))) >= (var_1 / var_5)));
    var_21 = var_18;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, ((max(((12476789428438448434 ^ (arr_5 [i_1] [i_2]))), (arr_5 [i_0] [1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_1] [i_1 - 2] [i_0] [i_1] = ((!(arr_0 [i_1])));
                                var_23 = (((arr_4 [i_0] [i_0] [i_0]) ? ((0 ? (((arr_3 [i_4 - 2]) ? (arr_1 [i_0]) : (arr_5 [i_2] [i_3]))) : (((min(250, (arr_10 [i_4] [i_3] [i_2] [i_1] [i_0]))))))) : (arr_8 [i_4] [i_3] [i_2] [1])));
                            }
                        }
                    }
                    arr_12 [i_1] [i_1 + 2] [i_2] [i_0] = (arr_2 [i_0] [i_1] [i_0]);
                    var_24 -= (-2147483647 - 1);
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            var_25 = (min(var_25, (((255 >> (((((arr_10 [i_5] [i_5] [i_5] [i_0] [i_0]) ? (arr_3 [i_0]) : (arr_13 [i_0] [i_0] [i_5 - 1]))) - 51)))))));
            var_26 -= (arr_5 [i_5 + 2] [i_5 - 1]);
            var_27 = (((1 ^ var_16) ? ((255 ? (arr_6 [i_5] [7] [i_0]) : (arr_1 [i_0]))) : (((arr_2 [i_0] [i_5] [i_5]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_0 [i_0])))));
            arr_15 [i_0] [i_5 + 1] [i_5 + 1] = (arr_6 [i_5] [i_5] [i_0]);
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_20 [i_0] [i_0] [6] = ((+(((((arr_16 [1] [i_6] [i_6]) == 1)) ? (3 >= 247) : 144115170895986688))));
            arr_21 [i_0] [i_0] = (max(1, (((~(arr_9 [i_6] [i_6] [7] [i_6] [i_6]))))));
            var_28 = (((arr_1 [i_0]) ? (arr_18 [i_0] [i_0] [i_6]) : (((-(arr_7 [i_0] [i_0] [i_0] [i_6] [i_6] [i_6]))))));
            arr_22 [i_0] [i_0] [i_0] = 6;
            arr_23 [i_0] [i_0] = ((54185 ? var_3 : (arr_18 [9] [i_6] [0])));
        }
        var_29 = ((!(!214)));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_30 = ((-((-1 * (min(2147483647, var_5))))));
        arr_27 [i_7] = (arr_26 [i_7]);
    }
    var_31 = var_4;
    var_32 = var_16;
    #pragma endscop
}
