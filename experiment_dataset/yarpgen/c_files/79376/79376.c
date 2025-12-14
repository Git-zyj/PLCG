/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~((((~var_12) == ((var_11 ? var_4 : var_2))))));
    var_16 = (min(var_16, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 = ((((var_7 ? ((var_4 ? var_5 : var_13)) : var_9)) != ((((((18 ? 104 : 23366))) ? (var_2 || 9036) : ((48 ? 5414022904165643030 : 12)))))));
                            var_18 = ((((((var_7 / var_9) ? var_12 : ((var_12 ? var_13 : var_14))))) && (var_3 / -var_6)));
                            var_19 = ((var_10 ? (~var_3) : ((99 >> (-5 + 17)))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] = (~var_9);
                        }
                    }
                }
                var_20 = var_0;
            }
        }
    }

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_21 = (max(var_21, var_12));
        arr_15 [i_4] = var_6;
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_22 = (min(var_22, ((((~var_11) ? ((var_10 ? var_14 : var_12)) : var_9)))));
                    arr_22 [i_6] [i_6] [i_7] = (var_1 ^ (((var_14 ? var_4 : var_3))));
                }
            }
        }

        for (int i_8 = 1; i_8 < 24;i_8 += 1)
        {
            var_23 = (max(var_23, ((var_13 ? (((var_6 ? var_2 : var_12))) : ((65515 ? 3 : 11616570094979243873))))));
            var_24 = (max(var_24, (((-(!var_13))))));
        }
        var_25 = ((((var_11 ? var_5 : var_0)) / (((var_6 ? var_10 : var_5)))));

        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 22;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            var_26 = (max(var_26, ((((((-14 ? 1553 : 124))) ? ((var_5 ? var_14 : var_9)) : (var_0 != var_5))))));
                            var_27 = (min(var_27, var_13));
                            var_28 = (min(var_28, (((var_10 << ((((var_7 ? var_6 : var_1)) - 1449459408581627017)))))));
                            var_29 = (((var_4 != -80) ? ((var_11 ? var_11 : var_11)) : ((var_0 ? var_6 : var_4))));
                            arr_36 [i_5] [i_9] [0] [i_12] [i_9] [i_9] [i_9] = (((~var_3) | var_10));
                        }
                        var_30 = (max(var_30, (((9223372036854775807 ? -74 : 88)))));
                    }
                }
            }
            var_31 = (min(var_31, ((((((var_8 ? var_14 : var_8))) ? var_13 : (((var_1 ? var_6 : var_1))))))));
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_39 [i_5] [i_13] [7] = (((((var_7 ? var_12 : var_10))) ? (var_4 % var_11) : -var_4));

            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                var_32 = (((var_6 > var_7) == (!76)));
                var_33 = var_4;
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 24;i_16 += 1)
                    {
                        {
                            var_34 = var_6;
                            var_35 = (~3109);
                            var_36 = (((((193 << (1940 - 1925)))) ? var_2 : var_0));
                        }
                    }
                }
            }
            var_37 = (max(var_37, ((((((var_11 ? var_0 : var_5))) ? var_3 : var_8)))));
        }
    }
    #pragma endscop
}
