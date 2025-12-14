/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, 3947801122));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_8;
        var_11 = (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [i_2] [i_0] = 41446;
                        arr_12 [i_2] [i_0] [i_2] [i_3] = (-2147483647 - 1);
                        var_12 = 4294967284;
                    }
                }
            }
        }
        arr_13 [i_0] = (arr_3 [6] [6]);
        var_13 += 46311;
    }
    for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_14 = (arr_3 [i_4] [i_4]);
            arr_18 [i_4] = 1;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
        {
            var_15 = var_7;
            arr_21 [i_4] [i_4] = (arr_7 [i_6]);
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
        {
            arr_24 [i_4] [i_4] = 46319;
            arr_25 [i_7] [i_4] [i_7] = var_7;
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_16 = 3284731030;
                            var_17 = 1;
                            arr_33 [i_4] [i_4] [i_7] [i_8] [i_4] [i_7] [7] = (arr_29 [i_4] [i_8] [i_4] [i_10]);
                            var_18 = (arr_4 [i_7] [i_9] [14]);
                        }
                    }
                }
            }
        }

        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            var_19 = (max(var_19, (arr_15 [i_4] [8])));
            var_20 = (arr_23 [i_4] [i_4]);
            var_21 = (min(var_21, -1845764678946653864));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        arr_41 [i_4] [i_4] [i_4] [i_13] [i_4] [i_13] = var_4;
                        var_22 = 2081229253;
                        var_23 *= (arr_30 [4] [i_4] [i_12] [i_4] [i_4] [4]);
                    }
                }
            }
            var_24 *= -2704377230647055172;
        }
        /* vectorizable */
        for (int i_14 = 1; i_14 < 18;i_14 += 1)
        {
            var_25 += var_9;
            /* LoopNest 2 */
            for (int i_15 = 4; i_15 < 16;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    {
                        var_26 = var_0;

                        for (int i_17 = 1; i_17 < 18;i_17 += 1)
                        {
                            var_27 = (arr_27 [i_15] [i_16]);
                            var_28 = 1863075528;
                            var_29 = (arr_3 [i_14] [i_14]);
                            var_30 = 4679611393217695317;
                        }
                        for (int i_18 = 0; i_18 < 19;i_18 += 1)
                        {
                            var_31 = (max(var_31, 4294967288));
                            var_32 += 7936;
                        }
                        for (int i_19 = 0; i_19 < 19;i_19 += 1)
                        {
                            arr_56 [i_14] [i_4] [i_4] [i_14] [i_14] [i_4] = 15057;
                            arr_57 [1] [1] [14] [i_4] [i_4] = 1;
                            var_33 = (max(var_33, (arr_50 [1] [1] [i_16] [i_4] [1] [i_4])));
                        }
                        arr_58 [i_14] [1] [i_4] = -275;
                        var_34 = 1;

                        for (int i_20 = 1; i_20 < 1;i_20 += 1)
                        {
                            var_35 = var_4;
                            var_36 = (arr_50 [i_20] [i_16] [i_15] [i_4] [i_4] [i_4]);
                            var_37 = 3133597028511243988;
                        }
                        for (int i_21 = 0; i_21 < 19;i_21 += 1) /* same iter space */
                        {
                            arr_63 [i_4] [i_4] = 57599;
                            var_38 &= var_1;
                            arr_64 [i_4] [i_4] [10] [i_4] [10] [i_21] = (arr_14 [1]);
                        }
                        for (int i_22 = 0; i_22 < 19;i_22 += 1) /* same iter space */
                        {
                            var_39 = (max(var_39, 1));
                            arr_67 [i_4] [i_4] [i_15] = var_9;
                            var_40 += var_3;
                            arr_68 [i_4] [i_4] [i_14] [i_15] [i_16] [14] = var_4;
                        }
                    }
                }
            }
        }
        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {
            var_41 += 2832677939;
            var_42 = (min(var_42, 31466));

            /* vectorizable */
            for (int i_24 = 2; i_24 < 18;i_24 += 1)
            {
                var_43 = var_9;
                arr_74 [i_4] [i_4] [i_4] = -7943890537663460538;
            }
            /* vectorizable */
            for (int i_25 = 0; i_25 < 19;i_25 += 1)
            {
                var_44 = (arr_60 [i_25] [13] [i_23] [i_23] [13] [1] [13]);
                var_45 = var_5;
                var_46 = 1;
                var_47 += var_5;
                var_48 = 319340482;
            }
            /* vectorizable */
            for (int i_26 = 0; i_26 < 1;i_26 += 1)
            {
                var_49 = (arr_75 [15] [3] [i_4] [i_4]);
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 19;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 19;i_28 += 1)
                    {
                        {
                            var_50 = (min(var_50, 4129906943));
                            var_51 = (arr_39 [7] [16] [7] [1]);
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_29 = 1; i_29 < 1;i_29 += 1)
        {
            var_52 = var_2;
            arr_89 [i_4] [i_4] = 42025;
            /* LoopNest 3 */
            for (int i_30 = 0; i_30 < 1;i_30 += 1)
            {
                for (int i_31 = 0; i_31 < 19;i_31 += 1)
                {
                    for (int i_32 = 0; i_32 < 19;i_32 += 1)
                    {
                        {
                            arr_98 [i_30] [i_30] [4] [i_31] [i_4] = 2387441036;
                            var_53 = var_8;
                            var_54 = var_5;
                            var_55 = 10661931341300030448;
                        }
                    }
                }
            }
        }
        for (int i_33 = 0; i_33 < 1;i_33 += 1)
        {
            /* LoopNest 3 */
            for (int i_34 = 0; i_34 < 19;i_34 += 1)
            {
                for (int i_35 = 2; i_35 < 17;i_35 += 1)
                {
                    for (int i_36 = 0; i_36 < 19;i_36 += 1)
                    {
                        {
                            var_56 = (arr_90 [i_34] [i_4] [i_4]);
                            arr_111 [i_34] [i_33] [i_33] [i_4] [i_36] = var_3;
                            var_57 = (min(var_57, 1));
                            var_58 = (arr_0 [i_4]);
                        }
                    }
                }
            }
            var_59 *= (arr_88 [i_4] [i_4] [i_4]);
        }
        for (int i_37 = 1; i_37 < 17;i_37 += 1)
        {
            var_60 += 13731286826917659119;
            arr_115 [13] [i_4] = -55;
            arr_116 [i_4] [i_4] [i_37] = var_1;
        }
        var_61 = 1974500670;
        arr_117 [i_4] [i_4] = var_6;
    }
    for (int i_38 = 2; i_38 < 16;i_38 += 1) /* same iter space */
    {
        arr_121 [11] [i_38] = (arr_53 [i_38] [12]);
        arr_122 [i_38] = 1;
        var_62 = (max(var_62, (arr_83 [i_38] [i_38] [i_38] [0] [16] [16])));
        var_63 = 88;
    }
    #pragma endscop
}
