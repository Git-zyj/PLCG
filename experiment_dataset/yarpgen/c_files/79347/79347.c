/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = ((((var_5 | var_8) ? var_7 : -104)));
        arr_4 [i_0] [1] = max(((max(var_3, var_14))), (max(((max(var_18, (arr_2 [i_0])))), (arr_2 [i_0]))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_13 [i_1] [i_2] = 12;
                        var_22 = var_0;
                    }
                }
            }
            var_23 = -1;
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_18 [i_4] = ((min(((1 ? 10 : (arr_16 [i_4] [i_4]))), var_5)));
        var_24 = (max(var_13, (max(-var_18, (-3956402816121350483 / 3441296146217489607)))));
        arr_19 [i_4] [19] = (((126 < -var_1) & (((((var_5 ? var_14 : var_19))) ? ((min(var_11, (arr_15 [i_4])))) : (2030577311 != 97)))));
        arr_20 [i_4] = (+-127);
        arr_21 [i_4] [8] = ((~(((~765716336) ? (var_2 || var_4) : (((arr_2 [i_4]) | var_2))))));
    }
    var_25 = (var_8 & ((var_10 ? ((var_17 ? var_16 : 1)) : 1)));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_26 = -var_1;
                arr_26 [i_5] = (min((arr_0 [i_6] [8]), 113));

                for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    var_27 = ((-var_3 / 1) && var_2);
                    var_28 *= (--4294967295);
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                {
                    var_29 &= (max(65535, (((arr_5 [i_5] [4] [1]) ? 21 : var_6))));
                    var_30 = (min((arr_8 [i_5] [i_5] [i_6] [i_8]), (min(-3956402816121350480, 6))));
                    arr_32 [i_8] [i_6] [i_6] [7] = ((1 ^ ((130 ? var_14 : ((var_18 << (var_12 - 2050060440713502161)))))));
                    arr_33 [1] [0] [1] [i_8] = ((((max(var_4, (max(-121, var_17))))) ? var_5 : (arr_17 [i_5])));
                }
                arr_34 [6] = (((1 ^ -8635866678736202415) ? (min((max(var_7, -1362739561688276887)), (!1152921504606846975))) : 65529));
            }
        }
    }
    #pragma endscop
}
