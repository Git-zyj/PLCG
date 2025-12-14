/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_8 ? ((var_8 ? 0 : var_7)) : (((max(var_9, var_13)))))));
    var_15 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_16 = (((arr_2 [i_1] [i_1] [i_0]) ? (((arr_1 [4]) ? 87 : var_13)) : (arr_0 [i_1 - 2] [i_1 - 2])));
            var_17 = (+-26136);
            arr_4 [i_0] [i_1] [i_1] = (((((2070310788 ? -7691 : 919741896))) ? (arr_0 [i_1 - 2] [i_1 - 2]) : (var_3 && var_3)));
        }

        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_14 [i_0] [i_2] [i_4] = 25237;
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(arr_12 [i_0] [i_2] [i_3 + 1] [i_4] [i_3 + 1])));
                        var_18 = ((50658 ? ((var_0 << (var_12 - 70))) : (arr_2 [i_0] [i_0] [i_2])));
                        var_19 = ((var_8 ? (arr_6 [i_3 + 2] [i_3 - 1] [i_3 + 1]) : var_11));
                        arr_16 [i_0] [i_0] [i_2] [i_0] [i_4] = var_12;
                    }
                }
            }
            var_20 = ((~(arr_5 [i_0])));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {
            var_21 = ((var_13 ? 26147 : var_5));
            var_22 = -var_0;

            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                arr_21 [21] [i_5] [i_5] [i_5] = (arr_13 [i_6] [i_6 - 1] [i_6] [i_6 + 1] [i_5] [i_0]);
                var_23 = var_11;
                var_24 = var_6;
                arr_22 [i_5] = (var_9 ? var_12 : (arr_11 [i_0] [i_5] [i_6] [i_6 + 1] [i_6 + 1]));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            arr_27 [i_0] [i_0] [i_6] [i_8] [i_8] = (~65530);
                            var_25 = ((var_8 ? var_12 : (arr_2 [i_6] [i_8] [0])));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                var_26 = var_2;
                arr_36 [i_0] [i_9] [i_0] [i_9] = -8600276343871146363;
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
            {
                var_27 = (((25254 <= var_0) ? ((var_7 ? var_10 : (arr_34 [14] [i_9] [i_0] [i_0]))) : (221 >> 0)));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            var_28 = var_0;
                            var_29 = ((var_6 << (var_12 - 68)));
                            arr_46 [i_0] [i_11] [i_13] [i_12] [i_13] = var_5;
                            arr_47 [i_0] [i_13] [i_0] [i_0] = var_3;
                            arr_48 [i_0] [i_0] [i_13] [i_0] [i_0] [i_0] = var_7;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        {
                            arr_53 [i_0] [i_15] [i_11] [i_11] [i_14] [i_0] [i_15] = var_0;
                            var_30 = ((!(arr_37 [i_0] [i_0] [5])));
                            arr_54 [i_0] [i_15] [i_0] [i_0] [i_15] [i_0] = ((28672 >> (40321 - 40291)));
                            arr_55 [i_0] [i_9] [i_11] [i_14] [i_15] [1] [i_0] = var_13;
                        }
                    }
                }
                arr_56 [i_0] = -var_12;
                var_31 = (arr_20 [i_0]);
            }
            for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
            {
                var_32 = var_1;
                arr_60 [i_0] [i_9] = var_6;
                arr_61 [i_0] [i_0] [i_16] [i_9] = var_3;
            }
            for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
            {
                arr_66 [i_0] [i_9] [i_17] = (arr_30 [i_9] [i_9]);
                /* LoopNest 2 */
                for (int i_18 = 3; i_18 < 23;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        {
                            var_33 = (arr_26 [i_9]);
                            var_34 = ((!(arr_24 [i_18] [i_18 - 1] [i_18 + 1] [i_18 - 1])));
                            var_35 = (~var_3);
                            arr_72 [5] [i_19] [i_19] = var_5;
                            var_36 = var_6;
                        }
                    }
                }
                var_37 = (arr_19 [i_0]);
                arr_73 [i_0] [i_9] [i_9] = (61 ? 3052 : var_5);
            }
            arr_74 [i_0] = var_2;
            var_38 = (arr_35 [i_0] [2] [i_9]);
            arr_75 [19] [19] [i_0] = (arr_67 [i_0] [11] [6] [11] [6] [i_9]);
            var_39 = var_4;
        }
        var_40 = (!var_6);
        var_41 = ((var_2 ? var_4 : (arr_42 [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_20 = 3; i_20 < 10;i_20 += 1)
    {
        arr_78 [i_20] [i_20] = var_2;
        var_42 = 20092;
    }
    for (int i_21 = 0; i_21 < 12;i_21 += 1) /* same iter space */
    {
        var_43 = ((var_13 ? (((((arr_6 [i_21] [23] [i_21]) + 9223372036854775807)) >> (var_11 + 286529598315644284))) : var_11));
        arr_81 [i_21] = (((arr_59 [i_21] [i_21]) % (~-var_8)));
    }
    for (int i_22 = 0; i_22 < 12;i_22 += 1) /* same iter space */
    {
        arr_84 [i_22] = (min(var_1, (~var_4)));
        var_44 = (((((226 ? -1 : 24))) ? ((max(var_9, (arr_20 [i_22])))) : (((!(arr_35 [i_22] [i_22] [i_22]))))));
        var_45 = (arr_58 [i_22] [i_22] [i_22]);
        arr_85 [i_22] = 20065;
    }
    #pragma endscop
}
