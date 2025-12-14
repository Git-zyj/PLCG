/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_11 = ((((min((min(var_7, var_7)), (arr_3 [i_0] [i_1 + 1] [i_3])))) || ((((-68 ? 2881713008 : var_7))))));
                        var_12 = var_7;
                    }
                }
            }
        }
        var_13 = (((var_8 >= -68) % (((var_4 ? var_4 : var_2)))));
        var_14 = ((((((-89 ? 1718355399 : var_8)) ? ((2881713015 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : 0)) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_15 = (((519432777388180945 ? (arr_5 [i_4] [i_4]) : var_4)));
        var_16 = (min(var_16, (((((~var_10) | (min(1413254287, 576460752236314624))))))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_17 ^= ((-(min((max((arr_0 [i_5]), 70368475742208)), (~var_1)))));
        var_18 |= ((((~(~var_7))) / (max(((var_9 ? (arr_6 [i_5] [i_5] [i_5] [i_5]) : var_7)), (arr_2 [i_5])))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 22;i_7 += 1)
        {
            {
                var_19 = ((-((~(!var_7)))));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            var_20 = (min((((arr_24 [i_9] [i_8] [i_7 + 1] [i_6]) & ((-8218004001339992708 ? var_5 : 2881713021)))), (((arr_24 [i_8 - 2] [i_7 + 1] [i_8 - 2] [i_7]) * var_5))));
                            var_21 = var_5;

                            for (int i_10 = 0; i_10 < 25;i_10 += 1)
                            {
                                var_22 = ((max(((max(var_10, var_4))), (min((arr_24 [i_6] [i_6] [i_8] [i_9]), (arr_26 [i_6] [i_6] [i_6] [15] [i_6]))))));
                                var_23 |= (((var_1 > (arr_28 [i_8 - 2] [i_8 - 2] [i_7 + 2] [i_8 - 2] [i_7 + 2] [i_8 + 2] [i_7 + 2]))));
                                var_24 -= (min(var_0, var_5));
                                var_25 = (arr_19 [i_8 - 2]);
                                var_26 |= ((((max((min(0, var_7)), (arr_27 [i_9] [i_7])))) || ((((((-8218004001339992683 ? 8218004001339992690 : 2881713009))) ? 16826834217011409931 : 0)))));
                            }
                            var_27 = (((-((-1687539319 ? var_7 : (arr_20 [i_6] [i_6]))))));

                            for (int i_11 = 2; i_11 < 23;i_11 += 1)
                            {
                                var_28 = (min(1684790886, ((((((arr_27 [i_11] [i_9]) ? (arr_18 [i_6] [i_9]) : var_6)) >= ((max(407169904796853579, var_8))))))));
                                var_29 = ((max(-6269178144168346488, (arr_30 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 2]))) + (arr_30 [i_7] [i_7] [i_7] [i_7 + 1]));
                            }
                        }
                    }
                }
                var_30 = ((-var_9 ? (min(7073742749004868468, var_7)) : ((((arr_30 [i_7] [i_7 - 2] [i_7 + 2] [i_7]) * (arr_30 [i_7 + 1] [i_7 - 2] [i_7 + 3] [i_7 + 2]))))));
                var_31 += var_7;
                var_32 = max((((arr_33 [i_7] [i_7 - 1] [i_7] [i_7 - 2] [i_7] [i_7 - 1] [i_7 + 1]) - var_1)), (max((arr_33 [i_7] [i_7] [i_7 - 2] [i_7] [i_7 + 3] [i_7 + 1] [i_7]), (arr_30 [i_7] [i_7] [i_7] [i_7]))));
            }
        }
    }
    var_33 = ((min((min(var_8, var_0), var_6))));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        for (int i_13 = 4; i_13 < 13;i_13 += 1)
        {
            {
                var_34 = (arr_5 [i_13 - 3] [i_13 - 3]);
                var_35 = ((((arr_5 [1] [17]) ? ((-89 ? var_9 : 2476041389)) : ((max(4896108085537371674, 2881713031))))));
            }
        }
    }
    #pragma endscop
}
