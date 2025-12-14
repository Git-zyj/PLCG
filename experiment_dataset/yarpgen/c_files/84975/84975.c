/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((1 ? var_9 : (((~var_8) ? (!4508793885710016937) : var_10))));
    var_14 = ((var_10 ? var_10 : var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (((~(arr_0 [i_0]))))));
        arr_2 [i_0] [6] = (arr_1 [i_0]);
        arr_3 [i_0] [i_0] |= (9596 ? 40758 : var_3);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_6 [15] [i_1] = (((!(~4508793885710016937))));
        var_16 |= 4508793885710016937;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] |= ((var_6 ? (min((min(6024794060572677943, (arr_8 [i_2] [i_2]))), (arr_0 [i_2]))) : (((var_8 ? 60088 : (arr_1 [i_2]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_17 = (max(var_17, ((((arr_15 [i_3] [i_3] [i_3]) ? var_9 : (arr_15 [i_5] [i_2] [i_2]))))));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_18 ^= (((arr_14 [i_2] [i_4] [i_5]) ? ((~(arr_16 [i_5]))) : (arr_17 [i_4] [i_4])));
                            arr_22 [i_5] = (arr_9 [i_2]);
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_19 = (max(var_19, -4508793885710016937));
                            arr_26 [9] [i_5] [9] [i_5] [9] = 6024794060572677943;
                        }
                        var_20 = 576460752303415296;
                        var_21 -= ((!(arr_5 [i_4] [i_5])));
                    }
                    for (int i_8 = 3; i_8 < 14;i_8 += 1)
                    {
                        var_22 = (max((max(var_8, -4508793885710016936)), (min((arr_25 [i_2] [i_8 - 2] [i_8 - 3] [i_8] [i_8 + 2]), var_10))));
                        var_23 = (((((((max(var_12, var_1))) ? var_0 : (((min(24166, 5448))))))) ? (((!(arr_21 [i_8] [i_3] [i_8] [i_4] [i_8 + 1] [i_2])))) : (max(12746, (171 - -1)))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_24 = (((~-85) ? (var_6 * 21) : ((-712319807673120135 ? var_5 : 576460752303415296))));
                        var_25 = (max(var_25, (((((arr_19 [10] [i_3] [i_4] [i_4] [5] [6] [16]) + 2147483647)) << (((arr_10 [i_4] [0]) - 4294965852))))));
                        var_26 = (max(var_26, (!var_9)));
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        arr_38 [i_10] [i_10] [i_10] [i_2] = (((((var_5 >> (var_10 - 37)))) ? ((max(4179725950353930939, 34))) : (((~1) ? (max(4508793885710016935, var_6)) : 179))));
                        var_27 = (max(var_27, ((((((10 ^ (arr_29 [i_2])))) ? (min(576460752303415296, (arr_15 [i_4] [i_3] [i_2]))) : -6024794060572677943)))));
                    }
                    var_28 = (max(((((max((arr_4 [i_3]), var_9))) ? (max(var_1, -4508793885710016958)) : var_7)), -4508793885710016941));
                    arr_39 [i_2] [i_4] = ((((min((arr_9 [i_2]), -4508793885710016920))) && (((77 ? 1 : 65515)))));
                    var_29 = (min(var_29, (((((arr_13 [i_4]) ? 23707 : 896))))));
                    var_30 ^= ((((78 ? (arr_31 [i_4] [i_3] [i_2]) : (arr_31 [i_2] [i_3] [i_4])))) ? ((5298 ? (arr_31 [i_2] [i_2] [i_4]) : var_0)) : 21);
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        var_31 = (max(5448, (min(var_4, (arr_12 [i_11])))));
        arr_42 [i_11] [i_11] = (min(var_10, 5462));
        arr_43 [i_11] = (max((((arr_29 [i_11]) ? (((var_4 >> (((arr_36 [10] [i_11] [i_11] [i_11] [i_11] [i_11]) - 99666114))))) : ((15032 ? -1 : 4508793885710016942)))), ((((arr_19 [i_11] [i_11] [8] [i_11] [i_11] [i_11] [i_11]) | var_12)))));
        arr_44 [i_11] = (((var_0 ? var_4 : (min(-4508793885710016925, var_7)))) ^ (((max(((var_11 <= (arr_18 [i_11]))), (!4508793885710016935))))));
    }
    var_32 = ((((var_9 != var_12) ? ((15037 ? 2951023260174923332 : 17870283321406136322)) : (((var_11 ? 23 : var_0))))));
    var_33 = var_5;
    #pragma endscop
}
