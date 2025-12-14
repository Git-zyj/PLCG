/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_4;
    var_12 = min(((var_3 << (var_3 - 3416723))), (-2147483647 - 1));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 *= ((!(((~(arr_2 [i_0 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((max((max(2918226485, 188)), (((((~(arr_9 [i_0] [i_0] [1] [i_4]))) < 188))))))));
                                var_15 = ((-21567971 ? ((((var_6 >> (188 - 168))) >> (((~var_7) + 9555)))) : var_2));
                                var_16 *= (((var_6 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    var_17 = (((arr_12 [i_5] [7] [12] [7]) ? (((!21567961) % -var_8)) : 18446744073709551615));
                    arr_22 [i_0] [i_0] [i_5] = ((!((((~(arr_21 [7] [i_5] [i_5] [i_5])))))));
                }
            }
        }
        arr_23 [i_0] = (max((arr_2 [i_0]), (arr_11 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0])));
        var_18 += (((arr_20 [i_0] [i_0] [i_0]) <= 125));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_19 = (((arr_1 [i_7]) < (((((arr_18 [i_7] [10] [i_7]) && var_9))))));
        arr_27 [5] = ((var_6 - (arr_1 [i_7])));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_20 -= (((!0) - ((min((arr_6 [i_8]), (arr_6 [i_8]))))));
        arr_31 [i_8] = (((min((arr_11 [i_8] [i_8] [i_8] [1] [i_8] [i_8]), (((arr_26 [i_8]) * (arr_30 [i_8]))))) % (arr_7 [12] [i_8] [4] [i_8])));
        arr_32 [i_8] = (((1870229719 || 5) ? (var_0 >> var_2) : (max((arr_8 [1] [10] [1] [i_8]), var_3))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_21 = (min(var_21, (arr_25 [i_8])));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                arr_43 [i_12] [i_9] [i_9] [i_9] |= ((((min(126, 151))) ? 2147483647 : ((((min(1, var_7))) ? var_0 : 1))));
                                var_22 = (((-(arr_28 [i_8]))));
                                var_23 -= -var_2;
                            }
                        }
                    }
                    arr_44 [i_8] [i_8] = var_6;
                }
            }
        }
    }
    for (int i_13 = 3; i_13 < 10;i_13 += 1)
    {
        var_24 = (((min((~1338055675), (arr_34 [i_13]))) <= -1));
        var_25 ^= 1291059772;
        var_26 = (min(var_26, (((((((max(0, var_0))) == 32765)) ? 1291059772 : 0)))));
        arr_49 [i_13] = (min(0, 2147483647));
        arr_50 [i_13] [i_13] = ((!(((11 ? 620891390662891875 : (((25 ? 1 : 65535))))))));
    }
    var_27 = var_6;
    #pragma endscop
}
