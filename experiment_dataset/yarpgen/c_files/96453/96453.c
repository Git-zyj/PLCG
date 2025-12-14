/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((~(!var_11)));
                    arr_10 [i_0] [i_1] [i_2] [i_0] = var_1;
                }
            }
        }
        arr_11 [1] = var_10;

        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                arr_16 [i_4] [i_0] [i_0] = (min((var_9 >= var_12), (~var_8)));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_18 = var_8;
                        var_19 = (((-var_16 + 2147483647) >> (((var_5 & var_1) - 20479))));
                        arr_23 [1] = var_9;
                    }
                    var_20 *= -var_15;
                    var_21 = (~-var_6);
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_22 = (min(var_22, (((!(((var_15 & (!var_16)))))))));
                    var_23 |= (((((var_1 >> (var_14 - 3549815656554487698)))) || var_1));
                    var_24 = ((var_10 <= ((max(41366471, 41366474)))));
                }
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_37 [i_0] [i_0] [1] [i_0] = ((((((max(var_8, var_14)) || var_12)))));
                            arr_38 [i_9 - 1] = ((-var_7 ^ (~var_2)));
                            var_25 = var_7;
                            arr_39 [i_0] [i_3 - 1] [12] [12] [i_10] = var_15;
                            arr_40 [i_0] [i_0] [i_0] [i_9 - 1] [i_10] = 12897647529553243878;
                        }
                    }
                }
                var_26 = (max(var_26, var_3));
                var_27 = (min((!var_1), (var_1 ^ var_2)));

                for (int i_11 = 2; i_11 < 20;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 1; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        arr_49 [i_0] [i_3 - 2] [i_3 - 2] [i_11 - 2] [i_12] = var_1;
                        var_28 = ((!(var_14 ^ var_6)));
                        arr_50 [i_3] [i_12] [i_11] [i_12] = (((max(var_1, var_0)) & var_4));
                    }
                    for (int i_13 = 1; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        arr_53 [i_0] [i_0] [20] [20] [i_0] = (var_0 ^ var_0);
                        var_29 = ((-(var_2 & var_6)));
                        arr_54 [0] [i_3] [i_8] [1] [i_8] = (max(2592342491658443248, 7524));
                        var_30 = (~var_4);
                        arr_55 [i_0] [i_3] [i_0] [1] [1] [1] [i_8] = 44241;
                    }
                    arr_56 [i_0] [i_3] = (21295 > var_8);
                }
                for (int i_14 = 2; i_14 < 20;i_14 += 1) /* same iter space */
                {
                    var_31 = (max((max(-4253600827, (max(var_4, var_5)))), ((max(var_0, (max(var_13, var_0)))))));
                    arr_59 [i_0] [i_3] [i_8] [i_14] = var_16;
                    var_32 = var_2;
                }
                /* vectorizable */
                for (int i_15 = 2; i_15 < 20;i_15 += 1) /* same iter space */
                {
                    var_33 -= var_16;
                    var_34 = -var_6;
                    var_35 = var_15;
                    var_36 = (~21295);
                }
                /* vectorizable */
                for (int i_16 = 2; i_16 < 19;i_16 += 1)
                {
                    arr_64 [3] [21] [21] [10] [18] = var_11;
                    arr_65 [i_0] [i_0] [i_0] [i_0] = var_16;
                }
                var_37 *= (max(-1146211006, 125936729));
            }
            /* vectorizable */
            for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
            {
                arr_68 [i_0] [i_17] = (~var_7);

                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    arr_72 [i_0] [1] [i_17] [i_0] [i_0] = (!var_4);
                    arr_73 [1] [i_17] = var_15;
                }
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    var_38 = (var_7 & var_1);
                    arr_77 [i_17] [i_17] = var_5;

                    for (int i_20 = 3; i_20 < 21;i_20 += 1)
                    {
                        arr_81 [0] [i_0] [i_3] [i_17] [1] [19] [1] = -var_3;
                        arr_82 [i_17] [i_17] = var_8;
                        arr_83 [i_19] [20] [20] |= (~var_1);
                    }
                    for (int i_21 = 0; i_21 < 22;i_21 += 1) /* same iter space */
                    {
                        var_39 = (~var_11);
                        var_40 = -var_4;
                        arr_87 [i_0] [i_3] [i_17] [i_19] [i_17] = var_11;
                        arr_88 [i_3] [i_17] [21] [i_3 - 2] [15] = var_16;
                    }
                    for (int i_22 = 0; i_22 < 22;i_22 += 1) /* same iter space */
                    {
                        arr_92 [i_0] [17] [i_17] [7] [i_17] [i_19] [i_22] = (((var_11 < var_8) <= var_8));
                        arr_93 [i_17] [i_3] [i_3] [i_3 + 1] [2] = (44240 ^ var_11);
                    }
                    var_41 = (min(var_41, var_5));
                }
                for (int i_23 = 2; i_23 < 21;i_23 += 1)
                {
                    var_42 -= (var_0 <= var_10);
                    arr_98 [i_17] [i_17] [6] [i_23] = (1 >= 21295);
                }
            }
            for (int i_24 = 0; i_24 < 22;i_24 += 1) /* same iter space */
            {
                var_43 = var_12;
                var_44 = (min(var_44, (((-(var_8 + var_1))))));
            }
            arr_101 [i_3] = 21287;
        }
        for (int i_25 = 0; i_25 < 22;i_25 += 1)
        {
            var_45 = (~-16564);
            arr_105 [i_0] [i_25] = -13340;

            for (int i_26 = 0; i_26 < 22;i_26 += 1)
            {
                var_46 = (min(var_46, ((min(4253600825, (~4253600827))))));
                var_47 *= ((~(((var_2 >= ((min(var_4, var_2))))))));
            }
            arr_110 [i_0] [i_0] [i_0] = (~var_10);
        }
        /* vectorizable */
        for (int i_27 = 0; i_27 < 1;i_27 += 1)
        {
            var_48 = -var_14;
            arr_115 [i_27] [i_0] [i_27] = var_4;
        }

        for (int i_28 = 0; i_28 < 1;i_28 += 1)
        {
            var_49 = (max((max(var_14, var_5)), (!var_2)));
            /* LoopNest 3 */
            for (int i_29 = 0; i_29 < 22;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 22;i_30 += 1)
                {
                    for (int i_31 = 1; i_31 < 18;i_31 += 1)
                    {
                        {
                            arr_125 [i_0] [i_0] [i_0] = ((var_7 <= (~41366489)));
                            var_50 = (min(var_50, (((!(var_14 || var_14))))));
                        }
                    }
                }
            }
        }
    }
    var_51 = -var_12;
    #pragma endscop
}
