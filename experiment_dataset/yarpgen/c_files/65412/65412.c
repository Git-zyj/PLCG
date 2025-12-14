/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_2] [i_2] = ((((((-12 ? (arr_7 [i_0] [i_1] [i_2] [i_3]) : var_2)) ^ var_8)) > (var_7 | 12)));
                        var_13 = 18446744073709551615;
                        arr_12 [i_1] [i_2] = var_9;
                        arr_13 [i_0] [12] [i_2] [i_3] = ((!(((((var_0 >> (((arr_8 [i_0] [i_1] [i_2] [i_3] [i_3]) - 1815709829))))) || (((arr_3 [i_0]) >= (arr_3 [i_2])))))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] = 0;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_2] [14] [i_2] [i_4] = (((arr_2 [i_0 + 3]) > var_10));

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_20 [1] [i_1] [i_1] [10] [i_4] [i_2] = 6;
                            var_14 = (max(var_14, var_4));
                            var_15 = var_4;
                            var_16 *= var_2;
                            arr_21 [i_2] [i_1] [9] [i_4] [i_5] = (arr_6 [i_0 + 3] [i_0 - 1]);
                        }
                        arr_22 [i_0] [i_0] [5] [i_0] [i_2] [i_2] = (!1);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_17 *= (arr_19 [10] [i_0] [i_1] [i_1] [i_1] [i_6]);
                        var_18 = (((arr_9 [i_0 + 1] [2] [i_0 - 3] [i_0]) << (10543669298418951135 - 10543669298418951122)));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_19 *= var_4;
                                arr_33 [i_0] [i_1] [0] [i_2] [i_8] = (!1);
                            }
                        }
                    }
                    arr_34 [i_2] = (((min(var_11, var_4))) || var_6);

                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_20 -= ((!(((-(arr_6 [i_0] [i_1]))))));
                        arr_39 [i_0] [i_0] [i_2] [i_1] [11] [i_9] = (arr_19 [i_0] [i_1] [i_2] [i_9] [i_9] [i_9]);
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        arr_44 [i_2] = (-1003 - (0 + -264390852));

                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_21 += (max(((-(var_1 <= -4326809707655479080))), (((!(!var_6))))));
                            var_22 = (((arr_40 [i_0] [i_2] [i_1] [i_2] [4] [i_1]) << (((arr_7 [i_0] [i_0] [i_0 - 2] [i_1]) - 63))));
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        arr_49 [i_0] [i_1] [i_2] [0] = (arr_46 [i_0 + 3] [i_1] [i_1] [i_2] [i_2]);
                        var_23 = (!-var_8);

                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            var_24 = var_11;
                            arr_52 [i_0] [i_2] [i_2] [i_2] [i_13] = var_9;
                        }
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            arr_55 [i_2] [8] = (1 >> (!30498));
                            arr_56 [i_2] [i_1] [i_2] [i_12] [i_14] = (((((var_1 << (((arr_41 [i_0] [i_1] [i_1] [i_2] [i_12] [i_14]) - 139))))) && (!var_3)));
                        }
                        var_25 = (min(var_25, (((-((122 ? var_0 : var_5)))))));

                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            var_26 = (((((var_11 << (var_9 - 17249717704801874001)))) ? var_0 : (arr_10 [i_0 + 3] [i_0 - 3] [i_15] [10])));
                            var_27 = (1 & var_8);
                            var_28 = 114;
                            var_29 = var_11;
                        }
                        for (int i_16 = 3; i_16 < 14;i_16 += 1)
                        {
                            var_30 = ((var_6 ? (arr_6 [i_16 - 2] [i_0]) : (!1)));
                            var_31 = (((var_8 ? (arr_59 [1] [i_2] [1] [i_12] [i_16]) : var_4)) - (arr_30 [i_0 - 2]));
                            var_32 = 1;
                        }
                        for (int i_17 = 0; i_17 < 15;i_17 += 1)
                        {
                            var_33 *= -var_4;
                            arr_65 [i_0] [i_2] [12] [i_2] [i_12] [i_17] = (arr_54 [i_2]);
                        }
                    }
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        var_34 -= (arr_30 [i_2]);
                        var_35 = ((!(arr_27 [i_2] [i_18])));
                    }
                }
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    var_36 = var_8;
                    var_37 *= (var_1 + (arr_66 [i_0] [i_19] [i_19]));
                }
                /* vectorizable */
                for (int i_20 = 0; i_20 < 15;i_20 += 1)
                {

                    for (int i_21 = 1; i_21 < 1;i_21 += 1)
                    {
                        var_38 = ((-var_0 > (arr_19 [i_21] [11] [i_20] [i_20] [i_0 + 1] [i_1])));
                        var_39 *= ((var_1 ? (arr_43 [2] [i_20] [i_20] [i_1]) : (arr_43 [i_21] [i_21] [i_21] [i_1])));
                    }
                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        var_40 = var_10;
                        var_41 = (max(var_41, (var_0 + -var_7)));
                        var_42 = (arr_35 [i_0] [i_1] [i_22] [i_22]);
                    }
                    arr_80 [i_0] [i_1] [i_20] = 3993;
                    var_43 = (arr_28 [i_0] [i_1] [i_1] [i_20] [i_20]);
                }
                var_44 = ((!((min(-1189087786, (0 * var_3))))));
            }
        }
    }

    for (int i_23 = 0; i_23 < 20;i_23 += 1)
    {
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 20;i_24 += 1)
        {
            for (int i_25 = 1; i_25 < 18;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 20;i_26 += 1)
                {
                    {
                        arr_93 [i_23] [i_24] [i_25] = (((((((2442411990 % (arr_90 [i_25])))) ? var_2 : (arr_89 [i_23] [i_24] [i_25] [i_26])))) % var_1);
                        var_45 = ((var_4 ? (((!(arr_86 [i_24] [i_25 - 1])))) : var_0));
                    }
                }
            }
        }
        arr_94 [i_23] = 1;
    }
    for (int i_27 = 0; i_27 < 22;i_27 += 1)
    {
        arr_97 [i_27] = var_7;
        arr_98 [i_27] [i_27] = (max((((var_8 >> (var_6 - 1747922592)))), ((((((arr_95 [i_27]) + var_2))) ? (max(var_0, (arr_96 [12]))) : (!var_2)))));
        var_46 += var_8;
    }
    for (int i_28 = 0; i_28 < 13;i_28 += 1)
    {
        var_47 = (min(var_47, (((((-var_0 ? 0 : (!var_6))) >= (arr_50 [8] [0] [2]))))));
        arr_102 [i_28] = ((((((((arr_51 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28]) ^ var_4)) / (max(218, 12439110189031326103))))) || 9049));
        var_48 = ((264390852 == (max((-1189087792 < 65532), ((var_6 ? var_2 : -696389383))))));
        var_49 = (max((((~(arr_63 [i_28] [14] [i_28])))), var_0));
        arr_103 [i_28] = var_2;
    }
    var_50 = (min(var_8, (min(-1, var_9))));
    var_51 = ((var_2 ? ((((var_11 ? var_10 : var_5)) % (var_11 ^ 264390867))) : -1));
    #pragma endscop
}
