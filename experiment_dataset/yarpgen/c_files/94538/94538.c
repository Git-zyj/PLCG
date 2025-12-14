/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 *= (arr_2 [i_0] [i_1]);
                arr_4 [i_1] = ((-20921 + (((arr_2 [i_0] [i_1]) ? (arr_3 [3]) : (arr_2 [i_1] [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, var_15));
                                arr_12 [i_3] [16] [i_4] = 6933;
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_18 = ((((min((arr_19 [i_6] [i_6] [i_6 + 2] [i_6 + 1] [i_6 + 2]), var_1))) >> (((arr_19 [16] [i_6] [i_6 + 1] [i_6 + 2] [i_6 - 1]) - 34))));
                                var_19 = var_12;
                                arr_23 [i_0] [i_1] [i_5] = (((-((~(arr_0 [i_5]))))));
                                arr_24 [i_5] [i_1] [i_5] [i_6] = 1;
                            }
                        }
                    }
                    var_20 = (arr_14 [1] [1] [16] [1]);
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_21 -= -26751;

                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            arr_36 [i_0] [i_0] [i_9] [i_10] [i_10] [i_8] = var_12;
                            var_22 = (((arr_29 [i_0] [i_1] [i_0]) ? (var_13 - var_13) : (arr_11 [i_10] [i_10] [i_10] [i_9] [i_8] [i_1] [i_0])));
                        }
                        arr_37 [16] = (((arr_26 [i_0] [i_0] [i_8]) ^ var_9));
                        arr_38 [16] [i_1] [2] = (((arr_35 [i_9] [i_8] [i_1] [i_1] [i_0]) ? (arr_35 [i_9] [i_8] [i_1] [i_1] [i_0]) : (arr_35 [i_9] [i_8] [3] [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        arr_41 [i_0] [i_1] [i_1] [i_11] = var_2;
                        var_23 = ((~(arr_2 [i_0] [i_11])));
                    }
                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 16;i_12 += 1)
                    {
                        arr_46 [i_1] = arr_17 [i_0] [i_0] [i_12 - 3] [i_12 - 1];
                        var_24 = (((arr_33 [i_0] [i_8]) <= (arr_22 [i_0] [i_0] [2] [i_8] [i_12 - 1])));
                        arr_47 [i_0] [i_8] [i_8] [i_1] [i_0] = ((-26772 - (((arr_5 [i_1]) + 173))));
                        arr_48 [i_0] [i_0] [i_8] [i_0] [i_1] [i_0] = 28;
                    }
                    arr_49 [i_0] [13] [i_1] [i_0] = (((((((arr_39 [i_0] [2] [i_8]) ? 128 : -1))) ? (119 >= 14944) : (arr_28 [i_1] [i_1] [i_1] [i_0]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 3; i_13 < 8;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 10;i_14 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        {

                            for (int i_17 = 0; i_17 < 11;i_17 += 1)
                            {
                                arr_63 [i_14] [i_14] = 26751;
                                var_25 = (min((((arr_27 [i_14 - 1]) % var_11)), (arr_53 [i_13 - 2] [i_13 - 1])));
                            }
                            arr_64 [i_14] [i_14] = (((((252 ? 148 : 0))) ? (((var_3 == (var_3 + var_7)))) : (((var_4 >= var_10) % var_13))));
                        }
                    }
                }
                var_26 *= var_7;
                arr_65 [i_14] [i_14] = ((-((((max(377, 212))) - ((max(78, var_1)))))));
                arr_66 [i_14] = ((((((!-97) && -62))) * (~var_4)));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        {

                            for (int i_20 = 0; i_20 < 11;i_20 += 1)
                            {
                                arr_74 [i_13] [i_13] [i_19] [i_19] [i_14] = var_0;
                                arr_75 [i_13] [i_20] [i_18] [i_14] [i_20] [i_13] = arr_54 [i_13] [i_13];
                            }
                            /* vectorizable */
                            for (int i_21 = 0; i_21 < 11;i_21 += 1)
                            {
                                var_27 = (min(var_27, (!-37)));
                                var_28 = (((~192) ? (((arr_77 [i_13] [i_13] [i_13] [i_18] [0] [8] [i_21]) + var_8)) : (arr_22 [i_13 - 2] [i_14 - 1] [i_18] [i_19] [i_21])));
                            }

                            /* vectorizable */
                            for (int i_22 = 0; i_22 < 11;i_22 += 1)
                            {
                                var_29 = ((var_1 ? var_2 : (arr_16 [i_13] [i_13 + 2] [i_13 - 3])));
                                var_30 = (arr_21 [i_14 + 1] [i_14 + 1] [i_22]);
                                arr_82 [i_22] [2] [i_14] [i_14] [i_13] [i_13] = (((~6383) ? var_15 : 377));
                            }
                            var_31 = (min(var_31, var_13));
                            var_32 = (((arr_1 [i_13] [i_19]) ? (arr_32 [i_13 - 2] [i_13 - 2] [i_13 - 2] [i_19] [i_13 - 2] [i_19]) : (((~-26486) >> ((((min(var_15, var_0))) + 115))))));
                            arr_83 [i_14] = ((((((arr_52 [i_14 + 1] [i_13]) ? (arr_52 [i_14 + 1] [i_14]) : (arr_26 [i_14 + 1] [i_18] [i_18])))) ? (arr_8 [i_19] [13] [i_14 + 1] [13]) : (arr_60 [i_14 + 1] [i_13 + 3])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_23 = 0; i_23 < 21;i_23 += 1)
    {
        for (int i_24 = 0; i_24 < 21;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 21;i_25 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 21;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 21;i_27 += 1)
                        {
                            {
                                var_33 = arr_86 [i_25];
                                var_34 *= (max((((arr_89 [i_23] [i_23] [i_25]) >> (((arr_92 [i_27] [i_26] [i_24] [i_23]) + 98)))), var_12));
                                arr_95 [i_23] [i_24] [i_25] [i_25] [i_27] &= ((((206 ? 118 : -86)) | ((min(var_7, 127)))));
                            }
                        }
                    }
                    var_35 = var_13;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_28 = 0; i_28 < 23;i_28 += 1)
    {
        for (int i_29 = 0; i_29 < 23;i_29 += 1)
        {
            for (int i_30 = 2; i_30 < 21;i_30 += 1)
            {
                {
                    arr_105 [10] [2] [i_28] [0] = ((-(((!((max(var_3, var_7))))))));
                    arr_106 [i_28] = 63;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_31 = 0; i_31 < 25;i_31 += 1)
    {
        arr_111 [i_31] = (73 % -120);
        arr_112 [i_31] = ((((var_2 ? var_2 : (arr_107 [i_31] [i_31]))) | var_3));

        for (int i_32 = 0; i_32 < 25;i_32 += 1)
        {
            var_36 = (min(var_36, (((!(((var_4 ? 111 : var_0))))))));
            var_37 += (arr_107 [i_31] [i_32]);
        }
        arr_115 [i_31] [i_31] = (arr_108 [i_31]);
        /* LoopNest 2 */
        for (int i_33 = 0; i_33 < 25;i_33 += 1)
        {
            for (int i_34 = 3; i_34 < 24;i_34 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_35 = 0; i_35 < 25;i_35 += 1)
                    {
                        for (int i_36 = 0; i_36 < 25;i_36 += 1)
                        {
                            {
                                var_38 = ((var_12 & ((var_5 << (-10467 + 10472)))));
                                arr_127 [i_36] [i_35] [i_31] [i_33] [i_31] = (arr_122 [i_31] [i_33] [i_31] [i_33]);
                            }
                        }
                    }
                    arr_128 [i_31] [i_31] [i_34] = (arr_109 [i_34]);
                    var_39 = (var_13 && var_9);

                    for (int i_37 = 0; i_37 < 25;i_37 += 1)
                    {
                        var_40 = (((arr_109 [i_31]) ? (arr_120 [i_34 - 1] [i_34 + 1] [i_34 - 3] [i_34 + 1]) : (arr_129 [i_31] [i_33] [i_31] [i_31])));
                        var_41 *= 75;
                        arr_131 [i_33] [i_33] [i_31] = ((108 <= ((167 >> (var_1 - 41)))));
                        arr_132 [i_31] [i_33] [i_33] [i_34] [i_33] [i_31] = var_10;
                        var_42 = (max(var_42, ((((var_8 != var_7) < ((var_14 << (var_6 - 3485))))))));
                    }
                    for (int i_38 = 0; i_38 < 25;i_38 += 1)
                    {
                        var_43 += (!var_10);
                        arr_135 [i_33] [i_34 - 1] [i_33] [i_31] = var_1;
                        arr_136 [i_34 + 1] [i_34 + 1] = var_0;
                    }
                    arr_137 [i_34] [i_33] [i_33] [i_31] = (((arr_108 [i_31]) ? -10467 : ((var_3 >> (-377 + 402)))));
                }
            }
        }
    }
    #pragma endscop
}
