/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min((min(var_8, var_11)), (!43372)))) ? ((((((var_3 ? var_0 : var_0)) > (!var_8))))) : (max((~-867167006195481097), var_11))));
    var_13 ^= (((((((min(36916, 8025404518380945210))) ? ((95 ? var_9 : var_9)) : var_4))) ? (((var_1 ? ((6856126279629337233 ? -8025404518380945216 : var_7)) : var_4))) : (((8025404518380945210 > 86) ? (min(var_6, 6856126279629337233)) : -95))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] [i_0] = var_6;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_14 = 1;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_1] [i_3] = (((min((arr_5 [i_1]), (arr_5 [i_1]))) > (((arr_11 [i_1] [i_2] [i_3]) ? (arr_11 [i_1] [i_2] [i_3 + 1]) : (arr_5 [i_1])))));
                    var_15 = (min((min(19154, (arr_6 [i_1] [i_3]))), var_11));
                    var_16 ^= (~(((arr_6 [i_2] [i_3 - 1]) ? (arr_6 [i_2] [i_2]) : (arr_11 [i_2] [i_2] [i_3 + 1]))));

                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        var_17 = (((((((2516868335 ? var_1 : (arr_10 [i_1] [i_2] [i_1] [i_1])))) ? -8025404518380945205 : (((max(100, (arr_12 [i_1] [i_1]))))))) > (max((((~(arr_13 [i_1] [i_2] [i_1] [i_1])))), -4585006215060078198))));
                        var_18 = 3521000868784266825;

                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            var_19 = (max(((((max(var_7, var_4))) ? (((min((arr_9 [i_1] [i_1]), (arr_11 [i_1] [i_4] [i_5]))))) : (((arr_13 [i_1] [i_1] [i_1] [i_5]) / 9174330888829447647)))), (min(((94 ? (arr_20 [1] [i_2] [i_3 - 1] [i_2] [i_1] [i_2]) : 6856126279629337233)), (arr_19 [i_3] [i_3] [i_5 + 1] [i_5] [i_1])))));
                            var_20 = (((((11645951665738408568 ? 2592 : 2607)))) ? (arr_16 [i_2] [i_2] [i_4] [i_1]) : -4585006215060078198);
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {
                        var_21 = (max(var_21, ((6856126279629337217 ? 156 : 6856126279629337233))));
                        arr_23 [i_1] [i_2] [i_3] [14] = (~50212);
                        var_22 = var_5;
                        arr_24 [i_1] [i_2] [i_2] [i_6] |= (((((arr_13 [i_1] [i_2] [i_2] [i_6]) > 17)) ? (var_3 & 1) : 48251));
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_23 = (min((arr_20 [i_1] [i_1] [i_1] [i_3 + 2] [i_1] [i_1]), 180));
                        var_24 = (!((max(19361, (((!(arr_22 [i_1] [i_1] [i_1] [i_1] [i_3 - 1] [i_7]))))))));
                        var_25 |= (((((!9272413184880103960) ? (arr_20 [16] [i_2] [1] [i_2] [i_2] [i_7]) : (((!(arr_10 [i_1] [2] [i_2] [i_7])))))) > (arr_8 [i_2])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
