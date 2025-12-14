/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_13 = var_2;
        var_14 = (((((-22 ? -18 : 1))) ? var_2 : ((4 ? -3 : var_12))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_15 = ((var_3 ? var_3 : ((var_1 ? var_11 : (((var_3 ? var_2 : var_1)))))));
        arr_7 [i_1] = ((var_10 ? ((var_4 ? var_11 : var_2)) : (((var_2 ? var_8 : -28)))));
        var_16 |= var_4;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_17 = (((((var_12 ? var_7 : -21))) ? (((var_11 ? ((18446744073709551615 ? 1 : var_5)) : 1))) : ((var_7 ? 6 : ((1 ? var_10 : var_4))))));
                    var_18 -= var_5;
                }
            }
        }
        arr_14 [i_1] = ((((var_11 ? -21 : var_9))) ? var_12 : var_0);
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_19 = ((((var_0 ? var_8 : var_3))) ? var_10 : var_7);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_20 = var_1;
                            var_21 -= var_2;
                        }
                    }
                }
                var_22 = var_8;
                var_23 = ((57 ? var_10 : var_11));
            }
            var_24 = ((var_3 ? var_6 : var_5));
            var_25 = var_1;
        }
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            arr_30 [i_4] [4] [5] = (var_11 ? var_12 : var_11);
            arr_31 [1] [i_9] = var_2;
        }

        for (int i_10 = 2; i_10 < 15;i_10 += 1)
        {
            var_26 = var_3;
            var_27 = ((2863496368 ? ((var_2 ? var_10 : var_6)) : var_2));
            var_28 = ((((((((var_10 ? 1 : 17))) ? var_7 : var_7))) ? var_1 : ((var_2 ? var_7 : var_3))));
            arr_34 [i_4] = ((var_4 ? var_8 : ((var_1 ? var_7 : var_5))));
        }
        for (int i_11 = 1; i_11 < 13;i_11 += 1)
        {
            arr_38 [i_4] [i_11] [i_11] = ((27 ? 1 : 562949953421311));
            var_29 = var_11;
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_30 = ((11361246453098704431 ? var_2 : ((var_8 ? var_9 : var_4))));
                            arr_50 [14] [i_11] [14] [i_11] [i_14] [i_11] [i_4] = (((((var_8 ? 18446744073709551615 : var_3))) ? ((-394988937 ? var_10 : var_3)) : var_5));
                        }
                    }
                }
            }
            arr_51 [i_11] [i_11] = (var_11 ? (((var_10 ? (((394988943 ? var_6 : var_5))) : ((0 ? var_11 : var_2))))) : 7004218299003817263);
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            var_31 -= (((((var_5 ? var_6 : var_2))) ? var_2 : 36959));

            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                var_32 = ((var_10 ? 1 : var_0));

                for (int i_17 = 0; i_17 < 16;i_17 += 1)
                {
                    var_33 = var_3;
                    arr_59 [13] [i_15] [i_16] [i_17] = (-12 ? var_5 : var_0);
                    var_34 = ((var_11 ? var_10 : var_5));
                }
            }
            for (int i_18 = 0; i_18 < 16;i_18 += 1)
            {
                var_35 = ((-64 ? var_1 : var_5));
                var_36 = ((6 ? var_5 : var_3));

                for (int i_19 = 0; i_19 < 16;i_19 += 1)
                {
                    arr_65 [i_15] [i_15] &= ((var_0 ? var_10 : var_9));
                    arr_66 [i_4] [i_15] [i_15] [i_18] [i_18] [i_4] = 145;
                }
                for (int i_20 = 0; i_20 < 16;i_20 += 1)
                {
                    var_37 = (min(var_37, (((var_12 ? var_9 : var_8)))));
                    var_38 = ((var_8 ? 4545889297652151067 : var_12));
                }
                var_39 = ((var_5 ? var_12 : -1));
            }
        }
        for (int i_21 = 2; i_21 < 15;i_21 += 1)
        {
            var_40 = ((((var_11 ? var_10 : var_1))) ? -7 : 1);

            for (int i_22 = 0; i_22 < 16;i_22 += 1)
            {
                /* LoopNest 2 */
                for (int i_23 = 1; i_23 < 15;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 16;i_24 += 1)
                    {
                        {
                            var_41 = (((((var_5 ? 1 : var_1))) ? (((var_2 ? var_4 : 4294967290))) : ((1 ? var_12 : var_11))));
                            var_42 = (112 ? 36970 : 32767);
                            var_43 = (max(var_43, ((((((11200319158784455255 ? -12 : 4294967295))) ? ((var_11 ? var_3 : var_12)) : ((36975 ? 2291603224 : var_12)))))));
                        }
                    }
                }
                arr_77 [i_4] [i_21] [8] [i_4] = (((((-237406651 ? -12 : 12252185862420752605))) ? 233990382 : var_7));
                var_44 = (var_4 ? var_5 : ((var_7 ? 36 : -6941400296597292942)));
                arr_78 [i_4] [i_21] = (((((var_2 ? var_6 : var_7))) ? ((192 ? -6941400296597292942 : 65532)) : (((16892 ? var_3 : var_12)))));

                for (int i_25 = 1; i_25 < 14;i_25 += 1)
                {
                    var_45 = (((((256 ? 238 : 2147483639))) ? ((var_8 ? var_9 : var_0)) : ((213 ? var_0 : var_0))));
                    arr_81 [i_21] [i_21] [i_21] = (((((var_10 ? var_11 : var_6))) ? var_2 : ((var_1 ? 65534 : var_2))));
                    var_46 -= (((((var_0 ? var_12 : var_8))) ? var_1 : ((var_10 ? var_2 : var_6))));
                    arr_82 [i_21] [5] [i_25] = 127;
                }
                for (int i_26 = 0; i_26 < 16;i_26 += 1)
                {
                    var_47 = (((((var_8 ? 21668 : var_3))) ? var_10 : ((((((var_2 ? var_12 : -3358676364320147922))) ? -6941400296597292942 : var_12)))));
                    var_48 = 1;
                    var_49 = (((((91 ? var_9 : var_8))) ? ((var_12 ? var_0 : var_10)) : ((var_12 ? var_10 : var_7))));
                    var_50 = (((((var_3 ? var_2 : var_1))) ? (((65535 ? 9 : 1))) : ((0 ? 4294967295 : var_5))));
                }
            }

            for (int i_27 = 0; i_27 < 16;i_27 += 1)
            {
                var_51 = var_6;

                for (int i_28 = 0; i_28 < 16;i_28 += 1)
                {

                    for (int i_29 = 0; i_29 < 1;i_29 += 1)
                    {
                        arr_97 [i_21] [i_28] [i_27] [i_27] [i_4] [i_21 - 2] [i_21] = (((((var_4 ? var_12 : var_8))) ? ((var_11 ? var_3 : var_6)) : ((4 ? var_8 : var_3))));
                        var_52 = var_3;
                        arr_98 [i_4] [9] [i_4] [i_4] [1] [i_21] [9] = var_9;
                        var_53 = var_4;
                        var_54 = var_5;
                    }

                    /* vectorizable */
                    for (int i_30 = 1; i_30 < 14;i_30 += 1)
                    {
                        var_55 = ((var_12 ? 11238717862182020740 : 576460752302899200));
                        var_56 = ((4375310846297722204 ? 31 : 2147483639));
                        var_57 -= var_1;
                        var_58 = var_2;
                        var_59 = (var_6 ? 1791772065 : var_7);
                    }
                }
                for (int i_31 = 3; i_31 < 13;i_31 += 1)
                {
                    var_60 = var_8;
                    var_61 = var_6;
                    var_62 -= (((((195 ? var_2 : var_10))) ? ((var_4 ? ((1127847754177037546 ? var_11 : var_9)) : var_9)) : ((var_2 ? 6279979791909809014 : var_0))));
                }
                /* vectorizable */
                for (int i_32 = 0; i_32 < 16;i_32 += 1)
                {
                    var_63 = ((var_11 ? var_2 : ((4294967291 ? 1 : var_6))));
                    var_64 = ((var_12 ? 25172 : 40));
                    arr_107 [i_4] [i_21] [i_4] = ((var_5 ? var_6 : var_6));
                    var_65 = ((var_12 ? var_11 : var_4));
                }
            }
            for (int i_33 = 2; i_33 < 12;i_33 += 1)
            {
                arr_112 [i_21] [i_21] = var_11;
                arr_113 [i_21] [i_21] [i_33] [i_33 + 4] = var_10;
                var_66 = (var_9 ? var_6 : ((42 ? var_5 : var_7)));
                var_67 = var_12;
            }
        }
    }
    var_68 = (min(var_68, var_4));
    #pragma endscop
}
