/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((min(19, 1024)) != var_3))) > var_10));
    var_18 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_10 [i_3] [i_0] [i_2] [i_0] [i_0] = min(((18446744073709550593 ? var_15 : 10)), (((~(~var_13)))));
                        var_19 = (((((var_14 ? var_9 : var_7))) & 511));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_1] [6] [i_4] = -1391899530;
                            arr_14 [9] [i_1] [i_0] [i_1] [i_1] [i_1] = 502;
                            var_20 = ((!(((-1618815359 ? (min(var_2, var_0)) : (16688 != var_7))))));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_21 = (min(18446744073709551596, 0));
                            arr_17 [i_0] [i_5] [i_3] [i_2] [i_0] [i_0] [i_0] = ((!(((10 | (arr_9 [i_5] [i_0] [i_1] [i_0]))))));
                            arr_18 [i_0] [i_0] [i_2] [i_3] [1] = ((var_7 || ((((((arr_3 [10] [i_0]) ? -1 : 0)) - (((arr_8 [i_0] [i_2] [i_2] [i_0] [i_5]) ? 74 : var_8)))))));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0] = var_5;
                            var_22 = ((-1618815359 ? -1 : var_0));
                            var_23 = var_12;
                            var_24 = (~18446744073709551605);
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_25 = (18446744073709551615 * 286);
                            arr_24 [i_2] [i_0] [i_2] [i_0] [15] = ((var_16 ? var_10 : 18446744073709551606));
                        }
                    }

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_26 = (((((arr_23 [i_0] [i_1] [i_1] [i_2] [i_8]) > (-101 > 2980901663190025353))) ? ((((arr_11 [8] [i_1] [i_1] [i_8] [i_8] [1]) <= (arr_3 [i_1] [i_0])))) : ((var_2 ? ((-92 ? 1618815359 : 1)) : 4095))));
                        arr_27 [i_0] [12] [0] [i_0] [11] [i_0] = ((((min(var_14, 1052))) || ((min((min(205, var_15)), (1618815365 || var_1))))));
                    }
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        arr_30 [i_0] [i_1] [i_0] [i_9] = var_8;
                        arr_31 [i_0] [i_1] [i_0] [i_1] [i_0] = ((~1841) & (arr_25 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9] [i_9] [i_9]));
                        arr_32 [i_0] [i_0] [i_1] [i_2] [i_9 - 1] [i_9] = (1618815372 ? 1 : 1);
                    }
                }
            }
        }
    }
    #pragma endscop
}
