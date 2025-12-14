/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 &= max(var_17, var_10);
                            arr_10 [i_0] [i_0] [i_1] = (((max((arr_1 [i_0]), (arr_1 [i_0]))) ? (max(((-(arr_9 [i_3] [i_1] [i_1] [i_1] [9]))), var_16)) : (((min((arr_2 [i_1]), 1)) ? (min(var_15, (arr_4 [i_1]))) : (((arr_0 [i_0]) ? 1 : 523264))))));
                        }
                    }
                }
                var_19 = (~((((max((arr_8 [i_1] [17] [i_0] [i_1]), 445158320156126945))) ? ((523282 ? 523281 : (arr_6 [i_0] [i_1] [i_0]))) : (((arr_9 [i_0] [i_1] [i_0] [i_0] [7]) ? 523305 : 523264)))));
                var_20 &= -6523824152494041365;
            }
        }
    }

    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = (arr_3 [1] [i_4] [15]);
        arr_15 [i_4] = (-(arr_12 [i_4]));
        arr_16 [i_4] = min((min(523282, -6523824152494041365)), 9223372036854775807);
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    {
                        var_21 = var_5;
                        var_22 = (((((9223372036854775807 / (arr_8 [i_5] [i_8 - 1] [i_8 - 1] [i_5])))) || (((1 ? -9223372036854775796 : 1)))));
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_23 = max((((((arr_11 [i_5]) + 9223372036854775807)) << (((((arr_18 [i_5]) + 6423573507145569179)) - 37)))), (min(17, (arr_18 [i_5]))));
            var_24 += max((((arr_23 [i_5] [i_9]) ? -445158320156126945 : (arr_23 [i_9] [0]))), (max(523267, (arr_23 [i_5] [i_9]))));
            arr_32 [i_9] [i_5] [i_5] |= ((max((arr_19 [i_5] [i_9]), (((-4735440397321292663 ? 1 : 1))))));
        }
    }
    var_25 = (var_12 ? ((~(max(-523264, 4572768620625207946)))) : (max(((523258 ? var_11 : -7838129948994322957)), var_14)));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            {
                var_26 = (((max((max((arr_35 [i_10] [i_10]), 1)), (arr_33 [i_10] [i_10]))) ? 1 : (max((max((arr_37 [i_10] [i_10]), (arr_34 [i_10]))), ((min((arr_35 [1] [i_10]), 0)))))));
                arr_38 [i_10] [i_10] = ((((9223372036854775807 ? 20 : 1))) ? ((((var_5 - (arr_34 [1]))) / ((1 ? (arr_37 [i_10] [1]) : (arr_36 [13] [i_11]))))) : (max(1, (arr_34 [i_10]))));
                var_27 = -9223372036854775805;
                var_28 = ((9223372036854775804 - (min(((9223372036854775807 & (arr_34 [i_10]))), (arr_36 [15] [1])))));
                arr_39 [i_10] [i_10] [1] = (9223372036854775805 ? 7315378309212091455 : (((arr_37 [i_10] [i_11]) ? -1292881700355023924 : 0)));
            }
        }
    }
    #pragma endscop
}
