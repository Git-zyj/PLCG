/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max((((var_7 || (!var_1)))), (max(var_3, (min(var_11, var_3)))));
    var_16 = max(var_9, ((var_2 ? var_4 : (max(17612145411608614634, 74)))));
    var_17 = ((-((208 & (((var_2 ? var_0 : var_13)))))));
    var_18 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_19 = ((arr_0 [i_1]) - var_8);
            var_20 += (arr_0 [i_1]);
            var_21 = (((arr_4 [i_0] [i_1]) || (~84)));
            var_22 = 1915071845;
            arr_6 [6] [i_0] [i_1] = (arr_2 [i_1]);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_23 -= (arr_4 [i_0] [i_2]);

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] = -1686;
                    arr_19 [1] [i_2] [16] [12] = ((!(arr_9 [i_0])));

                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_5] [i_0] [i_5] [i_0] = var_11;
                        arr_24 [i_5] [i_5] = -var_1;
                        var_24 -= (((arr_10 [i_5 - 3]) ? (arr_3 [i_2]) : (arr_10 [i_5 + 1])));
                        var_25 = (arr_16 [i_0] [i_2] [i_5 - 3] [i_5 - 3] [i_5]);
                    }
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        arr_28 [1] [i_2] [i_6] [19] [i_6 - 2] = var_4;
                        var_26 *= (arr_22 [i_6] [i_2] [i_3]);
                        arr_29 [i_6] = (((arr_16 [i_0] [i_2] [i_3] [i_4] [i_2]) ? ((var_0 ? (arr_10 [i_0]) : (arr_3 [i_6]))) : (arr_15 [i_6 + 1] [i_6 - 2] [8] [i_6 - 2] [8] [8])));
                        var_27 = ((-(var_14 - var_11)));
                        var_28 = ((-(arr_13 [i_4] [i_6 + 4] [i_6 + 4] [i_6 + 2])));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_29 = ((arr_21 [i_7] [i_7] [i_3] [i_7] [i_0]) & (arr_22 [i_0] [i_7] [i_3]));
                        arr_32 [i_0] [i_3] [i_3] [i_2] [i_3] [i_0] &= var_0;
                        var_30 = (max(var_30, (((!(arr_10 [1]))))));
                        var_31 &= (arr_31 [i_2] [i_2] [i_3] [6] [i_2]);
                    }
                    var_32 = (min(var_32, var_3));
                }
            }
            var_33 = (((arr_27 [i_0] [i_0] [i_0] [i_0] [i_2]) ? (!134) : ((var_9 & (arr_4 [i_2] [17])))));
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_34 = (((arr_7 [i_0] [i_0] [i_0]) & (arr_7 [i_0] [i_8] [i_8])));
            var_35 *= ((25847 ? (arr_7 [i_0] [i_8] [9]) : -1673));
        }
        for (int i_9 = 3; i_9 < 23;i_9 += 1)
        {
            arr_37 [i_0] [1] [i_9] = ((~(arr_35 [i_9 - 1] [i_9 - 2])));
            var_36 = (max(var_36, ((((arr_26 [i_0] [i_9 - 3] [i_9] [i_0] [i_9]) == 159)))));
            var_37 = (((((-(arr_10 [i_0])))) - var_11));
        }
        var_38 *= (((arr_21 [i_0] [16] [i_0] [i_0] [i_0]) ? ((var_11 | (arr_11 [i_0]))) : (!var_3)));
        var_39 &= (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_40 = ((!(arr_33 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
    {
        var_41 = (max(var_41, (~var_10)));
        var_42 = (arr_1 [i_10]);
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
    {
        var_43 &= (max((arr_9 [1]), var_12));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                {
                    var_44 = (max(var_44, ((max((arr_35 [i_11] [i_11]), ((((!(arr_27 [20] [i_11] [i_13] [i_13] [i_12]))))))))));
                    var_45 = (max(((~(arr_35 [i_13] [i_12]))), ((min(((var_6 ? var_13 : 1691)), var_0)))));
                    var_46 = (((arr_11 [i_13]) < (max((arr_31 [i_11] [i_12] [i_11] [i_12] [i_11]), (arr_31 [i_11] [i_12] [i_11] [i_12] [i_12])))));

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        arr_52 [i_14] [i_11] [i_13] [i_12] [i_11] [i_11] = (((arr_38 [i_14]) ? (arr_38 [i_11]) : (arr_38 [i_14])));
                        arr_53 [i_11] [i_12] [i_11] = arr_13 [i_11] [i_11] [i_11] [i_11];
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        arr_57 [i_11] [i_11] [i_12] [6] [i_11] [i_15] = ((!(arr_5 [i_13] [i_13])));
                        var_47 = (((arr_54 [i_15] [i_15] [i_13] [i_12] [i_11]) && (arr_56 [i_11] [i_11] [i_13] [i_15])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
