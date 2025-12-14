/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 *= (max(((((9186505071427157916 - var_11) ? (((arr_6 [i_2] [10] [i_0]) + (arr_2 [i_2]))) : var_5))), (min((~-101), -9186505071427157920))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 *= var_8;
                                var_15 = var_2;
                                var_16 = (min((((arr_5 [i_3] [i_2] [i_1]) ? (arr_5 [i_2] [i_1] [i_0 + 1]) : var_7)), 7626));
                                var_17 |= ((((((-5970686589326877505 != ((21052 ? -101 : -1418525766033292587)))))) / ((+((-30146 ? (arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4]) : var_0))))));
                            }
                        }
                    }
                    var_18 = min((!27233), (min((min(var_0, 10576)), var_11)));

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_19 = (min(var_19, 3185388480389952382));

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_23 [i_0 + 1] [i_0] [i_2] [i_0] [i_0] [i_0 + 1] = ((min(var_2, (arr_20 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_1]))));
                            arr_24 [12] [i_0] [i_2] [i_0] [i_2] = (-var_2 <= (arr_15 [9] [9] [i_2] [i_2]));
                            var_20 = (min(((min(var_5, (arr_9 [i_0 - 1] [i_5] [i_6])))), (((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_8 [i_0 - 1] [i_1] [i_6] [i_6]) : var_10))));
                        }
                        var_21 = (max((((arr_4 [i_0 + 2]) ^ (arr_4 [i_0 + 1]))), 84));
                        var_22 -= -2837989024220786958;
                        var_23 = (arr_20 [i_5] [i_2] [i_1] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_7 = 4; i_7 < 15;i_7 += 1)
                    {
                        arr_27 [i_7] [i_0] [i_0] [i_0] [i_0] [i_0] = var_7;
                        var_24 = ((44486 ? 26386 : -24653));
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_25 &= (max((min(((34619 ? 119 : var_6)), ((158 ? var_8 : 149)))), ((var_7 * (var_7 / var_6)))));
                        var_26 = ((((((arr_4 [i_0 + 2]) ? (arr_10 [i_0] [9] [4] [i_0]) : (((186 << (arr_26 [i_1] [i_2]))))))) ? (arr_28 [i_0] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (((var_11 + var_4) - ((min((arr_3 [2] [i_0]), 21043)))))));
                        arr_31 [i_0] [i_0] = (((arr_5 [i_2] [i_1] [11]) < -8261948282441024172));
                    }
                }
            }
        }
    }
    var_27 = 32;
    #pragma endscop
}
