/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 = -7971891160753121171;
        arr_3 [i_0] [i_0] = var_7;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_17 -= ((!(arr_6 [i_0 - 1] [i_0])));
                arr_9 [i_0] [i_0] [i_2] = ((((((arr_5 [i_0]) ? var_8 : 0))) ? ((((arr_2 [i_0]) || 6594618934821500872))) : -16672));
                var_18 = ((((((arr_2 [i_0]) ? 0 : var_11))) ? (255 - 0) : ((-(arr_5 [i_1])))));
            }
            for (int i_3 = 1; i_3 < 7;i_3 += 1)
            {
                arr_14 [i_0] = 0;
                var_19 = -2048;
                var_20 *= ((var_11 < (arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_3 + 3])));
                var_21 = (min(var_21, ((((691077172 ? 1 : 249))))));
            }
            var_22 = 288230376151711744;
            var_23 = ((-(var_9 / var_8)));
            arr_15 [i_0] [i_0] = ((~(((arr_4 [i_0] [i_0] [i_1]) & (arr_10 [i_0 - 1] [i_1])))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_18 [i_0] = 120;
            var_24 = 0;
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_25 ^= (((((arr_21 [i_7] [i_7]) ? -1 : 10534890060064322689))) ? (arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (((arr_5 [7]) ? 1 : (arr_24 [i_0] [i_0]))));
                        arr_28 [i_6] [9] [i_6] [i_0] [7] = (i_0 % 2 == zero) ? ((((1 < var_7) << ((((var_5 ? (arr_8 [i_0] [i_5] [i_5] [i_5]) : 72057594037927935)) - 3136778346))))) : ((((1 < var_7) << ((((((var_5 ? (arr_8 [i_0] [i_5] [i_5] [i_5]) : 72057594037927935)) - 3136778346)) - 518060201)))));
                        var_26 = (min(var_26, var_14));
                    }
                    arr_29 [i_5] [i_5] &= arr_27 [i_0] [i_5] [i_0] [i_6] [i_5];
                    var_27 = (arr_8 [i_0] [i_5] [i_5] [i_6]);
                    arr_30 [i_5] [i_0] = (((arr_1 [i_0 + 1] [i_0 - 1]) | 242));
                }
            }
        }
        arr_31 [i_0] [i_0] = ((~((13126969150392701587 ? 137167548 : (arr_7 [i_0] [i_0])))));
    }

    /* vectorizable */
    for (int i_8 = 1; i_8 < 17;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_28 = (arr_38 [i_8]);
            var_29 = (((arr_33 [i_8 + 1]) | (arr_36 [i_8 + 3] [i_8 + 3])));
        }
        for (int i_10 = 2; i_10 < 19;i_10 += 1)
        {
            arr_42 [i_8] [13] [i_10] = (arr_41 [1]);
            arr_43 [i_8] [16] [i_8 - 1] = (arr_37 [18] [i_10]);
            arr_44 [i_8 + 3] [i_10] [i_8 + 3] = (!var_5);
        }

        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            var_30 += (((((arr_34 [i_8 - 1]) + 9223372036854775807)) << (((var_11 + 1131359866) - 55))));
            arr_48 [i_8] [i_8] [i_8] = 18446744073709551601;
            arr_49 [i_8 + 1] [i_8] [19] = ((-(arr_35 [i_8 - 1] [i_8 - 1])));
        }
    }
    #pragma endscop
}
