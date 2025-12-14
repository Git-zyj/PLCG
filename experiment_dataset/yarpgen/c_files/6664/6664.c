/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_14 = (min(0, (7 - -499509081968720047)));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
            {
                var_15 = (arr_3 [i_0]);
                var_16 = 15;
            }
            /* vectorizable */
            for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
            {
                var_17 = var_5;
                arr_13 [i_3] [i_1] [i_0] [i_0] = (arr_0 [i_0 - 1]);
            }

            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                var_18 += (((max((arr_7 [i_0 + 1] [i_4 - 1]), -499509081968720037)) << ((((var_8 ? (arr_6 [i_4 + 1]) : -17)) - 7497796819463894856))));
                var_19 = (((((((var_5 ? -15 : var_2))) ? (arr_11 [2] [13] [i_0] [i_0]) : (arr_11 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1]))) << ((((max((arr_14 [i_1]), var_13))) ? ((((!(arr_15 [3] [1]))))) : (min(26, 15))))));
            }
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_20 = (arr_16 [i_5] [i_1] [i_5] [i_0]);
                arr_20 [i_0] [i_0] [i_5] = var_1;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_21 *= (max(1, 15));
                            var_22 = ((min(1, 1226104196723497097)));
                            var_23 = (min(var_23, ((min((arr_24 [i_0 + 1] [i_1] [i_6]), -15)))));
                            arr_26 [i_5] [i_0] [i_5] [1] [i_7] = (((((((arr_14 [i_0 + 1]) == 1061692742)))) & (((arr_24 [i_0 + 1] [i_0 - 1] [i_0 - 1]) ? (arr_24 [i_0 + 1] [i_0 - 1] [i_0 - 1]) : var_2))));
                        }
                    }
                }
                var_24 = ((-(~-13)));
            }
            var_25 += 1;
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                arr_33 [i_0] [i_0] [i_9] = var_10;
                var_26 = ((var_0 + 9223372036854775807) << (var_11 - 166884185));
                var_27 = var_3;
                var_28 = (1 ? -7296340446240367110 : 0);
            }
            arr_34 [i_8] = (var_6 >> 0);
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_29 ^= (((((arr_16 [2] [i_0 - 1] [i_0 + 1] [i_0 - 1]) <= (arr_17 [i_0 - 1] [10]))) || (((var_3 ? (arr_16 [12] [12] [i_0] [i_0 + 1]) : (arr_17 [i_0 + 1] [6]))))));

            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                var_30 = (((var_11 ? (arr_18 [0] [i_0]) : var_1)));
                arr_40 [6] [i_0] [5] [i_0] = ((9557989257746696761 - (arr_37 [5] [i_0 - 1] [i_0])));

                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    var_31 = 856389862;

                    for (int i_13 = 2; i_13 < 12;i_13 += 1)
                    {
                        arr_46 [i_0 - 1] [i_10] [10] [i_12] [i_13 - 2] [i_13] = (((((129385595 ? 1647819083 : 1911147194))) ? ((((!(arr_43 [i_10] [i_0 - 1]))))) : ((var_12 / (max(1874399043, 29894))))));
                        arr_47 [i_0 + 1] [5] [i_11] [i_12] [i_13] = ((((min(var_11, (min((arr_4 [5]), var_9))))) ? ((max(var_2, (((var_6 != (arr_36 [i_11]))))))) : (min(var_6, var_0))));
                        var_32 = (max(var_32, (-640416203 / var_0)));
                        var_33 = var_8;
                    }
                    for (int i_14 = 4; i_14 < 10;i_14 += 1)
                    {
                        var_34 &= ((((max((999182356 != 33), ((var_3 ? (arr_22 [i_0] [i_10] [13] [i_12]) : var_6))))) ? 24752 : var_12));
                        var_35 -= -634636076;
                        var_36 ^= ((-((-(arr_42 [i_14 - 1])))));
                    }

                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        var_37 = (((~2) & (8 & 29)));
                        var_38 = (min(var_38, ((((((arr_30 [i_0 - 1] [i_0] [i_0] [i_0 + 1]) < var_9)) ? ((max(var_11, (arr_17 [i_0 + 1] [i_15])))) : (((4179878256 ? var_5 : var_6))))))));
                    }
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        arr_57 [9] [10] [i_11] [i_16] [i_16] = (max(32765, ((var_2 ? ((12 << (var_0 + 55834759687999249))) : var_0))));
                        arr_58 [i_16] [i_16] [i_0] = (((arr_45 [i_10]) - var_4));
                        arr_59 [i_0] [i_16] [i_12] [9] = ((max((arr_17 [i_0 - 1] [i_16]), (min((arr_22 [1] [1] [i_11] [i_16]), var_3)))));
                    }
                }
            }
            arr_60 [i_10] = var_2;
        }
    }
    var_39 = var_3;
    var_40 = (max(var_6, (max(1, ((var_11 ? var_4 : var_7))))));
    #pragma endscop
}
