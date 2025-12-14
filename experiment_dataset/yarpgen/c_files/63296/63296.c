/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            arr_11 [i_1] [i_3] [i_2] [i_1 - 3] [i_0] [i_1] = (!var_1);
                            var_20 = (((((var_18 ? var_7 : var_3))) ? var_13 : var_16));
                        }
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_21 &= (min((((((var_16 ? var_12 : var_16))) ? var_4 : var_11)), var_18));
                            var_22 = (~var_11);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_23 = ((var_16 ? ((var_7 ? var_2 : var_0)) : var_16));
                            var_24 = 4237096645;
                            arr_16 [i_1] = var_9;
                            var_25 = ((-((var_7 ? var_9 : var_19))));
                            var_26 &= var_3;
                        }
                        arr_17 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = var_9;
                    }
                }
            }
            var_27 = ((max(var_3, var_2)));
            var_28 = ((min(var_10, (((var_11 ? var_0 : var_19))))));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {

                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    var_29 = (((var_6 ? var_18 : var_18)));

                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_30 = (((var_5 ? var_7 : var_10)));
                        var_31 = var_11;
                        var_32 = (~var_6);
                        var_33 = var_18;
                    }
                    for (int i_10 = 2; i_10 < 22;i_10 += 1)
                    {
                        arr_29 [i_0] [i_1] [i_7] [i_8] [i_10] = (((var_14 ? var_4 : var_14)));
                        var_34 = var_1;
                        var_35 *= (!var_4);
                        var_36 += var_18;
                    }
                }
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    var_37 = var_16;
                    arr_32 [i_0] [18] [i_7] [i_11] [20] [i_1] = (!var_9);
                }
                for (int i_12 = 1; i_12 < 21;i_12 += 1)
                {
                    var_38 = var_0;

                    for (int i_13 = 4; i_13 < 21;i_13 += 1)
                    {
                        arr_37 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = var_2;
                        var_39 = var_15;
                        var_40 |= (~var_19);
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        var_41 = (var_3 ? 4237096645 : var_3);
                        arr_41 [i_1] [i_12 + 2] = var_19;
                        arr_42 [i_14] [i_1 + 3] [i_1] [i_7] = (((var_4 ? var_8 : var_19)));
                        var_42 = var_19;
                    }
                }
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    var_43 = (min(var_43, (~var_12)));
                    var_44 = var_10;
                    var_45 = var_10;

                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        var_46 *= var_11;
                        var_47 *= ((65535 ? ((var_11 ? var_15 : var_5)) : var_3));
                    }
                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        var_48 = var_9;
                        var_49 = (((~var_1) ? var_8 : ((var_15 ? var_5 : var_3))));
                        var_50 = (min(var_50, (((~(!var_12))))));
                    }
                    arr_52 [i_0] [i_1] [i_0] = (!var_1);
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 23;i_19 += 1)
                    {
                        {
                            var_51 = (min(var_51, var_19));
                            var_52 = var_6;
                            var_53 *= ((var_3 ? var_8 : var_0));
                        }
                    }
                }
            }
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                arr_60 [i_1] = (((min(var_13, 4237096648))));

                /* vectorizable */
                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    var_54 = ((var_0 ? 57870651 : var_8));
                    var_55 = ((~var_14) ? var_7 : var_9);
                    var_56 = var_17;
                    var_57 = var_11;
                }
                for (int i_22 = 0; i_22 < 23;i_22 += 1)
                {
                    var_58 = (max(var_58, (((!(!297216136))))));
                    var_59 = 59076800;
                    arr_68 [i_22] [i_20] [i_22] [i_22] [2] [i_0] &= ((min(var_7, var_15)));
                    var_60 = (~var_19);
                }
                var_61 = (!-123);
            }
            /* vectorizable */
            for (int i_23 = 0; i_23 < 23;i_23 += 1)
            {
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 23;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 23;i_25 += 1)
                    {
                        {
                            var_62 = ((4294967295 ? 1 : 34));
                            var_63 = var_3;
                            var_64 = ((var_12 ? var_3 : ((var_17 ? var_10 : var_6))));
                            var_65 |= -var_1;
                            arr_76 [i_0] [i_1 + 1] [i_25] [i_24] [i_25] |= (--35);
                        }
                    }
                }
                arr_77 [i_1] = var_15;
            }
            for (int i_26 = 1; i_26 < 20;i_26 += 1)
            {
                var_66 = (max(var_66, ((((((~(!var_14)))) ? var_0 : ((var_13 ? var_6 : var_19)))))));
                var_67 ^= var_17;
                var_68 = (min(var_0, ((-83 ? 14754 : -83))));
            }
        }
        var_69 = ((((var_0 ? var_12 : var_14))));
    }
    var_70 = 4294967295;
    /* LoopNest 3 */
    for (int i_27 = 0; i_27 < 24;i_27 += 1)
    {
        for (int i_28 = 1; i_28 < 23;i_28 += 1)
        {
            for (int i_29 = 1; i_29 < 23;i_29 += 1)
            {
                {
                    var_71 = ((var_14 ? (min((~var_5), (max(var_8, var_12)))) : ((max(((var_2 ? var_13 : var_17)), var_6)))));
                    var_72 = var_15;

                    /* vectorizable */
                    for (int i_30 = 0; i_30 < 24;i_30 += 1)
                    {

                        for (int i_31 = 0; i_31 < 24;i_31 += 1)
                        {
                            var_73 = var_16;
                            var_74 = var_14;
                        }
                        for (int i_32 = 0; i_32 < 1;i_32 += 1)
                        {
                            arr_99 [i_27] [i_27] [i_27] [i_29] = ((39020 ? 27 : -7054399441091824310));
                            var_75 = var_15;
                        }

                        for (int i_33 = 0; i_33 < 24;i_33 += 1)
                        {
                            var_76 = ((var_2 ? ((var_18 ? var_2 : var_15)) : ((var_13 ? var_17 : var_0))));
                            arr_103 [1] [1] [i_28] [i_29] [1] [i_33] [i_29] = var_15;
                        }
                        for (int i_34 = 0; i_34 < 24;i_34 += 1)
                        {
                            var_77 *= var_13;
                            arr_107 [i_29] [i_29] [i_29] [i_28] [i_29] = (~-35);
                        }
                        var_78 = var_6;
                    }
                    for (int i_35 = 0; i_35 < 24;i_35 += 1)
                    {
                        arr_110 [i_27] [i_29] [i_35] [i_29] = var_2;
                        arr_111 [i_29] [3] [3] [i_29] = -1811532296;
                        arr_112 [i_27] [2] [i_29 + 1] [i_29] [i_27] = ((max(var_14, (max(var_3, var_19)))));
                    }
                }
            }
        }
    }
    var_79 = (min(var_79, (!var_12)));
    #pragma endscop
}
