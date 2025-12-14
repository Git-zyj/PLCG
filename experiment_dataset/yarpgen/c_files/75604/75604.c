/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_16 -= (arr_0 [i_0 - 2]);
        var_17 = ((((min((arr_0 [i_0 - 3]), (arr_0 [i_0 + 1])))) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 3])));
        var_18 = -14;
        var_19 = ((((((arr_1 [i_0 - 1]) << (((arr_1 [i_0 - 2]) - 34606))))) ? (min(28153, (arr_0 [i_0]))) : (arr_1 [15])));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((max(-14, (arr_3 [i_1] [13]))))));
        var_21 = (min(var_21, 86261051));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_22 = ((((((arr_6 [i_2]) ? var_1 : -14))) ? (arr_2 [2] [i_2]) : ((var_9 ? (arr_4 [i_2] [i_2 - 1]) : var_14))));
            var_23 = (arr_5 [i_1]);
            var_24 = (arr_6 [i_2 - 1]);
            arr_7 [1] [i_1] = (arr_2 [1] [i_2]);
            var_25 = ((((arr_4 [i_2] [i_1]) ? (arr_5 [i_2]) : (arr_2 [i_1] [i_2 + 1]))));
        }
        for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
        {
            arr_11 [i_1] [i_3] = var_3;
            var_26 = (var_4 / var_11);
            var_27 = (arr_10 [i_1] [1]);
            var_28 -= (((((arr_5 [i_3]) ? var_6 : ((max((arr_3 [i_1] [i_1]), (arr_10 [i_3 + 1] [i_1])))))) % 65146));
            var_29 = (max(var_29, 1));
        }
    }
    for (int i_4 = 3; i_4 < 22;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = (arr_12 [23]);
        arr_16 [i_4] [i_4 + 1] = ((1 ? (arr_8 [i_4] [i_4] [i_4]) : (arr_6 [i_4])));

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_30 = (min(var_30, (arr_13 [14])));
            arr_20 [i_5] = (1 | -52);
            var_31 = 1;

            /* vectorizable */
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                var_32 -= 5476246629380330814;
                var_33 = (((arr_12 [i_6]) ? (((arr_13 [i_6]) ? var_9 : (arr_6 [i_4]))) : -79));

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_8] = (arr_10 [i_5] [i_5]);
                        var_34 = (~var_0);
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        var_35 = ((-(arr_25 [i_4 + 1])));
                        var_36 -= (((arr_23 [i_4 - 2] [14] [i_6] [18] [i_9]) && (arr_23 [i_4 + 2] [1] [i_5] [i_7] [i_9])));
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                    {
                        var_37 -= ((98 ? -371 : ((~(arr_10 [i_4] [i_6])))));
                        var_38 -= var_11;
                    }
                    arr_35 [i_7] [14] [14] [i_7] [i_6] [i_7] = (arr_21 [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_6 + 1]);
                }
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                arr_39 [i_4] [5] [i_5] [i_11] = (arr_38 [i_11]);
                var_39 = (max(var_39, ((((arr_23 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_11]) ? (arr_23 [i_11] [0] [i_5] [i_4 + 1] [i_4]) : (arr_18 [i_4] [i_5] [i_4]))))));

                for (int i_12 = 3; i_12 < 22;i_12 += 1) /* same iter space */
                {
                    arr_44 [i_12] [10] [i_11] = (arr_8 [i_11] [i_11] [i_11]);

                    for (int i_13 = 1; i_13 < 21;i_13 += 1)
                    {
                        var_40 -= 148;
                        arr_47 [i_4] [i_4] [i_5] [i_11] [i_12] [i_12] [i_12] = ((((((arr_41 [i_13 + 2] [i_13] [i_13 + 1] [i_13 + 3] [i_13]) ? (arr_42 [i_13 + 1] [i_13] [i_12] [i_13 - 1] [i_13] [i_13 + 3]) : (arr_42 [i_13 + 2] [i_13] [i_12] [i_13 - 1] [23] [i_13 + 1])))) ? ((-(arr_42 [i_13 + 1] [i_13] [i_12] [i_13 - 1] [1] [i_13 - 1]))) : ((~(arr_42 [i_13 - 1] [i_13 + 1] [i_12] [i_13 + 1] [i_13 + 1] [i_13 + 3])))));
                    }
                    for (int i_14 = 4; i_14 < 21;i_14 += 1)
                    {
                        arr_51 [i_4] [i_12] [i_11] [i_11] [i_11] [i_14 - 4] = var_1;
                        arr_52 [i_12] [i_5] [i_12] [i_12] [i_12] [i_14] [i_14 + 3] = (((arr_5 [i_4 + 1]) ? ((~(arr_27 [5] [i_12 + 2] [i_4] [i_14 + 3] [i_12]))) : (((min(var_14, ((max(139, 113)))))))));
                    }
                }
                /* vectorizable */
                for (int i_15 = 3; i_15 < 22;i_15 += 1) /* same iter space */
                {
                    var_41 = arr_5 [i_4];
                    var_42 = (arr_5 [i_11]);
                    var_43 = (arr_41 [i_4] [i_5] [i_4] [17] [i_15 - 2]);
                }
                var_44 = (arr_13 [1]);
            }
            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                var_45 -= (arr_14 [6]);
                var_46 -= (((((1 ? 10494485697885644506 : -32766))) ? var_0 : ((((!(arr_54 [i_16] [i_16] [i_16] [i_16] [i_4 + 2] [i_4 + 2])))))));
                var_47 = 253;
                var_48 = (max(var_48, ((((((((arr_49 [i_4 - 3] [13] [i_4 - 3] [i_5] [i_5] [i_5] [i_16]) ? 116 : (arr_14 [i_4])))) ? 1 : 4))))));
                var_49 = (!1266227411);
            }
        }
        for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
        {

            for (int i_18 = 0; i_18 < 24;i_18 += 1)
            {

                for (int i_19 = 1; i_19 < 21;i_19 += 1) /* same iter space */
                {
                    var_50 = (min(var_50, var_8));
                    var_51 = ((min(((var_12 ? (arr_34 [i_18]) : 19770)), 1)));
                }
                for (int i_20 = 1; i_20 < 21;i_20 += 1) /* same iter space */
                {
                    arr_68 [i_17] [i_18] [i_20] = (arr_18 [i_4 + 1] [i_4] [i_4 - 1]);
                    arr_69 [i_20 + 1] [i_20] [i_18] [i_17] [i_4] [i_4] = (arr_30 [i_17] [i_17] [6] [1] [i_17] [i_17] [i_17]);
                }
                /* vectorizable */
                for (int i_21 = 1; i_21 < 21;i_21 += 1) /* same iter space */
                {

                    for (int i_22 = 0; i_22 < 24;i_22 += 1)
                    {
                        arr_74 [i_21] [i_21] [i_22] [i_18] = (arr_8 [1] [7] [7]);
                        var_52 = var_10;
                    }
                    for (int i_23 = 0; i_23 < 24;i_23 += 1)
                    {
                        arr_78 [1] [i_21] [i_18] [i_21 - 1] [22] = 0;
                        var_53 = (((-8 | var_3) ? (arr_67 [i_23] [11] [i_18] [i_18] [i_17] [i_4]) : (((arr_4 [20] [i_4]) ? (arr_50 [2]) : (arr_48 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 - 3])))));
                        var_54 = 275614800943486621;
                    }
                    arr_79 [1] [1] [i_21] [0] [i_21] [i_18] = (arr_17 [i_4 - 3]);
                }
                arr_80 [i_17] = var_12;
            }
            var_55 = (min((arr_21 [i_4] [15] [i_4] [15]), (((var_9 ? (arr_6 [19]) : (arr_70 [i_4] [0] [i_17] [1] [i_4] [i_4]))))));
            var_56 = var_0;
        }
        for (int i_24 = 0; i_24 < 24;i_24 += 1) /* same iter space */
        {
            arr_83 [i_24] = (arr_17 [14]);
            var_57 = (min((((((var_12 + (arr_24 [i_4] [i_4] [i_24] [i_24] [i_4] [i_24])))) ? (arr_3 [i_4 - 1] [i_4]) : (arr_66 [i_24] [i_4 + 2] [i_24] [9]))), var_6));
            arr_84 [i_24] [i_24] [i_4 + 1] = -var_6;
        }
    }
    var_58 = ((!(~var_3)));
    var_59 = (~1);
    #pragma endscop
}
