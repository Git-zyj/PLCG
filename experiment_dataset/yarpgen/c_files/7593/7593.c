/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = var_1;
                arr_5 [i_0] = (~2);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_16 -= var_9;
                            arr_12 [i_3] = (~6146081418696350448);
                            arr_13 [i_0] [1] [i_1] [i_3] = ((-(((~var_13) ? var_5 : ((-6146081418696350448 ? var_14 : -6146081418696350458))))));
                        }
                    }
                }
                var_17 = ((-(((((arr_2 [i_0] [i_0]) ? 6146081418696350428 : (arr_9 [i_0] [11] [i_0] [i_1] [i_1 - 2]))) / var_0))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_17 [i_4] = ((((((6146081418696350455 ? 1 : 1387500503)))) ? -18371 : var_2));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    {
                        var_18 ^= (min((((arr_23 [i_5 - 1] [i_5 - 1] [i_6] [i_7 + 1] [i_7] [i_7 + 1]) ? -var_5 : (arr_22 [i_4] [i_6]))), var_3));
                        arr_24 [i_4] [i_7 + 2] [11] [i_5] [0] [i_4] = 18371;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        arr_29 [i_8 + 1] [i_8 + 1] = (max((((~205) ? var_10 : (~var_5))), ((-1077071564 ? -1 : (((arr_28 [i_8] [i_8]) ? 18370 : var_5))))));
        arr_30 [i_8] [i_8] = (((~55198) != var_5));
        var_19 = (((min(var_0, 3941732894366969368))) ? (arr_25 [i_8 + 1]) : var_4);
    }
    for (int i_9 = 2; i_9 < 8;i_9 += 1)
    {
        var_20 |= ((-(((arr_10 [i_9 + 1] [i_9 - 1] [i_9 - 2] [i_9 + 2]) << ((((min(51, (arr_25 [i_9])))) + 12757))))));

        for (int i_10 = 4; i_10 < 10;i_10 += 1)
        {
            arr_37 [i_9] [i_10] = 95;
            var_21 = (min(var_21, ((min((((((-6146081418696350430 ? var_4 : 16515072))) & (((arr_34 [i_9] [i_9] [i_9 + 3]) ? 6146081418696350428 : 4278452223)))), 18390)))));
        }
        arr_38 [7] = (18108 ? -22969 : 27207);
    }
    #pragma endscop
}
