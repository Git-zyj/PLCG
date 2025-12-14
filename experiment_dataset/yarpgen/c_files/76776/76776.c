/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (!(arr_0 [i_0]));
        var_18 = 11824;
        var_19 |= var_17;
        var_20 -= var_17;
        arr_4 [i_0] = ((21865 ? ((~(arr_2 [i_0] [5]))) : (~var_7)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_21 = (arr_6 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_14 [i_3] [i_2] [i_2] = 48;
                    var_22 = (arr_12 [i_1]);
                    arr_15 [i_2] [i_2] [i_2] |= ((((max((arr_1 [i_2]), ((min(21856, (arr_5 [i_1] [i_2]))))))) ? (((((arr_11 [i_1] [i_2] [9]) ? var_17 : var_11)) * (((53711 ? (arr_0 [i_1]) : (arr_1 [i_1])))))) : ((((arr_5 [i_1] [i_2]) ? (arr_5 [i_1] [i_3]) : (arr_8 [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((((!53724) / (((arr_10 [i_2] [i_2] [i_5]) ? (((arr_11 [i_3] [i_4] [i_5]) ? (arr_17 [i_1] [i_2] [i_3] [i_4] [i_5]) : (arr_19 [i_1] [i_1]))) : (((!(arr_6 [i_4])))))))))));
                                var_24 = (max(var_24, ((max((arr_9 [9] [i_5] [i_5]), (((var_11 ? 43670 : var_11))))))));
                                arr_22 [i_1] [8] [i_2] [i_2] [i_3] [i_4] [i_5] = var_1;
                            }
                        }
                    }
                    arr_23 [i_1] [4] [4] = (((((arr_9 [i_1] [i_1] [i_1]) ? (arr_9 [i_1] [i_1] [i_1]) : (arr_9 [i_1] [i_1] [2])))) ? (max(((min(1, 112))), 3311733035)) : (arr_6 [i_1]));
                }
            }
        }
        var_25 += ((~(min((arr_7 [i_1]), ((max((arr_0 [i_1]), (arr_19 [i_1] [i_1]))))))));
        var_26 &= (max(11824, 968509559));
    }

    /* vectorizable */
    for (int i_6 = 3; i_6 < 23;i_6 += 1)
    {
        arr_26 [0] = (arr_25 [i_6 - 2]);
        arr_27 [i_6] [i_6] = (((((-(arr_25 [i_6])))) ? (((arr_25 [4]) ? var_12 : (arr_24 [i_6] [i_6]))) : 118));
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_30 [7] &= ((~(arr_28 [i_7])));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                arr_41 [i_7] [i_7] = ((((max((min(112, 44)), (max(-97, var_15))))) ? 21868 : 160));
                                var_27 = 983234253;
                                arr_42 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] |= ((!((min((arr_36 [i_7] [i_8] [i_9] [i_10]), (min((arr_31 [i_9] [i_9]), (arr_39 [i_7] [i_7] [i_7] [i_7] [i_7]))))))));
                                var_28 = ((983234255 ? 43670 : -1737227153));
                            }
                        }
                    }
                    arr_43 [17] &= var_6;
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            {
                                arr_49 [8] [8] [i_9] [i_9] [i_13] [12] = (((((((min(3643269134, 6529886795423682641))) ? var_3 : (arr_35 [i_7] [11] [i_9] [i_7] [4])))) ? ((+((983234253 ? (arr_40 [i_13] [i_13] [i_13] [i_13] [i_13] [5] [i_13]) : var_9)))) : (min(var_9, (arr_29 [i_12 - 1])))));
                                var_29 |= (((((arr_29 [i_12 - 1]) * ((((arr_36 [i_7] [i_7] [i_7] [i_7]) ? 0 : (arr_39 [0] [i_8] [0] [i_12] [0]))))))) ? (arr_28 [1]) : 43684);
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 17;i_14 += 1)
    {
        var_30 = (min(var_30, (((((var_4 ? 96 : (arr_37 [i_14] [i_14] [17] [i_14]))) >= var_6)))));
        var_31 = (max(var_31, (-97 / 82)));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 14;i_17 += 1)
                {
                    {
                        var_32 = (min(var_32, (arr_40 [i_17] [i_16] [i_16] [i_15] [i_15] [i_14] [i_14])));
                        arr_59 [i_16] [i_16] [i_17 + 1] [i_15] &= ((0 ? var_10 : ((var_9 ? 112 : (arr_31 [i_15] [i_15])))));
                        var_33 = (21886 ? 43631 : 3643269122);

                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            arr_63 [1] [i_14] [i_16] [i_16] = ((arr_44 [i_16] [i_17 - 2] [i_18] [i_17 - 2]) ? (arr_44 [i_16] [i_17 - 1] [i_17] [i_17 + 4]) : (arr_44 [i_14] [i_17 - 1] [i_17] [i_17]));
                            var_34 = (min(var_34, (((~(arr_55 [i_14] [i_16] [i_14] [i_14 - 1]))))));
                            var_35 = ((!(arr_45 [1])));
                            var_36 &= (~-501946222);
                            arr_64 [i_14] [i_15] [i_16] [i_17] [i_14] = ((1 ? (arr_28 [i_14]) : (arr_38 [i_14] [8] [i_14 - 1] [i_18] [i_14])));
                        }
                    }
                }
            }
        }
        arr_65 [i_14] = ((72 ? -501946231 : 84));
    }
    #pragma endscop
}
