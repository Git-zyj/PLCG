/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_2;

    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        var_18 &= 1891408344;
        var_19 = var_16;
        var_20 ^= 65522;
        var_21 = -33;
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_22 += 1891408332;
            var_23 += (arr_4 [i_1 - 2]);
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_24 ^= 7860342739746970491;
            var_25 += 10586401333962581144;
            var_26 = 14180732171556286091;

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_27 *= 18446744073709551615;
                arr_10 [i_1] = 1;
                arr_11 [i_1] [i_3] [i_4] [i_1] = var_15;
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_14 [11] [i_3] [i_1] = (arr_9 [i_1]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_21 [1] [i_1] [i_5] [11] [i_7] = (arr_3 [i_1]);
                            var_28 = (min(var_28, 7860342739746970500));
                            arr_22 [i_1] [i_5] [i_6] = var_10;
                        }
                    }
                }
                var_29 = (arr_12 [i_1 + 3] [i_1 + 4] [i_1]);
            }
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                arr_27 [i_1] [i_8] = var_8;
                var_30 = 1;
            }
            var_31 &= var_15;
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                {
                    arr_32 [i_1] [i_10 + 2] [i_11] [i_11] = (arr_30 [i_1]);

                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            var_32 ^= 1;
                            var_33 = (min(var_33, 1812836500));
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_34 = (min(var_34, (arr_39 [i_10 - 1] [i_10 + 1])));
                            var_35 += var_0;
                            var_36 = (arr_13 [i_1 - 2] [i_1 + 3]);
                        }
                        for (int i_15 = 3; i_15 < 10;i_15 += 1)
                        {
                            var_37 = (arr_20 [i_1] [i_1 - 2] [i_1 + 3] [i_1 + 1] [i_1]);
                            var_38 -= 2482130822;
                            var_39 += 1205058400;
                            arr_43 [i_1] [i_10] [i_11] [i_11] [i_15] = var_14;
                        }

                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            var_40 |= 7860342739746970486;
                            var_41 = 1870420761151319423;
                            var_42 = (max(var_42, -78));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 13;i_17 += 1)
                        {
                            var_43 -= var_2;
                            var_44 = var_6;
                        }
                        for (int i_18 = 0; i_18 < 13;i_18 += 1)
                        {
                            arr_51 [i_1] [i_10] [i_1] [i_12] [2] = 2482130784;
                            var_45 = var_8;
                            arr_52 [i_1] [i_1] [i_10 + 1] [i_11] [i_12] [i_11] = var_3;
                        }
                        var_46 ^= var_11;
                    }
                    for (int i_19 = 1; i_19 < 12;i_19 += 1)
                    {
                        var_47 = (arr_48 [i_1 + 3] [i_10 + 1] [i_11] [i_19] [i_1]);
                        var_48 = (min(var_48, var_5));
                        var_49 = var_3;
                        var_50 += 7860342739746970459;
                    }
                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        var_51 = 47145;

                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            var_52 += -4940935849860806162;
                            var_53 ^= -2817591940035029041;
                        }
                        /* vectorizable */
                        for (int i_22 = 1; i_22 < 11;i_22 += 1)
                        {
                            var_54 = var_11;
                            var_55 = (arr_15 [i_1 - 1] [10] [i_10 - 1] [0] [i_1 - 1] [i_22 + 1]);
                        }

                        for (int i_23 = 0; i_23 < 1;i_23 += 1)
                        {
                            arr_67 [i_1] [i_20] [i_1] = 4940935849860806156;
                            var_56 ^= var_12;
                        }
                        for (int i_24 = 0; i_24 < 0;i_24 += 1)
                        {
                            var_57 = 1;
                            var_58 = (max(var_58, (arr_33 [i_1] [10] [i_20] [10] [i_24 + 1] [i_20])));
                            var_59 = -94;
                            var_60 |= var_8;
                        }
                        for (int i_25 = 1; i_25 < 11;i_25 += 1)
                        {
                            var_61 = (min(var_61, 9));
                            var_62 = (min(var_62, var_16));
                            var_63 = (arr_31 [i_1] [i_25 - 1] [i_1 + 3]);
                            var_64 = 1;
                        }
                    }
                    for (int i_26 = 2; i_26 < 12;i_26 += 1)
                    {
                        arr_74 [7] [i_1] = (arr_45 [i_26 - 1] [i_1] [i_10 - 1] [i_1] [i_1]);
                        var_65 &= (arr_35 [i_1 + 1] [i_10 + 1] [i_26 + 1] [i_26] [i_26]);
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_27 = 0; i_27 < 1;i_27 += 1)
        {

            for (int i_28 = 0; i_28 < 13;i_28 += 1)
            {
                var_66 = var_7;
                var_67 = (arr_15 [3] [i_1] [3] [i_1 - 1] [i_28] [10]);
            }
            for (int i_29 = 0; i_29 < 13;i_29 += 1)
            {
                /* LoopNest 2 */
                for (int i_30 = 4; i_30 < 10;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 13;i_31 += 1)
                    {
                        {
                            arr_89 [i_1] [i_27] [i_29] [1] [i_31] = (arr_70 [i_1] [i_30 - 1] [i_1 - 2] [i_30 - 4] [i_1]);
                            var_68 |= var_14;
                            var_69 += var_4;
                        }
                    }
                }
                var_70 = (arr_20 [i_1 - 1] [i_1 + 1] [i_1 + 3] [i_1 - 2] [i_1 + 2]);
                var_71 += 4294967289;
                var_72 += 343923611;
            }
            var_73 ^= 10465744228624745757;
            var_74 = 18446744073709551615;
            var_75 = (arr_78 [i_1] [i_1 + 4] [i_1]);
        }
        var_76 = (arr_54 [i_1] [i_1 + 4] [i_1 - 2] [i_1]);
    }
    var_77 = 481261872;
    /* LoopNest 3 */
    for (int i_32 = 2; i_32 < 20;i_32 += 1)
    {
        for (int i_33 = 0; i_33 < 1;i_33 += 1)
        {
            for (int i_34 = 0; i_34 < 24;i_34 += 1)
            {
                {
                    var_78 = (arr_93 [i_32 + 3] [i_32 - 1]);
                    arr_98 [i_33] = 119;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_35 = 0; i_35 < 17;i_35 += 1)
    {
        for (int i_36 = 0; i_36 < 1;i_36 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_37 = 1; i_37 < 15;i_37 += 1)
                {
                    for (int i_38 = 0; i_38 < 0;i_38 += 1)
                    {
                        {
                            var_79 = 18446744073709551613;
                            var_80 = var_13;
                            var_81 = (min(var_81, var_5));
                        }
                    }
                }
                var_82 = (max(var_82, var_6));
                arr_110 [i_36] = 0;
            }
        }
    }
    #pragma endscop
}
