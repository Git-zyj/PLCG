/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_3 % var_1) ^ var_5));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [8] [8] = (arr_0 [i_0 - 1]);
        arr_3 [i_0] = (arr_0 [i_0 - 2]);
        var_20 *= ((var_17 ? (!var_6) : -21412));
    }

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_21 = (((((var_5 ? 1 : (arr_12 [i_1] [i_1] [i_3] [i_2])) + (var_9 && var_16)))));
                    arr_14 [i_1] [i_1] = (arr_6 [i_1] [i_1]);
                }
            }
        }
        var_22 = (((arr_8 [i_1] [i_1]) ? (1 % -6930) : -var_0));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_23 = ((-var_10 ? var_15 : ((var_16 ? (((0 ? var_4 : var_8))) : (arr_0 [i_4])))));
        var_24 = (arr_8 [15] [i_4]);

        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_25 = var_1;
            arr_21 [12] [16] [i_5] = (((((((((arr_16 [i_5]) * (arr_9 [i_4] [i_5])))) ? var_6 : (((arr_5 [9] [17]) ? var_1 : var_17))))) ? (arr_19 [i_4] [i_4]) : (((arr_19 [i_4] [i_5]) ? (((arr_20 [i_4] [i_4]) + 32767)) : (arr_0 [i_5])))));
            arr_22 [i_5] [i_4] = ((arr_12 [i_4] [14] [i_4] [3]) ? (min(((~(arr_20 [i_4] [4]))), var_13)) : (var_17 != 8922));
            arr_23 [i_4] = (((((17 ? (arr_9 [i_4] [i_4]) : (arr_9 [i_4] [i_4])))) ? (((arr_9 [i_4] [i_5]) ? var_8 : (arr_9 [i_4] [i_5]))) : (arr_9 [i_4] [i_4])));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 20;i_9 += 1)
                    {
                        {
                            arr_35 [i_7] [i_6] [i_7] [i_7] [i_6] [i_9] = ((!(~var_5)));
                            var_26 *= (((arr_24 [10]) - -1436928412));
                            arr_36 [i_7] [16] [11] [19] [11] [i_7] = ((((var_8 ? (arr_20 [i_9] [14]) : (arr_27 [15] [i_6] [i_7 - 1] [13])))) ? (arr_34 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7]) : (2395277677 / 1));
                            arr_37 [i_4] [i_7] [i_7] [i_7] [i_9 - 3] [17] = ((-(~var_14)));
                        }
                    }
                }
            }
            arr_38 [i_6] [i_4] = var_5;

            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                arr_42 [i_4] = (var_9 ^ var_17);
                var_27 *= (arr_19 [i_10] [15]);
            }
            for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
            {
                var_28 = ((var_2 / (arr_7 [i_4])));
                var_29 = (((arr_20 [i_4] [i_6]) ? (arr_28 [i_4] [10] [4] [i_11]) : (arr_28 [i_4] [i_6] [i_11] [i_6])));
                arr_47 [4] = -var_6;
                arr_48 [i_6] [1] [i_11] = (((arr_6 [2] [i_6]) << (((arr_33 [20] [i_6] [i_6] [i_6] [i_6]) - 58535))));
                var_30 = (((arr_27 [i_11] [i_6] [i_4] [i_4]) ? var_16 : (arr_27 [i_4] [i_4] [i_4] [i_4])));
            }
            for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        {
                            arr_57 [i_4] [i_6] [i_14] [i_13] [i_13] = ((var_18 ? (arr_46 [i_4]) : (arr_46 [i_4])));
                            arr_58 [i_6] [i_13] [i_6] = (~-var_13);
                            var_31 = (arr_52 [11] [i_6] [i_12] [i_13]);
                        }
                    }
                }

                for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
                {
                    arr_62 [11] [i_4] = ((!(arr_18 [i_4] [i_4] [i_4])));
                    arr_63 [6] [i_6] [i_6] [i_4] = (~var_14);
                }
                for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
                {
                    var_32 = (((arr_5 [i_4] [i_12]) % (arr_44 [1] [i_6] [i_6] [1])));
                    var_33 = var_18;
                    arr_66 [i_16] [i_6] [i_16] = (arr_6 [i_4] [i_16]);
                    var_34 = (((var_3 > -6455771056468544899) > var_7));
                    var_35 = ((57758 ? var_15 : (arr_17 [i_6])));
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        {
                            var_36 *= -2792045886;
                            arr_71 [i_17] = (arr_8 [i_4] [i_6]);
                        }
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
        {
            arr_75 [i_4] = ((1899689626 ? 917983217 : 0));
            var_37 = ((arr_32 [i_4] [i_4] [i_4] [i_19] [i_4] [i_19]) ? (((var_0 ? (arr_43 [i_19] [i_4]) : (arr_43 [i_4] [i_4])))) : ((-(arr_25 [i_19] [i_4]))));
            var_38 = ((((((44389 && (~60380))))) + (((var_3 ? var_4 : var_1)))));
        }
        arr_76 [8] = var_14;
        arr_77 [13] = ((!(((9007182074871808 ? (arr_17 [i_4]) : (((((arr_54 [i_4] [i_4] [i_4]) && 0)))))))));
    }
    var_39 = (min(var_14, (var_5 % var_18)));
    #pragma endscop
}
