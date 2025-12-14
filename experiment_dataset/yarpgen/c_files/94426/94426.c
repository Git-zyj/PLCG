/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_19 ^= var_1;

        /* vectorizable */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_20 = 1329;
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_14 [i_0 - 4] [i_1] = (((arr_11 [i_0] [i_1] [i_2] [i_2]) ? (arr_8 [i_4] [i_0 - 2] [4] [i_3]) : (arr_11 [i_0] [i_1] [i_1] [i_1])));
                            arr_15 [i_1] [i_3 - 4] [i_3] [i_3] [i_1] [i_3] [i_3] = ((-(arr_9 [i_4] [i_1] [i_1] [i_0 - 4])));
                            var_21 = (9223372036854775807 == 255);
                        }
                    }
                }
                var_22 = ((var_6 && (arr_1 [i_0 - 1] [i_1 - 1])));
                var_23 = (~var_0);

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_24 |= ((-(arr_7 [i_0] [i_0] [i_0])));
                    var_25 |= (~var_1);
                    arr_18 [i_1] [i_2] [i_1] [i_1] = (arr_1 [i_1 - 2] [i_5]);
                }
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    var_26 = (max(var_26, var_16));
                    var_27 *= ((!(arr_21 [i_0 - 4] [i_1 + 1] [i_2] [i_6 + 3])));
                }
            }

            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                var_28 = (((arr_22 [7] [i_1] [i_7 + 1]) % 4632723221113688012));
                arr_25 [i_0] [i_1] [i_0] [i_0 - 3] = (((((arr_5 [i_0 - 3] [i_0 + 1]) - 237))) ? (arr_2 [i_0 - 3]) : var_9);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_29 = (arr_20 [i_0 - 3] [i_1] [i_0 + 3] [i_1] [7]);
                            var_30 = (arr_2 [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            arr_35 [i_7] [i_7] [i_7] [i_0] [i_7 + 1] &= (((arr_1 [i_7 + 1] [i_0 + 1]) ? (arr_24 [i_1 + 2]) : var_14));
                            var_31 = ((-(arr_1 [i_0 + 1] [i_1 + 2])));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            var_32 = (arr_9 [i_0 + 3] [i_0 + 1] [i_0] [i_0 + 3]);
            /* LoopNest 3 */
            for (int i_13 = 3; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_33 = (((1074106196 / -4632723221113688027) ? ((-12 ? 3220861104 : var_9)) : (var_0 - var_5)));
                            arr_44 [i_0 - 4] [i_12] [i_13] [i_14] [i_13] [i_0] = arr_40 [i_14];
                        }
                    }
                }
            }
            var_34 -= (((arr_7 [i_0] [i_12] [i_0]) ? (arr_8 [i_0] [i_12] [i_0 + 1] [17]) : 0));
        }
        for (int i_16 = 1; i_16 < 17;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                var_35 = -12;

                for (int i_18 = 1; i_18 < 18;i_18 += 1)
                {
                    arr_53 [i_16] = var_4;
                    var_36 = (min(0, ((~(arr_11 [i_16] [i_16] [i_16] [i_16 + 1])))));
                    var_37 = arr_6 [1] [i_16] [i_0];
                    var_38 = var_12;
                }
                var_39 = (arr_2 [i_0]);
            }
            arr_54 [i_16] [i_16] [i_16 + 2] = (~242);
            var_40 |= 11;
            arr_55 [i_0] [i_16] [i_16] = ((!(arr_40 [i_0 - 2])));
            var_41 = var_2;
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 19;i_19 += 1)
        {
            /* LoopNest 2 */
            for (int i_20 = 4; i_20 < 15;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 19;i_21 += 1)
                {
                    {
                        var_42 *= ((!(arr_34 [i_20 - 3] [i_20] [i_20 - 3] [i_20] [i_20 + 4] [i_20 - 1] [10])));
                        arr_63 [i_20 + 4] [i_20] [i_20] [i_20] = (var_12 ? var_3 : var_4);
                        var_43 = (~var_3);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 19;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 19;i_23 += 1)
                {
                    {
                        var_44 = (~255);
                        var_45 = var_4;
                        arr_71 [i_0] [i_22] [i_22] = var_18;

                        for (int i_24 = 1; i_24 < 18;i_24 += 1)
                        {
                            var_46 = ((var_18 ? var_0 : 114));
                            var_47 = ((-(arr_39 [i_24 + 1] [i_24])));
                        }

                        for (int i_25 = 1; i_25 < 17;i_25 += 1)
                        {
                            var_48 = (((((var_14 ? var_5 : var_1))) ? ((var_1 ? 3 : var_9)) : (~1)));
                            arr_78 [i_19] [i_22] = ((!(var_1 == var_15)));
                        }
                        for (int i_26 = 0; i_26 < 19;i_26 += 1)
                        {
                            arr_82 [i_0] [i_19] [i_22] [i_23] [i_26] [i_22] = ((((var_8 ? 255 : var_1)) % ((var_4 ? 4632723221113688014 : var_16))));
                            arr_83 [i_0] [i_26] [i_26] [i_0] [i_0] [i_0] [i_0] |= (!7059226160104733421);
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 19;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 19;i_28 += 1)
            {
                {

                    for (int i_29 = 0; i_29 < 0;i_29 += 1)
                    {
                        var_49 = (arr_51 [i_29] [i_28] [i_0]);
                        var_50 = ((!(((94 ? var_2 : (arr_21 [i_29 + 1] [i_29] [i_29] [i_29 + 1]))))));
                    }
                    for (int i_30 = 1; i_30 < 16;i_30 += 1)
                    {
                        var_51 = (max(var_51, (arr_36 [i_0] [i_0] [i_0])));
                        arr_94 [i_28] [i_28] [i_28] [i_30] [i_28] = (max(var_6, (((var_14 ? var_2 : (arr_12 [i_0] [i_27] [i_30 + 3]))))));
                        var_52 = ((38520 ? -119 : -1));
                    }
                    var_53 = (0 * var_0);
                    var_54 = (max(var_54, ((~(((max(var_2, (arr_37 [i_0] [14] [8]))) / (arr_84 [i_28] [i_27] [i_0])))))));
                }
            }
        }
        var_55 = ((var_10 + (max((((arr_47 [i_0 + 1] [12] [i_0 - 3]) ? var_11 : 1)), (arr_85 [i_0 - 1])))));
    }
    for (int i_31 = 2; i_31 < 24;i_31 += 1)
    {

        /* vectorizable */
        for (int i_32 = 0; i_32 < 25;i_32 += 1)
        {

            for (int i_33 = 0; i_33 < 25;i_33 += 1)
            {
                var_56 = ((-(arr_96 [i_31 + 1])));
                /* LoopNest 2 */
                for (int i_34 = 0; i_34 < 25;i_34 += 1)
                {
                    for (int i_35 = 0; i_35 < 25;i_35 += 1)
                    {
                        {
                            var_57 = (arr_98 [i_31 - 2]);
                            var_58 += (arr_96 [i_31]);
                            arr_111 [i_31] [i_32] [i_32] [i_35] = arr_104 [i_32] [i_33];
                            var_59 = (max(var_59, -3220861104));
                        }
                    }
                }
                var_60 = (arr_98 [i_31]);
                /* LoopNest 2 */
                for (int i_36 = 1; i_36 < 23;i_36 += 1)
                {
                    for (int i_37 = 0; i_37 < 25;i_37 += 1)
                    {
                        {
                            arr_117 [i_31] [i_32] [i_33] [i_36] [i_37] [i_31] = ((!(arr_110 [i_31 - 2] [i_31 - 1] [i_31] [i_31] [i_31 + 1])));
                            var_61 = ((~(arr_116 [i_37] [i_37] [i_37] [i_36] [i_36 + 2])));
                            arr_118 [i_31] [i_31] [i_31] [i_31 + 1] [i_36] = var_14;
                        }
                    }
                }
            }
            var_62 = (((arr_113 [i_31] [i_32] [i_32] [i_31] [i_32]) <= (arr_103 [i_31 - 2] [i_31 + 1])));
            var_63 = (max(var_63, (((arr_115 [i_31] [i_31] [i_31] [i_31 - 2] [i_32] [i_32] [i_32]) & (arr_112 [i_31] [i_31] [i_31] [i_31] [i_31 - 1] [i_31])))));
            var_64 = (((var_3 % var_18) ? var_5 : var_15));
        }
        /* vectorizable */
        for (int i_38 = 2; i_38 < 22;i_38 += 1)
        {
            arr_123 [i_31] = var_5;
            arr_124 [3] [i_38] = var_5;
        }
        arr_125 [i_31 - 2] = (((var_11 ? ((var_6 ? var_14 : 3508828832) : (arr_96 [i_31])))));

        /* vectorizable */
        for (int i_39 = 0; i_39 < 25;i_39 += 1)
        {
            arr_129 [i_39] [i_39] [1] = (arr_114 [1] [i_31 - 1] [i_31 - 2] [i_39] [13] [i_39]);
            var_65 = (max(var_65, var_5));
        }
        for (int i_40 = 1; i_40 < 23;i_40 += 1)
        {
            var_66 += (arr_106 [i_31] [i_31] [i_31] [11] [i_31 - 2] [i_31]);
            var_67 = (((min((arr_108 [i_40 + 2] [0] [i_40] [i_31 + 1]), (arr_113 [i_31] [i_40 + 2] [i_31 - 1] [i_40] [i_40]))) * var_13));
            /* LoopNest 3 */
            for (int i_41 = 0; i_41 < 25;i_41 += 1)
            {
                for (int i_42 = 1; i_42 < 24;i_42 += 1)
                {
                    for (int i_43 = 0; i_43 < 25;i_43 += 1)
                    {
                        {
                            var_68 = var_15;
                            var_69 = var_1;
                            arr_139 [i_41] [i_40] [10] [i_42] [i_43] = (max(((((((var_2 ? 127 : (arr_135 [11] [i_40] [i_42] [i_43])))) ? var_1 : var_16))), (max(var_5, (min(var_3, var_2))))));
                        }
                    }
                }
            }
        }
        var_70 += ((var_12 || (((-(var_3 == var_10))))));
    }
    var_71 = (min(var_12, ((~(max(var_9, var_4))))));
    var_72 &= ((100 ? 1076007178505771138 : 3565254827));
    #pragma endscop
}
