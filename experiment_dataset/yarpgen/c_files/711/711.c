/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(((((96 << (var_4 - 1832692900)))) % (~var_12)))));
    var_19 = (min((min((min(1536, var_12)), var_13)), (!var_15)));
    var_20 = var_1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_2] = (min(((var_7 << (var_15 + 3292))), var_9));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [7] [19] [i_2] [7] = (min(-0, ((~((var_8 ? -95 : 304655729))))));
                                arr_14 [i_2] = ((116 != (min((((var_16 / (arr_11 [i_2] [i_2] [i_2] [i_2] [i_2])))), var_10))));
                                var_21 = (min(((((min(var_8, var_16))) ? ((var_2 ? 2961711382 : var_0)) : (((min(var_0, var_17)))))), (((!(var_4 && var_3))))));
                                arr_15 [10] [i_1] [i_2] [i_2] [i_2] [i_3] = var_7;
                                var_22 = (min((min((var_8 != var_3), (min((arr_11 [i_0] [i_2] [i_2] [i_3] [i_4]), var_13)))), var_12));
                            }
                        }
                    }
                    arr_16 [i_2] [1] [i_1] [i_2] = (min((min(17411402544674156583, (arr_8 [i_2 + 1] [i_2] [i_2] [i_2]))), (((!((min((arr_12 [1] [i_2] [i_2] [i_0]), var_12))))))));
                    var_23 = (min(var_23, ((var_6 ? (((!((min(1750909253749212108, var_3)))))) : (arr_11 [17] [i_1] [i_2] [20] [20])))));
                    var_24 = (max(var_24, ((min(((min((min(54256, (arr_11 [i_0] [i_0] [i_1] [i_1] [i_2]))), (((1536 || (arr_0 [i_2]))))))), ((-(arr_2 [i_2 - 1] [i_2 + 1]))))))));
                }
            }
        }
        var_25 |= (min(((min((var_12 * -97), var_1))), (((((var_15 ? 48 : var_5))) % -49))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_26 = (min((((arr_7 [14] [10] [14] [i_5] [i_5]) ? 8106 : 1125899839733760)), (min(var_2, var_11))));
        var_27 = (max(var_27, var_14));
        var_28 = var_15;
    }

    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_22 [i_6] = 18446744073709551615;
        var_29 += ((var_10 != ((min((min(var_12, (arr_3 [i_6] [i_6]))), (~var_7))))));
        arr_23 [i_6] = min((~var_3), (min((min((arr_4 [i_6] [16] [i_6]), var_10)), (~-198258472))));
        arr_24 [i_6] &= (((((~(((var_12 != (arr_2 [i_6] [i_6]))))))) ? var_16 : (((((var_8 ? (arr_19 [i_6]) : var_13))) ? (min(var_3, (arr_10 [10]))) : (14718261513401871483 / var_6)))));
        arr_25 [i_6] = ((+(((arr_3 [i_6] [i_6]) * (arr_3 [i_6] [i_6])))));
    }
    for (int i_7 = 4; i_7 < 21;i_7 += 1)
    {
        arr_28 [i_7] [i_7] = ((!((min(var_7, (min((arr_12 [i_7] [i_7 + 1] [i_7] [i_7]), (arr_4 [6] [i_7] [6]))))))));
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {

                    for (int i_10 = 3; i_10 < 19;i_10 += 1)
                    {
                        var_30 = var_6;
                        arr_36 [i_7] [i_9] [i_10] = (min((((arr_12 [i_8] [i_8 - 2] [i_10] [i_8]) % var_7)), var_9));
                        var_31 = (min(var_31, ((min((max((min(var_2, var_14)), ((((arr_27 [i_7] [i_7 - 1]) ? var_12 : var_13))))), (((min(-15, -86)))))))));
                        var_32 = var_6;
                    }
                    for (int i_11 = 3; i_11 < 21;i_11 += 1)
                    {
                        var_33 *= ((((arr_7 [i_8 + 2] [i_8] [i_8] [i_11] [i_11]) ? var_9 : (arr_7 [i_8 + 1] [i_9] [i_8 + 1] [i_9] [12]))) != (((((max(var_4, var_9))) != var_8))));
                        var_34 *= ((((min(var_12, (((arr_17 [i_7]) + var_12))))) ? (min(((min(1536, var_1))), (min((arr_37 [i_11] [i_11] [i_9] [13] [13] [13]), var_9)))) : ((((((((15 != (arr_27 [i_7] [i_11]))))) != (min((arr_0 [i_8]), var_3))))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 21;i_12 += 1)
                    {
                        var_35 |= var_11;
                        var_36 = (((arr_34 [i_12 - 2] [i_12 - 3] [i_12] [i_12] [i_12 - 3] [i_12]) ? var_15 : var_5));
                        var_37 = ((var_4 ? var_8 : var_14));

                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_38 = ((18446744073709551615 ? (((~(arr_32 [i_8] [5] [i_8] [i_8])))) : var_7));
                            var_39 *= (((~var_10) << (arr_3 [i_8] [i_8])));
                            var_40 = (arr_0 [i_9]);
                        }
                    }
                    var_41 = var_4;
                }
            }
        }
        var_42 = (arr_38 [i_7] [i_7] [10] [i_7]);
    }
    #pragma endscop
}
