/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (~9183)));
                arr_7 [i_1] = (((var_17 + var_13) ? (((-9169 ? ((var_5 ? var_11 : (arr_6 [i_0 + 4]))) : (var_7 + 9189)))) : var_1));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_19 = var_16;
                            var_20 = (min(var_20, (((((((arr_12 [i_0 + 2] [i_1]) >= -9192))) <= ((-((((arr_0 [i_0 + 4]) <= 65535))))))))));
                        }
                    }
                }
            }
        }
    }
    var_21 = var_5;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {
                arr_17 [i_5] = (max((arr_16 [i_4] [i_5]), ((177 ? 85 : 65531))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 23;i_7 += 1)
                    {
                        {
                            arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] &= ((65532 ? 16199 : -5122586950879964814));
                            arr_25 [i_7] [i_7] = (max(255, (max(var_14, 49337))));
                            arr_26 [i_7] [i_5] [i_5] [i_5] [i_5] [i_5] = (((!var_2) >= ((max((arr_18 [i_7 - 2] [i_7 - 1] [i_7 - 1]), (arr_18 [i_7 + 2] [i_7 - 2] [i_7 - 3]))))));
                            arr_27 [i_7] = (arr_23 [i_6] [i_6] [i_7 + 2] [i_7]);
                        }
                    }
                }
                arr_28 [i_4] = (max((49337 <= 0), ((49355 ? var_7 : (arr_13 [i_5])))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 23;i_9 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_10 = 3; i_10 < 22;i_10 += 1) /* same iter space */
                            {
                                arr_38 [i_10] [i_4] [i_8] [i_5] [i_4] = (((arr_32 [i_10 - 3] [i_9 + 1] [i_5] [i_5] [i_4] [i_4]) ? (arr_32 [i_10 - 3] [i_9 + 1] [i_9] [i_9] [i_8] [i_8]) : 240));
                                arr_39 [i_4] [i_5] [i_8] [i_9 + 2] [i_10] = (arr_34 [i_4] [i_5] [i_8] [i_8] [i_9] [i_10 - 2] [i_10 + 3]);
                                arr_40 [i_4] [i_5] [i_8] [i_9] [i_9] = var_9;
                            }
                            for (int i_11 = 3; i_11 < 22;i_11 += 1) /* same iter space */
                            {
                                arr_43 [i_4] [i_5] [i_8] [i_11] = ((((((-9223372036854775788 ? 9183 : 1348849501)) ? 123 : (((arr_16 [i_8] [i_9]) ? var_3 : -9223372036854775789))))));
                                var_22 = max((((!(((0 ? var_2 : var_10)))))), (((~(arr_41 [i_4] [i_4] [i_5] [i_8] [i_8] [i_4])))));
                            }
                            /* vectorizable */
                            for (int i_12 = 1; i_12 < 21;i_12 += 1)
                            {
                                var_23 -= (arr_46 [i_9] [i_12] [i_12 + 2] [i_12 + 4] [i_12] [i_12] [i_12 + 2]);
                                arr_47 [i_9] [i_9] [i_9 + 1] = 65535;
                                var_24 = (((arr_18 [i_8] [i_8] [i_8]) ? (arr_31 [i_5] [i_9] [i_9] [i_9 + 1]) : (((arr_44 [i_4] [i_5] [i_8] [i_9] [i_12 + 1] [i_8]) ? 0 : 1353297622))));
                            }

                            for (int i_13 = 4; i_13 < 23;i_13 += 1)
                            {
                                var_25 = (min(var_25, (((((49704 ? 23856 : 121))) ? ((max(var_17, (arr_18 [i_9 + 1] [i_9 - 1] [i_13 - 4])))) : ((max(49694, 123)))))));
                                arr_50 [i_4] [i_5] [i_8] [i_13] = ((!(arr_33 [i_5] [i_9 - 1] [i_13])));
                            }
                            for (int i_14 = 2; i_14 < 24;i_14 += 1)
                            {
                                var_26 -= (arr_36 [i_4] [i_8] [i_9]);
                                var_27 = (min(var_27, ((((arr_30 [i_4] [i_5] [i_8]) & (((arr_52 [i_8] [i_14 + 1] [i_14 + 1] [i_9 - 1] [i_8] [i_5] [i_8]) ? var_11 : ((255 ? var_15 : (arr_14 [i_4]))))))))));
                                arr_53 [i_4] [i_5] [i_8] [i_9] [i_14] = 49694;
                                var_28 = ((~(((!(arr_13 [i_14 + 1]))))));
                            }
                            for (int i_15 = 1; i_15 < 23;i_15 += 1)
                            {
                                arr_56 [i_15] [i_5] [i_5] [i_9 - 1] [i_15] [i_5] |= (~511);
                                var_29 = (min(var_29, -var_4));
                                var_30 = (max(var_30, var_14));
                                arr_57 [i_4] [i_5] [i_8] [i_9 - 1] [i_15] = arr_42 [i_9] [i_9 + 2] [i_15] [i_15 + 2] [i_15] [i_15 - 1] [i_15 + 1];
                            }
                        }
                    }
                }
                var_31 += ((!(arr_29 [i_4] [i_5] [i_5])));
            }
        }
    }
    var_32 = ((((max((((var_5 ? var_4 : var_13))), var_1)) + 9223372036854775807)) >> ((((max(var_16, var_10))) - 25517)));
    #pragma endscop
}
