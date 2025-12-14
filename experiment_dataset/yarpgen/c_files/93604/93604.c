/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(1, 60));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] = (max((min((min(var_16, var_3)), ((max(32767, -1649))))), ((max(((var_5 ? var_4 : var_4)), (max(var_7, var_14)))))));
                                arr_16 [i_0] [i_1 + 2] [i_0] [i_0] [i_4] [i_1] = (16384 ? 2130894722 : 178);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_20 = (min(var_20, var_7));
                        var_21 = (min(var_21, (!var_6)));
                        arr_19 [i_1] [i_1] [i_1] [i_1 + 1] = ((var_9 ? var_13 : var_4));
                        var_22 = (min(var_22, (((var_6 ? var_14 : var_10)))));
                        arr_20 [i_0] [i_1] [i_1] [i_5] = var_17;
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_23 = (max(var_23, ((((((var_0 ? (~var_14) : ((max(var_2, var_5)))))) ? ((var_14 ? (max(var_18, var_2)) : var_9)) : (((var_7 ? var_1 : ((var_13 ? var_3 : var_12))))))))));
                        var_24 = (min(var_24, var_3));
                        var_25 |= (max((max((min(var_18, var_7)), (((var_13 ? var_6 : var_7))))), ((min(var_7, var_2)))));
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_26 ^= ((var_17 ? -var_16 : ((max((max(var_12, var_10)), (!-1075660723))))));
                        var_27 ^= var_12;
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_29 [i_1 - 2] [i_1] [7] [i_1] [i_1] = (min(((var_2 ? var_10 : var_18)), ((min(var_8, var_16)))));
                        var_28 = (max(var_28, ((min(1, -16773)))));
                        arr_30 [i_0] [i_1] = min(((var_7 ? var_4 : var_18)), (!6));
                    }
                    var_29 &= (max((min(var_1, var_15)), (((var_18 ? var_4 : var_10)))));
                    arr_31 [i_1] [i_1] = (min((!var_5), ((((max(var_2, var_6))) ? var_15 : -var_7))));
                    var_30 = (min(var_30, ((min(var_8, ((((max(250, 250))) ? var_14 : var_0)))))));
                }
            }
        }

        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            arr_36 [i_9] [i_9] [i_9] = (min(((var_4 ? var_2 : var_18)), (!-3651005959495782142)));
            var_31 *= -var_2;
            var_32 = (!1307510404);
            arr_37 [i_0] [i_9] [i_9] = ((var_16 ? var_1 : var_10));
        }
    }
    for (int i_10 = 4; i_10 < 12;i_10 += 1)
    {
        arr_40 [i_10 - 2] = (max((max(var_5, var_8)), ((min(var_7, var_4)))));
        arr_41 [i_10] = min(((((min(var_15, var_3))) ? var_10 : (((var_6 ? var_17 : var_12))))), -var_13);
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    var_33 = ((!((min(var_14, var_7)))));

                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {

                        for (int i_15 = 1; i_15 < 9;i_15 += 1)
                        {
                            var_34 = var_2;
                            arr_58 [i_12] [i_13] [i_14] [i_15] |= var_6;
                        }
                        /* vectorizable */
                        for (int i_16 = 1; i_16 < 1;i_16 += 1) /* same iter space */
                        {
                            arr_61 [i_11] [i_12] [i_12] [i_16] [i_14] [i_14] [i_16] = var_17;
                            var_35 |= (!var_17);
                            var_36 |= (var_16 ? var_5 : var_16);
                            arr_62 [i_11] [i_16] [i_13] [i_14] [1] [i_16] [11] = ((450030784377873236 ? 137170518016 : 2147483647));
                        }
                        for (int i_17 = 1; i_17 < 1;i_17 += 1) /* same iter space */
                        {
                            var_37 = (min(var_37, var_13));
                            var_38 |= var_16;
                        }
                        var_39 = ((((max(1, (min(3901347381083515183, var_8))))) ? 250 : 250));
                    }
                    for (int i_18 = 2; i_18 < 9;i_18 += 1)
                    {
                        var_40 *= (min((min(var_18, var_17)), ((max(268435456, -2013)))));
                        arr_68 [i_11] [i_12] [i_13] [i_18 + 3] |= var_12;
                        var_41 = max(((((max(-2, 6))) ? ((var_14 ? var_12 : var_11)) : ((max(var_17, var_5))))), ((max(var_4, var_5))));
                    }
                }
            }
        }
        arr_69 [8] [7] = ((((max(var_18, var_1))) ? ((min(var_16, var_11))) : (min(var_18, var_5))));
        arr_70 [i_11] [i_11] = min(((-var_15 ? (~var_0) : var_14)), (min(var_10, (~var_10))));
        /* LoopNest 2 */
        for (int i_19 = 4; i_19 < 10;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 12;i_20 += 1)
            {
                {

                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {

                        for (int i_22 = 4; i_22 < 10;i_22 += 1)
                        {
                            arr_81 [i_11] [i_19 - 3] [10] [i_19] [i_22 - 4] = var_2;
                            arr_82 [i_20] [i_21] [i_20] [i_19 - 4] [i_20] &= var_9;
                            arr_83 [i_11] [i_19] [i_20] [i_19] [i_22] = (((~var_8) ? (max(var_8, var_10)) : ((((!(((var_11 ? var_11 : var_7)))))))));
                        }
                        for (int i_23 = 1; i_23 < 10;i_23 += 1)
                        {
                            var_42 = (min(var_42, (((-((var_5 ? var_13 : var_7)))))));
                            var_43 = (max((~var_11), (~var_7)));
                        }
                        for (int i_24 = 3; i_24 < 8;i_24 += 1) /* same iter space */
                        {
                            var_44 ^= ((!(((var_18 ? var_2 : var_14)))));
                            var_45 -= ((-(max(var_17, var_10))));
                        }
                        for (int i_25 = 3; i_25 < 8;i_25 += 1) /* same iter space */
                        {
                            var_46 = (max(var_46, ((max((min((max(var_18, var_8)), var_1)), ((max(var_6, var_0))))))));
                            var_47 = (59 ? (!-43) : (min(48, 0)));
                        }
                        var_48 = max((min(var_8, var_0)), (((var_10 ? var_9 : var_4))));
                        arr_93 [i_11] [i_19 + 2] [i_20] [i_21] [i_19] [3] = (((((-((2898709140 ? 250 : 0))))) ? (min((~var_1), (min(var_3, var_2)))) : var_11));
                    }
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 12;i_26 += 1)
                    {
                        for (int i_27 = 2; i_27 < 11;i_27 += 1)
                        {
                            {
                                arr_98 [i_11] [3] [i_19] [i_20] [i_26] [i_27] = (max(((min(var_2, var_6))), (max((min(var_0, var_18)), var_12))));
                                var_49 = var_7;
                                var_50 = (max(var_10, ((max(var_12, var_7)))));
                            }
                        }
                    }
                    var_51 ^= (max((!var_4), (min(var_9, var_18))));
                    arr_99 [i_19] [i_11] = (min(((min(-106, 2013))), var_16));
                    arr_100 [i_11] [i_19] [i_11] = (max(((((max(var_5, var_9))) ? var_10 : var_18)), (~-11008)));
                }
            }
        }
    }
    var_52 = ((((min((min(var_17, var_3)), (min(var_16, var_5))))) ? var_5 : var_17));
    var_53 = var_9;
    #pragma endscop
}
