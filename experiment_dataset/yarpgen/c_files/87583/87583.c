/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(81, 1));
    var_19 = (max(var_19, (max(1, (max(var_8, var_2))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_20 = var_16;
        arr_3 [i_0] = var_9;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_21 = ((var_17 ? ((min((min(var_0, var_5)), var_4))) : ((81 ? 9 : 0))));
            arr_10 [i_1] = (max(((min(var_0, var_9))), var_1));
            arr_11 [12] [i_2] &= 18;
            arr_12 [i_1] [i_1] = ((((min(8, var_6))) ? var_10 : (min(var_2, 1954601286661733766))));
        }
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            var_22 = (min((min(-3097231774585623727, var_5)), (((254 ? var_13 : var_2)))));
            var_23 = (min((((var_5 ? var_14 : var_1))), (min(var_17, var_10))));
            var_24 *= (min(var_12, (-104 | 1)));
            arr_16 [i_1] [19] [i_1] = (max(7657232874261684689, var_14));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
            {
                var_25 = var_3;
                var_26 = var_1;
                arr_21 [i_1] [i_1] [15] = (max(var_7, (min((min(var_16, var_15)), 1))));
            }
            for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
            {
                var_27 = (min(((var_16 ? var_10 : 1)), var_0));
                var_28 = ((254 ? 1 : (min(((min(var_9, -8352348907512119205))), var_11))));
                arr_25 [i_1] [8] [i_6] = (min((((((0 ? var_14 : var_9))) ? 187 : (max(var_6, var_11)))), ((min(var_2, var_0)))));
            }
            arr_26 [i_1] = 1;
            arr_27 [i_1] [i_4] = (max((((var_5 ? 1 : var_14))), (max(var_2, var_17))));
            var_29 = ((((max(var_8, -20813))) ? var_17 : var_16));
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_30 [i_1] [i_1] [i_1] = var_11;
            arr_31 [i_1] [i_1] = 65535;
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_34 [i_1] = ((var_11 ? ((var_10 ? (((min(var_14, 142)))) : ((11604 ? var_2 : var_1)))) : var_13));
            var_30 = (min(var_8, var_2));

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            var_31 *= (min((min(var_8, var_1)), ((min(var_3, var_6)))));
                            arr_42 [12] [14] [i_9] [i_1] [i_11] = (var_17 | 1);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 17;i_13 += 1)
                    {
                        {
                            var_32 = ((var_4 ? ((57064 ? (max(var_17, var_15)) : var_15)) : (((((max(var_1, var_9))) ? ((min(var_7, var_13))) : ((1 ? var_0 : 2)))))));
                            var_33 = (min(var_33, ((((((-1695893336 ? 1 : var_17))) ? var_8 : var_7)))));
                            arr_47 [i_1] [i_1] = 35;
                            var_34 = (min(-4358016576572522212, var_1));
                            arr_48 [i_1] [i_8] [i_1] [i_12] [i_13 + 1] = var_0;
                        }
                    }
                }
                var_35 = (min(var_35, var_17));
            }
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                arr_52 [i_1] = var_0;
                arr_53 [i_1] [i_14] = 31;
            }
            /* vectorizable */
            for (int i_15 = 1; i_15 < 19;i_15 += 1)
            {

                for (int i_16 = 3; i_16 < 18;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        arr_60 [i_1] [i_8] [i_15] [i_16 + 2] [i_1] = var_17;
                        arr_61 [i_1] [i_8] [i_15] [i_8] [i_8] [i_1] = var_6;
                    }
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        arr_64 [i_1] [i_8] [i_8] [i_8] [i_8] = var_2;
                        var_36 += var_7;
                        arr_65 [i_1] [i_1] [i_1] [i_1] = ((var_17 ? var_15 : 255));
                    }
                    var_37 = (max(var_37, var_6));
                    var_38 = (min(var_38, var_2));

                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        arr_69 [i_8] [i_15] [i_1] = ((var_15 ? var_0 : var_0));
                        var_39 = ((var_1 ? var_0 : 255));
                        var_40 = (max(var_40, -57));
                        arr_70 [i_1] [i_1] [i_1] [i_8] [i_15] [i_16] [i_1] = ((var_8 >> (var_0 + 16885)));
                    }
                    for (int i_20 = 1; i_20 < 19;i_20 += 1)
                    {
                        var_41 = var_15;
                        var_42 = ((1060965578954091736 ? ((511 ? -34 : var_7)) : var_14));
                        arr_73 [i_1] = var_14;
                    }
                    var_43 = (min(var_43, var_9));
                }
                for (int i_21 = 4; i_21 < 19;i_21 += 1)
                {

                    for (int i_22 = 1; i_22 < 17;i_22 += 1)
                    {
                        arr_78 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = var_7;
                        arr_79 [18] [i_1] [i_15] [i_1] [i_1] = 31166;
                    }
                    arr_80 [i_1] = (var_1 ? var_10 : var_14);
                    var_44 = ((var_11 - (((12714 ? var_13 : var_1)))));
                }
                var_45 = (min(var_45, var_16));
                var_46 = (min(var_46, -122));
            }
            for (int i_23 = 1; i_23 < 19;i_23 += 1)
            {
                var_47 += (min(((min(var_14, var_2))), (min(((min(var_15, var_8))), (max(-122, 145))))));

                /* vectorizable */
                for (int i_24 = 0; i_24 < 20;i_24 += 1)
                {
                    arr_87 [2] [2] &= var_11;
                    var_48 = (var_9 || var_15);
                }
                for (int i_25 = 0; i_25 < 20;i_25 += 1)
                {
                    arr_90 [i_1] [i_23 - 1] [i_1] [i_1] = (min(var_8, var_4));
                    var_49 ^= 46107;
                    var_50 = (min(var_50, var_8));
                    var_51 = var_2;
                }
                /* vectorizable */
                for (int i_26 = 3; i_26 < 16;i_26 += 1)
                {
                    arr_95 [i_8] [i_1] [i_23 + 1] [i_1] = (var_16 ^ 31);
                    var_52 = ((var_14 ? ((121 ? var_10 : var_2)) : var_14));
                    var_53 = (min(var_53, (((var_16 ? var_0 : var_17)))));

                    for (int i_27 = 0; i_27 < 20;i_27 += 1)
                    {
                        arr_100 [i_1] [i_8] [i_23 - 1] [i_23 - 1] [i_1] [i_23 - 1] = 1;
                        arr_101 [i_1] [i_1] [i_1] [i_1] [0] [i_1] = ((var_16 ? var_17 : var_14));
                    }
                    var_54 += (var_0 ? var_17 : var_11);
                }
                for (int i_28 = 0; i_28 < 20;i_28 += 1)
                {
                    var_55 = (max(var_55, 1));
                    var_56 = max((((min(var_3, var_1)))), var_17);
                    arr_105 [i_1] [i_1] [0] [i_1] [i_1] [7] = (max(((min(var_16, (max(1, var_12))))), (min(var_1, var_5))));

                    for (int i_29 = 0; i_29 < 20;i_29 += 1) /* same iter space */
                    {
                        var_57 -= (min((((var_2 ? -120 : -91))), (max(var_14, var_17))));
                        arr_108 [i_29] [i_1] [0] [i_1] [i_1] = var_4;
                        var_58 = var_16;
                    }
                    for (int i_30 = 0; i_30 < 20;i_30 += 1) /* same iter space */
                    {
                        arr_111 [i_1] [16] [16] [i_23] [16] [i_1] [i_30] = var_2;
                        var_59 *= var_11;
                        var_60 ^= ((var_4 * ((min(1, (min(0, 81)))))));
                    }
                    var_61 += var_12;
                }
                arr_112 [i_1] [i_8] [i_8] [i_23 - 1] = (min(((min(-6650, var_14))), (min(var_17, var_15))));
            }
        }
        for (int i_31 = 3; i_31 < 18;i_31 += 1)
        {

            for (int i_32 = 2; i_32 < 19;i_32 += 1) /* same iter space */
            {
                arr_119 [i_31] [i_31] [i_1] [i_31] = ((min(var_1, (((35 ? var_4 : var_14))))));
                arr_120 [i_1] [14] [18] [i_32] = (min((min(var_16, (min(63, 1688425141)))), var_10));
            }
            for (int i_33 = 2; i_33 < 19;i_33 += 1) /* same iter space */
            {
                arr_123 [i_33 - 1] [i_1] [i_1] [i_1] = (min((min(var_6, var_17)), ((min(var_3, ((10 ? var_6 : var_9)))))));
                arr_124 [i_1] [i_31] = var_12;
                arr_125 [i_1] [i_1] = 15;
            }
            for (int i_34 = 2; i_34 < 19;i_34 += 1) /* same iter space */
            {
                arr_129 [i_1] [i_1] [i_34] [i_1] = (min(var_10, (((var_10 ? (((var_4 ? 0 : var_12))) : var_17)))));

                for (int i_35 = 0; i_35 < 20;i_35 += 1)
                {
                    arr_134 [i_1] [17] [i_1] [8] [i_1] = var_16;
                    arr_135 [0] [i_1] [i_34 - 1] [0] = ((var_4 ? (max(((min(-23, var_14))), ((10682148165501270500 ? 536297593 : var_2)))) : 10));
                    var_62 += ((var_9 ? (((max(((min(var_6, var_2))), var_5)))) : (max((((-20 ? var_16 : var_3))), (min(var_10, var_0))))));
                    var_63 = (min(var_63, ((((((5 ? var_10 : var_17))) ? ((((var_9 ? var_12 : var_11)) * 0)) : var_10)))));
                }
            }
            for (int i_36 = 2; i_36 < 19;i_36 += 1) /* same iter space */
            {

                for (int i_37 = 0; i_37 < 20;i_37 += 1) /* same iter space */
                {
                    var_64 += var_1;

                    for (int i_38 = 0; i_38 < 20;i_38 += 1)
                    {
                        arr_145 [i_1] [i_38] = 142;
                        arr_146 [i_1] = 1;
                    }
                    arr_147 [i_1] [i_31] [i_36] [i_37] = (max((min(var_2, var_11)), (((var_11 ? -94 : var_3)))));
                }
                for (int i_39 = 0; i_39 < 20;i_39 += 1) /* same iter space */
                {
                    arr_151 [i_36] [i_31] [i_36 - 1] [i_36] [i_39] &= 3064549855;
                    arr_152 [i_1] [i_31] [i_31] [i_31] = (min(var_1, 117));
                }
                arr_153 [i_1] = ((var_9 ? 59 : var_5));
            }
            /* LoopNest 2 */
            for (int i_40 = 0; i_40 < 1;i_40 += 1)
            {
                for (int i_41 = 2; i_41 < 19;i_41 += 1)
                {
                    {
                        arr_159 [i_1] [i_31] [i_1] [i_31] = (min(((((min(var_10, -32747))) ? 0 : (min(var_6, var_17)))), ((min(var_4, ((var_6 ? var_4 : 59)))))));
                        var_65 = var_7;
                    }
                }
            }
            var_66 *= (((((-269389028497676 ? var_2 : 117))) ? ((((min(var_6, var_4))) ? (((min(var_0, -19873)))) : var_17)) : ((min(((var_5 << (var_10 - 340712064105578155))), var_5)))));
        }
    }
    for (int i_42 = 0; i_42 < 20;i_42 += 1) /* same iter space */
    {
        arr_162 [i_42] = var_11;
        var_67 += (((((var_17 ? 54590 : var_6))) ? ((var_1 ? var_11 : var_2)) : var_3));
        var_68 = ((var_9 ? (min(16, var_3)) : 223));
        arr_163 [i_42] = (min((min(var_12, 7176183914203649470)), (max(((min(var_6, var_2))), var_17))));
        arr_164 [i_42] = var_6;
    }
    #pragma endscop
}
