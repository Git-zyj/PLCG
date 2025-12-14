/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(((!var_3) % 9398))));
    var_18 = (-1 != 147);
    var_19 = (min(var_19, ((((~1) ? var_16 : var_6)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 -= 14438;
        arr_3 [i_0] [i_0] = (max(((max((arr_0 [i_0] [i_0]), -14440))), 14447));
        var_21 = (arr_1 [i_0]);
        var_22 = (min(var_22, var_12));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_13 [i_1] [i_2] [i_2] [i_4] = (((arr_6 [i_3] [i_4]) / (((-272085509 / (arr_7 [i_1] [i_3] [i_1]))))));

                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_23 = var_15;
                            arr_17 [7] [7] [i_1] [i_1] [i_1] [14] [i_1] = ((arr_15 [i_5 - 1] [i_5 - 1]) / (arr_15 [i_5 - 1] [i_5 - 1]));
                            arr_18 [i_4] = (-(arr_14 [i_3] [9] [i_1] [i_4] [i_4]));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_24 = (((arr_9 [i_4] [i_2] [i_1]) ? (var_16 / -740287067) : ((147 ? 11535410043843999765 : 32605))));
                            var_25 = (min(var_25, ((((arr_10 [i_1] [i_1] [5] [i_1]) ? var_4 : var_5)))));
                            var_26 = -var_2;
                            var_27 = -740287055;
                        }
                        for (int i_7 = 2; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_1] [i_2] [i_2] [i_2] [i_2] [i_7] = var_4;
                            arr_27 [i_7] = ((!(arr_7 [i_7 + 1] [i_7 - 1] [i_3])));
                            var_28 = (arr_11 [i_7] [i_7 - 2] [i_7] [i_7 + 1] [i_7 - 1] [i_7]);
                            var_29 *= ((-(-14436 + -740287047)));
                        }
                        for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_30 = (arr_21 [i_8 - 2] [i_8 - 2] [i_8] [17] [i_8 - 1] [i_8]);
                            var_31 = (min(var_31, var_13));
                            arr_30 [i_1] [i_1] [i_1] [i_4] [i_1] [i_1] [i_4] = 1;
                        }
                        var_32 = (var_10 - 4298826964761312964);
                        var_33 ^= ((var_9 >= (arr_20 [i_4] [i_4] [i_1] [i_3] [i_1] [i_1])));
                        var_34 = (~1);
                    }
                    for (int i_9 = 4; i_9 < 15;i_9 += 1)
                    {
                        arr_33 [i_9 - 2] [i_2] [i_2] [i_1] [i_1] = 272085509;
                        arr_34 [17] [i_1] [i_1] [13] [11] [i_9] = (arr_19 [9] [9] [i_9]);

                        for (int i_10 = 1; i_10 < 16;i_10 += 1)
                        {
                            var_35 = (arr_35 [i_1] [11] [i_10] [11] [5]);
                            var_36 = (min(var_36, (max(740287067, 21343))));
                        }
                        var_37 -= var_6;
                    }

                    for (int i_11 = 2; i_11 < 17;i_11 += 1)
                    {
                        var_38 = var_3;
                        var_39 ^= ((44185 ? -9386 : 0));

                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            arr_42 [i_1] = 35;
                            arr_43 [i_12] [i_11] [i_11] [i_3] [i_2] [i_1] = ((-65520 ? ((~(arr_19 [i_11 - 2] [i_11 + 1] [i_11 - 1]))) : ((max((arr_22 [16] [i_2]), (max(var_7, var_8)))))));
                            var_40 = (min(var_40, ((min((((arr_20 [i_1] [i_11 + 1] [i_11 - 1] [i_12] [3] [i_11 + 1]) & -20830)), (arr_20 [i_3] [i_11 + 1] [i_11 - 1] [i_12] [i_12] [i_12]))))));
                            var_41 = (min(var_41, ((max((max(((max(var_12, var_14))), ((var_15 - (arr_4 [i_3]))))), ((max((arr_37 [i_12] [i_11 - 1] [i_11 + 1] [i_2] [i_2] [i_1]), 1))))))));
                            var_42 = var_5;
                        }
                    }
                }
            }
        }
        arr_44 [i_1] = ((!((!((max(0, 227)))))));
    }
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        var_43 = 2808077574560448189;
        var_44 ^= ((!(((((((arr_45 [i_13]) & (arr_46 [i_13])))) ? 1 : var_6)))));
        var_45 ^= ((max((arr_45 [i_13]), (arr_45 [i_13]))));
        var_46 = (min(var_46, var_16));
    }
    #pragma endscop
}
