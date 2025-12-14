/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((max(var_3, var_17)), var_12));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_21 *= (min((max(((~(arr_0 [i_0 + 1]))), var_3)), (((-(arr_1 [i_0] [i_0 - 1]))))));

            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                var_22 -= 10;
                arr_10 [i_2] [i_0] [i_2] [i_0] = (arr_0 [i_0]);
                var_23 |= (min(var_8, (max(var_7, (arr_5 [i_2] [i_1] [i_1])))));
            }
            var_24 += 79499183;
        }
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_20 [i_0] [8] [12] [i_4 - 1] [i_4] [i_4 - 1] = 0;
                            var_25 = 255;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_26 = (arr_9 [3] [2]);
                            var_27 = (max((max((arr_1 [i_0] [i_0 + 1]), -3384)), var_4));
                        }
                    }
                }
            }
            arr_31 [0] [0] [0] |= var_1;
        }
        var_28 = ((max(var_13, ((min(var_6, 255))))));
        arr_32 [i_0] = var_6;
        var_29 = (arr_18 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1]);
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_30 = ((6022 ? 88 : 2778));
                    arr_41 [i_10] [i_11] [8] = ((min((arr_35 [i_11 - 1]), var_5)));
                }
            }
        }
        var_31 = var_13;
        arr_42 [i_10] [i_10] = (max(((min((arr_37 [i_10] [i_10] [i_10]), -17066))), (max((arr_37 [i_10] [i_10] [i_10]), (arr_33 [i_10])))));
        arr_43 [i_10] [20] = ((min((arr_40 [i_10] [i_10] [i_10] [i_10]), (max((arr_37 [i_10] [i_10] [i_10]), 15558011233306906397)))) + (arr_37 [i_10] [i_10] [i_10]));
        arr_44 [i_10] [i_10] = (max((max(((min(var_0, (arr_40 [5] [i_10] [i_10] [17])))), (min(var_4, 2924473493231305879)))), ((max(4215468106, (((~(arr_39 [i_10] [i_10] [i_10] [i_10])))))))));
    }

    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        var_32 = (min(var_10, var_5));
        var_33 = min((arr_16 [i_13] [i_13] [i_13] [i_13]), (max(var_18, (~106))));
    }
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                {
                    var_34 &= var_2;
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        for (int i_18 = 4; i_18 < 13;i_18 += 1)
                        {
                            {
                                var_35 &= 2425562930895215912;
                                arr_59 [i_15] [2] [i_18] [6] &= var_9;
                            }
                        }
                    }
                }
            }
        }

        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            arr_62 [i_19] [i_14] = var_0;
            arr_63 [i_14] [i_14] = (max(2908064842707147367, var_8));
        }
        for (int i_20 = 1; i_20 < 1;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 3; i_21 < 11;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 14;i_22 += 1)
                {
                    {

                        for (int i_23 = 0; i_23 < 14;i_23 += 1) /* same iter space */
                        {
                            var_36 = (arr_71 [i_23] [i_22] [i_22] [i_21] [8] [i_14]);
                            var_37 = max((((!((max(var_17, (arr_11 [1] [7] [i_21]))))))), (max((arr_17 [i_23] [i_22] [10] [13] [10]), ((min(1, var_16))))));
                        }
                        for (int i_24 = 0; i_24 < 14;i_24 += 1) /* same iter space */
                        {
                            arr_76 [i_20] [i_22] [i_21] [6] [i_24] [i_14] [2] &= ((~(max(79499183, 17052))));
                            arr_77 [13] [i_20 - 1] [12] [13] [13] = -61;
                        }
                        for (int i_25 = 0; i_25 < 14;i_25 += 1) /* same iter space */
                        {
                            arr_80 [i_22] [i_22] [i_22] [i_22] [i_22] = var_19;
                            arr_81 [i_14] [i_14] [i_14] [i_14] [3] = (-(arr_69 [i_14] [i_14] [i_20] [i_21] [i_21] [i_14]));
                            var_38 = -2779;
                        }
                        var_39 = var_16;
                        var_40 -= (((min(1, (arr_74 [i_14])))));
                        var_41 = (arr_34 [i_14]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_26 = 1; i_26 < 12;i_26 += 1)
            {
                for (int i_27 = 2; i_27 < 13;i_27 += 1)
                {
                    {
                        arr_87 [i_26] [i_26 + 2] [i_26 + 1] [i_26] = (max(61594, 1012276692405284402));
                        var_42 = (min(7750, -1567452566));
                        var_43 = ((-(arr_74 [i_27])));
                        var_44 |= ((var_16 ? ((~(arr_84 [i_14] [i_14]))) : var_16));
                        arr_88 [i_14] [i_14] [2] [i_26] [i_14] &= ((((((((max((arr_55 [i_20] [i_20] [i_14]), (arr_13 [i_14] [i_14] [i_14]))))) ^ (~824633720832)))) ? var_6 : (~-27177)));
                    }
                }
            }
        }
        for (int i_28 = 2; i_28 < 12;i_28 += 1)
        {

            for (int i_29 = 1; i_29 < 11;i_29 += 1)
            {
                arr_96 [i_29 + 3] [i_28] [0] = -250;
                arr_97 [i_28] [i_29] = (!-15063);
            }

            for (int i_30 = 2; i_30 < 12;i_30 += 1)
            {
                var_45 = 2784;
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 14;i_31 += 1)
                {
                    for (int i_32 = 0; i_32 < 14;i_32 += 1)
                    {
                        {
                            arr_108 [i_14] [i_28 + 1] [i_28] [i_28 + 1] [i_32] = (min((((var_2 ? (~2977) : ((min((arr_36 [i_14]), var_5)))))), ((min(var_5, 144)))));
                            var_46 += (max(56, (arr_95 [i_31] [i_28])));
                            arr_109 [i_28] [i_28] [i_28] [i_28] = -101;
                        }
                    }
                }
            }
            for (int i_33 = 0; i_33 < 14;i_33 += 1)
            {
                /* LoopNest 2 */
                for (int i_34 = 0; i_34 < 14;i_34 += 1)
                {
                    for (int i_35 = 4; i_35 < 12;i_35 += 1)
                    {
                        {
                            arr_120 [i_28] [i_33] [i_28] = (max(-2782, ((var_17 ? ((max((arr_52 [2] [i_34] [i_35]), (arr_84 [i_35] [i_14])))) : (arr_40 [i_35] [i_33] [1] [i_14])))));
                            var_47 = (~3413912037);
                            var_48 += (arr_5 [i_14] [i_14] [i_14]);
                            arr_121 [i_28] = var_4;
                        }
                    }
                }
                var_49 &= ((((18505 ? 1857482150 : (arr_98 [i_33] [i_28] [i_33] [8])))));
                arr_122 [i_28] [i_28 - 1] [i_28 - 1] [i_28] = ((((min((max(-127, 832644069)), (~var_14)))) || (arr_116 [i_14] [i_28] [i_14] [i_14] [i_14] [i_14] [9])));
            }
        }
    }
    for (int i_36 = 0; i_36 < 11;i_36 += 1)
    {
        arr_125 [i_36] [3] = (max((~1857482150), 9733));
        arr_126 [4] = (arr_26 [i_36] [i_36] [i_36]);
        var_50 -= (min(((max((arr_15 [1] [2] [13]), (arr_35 [i_36])))), var_2));
    }
    var_51 = var_7;
    var_52 *= ((-((var_10 ? 22804 : 0))));
    #pragma endscop
}
