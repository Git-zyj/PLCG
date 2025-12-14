/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (arr_6 [i_2] [i_2] [i_2] [i_2]);
                    arr_7 [i_2] [i_0] [i_0] [i_0] = (((arr_6 [i_0] [i_1] [i_2] [i_2]) ? (arr_6 [i_0] [i_1] [i_2] [i_1]) : (arr_6 [i_0] [i_1] [i_2] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = var_6;
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_0])));
                                var_18 = (arr_2 [i_0] [i_1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_19 += (((arr_1 [2]) ? (arr_1 [0]) : (arr_1 [4])));
                                var_20 = (((arr_3 [i_0]) ? (arr_14 [i_6] [i_5] [i_5] [i_2] [i_1] [i_0]) : (arr_4 [i_0] [i_1] [i_0])));
                                arr_18 [i_0] [i_0] = (((arr_2 [i_5] [i_6]) ? (arr_11 [i_0] [i_1] [i_5] [i_2] [i_6] [i_1]) : (arr_2 [i_5] [i_1])));
                                var_21 = var_1;
                                var_22 = (arr_6 [i_1] [i_1] [i_1] [i_1]);
                            }
                        }
                    }
                }
            }
        }
        arr_19 [i_0] = var_6;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {

        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {
                        arr_32 [i_8] [i_8] [i_8] = (arr_2 [i_8 - 1] [i_8 - 2]);

                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            arr_37 [i_8] [i_8] [i_9] [i_8] [i_11] [i_7] [i_10] = ((arr_8 [i_8 - 2] [i_7] [i_8]) ? var_3 : (arr_24 [i_10] [i_8 + 2] [i_9]));
                            var_23 = (max(var_23, var_13));
                            var_24 = var_0;
                            var_25 = (max(var_25, ((65535 ? -12336 : 65535))));
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_26 = (arr_21 [i_8 + 2]);
                            var_27 = (((arr_27 [i_9 - 2] [i_8 - 1] [i_9]) ? (arr_27 [i_9 + 2] [i_8 + 1] [i_12]) : (arr_27 [i_9 - 3] [i_8 + 2] [i_9])));
                            var_28 = var_10;
                        }
                        var_29 = (((((var_0 ? var_13 : var_4))) ? (arr_28 [i_8 + 2] [i_8] [i_8 - 1] [i_9 - 1]) : (((28 ? 6848 : 9223372036854775807)))));
                    }
                }
            }

            for (int i_13 = 2; i_13 < 13;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        {
                            arr_51 [i_8] [i_15] [i_13] = (((arr_27 [i_8] [i_14] [i_15]) ? (arr_31 [i_8] [i_8] [i_8 - 1]) : (arr_47 [i_13 + 1] [i_8] [i_13])));
                            var_30 = (min(var_30, var_4));
                            arr_52 [i_7] [i_8] [i_13] [i_8] [i_15] = arr_35 [i_8] [i_13] [i_13] [i_13 + 1] [i_8];
                        }
                    }
                }
                var_31 += (arr_10 [i_13 + 1] [i_13 + 1] [i_13 - 2] [i_8 + 2] [i_8 - 1]);
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 13;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                {

                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        var_32 = (max(var_32, (((arr_43 [i_16 - 1] [i_16] [i_7]) ? (arr_62 [i_7] [i_7] [i_17]) : (arr_21 [i_7])))));
                        arr_64 [i_18] [i_17] [i_17] [i_16] [i_7] = (arr_5 [i_17]);
                    }
                    for (int i_19 = 0; i_19 < 14;i_19 += 1)
                    {
                        arr_67 [i_16] [i_16] [i_7] [i_17] [i_16] = (((arr_12 [i_16] [i_16] [i_16 - 1]) ? (arr_12 [i_16] [i_16] [i_16 - 1]) : (arr_12 [i_16] [i_16] [i_16 + 1])));
                        var_33 = (max(var_33, var_10));
                    }
                    for (int i_20 = 0; i_20 < 14;i_20 += 1)
                    {

                        for (int i_21 = 2; i_21 < 13;i_21 += 1)
                        {
                            arr_73 [i_7] [i_7] [i_17] = (((arr_31 [i_7] [i_16] [i_20]) ? (arr_30 [i_7] [i_16] [i_17] [i_20] [i_21]) : var_11));
                            arr_74 [i_7] [i_7] [i_7] [i_17] [i_7] = (arr_1 [i_17]);
                            arr_75 [i_21] [i_16] [i_17] [i_20] [i_7] [i_17] = (((arr_1 [i_17]) ? var_5 : (arr_1 [i_17])));
                            var_34 = var_11;
                            var_35 = arr_8 [i_7] [i_16] [i_17];
                        }
                        var_36 = arr_3 [i_17];

                        for (int i_22 = 0; i_22 < 1;i_22 += 1)
                        {
                            var_37 = (arr_58 [i_7] [i_16] [i_17] [i_20]);
                            var_38 = arr_5 [i_17];
                            arr_78 [i_7] [i_17] = (((arr_49 [i_16] [i_16] [i_16] [i_16 - 1] [i_16] [i_16] [i_16]) ? (arr_72 [i_17] [i_20] [i_17] [i_16] [i_17]) : var_10));
                        }
                        for (int i_23 = 1; i_23 < 11;i_23 += 1)
                        {
                            var_39 |= (var_6 ? (arr_8 [i_7] [i_23 + 1] [i_7]) : (arr_8 [i_23] [i_23 + 2] [i_20]));
                            arr_82 [i_7] [i_17] [i_17] [i_17] [i_23] [i_20] [i_7] = var_13;
                            var_40 = (((arr_4 [i_17] [i_16 - 1] [i_17]) ? var_4 : (arr_72 [i_17] [i_23 - 1] [i_16 + 1] [i_16 + 1] [i_17])));
                        }
                        arr_83 [i_17] [i_16] [i_17] [i_20] = (arr_42 [i_7] [i_7] [i_7] [i_7]);
                    }
                    var_41 *= (arr_58 [i_16 + 1] [i_16 - 1] [i_16 + 1] [i_16]);
                    arr_84 [i_17] [i_17] [i_7] = (((arr_57 [i_17] [i_16] [i_17]) ? (arr_65 [i_7] [i_7] [i_16 + 1] [i_17] [i_7]) : (arr_57 [i_7] [i_16] [i_17])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 17;i_24 += 1)
    {
        var_42 = var_10;
        var_43 = (arr_5 [i_24]);
    }
    for (int i_25 = 0; i_25 < 19;i_25 += 1)
    {
        /* LoopNest 2 */
        for (int i_26 = 0; i_26 < 1;i_26 += 1)
        {
            for (int i_27 = 0; i_27 < 19;i_27 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_28 = 3; i_28 < 18;i_28 += 1)
                    {
                        for (int i_29 = 0; i_29 < 19;i_29 += 1)
                        {
                            {
                                arr_101 [i_25] [i_26] [i_25] [i_25] [i_25] = (min((max(var_14, ((((arr_97 [i_26]) ? (arr_4 [i_25] [i_25] [i_26]) : var_2))))), var_13));
                                arr_102 [i_29] [i_28] [i_27] [i_27] [i_26] [i_25] [i_25] |= (((arr_95 [i_25] [i_27] [i_27] [i_28 - 3]) ? (min((arr_95 [i_25] [i_27] [i_27] [i_28 - 2]), (arr_95 [i_26] [i_27] [i_28] [i_28 - 2]))) : var_9));
                                arr_103 [i_25] [i_27] [i_25] [i_26] [i_25] = var_4;
                            }
                        }
                    }
                    arr_104 [i_25] [i_26] = (min((min(var_3, (arr_16 [i_26] [i_25] [i_25] [i_25] [i_26] [i_27]))), (arr_90 [i_25])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_30 = 2; i_30 < 18;i_30 += 1)
        {
            for (int i_31 = 0; i_31 < 19;i_31 += 1)
            {
                for (int i_32 = 0; i_32 < 19;i_32 += 1)
                {
                    {
                        var_44 = ((var_2 ? (((arr_108 [i_30 - 2]) ? (arr_108 [i_30 - 1]) : (arr_96 [i_31] [i_31] [i_31] [i_30 - 2] [i_31]))) : ((((arr_96 [i_31] [i_32] [i_30] [i_30 + 1] [i_31]) ? (arr_96 [i_31] [i_32] [i_31] [i_30 + 1] [i_31]) : (arr_96 [i_31] [i_32] [i_30] [i_30 - 2] [i_31]))))));
                        arr_112 [i_31] [i_30] [i_31] [i_32] [i_25] = ((((var_1 ? var_13 : (arr_111 [i_30] [i_31] [i_30 + 1] [i_30] [i_31] [i_30 - 2])))) ? (arr_111 [i_31] [i_31] [i_30 - 2] [i_30] [i_31] [i_30 - 1]) : (max(var_2, var_4)));
                        arr_113 [i_25] [i_32] [i_31] [i_31] = (((((((min((arr_93 [i_25]), var_3))) ? (max(var_6, (arr_15 [i_25] [i_25]))) : var_15))) ? var_1 : (arr_88 [i_25])));
                        var_45 = arr_105 [i_31] [i_30 - 2];
                    }
                }
            }
        }
    }
    var_46 *= var_4;
    var_47 = (max(var_47, (((var_5 ? var_3 : (min(((var_12 ? var_13 : var_0)), (min(var_13, 65535)))))))));
    #pragma endscop
}
