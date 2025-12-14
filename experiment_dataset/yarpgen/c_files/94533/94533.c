/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 -= ((-(~13348843287061397781)));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((-((var_3 ? (max(var_5, var_7)) : ((min(var_5, var_9)))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = (min((!var_5), ((var_11 ? var_10 : var_14))));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_19 [i_4] [i_3 + 1] [i_3] [i_0] [i_0] [i_0] [i_0] = ((~(min(var_11, var_10))));
                            arr_20 [i_0] [i_1] [i_1] [i_1] [i_3 + 1] [i_4] [i_4] = ((min(-var_10, ((47667 ? 1275241499 : 1473865730)))));
                        }
                        var_17 = ((~((-(min(var_10, var_8))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_18 = (max(var_18, var_7));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_19 += var_14;
                            var_20 = ((var_13 ? var_2 : var_12));
                            var_21 = var_2;
                        }
                        arr_26 [i_0] [i_1] [i_2] [i_5] [i_5] [i_1] = -var_9;
                        var_22 = ((var_4 ? var_10 : var_6));
                    }

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_23 = (min((~var_4), (min(-var_5, var_9))));

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_24 += (min(((var_5 ? (!var_6) : (~var_4))), (((!((min(var_1, var_11))))))));
                            arr_33 [i_2] [i_1] [i_2] [i_0] [i_8] = (min(((min(((min(var_2, var_2))), var_0))), (min(59, 4))));
                            var_25 = (max((((!(!var_14)))), (min(var_13, var_8))));
                        }
                        var_26 = (min(-var_1, (min(var_9, var_5))));

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_27 = ((~(~var_3)));
                            arr_36 [i_0] [i_1] [i_1] &= min(((var_8 ? var_7 : var_12)), ((min(var_3, var_6))));
                        }
                        for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            arr_41 [i_10] = var_12;
                            var_28 = (min(var_28, (((-(~var_10))))));
                            var_29 = var_5;
                            arr_42 [i_0] [i_10] [i_2] [i_7] [i_10] = (min(((var_4 ? var_5 : var_14)), var_5));
                        }
                        for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            var_30 = ((-((min(var_0, var_14)))));
                            arr_45 [i_11] = (((((10 ? 75 : 1473865730))) ? ((min(var_2, var_2))) : ((var_9 ? var_9 : var_11))));
                            var_31 = (min(var_31, (((~((var_10 ? var_1 : var_1)))))));
                        }
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        arr_48 [i_12] [i_1] [i_1] [i_0] = (min(((((min(var_6, var_0))) ? (min(var_5, var_13)) : (((max(var_9, var_0)))))), ((var_13 ? (min(var_9, var_8)) : (min(var_13, var_5))))));

                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            var_32 = (max((min((min(var_12, var_1)), var_0)), var_8));
                            var_33 ^= min((~var_4), ((min(var_0, var_0))));
                        }
                        arr_51 [i_0] [i_2] [i_0] = ((!(((-((var_6 ? var_12 : var_9)))))));
                        arr_52 [i_0] = (((((var_3 ? var_1 : var_12))) ? var_0 : (min(-89, 14530566548692511451))));
                        var_34 = (min((!var_5), (!var_3)));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 15;i_15 += 1)
                        {
                            {
                                arr_59 [i_0] [i_1] [i_1] [i_2] [i_14] [i_15 - 2] = (!(((var_1 ? var_4 : var_14))));
                                arr_60 [i_0] [i_0] [i_2] [i_14] [i_15] = ((-((1 ? 3822336981 : 28140))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 = var_3;
    var_36 |= var_6;
    #pragma endscop
}
