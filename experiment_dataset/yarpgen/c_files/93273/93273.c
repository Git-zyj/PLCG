/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_14 -= (min((((!(arr_1 [i_0])))), (arr_0 [1] [i_0])));
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_15 *= (max((arr_1 [12]), ((((arr_4 [i_1]) ? ((63 ? (arr_0 [i_1] [i_1]) : (arr_0 [13] [i_1]))) : ((((arr_0 [i_1] [i_1]) > (arr_4 [i_1])))))))));
        arr_5 [i_1] = ((((((var_10 ? (arr_4 [i_1]) : (arr_1 [i_1]))))) ? (((!(arr_3 [i_1] [i_1])))) : (((!(((var_1 ? (arr_1 [i_1]) : var_11))))))));
        var_16 += 53614;
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_17 = (!var_11);
            var_18 = (min(var_18, ((((((-((var_12 ? (arr_9 [i_3] [19]) : 4245183347858460089))))) ? var_2 : ((+(((arr_8 [i_2] [i_3]) / var_6)))))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                    {
                        arr_19 [i_2] [i_4] [i_5] [8] [i_6] [i_7] = (arr_15 [i_4] [i_5] [i_6] [i_7]);
                        arr_20 [i_2] [i_4] [5] [i_6] [i_6] [2] = 1;
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                    {
                        arr_25 [i_2] [i_4] [i_5] [i_6] [i_8] = 1;
                        var_19 &= (((arr_16 [i_2] [i_2]) + var_12));
                        arr_26 [i_2] [i_5] [i_6] [i_8] = 40;
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                    {
                        var_20 = (((arr_8 [i_4] [i_9]) > (((((arr_12 [12]) < var_10))))));
                        var_21 &= var_6;
                        arr_29 [i_2] [i_5] [i_4] [i_5] [i_9] = (arr_11 [i_2] [2] [i_2]);
                    }
                    var_22 = (min(var_22, (((((arr_7 [i_6]) ? var_6 : 20643))))));
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        arr_37 [i_2] [i_11] [i_5] [i_5] [i_10] [i_11] = -1;
                        var_23 *= (arr_8 [i_2] [i_4]);
                    }
                    var_24 = (((arr_34 [i_2] [i_4] [i_4] [i_4] [i_4] [i_5] [i_10]) * (arr_34 [i_2] [i_2] [i_4] [i_4] [i_5] [22] [18])));
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    arr_40 [i_2] [i_5] [17] [i_12] [22] [i_4] = (arr_17 [i_2] [i_5] [i_5] [i_2] [i_12] [i_4]);
                    var_25 -= ((!((var_2 || (arr_21 [i_4] [i_4] [i_4])))));
                    arr_41 [i_2] [i_12] [i_5] = (((!1) ? ((~(arr_8 [1] [1]))) : ((((arr_12 [i_2]) ? var_9 : 26080)))));
                }

                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    var_26 = ((!(arr_28 [i_2] [i_2] [i_2] [i_2] [i_2])));
                    arr_44 [i_2] [i_4] [i_4] [18] [i_13] [i_13] = arr_11 [i_2] [i_13] [i_5];
                }

                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    var_27 += (arr_43 [i_5]);
                    arr_48 [i_4] [i_4] [10] = var_7;
                    var_28 |= (((arr_33 [i_14] [24]) ? var_6 : (arr_42 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
                    var_29 = (min(var_29, (((var_2 * (arr_22 [i_2] [i_5] [i_5] [i_14]))))));
                }
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    arr_53 [i_2] [i_4] = ((var_5 ? ((11079 ? var_7 : (arr_6 [i_5]))) : 2992265834));
                    var_30 = (arr_50 [i_2] [i_2] [i_2] [22]);
                }

                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        arr_60 [i_2] [16] [i_17] [i_5] [i_17] = (arr_13 [19]);
                        arr_61 [i_2] [i_2] [i_5] [20] [i_17] |= var_10;
                    }
                    arr_62 [i_2] [14] [i_4] [i_5] [i_16] = 1;
                }
                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    var_31 = (max(var_31, (((((((arr_36 [4] [i_4]) ? var_12 : var_0))) > -1)))));
                    arr_66 [i_2] [i_2] [i_5] [18] &= ((((((arr_39 [6] [i_4] [23] [i_18]) ? 4294967292 : 3853))) ? var_0 : var_11));
                }
            }
            for (int i_19 = 0; i_19 < 25;i_19 += 1) /* same iter space */
            {
                var_32 = 1;

                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    var_33 = var_12;

                    for (int i_21 = 0; i_21 < 25;i_21 += 1) /* same iter space */
                    {
                        var_34 = (((arr_7 [i_2]) < (arr_7 [i_19])));
                        var_35 = (max(var_35, (((!(arr_47 [i_19] [i_19]))))));
                        var_36 = (~var_4);
                    }
                    for (int i_22 = 0; i_22 < 25;i_22 += 1) /* same iter space */
                    {
                        var_37 *= ((var_7 * (((arr_18 [i_22]) ? (arr_16 [i_4] [i_19]) : var_12))));
                        var_38 = (((arr_64 [i_19] [i_4] [i_2]) | var_9));
                        arr_77 [i_22] [i_4] [i_19] [i_20] [i_22] [i_2] = (arr_11 [i_2] [i_20] [i_22]);
                    }
                    var_39 = ((((arr_8 [i_20] [i_20]) > var_4)));
                }
                for (int i_23 = 0; i_23 < 25;i_23 += 1) /* same iter space */
                {
                    arr_81 [i_2] [i_4] [i_19] [i_23] &= (arr_39 [i_4] [i_4] [16] [i_23]);
                    var_40 = (max(var_40, (((4 < (arr_72 [i_2] [i_4] [i_23] [i_23] [2]))))));
                    var_41 = ((20643 | (arr_31 [i_2] [i_2] [i_2] [i_2] [i_2])));
                }
                for (int i_24 = 0; i_24 < 25;i_24 += 1) /* same iter space */
                {
                    arr_86 [i_2] [i_2] [2] [i_2] = (((arr_75 [i_2] [16] [i_4] [10] [i_4] [i_19] [i_24]) << (var_10 - 26919)));
                    arr_87 [i_2] = ((((((arr_28 [i_4] [i_4] [i_4] [i_4] [i_4]) | (arr_49 [i_2] [i_4] [i_19] [21])))) ? (arr_49 [i_2] [i_4] [i_19] [i_19]) : (arr_67 [i_24] [i_24] [i_24] [i_24])));
                }
                for (int i_25 = 0; i_25 < 25;i_25 += 1)
                {
                    arr_90 [i_2] [i_4] [i_4] [i_4] [i_19] [i_25] = ((((((arr_14 [i_25] [i_19] [i_4] [i_2]) ? 1 : var_9))) < (arr_11 [21] [i_4] [0])));
                    var_42 = (max(var_42, (arr_51 [i_2] [i_4] [i_19] [i_19] [i_25])));
                    arr_91 [i_2] [i_4] [0] [i_25] = (arr_8 [i_2] [i_2]);
                    arr_92 [i_2] [i_4] [i_19] [i_25] = (arr_21 [i_25] [i_4] [i_2]);

                    for (int i_26 = 0; i_26 < 25;i_26 += 1)
                    {
                        arr_95 [i_26] [i_4] = (arr_70 [i_2]);
                        var_43 *= ((!(arr_9 [i_19] [i_26])));
                        var_44 = var_11;
                        arr_96 [i_2] [4] [i_25] [i_26] = (((arr_17 [3] [i_25] [i_19] [i_19] [5] [i_2]) != (arr_17 [11] [1] [i_19] [i_25] [i_2] [i_26])));
                    }
                }
            }
            var_45 = (((((var_10 == (arr_22 [i_4] [i_4] [i_2] [i_2])))) <= 11079));
            arr_97 [i_2] [i_2] [i_4] = var_10;

            for (int i_27 = 0; i_27 < 25;i_27 += 1)
            {
                var_46 = (((arr_56 [i_4] [i_4] [i_4] [i_4]) ? (arr_56 [i_2] [i_4] [i_27] [i_4]) : var_11));
                var_47 -= (!var_11);
                arr_101 [i_2] [i_2] [i_2] = (arr_69 [i_2] [i_2] [i_4] [i_2]);
                var_48 = (min(var_48, (((var_12 && (arr_10 [i_2] [i_2]))))));
            }
        }
        for (int i_28 = 0; i_28 < 25;i_28 += 1)
        {
            arr_104 [i_2] = var_4;
            /* LoopNest 3 */
            for (int i_29 = 0; i_29 < 25;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 1;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 25;i_31 += 1)
                    {
                        {
                            arr_114 [i_2] [i_30] = (((arr_83 [i_2] [i_2]) ? (arr_93 [i_2] [i_28] [24] [i_30]) : -var_5));
                            var_49 = (min(var_49, (arr_45 [i_2] [i_31] [21] [i_30])));
                            arr_115 [i_30] [i_30] [i_28] [i_29] [i_28] [i_30] [i_30] = var_2;
                            var_50 = (((((arr_10 [i_2] [i_30]) >= (arr_76 [i_29] [i_29] [i_29] [i_29]))) ? -1 : ((((((arr_34 [i_30] [1] [i_29] [i_29] [8] [i_30] [i_29]) < (arr_84 [i_28] [i_31]))) ? (arr_23 [i_28]) : (((!(arr_11 [i_2] [24] [18])))))))));
                            var_51 = (min(var_51, (((15847 ? (arr_17 [i_31] [18] [18] [i_2] [i_28] [i_2]) : var_5)))));
                        }
                    }
                }
            }
        }
        var_52 += (arr_13 [i_2]);
    }
    #pragma endscop
}
