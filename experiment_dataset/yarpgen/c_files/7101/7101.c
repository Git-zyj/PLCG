/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_17 = (((arr_1 [i_0 + 1]) + var_0));
        var_18 = (arr_1 [i_0 + 3]);
        var_19 += (arr_0 [i_0 + 1]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 ^= (arr_1 [13]);
                    arr_8 [i_0] [i_0] [i_2 - 1] = (((arr_1 [i_2 - 1]) != (arr_1 [i_2 - 1])));
                    var_21 = (arr_5 [i_0] [i_1] [i_2 + 1] [i_2 + 1]);
                    var_22 = (((arr_1 [i_1]) <= (arr_1 [i_1])));
                    arr_9 [i_0] [i_1] [i_1] = var_10;
                }
            }
        }
        var_23 += (arr_6 [i_0] [i_0] [i_0] [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_12 [i_3] = (((arr_11 [i_3]) <= 111));

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    {
                        var_24 = (min(var_24, var_5));
                        arr_23 [i_3] [i_4] [i_3] [i_6] = var_2;
                        var_25 = var_8;
                        var_26 = (arr_5 [i_5] [i_5] [i_5 + 1] [i_5 - 1]);
                    }
                }
            }
            var_27 = (arr_7 [i_3] [i_4] [i_4]);
            var_28 = (arr_0 [14]);
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_28 [i_3] [i_3] [i_7] = (arr_16 [i_3]);
                        arr_29 [10] [i_7 - 1] &= var_6;
                    }
                }
            }
            var_29 = (var_3 - var_7);
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_30 = (((arr_5 [i_3] [i_3] [i_3] [i_3]) == var_12));
            var_31 = var_3;

            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                var_32 ^= 175;

                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    var_33 = var_6;
                    arr_36 [i_3] [i_10] [i_3] = (var_2 == var_15);
                }
            }
            for (int i_12 = 1; i_12 < 11;i_12 += 1)
            {
                var_34 = (((arr_21 [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12 + 1]) | (arr_19 [i_12] [i_12 - 1] [i_12 - 1])));
                var_35 = ((arr_25 [i_3] [i_9] [i_3] [i_9]) != (arr_25 [i_3] [i_3] [i_9] [i_12]));
                var_36 = (max(var_36, (var_4 / var_4)));

                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    var_37 = (min(var_37, var_15));
                    var_38 = (arr_5 [i_12 + 1] [i_13] [i_13] [i_13]);
                    var_39 = (arr_7 [i_12 + 1] [i_9] [i_9]);
                    var_40 = (((arr_21 [i_12 - 1] [i_9] [i_12] [i_13]) > (arr_21 [i_12 - 1] [i_9] [i_12 - 1] [i_13])));
                }
            }
            for (int i_14 = 3; i_14 < 11;i_14 += 1)
            {
                var_41 = (arr_6 [i_14] [i_14] [i_14] [i_14 - 2]);
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 9;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_42 = (max(var_42, ((((arr_5 [i_15] [i_9] [i_14 - 1] [i_15 + 3]) + (arr_5 [i_3] [i_3] [i_14 + 1] [i_15 - 1]))))));
                            var_43 = (max(var_43, ((((arr_0 [i_14 + 1]) & (arr_0 [i_14 + 1]))))));
                        }
                    }
                }
            }
            var_44 = (max(var_44, (arr_32 [1] [i_9])));
            arr_51 [i_3] = arr_21 [i_9] [i_9] [i_9] [i_9];
        }
        for (int i_17 = 1; i_17 < 11;i_17 += 1)
        {
            arr_54 [i_3] = var_4;
            var_45 = arr_42 [i_3] [i_17 + 1] [i_3];
            var_46 = var_8;
            var_47 = var_12;
        }
        for (int i_18 = 4; i_18 < 9;i_18 += 1)
        {
            var_48 = (((arr_31 [i_18] [i_18 + 1]) <= (arr_35 [i_3] [i_3])));
            arr_59 [i_3] = (arr_53 [i_18 + 2] [i_3] [i_18 - 2]);
        }
    }
    for (int i_19 = 0; i_19 < 25;i_19 += 1)
    {
        var_49 = (max(var_49, (arr_60 [i_19])));
        var_50 = (arr_60 [i_19]);
        var_51 += (max((((var_2 + 9223372036854775807) << (((arr_60 [i_19]) - 66)))), ((min((arr_60 [i_19]), (arr_60 [i_19]))))));
    }

    for (int i_20 = 0; i_20 < 13;i_20 += 1)
    {
        arr_64 [i_20] = ((((min(var_3, (max((arr_4 [i_20] [i_20] [i_20]), var_16))))) == (arr_63 [i_20])));
        arr_65 [i_20] = var_1;
    }
    var_52 |= var_0;
    /* LoopNest 3 */
    for (int i_21 = 0; i_21 < 23;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 23;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 23;i_23 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_24 = 0; i_24 < 23;i_24 += 1)
                    {
                        arr_74 [i_24] [i_22] [i_21] [i_23] [i_23] = (arr_69 [i_21] [i_21]);
                        var_53 *= var_9;
                    }
                    for (int i_25 = 0; i_25 < 23;i_25 += 1)
                    {
                        var_54 = (max((arr_67 [i_22] [i_23]), ((var_9 << (((arr_76 [i_21]) - 26722))))));
                        var_55 = (min(var_55, (max(((((arr_60 [i_21]) != var_12))), 435588534))));
                    }
                    var_56 = (min(var_56, var_9));
                    /* LoopNest 2 */
                    for (int i_26 = 1; i_26 < 1;i_26 += 1)
                    {
                        for (int i_27 = 2; i_27 < 21;i_27 += 1)
                        {
                            {
                                var_57 ^= (arr_61 [i_21] [i_21]);
                                arr_84 [i_27] [i_26] [i_21] [i_22] [i_21] = min((arr_76 [i_21]), var_2);
                                arr_85 [i_27] [i_21] [i_21] [i_21] [i_22] [i_21] = (max(var_5, (arr_75 [i_22] [4] [i_26])));
                                var_58 += arr_66 [i_26] [i_22];
                                var_59 *= var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_28 = 4; i_28 < 10;i_28 += 1)
    {
        for (int i_29 = 1; i_29 < 9;i_29 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_30 = 2; i_30 < 11;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 12;i_31 += 1)
                    {
                        for (int i_32 = 1; i_32 < 11;i_32 += 1)
                        {
                            {
                                var_60 += (arr_25 [i_28] [i_29 + 3] [i_30] [i_29 + 3]);
                                var_61 = var_6;
                                var_62 = (min(var_62, (((((max((arr_27 [i_32 + 1] [i_31] [i_30] [i_29]), var_4))) || ((min((arr_27 [i_28 + 2] [i_29] [i_30 - 2] [i_31]), var_5))))))));
                                arr_99 [i_30] [i_29 + 1] [i_29 + 1] [i_30] [i_32] = max((((arr_58 [i_28 + 1] [i_29 + 2]) << (4294967293 - 4294967277))), ((((arr_58 [i_28 - 3] [i_29 + 3]) != (arr_58 [i_28 + 2] [i_29 + 1])))));
                                var_63 &= ((((min(var_10, (arr_97 [i_29] [i_29] [i_30 - 2] [3])))) == (arr_97 [i_29 + 2] [i_30] [i_30 - 2] [i_32 - 1])));
                            }
                        }
                    }
                }
                arr_100 [i_28] = ((((max(var_12, (arr_91 [i_28])))) == var_15));
            }
        }
    }
    #pragma endscop
}
