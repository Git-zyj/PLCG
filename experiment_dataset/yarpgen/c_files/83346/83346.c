/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 = ((~(((arr_0 [i_0]) ? (8388607 / 6109310926985728523) : (((1 ? 0 : var_10)))))));
        var_13 = ((((var_8 ? var_11 : 853462982)) == ((((arr_0 [i_0 - 2]) ? (arr_0 [i_0]) : 1)))));
        arr_2 [i_0] = ((((((((16010 >> (-15 + 30)))) || (var_4 >= var_11)))) >= ((18446744073701163021 ? (arr_0 [i_0]) : var_3))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_5 [10] = 0;
        arr_6 [i_1] |= ((!((min(((1 ? 8388608 : var_1)), (arr_3 [i_1 - 1] [i_1 - 2]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_14 = (max(((var_8 ? var_6 : var_8)), (~var_2)));
                    var_15 = (((8388597 < (arr_12 [i_1] [i_1 + 1] [i_1 - 2]))) ? (-6109310926985728528 | var_9) : -126);

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_16 += var_0;
                            var_17 = (var_9 * var_1);
                            var_18 = (arr_8 [1] [4]);
                            var_19 = var_6;
                        }
                        for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_20 = (~var_8);
                            var_21 = (((arr_4 [i_1 - 1] [i_6 + 3]) ? var_10 : (var_0 < 189)));
                            var_22 = (!-189);
                            arr_19 [16] [16] [i_3] [i_3] [i_4 - 1] [1] |= ((((((arr_11 [5] [5] [5] [i_6 + 4]) ? var_4 : 40391))) ? (((-6109310926985728520 ? var_4 : var_2))) : -6109310926985728523));
                        }
                        for (int i_7 = 2; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_1] [i_7] [5] [i_7] [1] = ((54927 >> (14 != var_10)));
                            var_23 = (!-127);
                            arr_23 [i_7] [i_2] [1] [i_2] [i_2] = ((!var_7) ? ((var_1 ? var_11 : var_6)) : (1 - 1));
                            var_24 *= ((arr_1 [5] [i_1 - 2]) < ((3221 ? 3 : 1)));
                        }
                        for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_25 = ((-((var_9 ? var_4 : (arr_0 [i_8])))));
                            arr_26 [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 1] = ((var_4 ? var_8 : var_2));
                            arr_27 [i_2] [20] [i_2] [i_3] [i_2] [i_1] = (11859459270667858511 < 0);
                        }
                        var_26 = (!var_1);
                        arr_28 [12] [i_3] = (!var_2);
                    }
                    for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        var_27 = (~(!35621));
                        arr_32 [i_9] [i_2] [i_2] [i_9] [i_2] [17] = (((-6109310926985728523 + 9223372036854775807) >> ((((~((var_7 ? (arr_24 [i_3] [i_9 - 1]) : (arr_20 [1] [i_2] [i_3] [i_9]))))) - 18446744073709551390))));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_28 = (~(((((var_10 ? var_7 : 0))) ? var_2 : 68719476735)));
                            arr_36 [i_1] [7] [i_9] = (((~var_10) - (arr_3 [i_1] [i_1])));
                            arr_37 [i_1] [i_1 - 1] [i_1] [i_9] [i_1] [12] [i_1 - 1] = (min((1 <= var_3), (!1)));
                        }
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            var_29 = var_1;
                            arr_41 [i_11] [i_9] [1] [i_9] [4] [i_9] [i_1 + 1] = ((-var_5 ? var_2 : ((~(arr_14 [i_1 + 1])))));
                            arr_42 [i_11] [i_9] [i_2] [i_2] [i_9] [i_1] = 6;
                            var_30 = -var_10;
                        }
                        for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            var_31 = ((~((var_11 ? var_10 : (arr_18 [12] [i_2] [i_2] [i_2] [i_12])))));
                            arr_45 [i_3] [i_3] [i_12] |= ((!(((1 ? 6109310926985728537 : 815235449)))));
                            var_32 = var_6;
                            var_33 = ((1 ? (((((511 ? 1036225883 : 5282))))) : (((((var_2 ? 4095 : 524288))) ? ((8010333045899575293 ? 3942855304282483020 : var_10)) : ((min(4294443000, (-32767 - 1))))))));
                        }
                        for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                        {
                            arr_49 [i_1] [i_2] [i_1] [i_9] [i_2] = var_11;
                            arr_50 [i_9] [i_9] [i_2] [i_3] [i_9 - 1] [i_9] [4] = (1 - ((((max(0, var_7))) ? ((0 ? 26726 : var_5)) : 1)));
                        }
                    }
                    for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        var_34 = 198;
                        arr_55 [i_14] [i_14] [i_14] = (((arr_24 [i_14 - 1] [i_1 - 1]) ? ((((!var_4) != (min(var_11, 0))))) : (max(var_2, ((18446744073701163009 ? var_3 : 1))))));
                        var_35 = (min(1, 51053));
                        arr_56 [10] [i_14 - 1] [10] [i_14] [10] [10] = 1;
                    }
                }
            }
        }
        arr_57 [1] = ((((((arr_21 [i_1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1]) ? (255 || var_0) : ((var_5 ? var_11 : 1))))) ? -1468166998 : (((arr_48 [i_1 - 2] [i_1 + 1] [i_1]) ? (((var_3 ? 0 : 0))) : ((var_1 ? 7671449955071952600 : var_7))))));
    }
    var_36 = (max(var_2, (((!-511) ? (1 % -314524328) : ((var_0 ? 0 : var_3))))));
    var_37 = ((-var_9 ? ((((min(-511, 1))) ? var_7 : (~var_6))) : var_3));
    var_38 = (max(var_38, var_5));
    #pragma endscop
}
