/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = -11;
                var_17 &= var_3;
                arr_6 [i_0] [i_1] = ((((((124 % 6) ? (((!(arr_1 [i_0])))) : (arr_1 [7])))) ? -10 : 1));
                var_18 = 4;
            }
        }
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (!124);
        arr_10 [i_2] = (min(((+(((arr_2 [i_2] [i_2]) ? var_10 : var_15)))), (((!((max(116, -122))))))));
        var_19 = ((-19976 ? 0 : (max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2])))));
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_20 = max(((~(~4139406070))), 15);

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_22 [i_3 - 1] [i_3 - 1] [i_3 - 1] = 17691892623592695008;
                        var_21 = (max(var_21, ((1 ? 105 : ((var_12 ? (arr_16 [i_3] [i_3] [i_3] [i_4 + 1]) : 32072))))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_22 = (max(var_22, (((!(((var_2 ? (arr_23 [i_3] [i_4 - 1] [i_3] [i_3] [i_3] [i_3] [17]) : 0))))))));
                            arr_25 [i_3 - 3] [i_4] [i_3 - 3] [i_6] [2] &= (((arr_12 [i_5] [i_6]) ? (arr_12 [i_7] [i_6]) : (arr_12 [i_4 + 1] [i_3])));
                        }

                        for (int i_8 = 3; i_8 < 17;i_8 += 1)
                        {
                            var_23 = (!var_4);
                            var_24 = (min(((~(~var_10))), (((arr_19 [i_3 - 1]) ? (arr_19 [i_4 + 1]) : 3))));
                        }
                        for (int i_9 = 2; i_9 < 16;i_9 += 1)
                        {
                            var_25 = (((arr_20 [i_3] [i_4] [i_4] [i_9]) ? (((var_5 ? (arr_30 [i_9] [i_9] [i_5] [i_4 + 1] [5] [i_9] [i_3]) : (arr_30 [i_9 - 1] [i_9] [i_6] [i_4 + 1] [i_4 + 1] [i_9] [i_3 + 1])))) : var_0));
                            arr_31 [i_9] = -var_9;
                            arr_32 [i_9] [i_6] [i_9] [i_4 - 1] [i_3 + 1] = var_14;
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            var_26 = ((~(arr_28 [i_3 - 1] [i_3 - 2] [i_3] [i_4 + 1] [i_4 - 1])));
                            var_27 = var_0;
                            var_28 = ((arr_13 [i_4 - 1] [i_3 + 1]) ? 32066 : ((~(arr_29 [i_3] [i_3] [i_10] [i_3] [i_3] [i_10] [i_3 + 1]))));
                        }
                        var_29 = (1 < ((min((arr_34 [i_4 - 1]), var_14))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                    {

                        for (int i_12 = 3; i_12 < 16;i_12 += 1) /* same iter space */
                        {
                            arr_39 [i_12 + 1] [i_12] [i_5] [i_12] [i_3] = (!var_12);
                            var_30 &= ((((arr_26 [i_12 + 1] [i_11] [i_3] [i_4 + 1] [i_3]) > (arr_23 [i_3] [i_4] [i_5] [i_5] [i_5] [i_5] [15]))) ? ((0 ? 3528854189 : 0)) : (arr_21 [i_11] [i_5] [i_3 - 2] [i_3 - 2]));
                        }
                        for (int i_13 = 3; i_13 < 16;i_13 += 1) /* same iter space */
                        {
                            arr_44 [i_13] [i_11] [i_3] [i_3] [i_3 - 3] [i_3] = arr_19 [i_11];
                            var_31 = 754851450116856599;
                        }
                        arr_45 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (((0 ? 2888836530 : 98)));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                    {
                        var_32 = (var_3 * 0);
                        var_33 = (min(var_33, (((arr_24 [i_14] [i_14] [i_14] [i_14] [i_4] [i_3 - 3] [i_3 - 2]) >> (((arr_24 [9] [i_14] [i_14] [i_14] [i_14] [i_3 + 1] [i_3]) - 28))))));
                        var_34 = (arr_38 [i_3] [i_14] [i_3] [i_4 + 1]);
                        var_35 = (min(var_35, (arr_28 [i_3 - 2] [i_4 + 1] [i_4 - 1] [i_3 - 1] [i_3 - 2])));
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        var_36 = (var_7 <= var_2);
                        var_37 = (arr_36 [i_15] [i_3 - 3]);
                        var_38 = (max(var_38, 65472));
                        var_39 = (~-11383781687389592468);
                    }
                    arr_52 [i_3] [i_4] [i_4] = ((!((((var_14 ? (arr_40 [i_3] [i_3 - 2] [i_3] [i_3] [i_3 - 2] [i_3] [i_3]) : 127))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 18;i_17 += 1)
        {
            {
                arr_59 [i_17] = var_1;
                var_40 = (((((-((max((arr_56 [i_16] [i_16]), (arr_58 [i_16] [i_16] [i_17]))))))) ? ((((arr_57 [i_17 + 2] [i_17 + 3]) <= ((max((arr_54 [i_16]), (arr_55 [i_17]))))))) : ((~((max((arr_54 [i_17]), (arr_55 [i_16]))))))));
                /* LoopNest 3 */
                for (int i_18 = 4; i_18 < 18;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 1;i_20 += 1)
                        {
                            {
                                arr_69 [i_17] [i_19] [i_18] [i_17 + 3] [i_17] = (!-var_12);
                                var_41 = (min(((((((arr_53 [i_17]) ? var_14 : var_3))) ? (((var_10 ? var_13 : var_2))) : (((arr_67 [i_17]) ^ (arr_57 [i_17 - 1] [i_18]))))), (((arr_60 [i_17 + 1] [i_17] [i_17 + 1]) + (arr_60 [i_17 + 4] [i_17] [i_17 + 1])))));
                            }
                        }
                    }
                }
                var_42 -= (((((var_14 ? (arr_57 [i_17 + 1] [i_17]) : (arr_57 [i_17 + 3] [i_16])))) ? 127 : (max(var_14, 113))));
                var_43 = ((0 ? 2922513466 : 693496515));
            }
        }
    }
    #pragma endscop
}
