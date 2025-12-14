/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 -= ((-50 ? (((arr_1 [i_0]) ? var_11 : var_10)) : (((-50 ? (arr_1 [i_0]) : 12828)))));
        var_15 = ((-(var_11 && 402653184)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = 49566;
        var_17 = 18415;
        var_18 = (((944766240 || 49566) ? (((~5) ? 49566 : ((var_13 ^ (arr_2 [i_1] [i_1]))))) : (arr_2 [i_1] [i_1])));
        var_19 &= arr_3 [i_1];
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    {
                        var_20 -= (((((((arr_10 [1] [i_1] [i_1] [6] [1]) < 32768)) ? (((arr_2 [i_1] [i_4]) ? var_3 : 32)) : (min((arr_6 [i_1]), 12805)))) / 12805));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_21 = (((75 / 96) << (((arr_12 [i_5] [i_3] [i_3] [i_4 - 1]) + 94))));
                            var_22 = (((arr_2 [i_4 - 1] [i_4 - 1]) % (arr_2 [i_4 - 1] [i_1])));
                        }
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            var_23 -= -944766241;
                            var_24 = (min(var_24, (((((min(12828, -944766241))) ? (arr_2 [i_6 + 3] [i_4 - 1]) : (arr_2 [i_6 + 2] [i_4 + 1]))))));
                            var_25 = ((!(12962293826415063481 & 1)));
                        }

                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            var_26 = (max(var_26, ((((138 % 6) != ((min((arr_8 [i_3] [i_4 - 1] [i_7 + 2] [i_4 + 1]), (arr_8 [9] [1] [i_7 + 2] [i_4 - 1])))))))));
                            var_27 = (min(((255 % (((arr_16 [i_1] [i_3] [i_2] [i_3] [i_3] [i_4] [i_7]) ? 119 : (arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_1]))))), (((~((2147483648 ? var_5 : var_3)))))));
                            arr_19 [i_1] [i_2] [i_3] [i_4 - 1] [i_3] [i_3] = (min((((((min(-12829, 56637))) > (31888 & 31888)))), (((((1 ? 119618226 : 33648))) ? 1035201592 : 248))));
                            var_28 = ((((((var_9 * (-4216 | var_6))) + 2147483647)) << ((((((var_6 & (arr_6 [i_4 + 1]))) + 445273973)) - 25))));
                        }
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            var_29 = ((((var_13 ? var_3 : var_11)) * (1 | 1)));
                            var_30 = (min(var_30, (arr_17 [i_1] [i_2] [i_3] [18] [16] [i_1] [i_8])));
                            var_31 = ((1 ? (min(0, 1)) : -442170856));
                        }
                        var_32 = 4791;
                        var_33 = (min(var_33, ((((((1 & 33648) ? (min(2065916600, 2588710958)) : (-127 - 1))) & -28)))));
                    }
                }
            }
        }
    }
    var_34 += var_13;
    #pragma endscop
}
