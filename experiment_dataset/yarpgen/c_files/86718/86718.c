/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 -= (((var_18 * (min(70, var_0)))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_9 [i_0 + 1] [i_0] [i_1] [i_2] = (((((((arr_1 [i_0] [i_0]) || var_12))) <= 24922)));
                    var_21 = (min(((((arr_1 [i_2] [i_2]) <= var_3))), (var_8 / var_5)));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_14 [i_4] [i_3] [i_1] [i_1] [i_0] = var_10;
                            var_22 = (((((4503599627370495 ? (arr_6 [i_0 + 1] [i_0] [i_0] [i_0]) : 0))) ? var_6 : var_10));
                            arr_15 [i_4] [5] [i_2] [i_1] [i_0] = (arr_5 [i_0] [i_0] [13]);
                            var_23 = (((((arr_8 [i_0] [i_1] [i_1] [i_3]) ? var_18 : var_5)) & (arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 1])));
                        }
                        for (int i_5 = 2; i_5 < 12;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_0] = (~var_9);
                            var_24 -= (min((((var_7 ? ((var_1 ? var_3 : var_18)) : var_13))), (var_5 / var_1)));
                        }
                        arr_20 [i_0] [i_3] = (((arr_11 [i_3] [12] [i_1] [i_0]) || -4503599627370489));
                        var_25 *= ((!var_18) && ((max(var_2, (arr_16 [i_1] [i_1] [i_3])))));
                    }
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        arr_25 [i_0 - 1] [i_1] [i_2] [12] [i_0] [i_2] = -var_1;
                        arr_26 [i_0 + 1] [1] [i_2] [i_6] = (4503599627370501 % -937961855);
                        var_26 -= var_16;
                        var_27 *= ((((arr_24 [i_0] [i_6 + 3] [i_2] [3] [i_1]) ? (arr_24 [i_2] [i_6 - 2] [i_6] [i_6 + 2] [i_6]) : var_17)));
                        var_28 = (var_10 || 32766);
                    }
                    arr_27 [i_0 - 1] [i_1] [i_1] = (((min((arr_16 [i_0 + 1] [i_0] [i_0]), (arr_16 [i_0 - 1] [i_0] [i_0 - 1]))) ^ (arr_18 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1])));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    var_29 *= var_18;
                    arr_30 [i_7] [i_1] [i_7] = (var_12 + var_19);
                }
            }
        }
    }
    var_30 = 18446744073709551615;
    var_31 = (min(((28 >> (33957 - 33942))), ((var_11 ? (var_19 != var_3) : var_6))));
    var_32 = var_11;
    #pragma endscop
}
