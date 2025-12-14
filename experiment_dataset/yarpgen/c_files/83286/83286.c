/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((var_10 ? var_2 : var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 -= (((((arr_5 [i_2 + 1] [i_1 + 1]) ? (arr_4 [i_2 - 1]) : 2081270331757014333)) > (((((min(var_3, var_3))) ? var_1 : (((((arr_0 [i_1]) >= 38069)))))))));
                    var_13 = arr_2 [i_2] [i_2 - 1] [i_2];
                    var_14 = (((arr_4 [i_1 + 1]) > (arr_3 [i_2] [i_2 + 3] [i_2])));
                }
            }
        }
    }
    var_15 = ((((max(((2081270331757014335 ? var_1 : var_6)), (~var_5)))) ? (((16365473741952537282 ? (var_9 ^ var_2) : var_6))) : ((6349867716275615784 ? (((min(0, var_5)))) : ((2081270331757014334 ? 1 : 2081270331757014335))))));
    var_16 = (min(var_16, var_4));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_17 = -var_5;
        var_18 = (min(var_18, (((((((arr_7 [i_3]) ? 2081270331757014333 : 16365473741952537282))) ? ((((arr_7 [i_3]) + 1))) : (arr_8 [i_3]))))));
        var_19 -= ((1 ? (arr_7 [i_3]) : (arr_7 [i_3])));
    }
    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_20 ^= (arr_14 [i_4 + 1] [i_4 - 1]);
            var_21 = (min((min(((((arr_14 [i_4] [i_4]) | var_5))), (arr_7 [i_4 + 1]))), ((((arr_13 [i_4] [i_4]) ? (arr_9 [i_4] [i_4]) : (1 / var_10))))));
        }
        for (int i_6 = 2; i_6 < 23;i_6 += 1)
        {
            var_22 = ((((min(var_9, var_2))) ? 0 : ((((((255 ? 5952 : 1))) >= (max((arr_14 [i_4] [i_6]), -2666015279428478489)))))));
            var_23 = 0;
            var_24 = ((16365473741952537282 | 1) ? (max(((((arr_12 [i_4] [i_4]) ? var_6 : (arr_10 [i_4] [i_4])))), (min(2081270331757014360, 18)))) : 9223372036854775807);
            var_25 += (((min((arr_14 [i_4 + 1] [i_6 + 1]), (arr_14 [i_4 - 1] [i_6 - 2]))) ? (arr_14 [i_4 - 1] [i_6 + 2]) : (arr_14 [i_4 - 1] [i_6 + 1])));
            var_26 -= ((!((((arr_16 [i_6 - 1] [i_4 + 1]) ? 21 : (arr_16 [i_6 - 1] [i_4 + 1]))))));
        }
        var_27 &= ((((max(var_0, 17216))) ? ((var_0 & (arr_14 [i_4 + 1] [i_4 + 1]))) : (min(((-(arr_16 [i_4] [i_4 + 1]))), (0 / 1)))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_28 = -2081270331757014335;
                        var_29 = (max(var_29, ((max(59770, 504967092)))));
                        var_30 = ((!(arr_21 [i_8 - 2] [i_8 - 2])));
                        var_31 ^= (((((arr_2 [i_7] [i_7] [i_8 + 3]) ? (arr_2 [i_7] [i_8] [i_8 - 2]) : (arr_2 [i_7] [i_8 + 1] [i_8 + 1])))) ? (((arr_2 [1] [i_8] [i_8 - 2]) ? (arr_2 [i_7] [i_8] [i_8 - 1]) : (arr_2 [i_7] [i_7] [i_8 + 1]))) : (arr_2 [i_7] [i_8] [i_8 + 1]));
                    }
                }
            }
        }
        var_32 = ((((((((arr_17 [i_7]) ? 1 : -142368137))) ? (arr_6 [i_7] [i_7] [i_7]) : var_1)) < ((((arr_20 [i_7] [i_7]) ? ((min(0, var_8))) : (((((arr_9 [i_7] [i_7]) + 2147483647)) << (3222078725712025138 - 3222078725712025138))))))));
    }
    #pragma endscop
}
