/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_13 [13] [i_0] [i_2 + 2] [i_3] [i_0 + 2] = var_12;
                            var_17 = (arr_12 [i_0] [i_0] [i_2] [16] [i_3] [i_4 - 2] [i_0]);
                        }
                    }
                }
            }

            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {

                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        var_18 = 3837812062;
                        var_19 = (var_9 || var_3);
                        var_20 |= var_4;
                        var_21 = (arr_15 [i_0] [i_0]);
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_22 = 8697;
                        var_23 = (max(var_23, var_6));
                        var_24 = (-(arr_1 [i_0]));
                        var_25 = (min(var_25, (((~(arr_4 [i_0] [i_0]))))));
                        var_26 *= (arr_3 [i_1 + 2] [i_5 - 1] [i_8]);
                    }
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        arr_24 [i_0] [i_1] [i_0] [i_6] [i_9] = (((((~var_0) + 2147483647)) << (((((~var_8) + 1604129716487872726)) - 23))));
                        var_27 ^= ((var_1 ? (arr_23 [i_9] [0] [i_9 + 3] [i_9 - 1] [i_9] [i_9]) : ((-(arr_4 [i_0] [i_1 + 2])))));
                        var_28 = (arr_0 [i_9]);
                        var_29 ^= ((!(arr_16 [16] [i_1 - 1] [i_5 - 1] [i_6])));
                        var_30 = -var_10;
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_31 = var_4;
                        var_32 = (arr_22 [10] [3] [i_5 - 1] [i_0] [i_6] [i_5 - 1] [i_1 + 2]);
                    }
                    var_33 = ((+(((arr_6 [i_0 + 2] [i_1 + 1] [i_5 - 1]) ? 457155232 : -6312))));
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_34 = ((-(arr_0 [i_5])));
                        arr_37 [i_0] [i_1 + 1] [i_0] = (arr_19 [i_0] [i_5 - 1] [i_1 + 1] [i_12] [i_12] [i_12] [i_12]);
                    }
                    var_35 = (max(var_35, 24));

                    for (int i_13 = 3; i_13 < 18;i_13 += 1)
                    {
                        var_36 += (-0 || var_1);
                        var_37 = (arr_19 [i_0] [i_0 + 2] [i_1 - 1] [i_5 - 1] [i_5] [i_11] [i_13 - 3]);
                        var_38 = var_10;
                    }
                }
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    var_39 = (arr_14 [i_14] [i_1 + 2] [i_0]);
                    var_40 = (!var_14);
                    var_41 = ((-(arr_27 [i_1] [i_1 + 2] [2] [i_1 + 2] [i_1 + 1] [i_1] [i_1])));
                    var_42 = var_13;
                }
                var_43 *= (((((var_4 - (arr_9 [i_0] [i_0 - 1] [i_0] [8] [i_0] [i_0 + 2])))) ? var_15 : (arr_12 [i_0] [i_0] [i_0 + 1] [i_1 - 1] [i_5 - 1] [i_5 - 1] [14])));
            }
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                var_44 -= var_3;
                var_45 = (arr_42 [i_0] [i_1 - 1] [i_15] [i_0 + 2]);
                arr_48 [i_0] [i_1] [i_15] = ((((0 ? 4088 : (arr_42 [i_0] [i_1] [i_15] [3]))) % (arr_23 [1] [i_0] [i_1 + 1] [1] [i_1 + 2] [i_1])));
            }
            for (int i_16 = 1; i_16 < 17;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 19;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {
                        {
                            var_46 = 21;
                            var_47 *= var_13;
                            var_48 = var_3;
                        }
                    }
                }
                var_49 = (max(var_49, (((var_12 / var_15) - (arr_50 [i_1 + 2] [i_0 + 2])))));
                var_50 |= (((((arr_57 [i_16 + 1] [i_0 + 2] [0] [i_16] [i_1 - 1] [i_1 + 2] [14]) + 2147483647)) << (var_2 - 25807)));

                for (int i_19 = 4; i_19 < 15;i_19 += 1)
                {

                    for (int i_20 = 2; i_20 < 15;i_20 += 1)
                    {
                        var_51 ^= var_11;
                        var_52 = ((~(arr_45 [i_1 + 1] [i_1 + 1] [i_20])));
                    }
                    var_53 = 457155237;
                    var_54 = (!var_0);
                    var_55 = ((5410223589559964650 ? 3837812062 : 0));
                    var_56 = (-127 - 1);
                }
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 19;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 19;i_22 += 1)
                    {
                        {
                            var_57 = (min(var_57, var_12));
                            var_58 = (~var_13);
                            arr_69 [i_21] [i_1 - 1] [i_16] [i_0] [i_22] [i_1 + 2] [i_21] = (((arr_64 [i_0] [i_1 + 2] [i_16] [i_0]) != 100));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_23 = 2; i_23 < 18;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 19;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 19;i_25 += 1)
                    {
                        {
                            var_59 = (var_7 / -var_11);
                            var_60 = ((-var_13 ? var_15 : (((24 ? -17941 : -113)))));
                            arr_79 [i_0 - 1] [i_1 + 1] [i_0] [i_24] [i_25] [i_0 + 1] [18] = var_4;
                        }
                    }
                }
            }
            var_61 = (min(var_61, (arr_21 [i_1 + 1] [i_1] [i_1] [i_1 + 2] [i_0 - 1] [i_0])));
            var_62 = (!var_10);
        }
        var_63 = (((arr_66 [i_0]) ? (arr_62 [i_0] [i_0] [i_0 + 1] [i_0]) : (((arr_30 [i_0 + 1] [1] [i_0 - 1] [1] [i_0]) / var_4))));
    }
    for (int i_26 = 4; i_26 < 18;i_26 += 1)
    {
        var_64 = (min(((max((!var_8), var_11))), (((arr_80 [i_26 - 3] [i_26]) | 3))));
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 20;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 20;i_28 += 1)
            {
                {
                    var_65 = ((((max(235, var_9))) > (((max((arr_82 [i_26 - 3] [i_27]), (arr_82 [i_26 - 1] [15])))))));
                    /* LoopNest 2 */
                    for (int i_29 = 2; i_29 < 17;i_29 += 1)
                    {
                        for (int i_30 = 0; i_30 < 20;i_30 += 1)
                        {
                            {
                                var_66 += var_0;
                                var_67 = (max(var_67, (arr_80 [i_26] [i_26 - 4])));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_31 = 1; i_31 < 18;i_31 += 1)
                    {
                        var_68 = var_2;
                        arr_96 [i_26] [i_27] [i_28] [15] = ((~(arr_81 [i_31 + 2] [i_26 + 1])));
                    }
                    for (int i_32 = 1; i_32 < 19;i_32 += 1)
                    {
                        var_69 -= var_8;
                        var_70 += var_10;
                        var_71 = (max(((((6289 <= 457155262) < var_11))), (max(((max(var_0, (arr_87 [i_28])))), (max(var_13, var_3))))));
                    }
                }
            }
        }
        arr_99 [i_26] [i_26 + 1] = ((((arr_86 [i_26] [i_26 - 4] [i_26 + 2] [i_26]) ? (~var_8) : var_4)));
    }
    for (int i_33 = 0; i_33 < 22;i_33 += 1)
    {
        var_72 = (((max(((max(var_5, (arr_100 [i_33])))), (min((arr_101 [i_33]), var_15)))) * ((((arr_101 [i_33]) / var_7)))));
        /* LoopNest 3 */
        for (int i_34 = 0; i_34 < 22;i_34 += 1)
        {
            for (int i_35 = 0; i_35 < 22;i_35 += 1)
            {
                for (int i_36 = 1; i_36 < 20;i_36 += 1)
                {
                    {
                        var_73 = (max((arr_107 [i_33] [i_35] [i_36 + 2] [i_35]), (((!(arr_110 [i_33] [i_36 - 1] [i_36 + 1] [i_35] [i_33]))))));
                        var_74 = 1754366185;
                    }
                }
            }
        }
    }
    #pragma endscop
}
