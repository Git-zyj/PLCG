/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (min(((-(!var_0))), (5099472610731892274 == -var_16)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            arr_7 [i_1] [i_0] = var_4;
            var_21 ^= (((arr_1 [i_1]) >> var_5));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_22 = (var_6 / 636021212533764989);
                arr_12 [i_2] [i_2] [i_3] = (((arr_0 [i_0] [i_2]) ? (arr_0 [i_0] [i_2]) : (arr_0 [14] [14])));
                arr_13 [i_0] [i_2] [1] &= (0 < ((1 ? -1845830578 : 181779664)));
                arr_14 [i_3] [i_2] = var_12;
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_23 = ((arr_16 [i_4] [i_2] [i_0]) ? ((0 ? var_0 : var_6)) : var_19);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_24 = (max(var_24, 8220180439985855311));
                            arr_24 [i_0] [i_6] [i_2] [i_0] [i_6] = (((var_10 ? var_0 : (arr_22 [i_5] [i_4] [i_4] [i_5] [i_6]))) / var_6);
                            var_25 = (max(var_25, var_1));
                            var_26 = ((-(arr_21 [i_5] [i_2] [i_6 + 2])));
                            arr_25 [i_0] [14] &= -0;
                        }
                    }
                }
            }
            var_27 = (-((var_11 ? (arr_3 [i_2]) : var_7)));
            var_28 = (var_4 ? (arr_10 [i_2] [i_2] [i_2]) : (arr_10 [i_0] [i_2] [i_0]));
            var_29 = ((var_7 >= ((var_5 ? var_2 : 23))));
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
        {
            var_30 += var_12;
            var_31 = var_15;
            var_32 = (max(var_32, -var_8));
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
        {
            arr_31 [i_0] &= var_19;
            arr_32 [i_0] = var_1;
        }
        var_33 = (!var_0);
        var_34 *= (((65535 ^ var_12) ? ((1 & (arr_9 [i_0]))) : (((var_10 ? 1845830578 : -1845830578)))));
        arr_33 [i_0] = (arr_22 [i_0] [i_0] [i_0] [4] [i_0]);
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        var_35 = (-9223372036854775807 - 1);
        var_36 = (((arr_35 [i_9] [i_9]) + ((min(var_15, (arr_35 [i_9] [i_9]))))));
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        var_37 = (!1845830583);
        var_38 ^= (1 ? (-9223372036854775807 - 1) : ((~((-(arr_34 [i_10]))))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        var_39 = (min(var_39, ((((8 >> 1) ? -1845830578 : var_15)))));

        for (int i_12 = 2; i_12 < 15;i_12 += 1) /* same iter space */
        {
            var_40 = (max(var_40, ((((!var_11) * (((arr_36 [i_12 + 1]) / -2769543847929558404)))))));
            var_41 = (min(var_41, (((!(880733762 <= 1576982229))))));
        }
        for (int i_13 = 2; i_13 < 15;i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    {
                        arr_51 [i_14] = -26305;
                        var_42 = 4294967287;
                        var_43 &= ((var_13 ? ((var_6 ? var_12 : var_11)) : (((1 ? var_3 : var_3)))));
                        var_44 = ((var_1 ? (arr_36 [i_13]) : (((arr_35 [i_11] [i_15]) + -4466010914519865143))));
                    }
                }
            }
            var_45 = (((arr_37 [i_13 - 2] [i_13 - 1]) ? -511810804415828905 : var_15));
            var_46 = -5584375622553765931;
        }
        for (int i_16 = 2; i_16 < 15;i_16 += 1) /* same iter space */
        {
            var_47 = (~var_12);

            for (int i_17 = 2; i_17 < 15;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 16;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 16;i_19 += 1)
                    {
                        {
                            var_48 = (max(var_48, (arr_59 [i_16 - 1] [i_16 - 2] [i_16 - 2] [i_17 - 1] [i_19] [i_19])));
                            var_49 = (1727047119108286568 * (!var_9));
                            var_50 = (max(var_50, (((var_5 ? (arr_54 [7]) : 511810804415828908)))));
                            var_51 = (max(var_51, ((((var_9 ? var_12 : (arr_46 [i_18])))))));
                            arr_61 [i_11] [i_16] [i_17] [i_18] [i_19] [9] [i_18] = ((1891852495 ? 1483764510 : var_16));
                        }
                    }
                }

                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    var_52 ^= var_7;
                    arr_65 [i_17] [7] [11] [0] = ((!(arr_39 [i_11] [i_16])));
                    var_53 = 1073741792;
                }
                for (int i_21 = 0; i_21 < 16;i_21 += 1)
                {
                    var_54 -= (~var_0);
                    var_55 ^= var_1;
                }
                var_56 = ((arr_58 [9] [i_16] [i_11] [i_11]) ? var_2 : (arr_63 [i_16 - 1] [i_16] [i_16 - 2] [i_16 - 2] [i_16 - 2] [i_16 - 2]));
                arr_70 [12] [i_16 - 1] &= var_0;
            }
            var_57 = (max(var_57, 1483764510));
        }
        /* LoopNest 3 */
        for (int i_22 = 0; i_22 < 1;i_22 += 1)
        {
            for (int i_23 = 3; i_23 < 15;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 16;i_24 += 1)
                {
                    {

                        for (int i_25 = 0; i_25 < 1;i_25 += 1)
                        {
                            var_58 &= 1915869302;
                            arr_81 [2] |= var_10;
                        }
                        for (int i_26 = 0; i_26 < 16;i_26 += 1)
                        {
                            arr_84 [i_22] [i_22] [i_22] [i_22] = -9223372036854775804;
                            arr_85 [i_11] [i_11] [i_22] [i_23 + 1] [i_24] [i_22] = var_0;
                            var_59 &= (((arr_37 [i_24] [i_26]) > (arr_37 [i_11] [i_11])));
                        }
                        for (int i_27 = 0; i_27 < 16;i_27 += 1)
                        {
                            var_60 = (((arr_80 [i_22] [i_23 - 3] [i_23 + 1]) ? (6809168857030912519 + 1) : var_1));
                            var_61 = (arr_66 [i_11] [i_23] [i_24] [i_27]);
                        }
                        arr_88 [i_22] [i_22] [i_23] [i_22] = ((var_0 ? (1 >= 29237) : (!var_0)));
                        var_62 = (-9223372036854775807 - 1);
                        arr_89 [i_24] [i_22] [i_22] [i_11] = (0 ? -73 : (arr_35 [i_23 - 1] [i_23 - 2]));
                        var_63 = (max(var_63, ((((((var_18 ? var_2 : var_13))) ? (-9223372036854775807 - 1) : var_6)))));
                    }
                }
            }
        }
    }
    var_64 = 7377108767505972574;
    var_65 = ((((~(!2147483647)))) ? -var_9 : (min(((min(var_12, var_10))), (min(1483764510, var_13)))));
    #pragma endscop
}
