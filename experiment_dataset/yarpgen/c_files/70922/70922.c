/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (32256 % ((~((var_12 ? var_7 : var_1)))));
    var_14 = ((var_9 ? var_12 : ((min(-2985, ((max(var_3, var_8))))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (min(2984, var_9));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_1] = ((~((1 ? var_10 : (~126)))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_15 = ((((!(arr_10 [i_2 - 2] [i_2 + 1] [i_2 - 1] [i_2])))));

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_0] [i_0] [i_4] = (~var_4);
                            var_16 = ((((288230376134934528 ? 19 : 1)) < var_12));
                        }
                        var_17 = ((var_6 && (var_2 <= var_5)));
                        var_18 = ((((((var_10 ? (arr_1 [i_0]) : (arr_2 [i_0]))) <= 252)) ? (((!(arr_4 [i_0])))) : ((((min((arr_0 [i_0] [i_2]), 65535))) ? ((var_12 ? -2984 : var_12)) : (arr_9 [i_2 + 2] [i_2 + 2] [i_2] [i_2 - 1] [i_2 - 2])))));

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_19 = (min((~var_10), (((arr_15 [i_0] [i_2 + 2] [i_5]) ? ((((var_5 > (arr_9 [i_0] [1] [i_2] [i_3] [1]))))) : var_7))));
                            arr_20 [19] [i_0] [i_0] = ((!((max((((arr_4 [1]) ? (arr_18 [i_1] [i_2 - 2] [i_1] [i_3] [i_5] [i_2 + 2]) : (arr_1 [i_0]))), ((((arr_9 [i_1] [1] [i_2] [i_1] [i_0]) != 237))))))));
                            var_20 = (min((((-1 ? -124 : 1))), (1125899906842623 ^ 18446744073709551615)));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_21 = var_1;
                            var_22 = ((((min(-1, (arr_10 [i_6] [i_1] [i_1] [i_0])))) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) : ((0 ? 3466677733828854750 : 4294967295))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [14] [i_0] = 1;
                        }
                    }
                }
            }
            var_23 = (((arr_9 [i_1] [i_0] [i_0] [i_0] [i_0]) ? (((65527 ^ (((arr_9 [i_0] [i_1] [i_1] [i_1] [i_1]) ? var_12 : 33))))) : (arr_11 [i_0])));
            arr_25 [i_1] [i_0] [i_0] = (1 ? 1 : 8147);
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_24 = (((((255 * var_9) ? ((1 ? (arr_15 [0] [1] [i_9]) : (arr_21 [i_0]))) : (arr_7 [i_7]))) - (arr_15 [i_8 - 1] [i_1] [i_7])));
                            var_25 = (arr_28 [i_0]);
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_26 = (max(17, ((((((arr_8 [i_10] [i_0]) * (arr_17 [i_0] [1]))) - (1 - 65535))))));
            var_27 = var_1;
        }
        var_28 = 14;
        arr_35 [3] = 255;
    }
    #pragma endscop
}
