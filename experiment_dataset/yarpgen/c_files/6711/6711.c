/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -19101;
    var_21 = (((((max(var_16, var_9) > (var_2 / var_15))))));

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_22 = ((-((~(arr_0 [i_0 - 2])))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                arr_8 [i_1] [i_1] [i_2] [i_1] = (arr_5 [i_0 + 1] [i_1 - 1]);

                /* vectorizable */
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    arr_11 [i_1] [i_1] [i_2] [i_3] [i_1 - 1] = (!(arr_0 [i_2 + 1]));
                    var_23 = (max(var_23, var_13));
                }
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_15 [4] [i_1] [0] [i_4] |= (arr_2 [i_1 - 1]);
                var_24 = ((~(((((arr_1 [i_0 + 2] [i_1 - 1]) + 2147483647)) >> (((arr_1 [i_0 + 2] [i_1 - 1]) + 10947))))));
            }
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                arr_20 [i_1] = arr_5 [i_0] [i_1 - 1];
                var_25 = (min((min((arr_12 [i_5] [i_1]), (arr_17 [i_0] [i_1]))), (arr_1 [i_1] [i_0 + 2])));
                var_26 -= ((min(((arr_1 [3] [i_1]), (arr_3 [i_0])))));
                var_27 = (min(var_27, ((max((((!((max(var_6, (arr_4 [i_5] [i_5]))))))), 19472)))));
            }
            var_28 = (min(var_28, (((var_17 ^ (min((arr_12 [i_0 + 2] [i_1 - 1]), var_14)))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_29 = (!65528);
                        var_30 = var_7;
                        arr_27 [i_1] [i_0] [i_6] = (~(--1364656067));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    {
                        arr_32 [i_1] [1] [7] [7] [i_9] = max((min((max(var_14, (arr_28 [i_9]))), (arr_14 [i_0 - 3]))), (arr_26 [i_0] [i_1] [10] [i_9]));
                        var_31 = (min((((arr_9 [i_0 - 1] [i_1 - 1]) ? (((max((arr_24 [i_0] [i_0] [i_8] [i_0]), (arr_26 [i_0] [i_1] [i_8] [i_9]))))) : (((arr_17 [i_0] [i_1]) * (arr_25 [i_1] [i_1] [i_0 + 2]))))), (((min(var_3, var_19))))));

                        for (int i_10 = 3; i_10 < 11;i_10 += 1)
                        {
                            arr_36 [i_0] [i_0] [i_1] [i_9] [i_10 - 3] = (((arr_21 [i_1]) - (arr_5 [i_0 - 2] [4])));
                            var_32 = ((~(((arr_22 [i_0] [i_0 + 1] [i_0 - 1]) + (arr_22 [i_0] [i_0 + 2] [i_0 - 4])))));
                        }
                        var_33 = (min(var_33, (arr_6 [i_0 - 2] [i_1 - 1] [i_1 - 1] [i_9])));
                        var_34 = (arr_21 [i_1]);
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
        {
            arr_41 [i_0] [i_0 - 4] [i_11] = (arr_18 [i_0 - 4] [i_0 - 4] [i_0] [i_0 - 4]);
            arr_42 [0] = (arr_29 [i_11] [i_11] [i_11]);

            for (int i_12 = 3; i_12 < 11;i_12 += 1)
            {
                arr_45 [i_12] [i_12] [i_0] = ((~((((arr_16 [i_0] [i_12]) || ((min((arr_10 [i_0] [9] [i_12 - 2] [i_0]), 0))))))));

                /* vectorizable */
                for (int i_13 = 2; i_13 < 10;i_13 += 1)
                {
                    arr_50 [i_0] [i_12] [i_0 + 2] [i_0 - 1] = (~var_10);
                    arr_51 [i_0 - 4] [i_0 - 4] [i_13] [i_0 - 4] [i_13 - 1] [8] &= (((!var_8) - (arr_7 [0] [i_12] [i_12])));
                }
                var_35 = (arr_2 [i_0 + 2]);
                arr_52 [i_0] [i_12] = ((~((~(((arr_4 [i_12] [3]) ? var_19 : var_9))))));
            }
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                var_36 = (((arr_31 [i_0]) + ((-(arr_55 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 - 1])))));
                arr_57 [i_0] [i_0] = arr_2 [i_0];
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 10;i_16 += 1)
                    {
                        {
                            var_37 ^= ((+((max((arr_54 [i_0 - 2] [i_11] [i_11] [i_11]), (arr_4 [i_14] [i_16 + 2]))))));
                            var_38 = (((~var_1) ? (((~(arr_5 [i_0] [i_11])))) : var_0));
                            var_39 = (max((((!(arr_58 [i_16] [i_15] [i_11] [i_11] [i_0])))), (arr_16 [i_16] [i_14])));
                            arr_62 [i_16] [i_16] [i_11] [i_14] [i_11] [i_0 + 2] = ((-(arr_59 [i_0] [i_0] [i_14] [i_15])));
                            arr_63 [i_0] [i_0] [i_14] [i_15] [i_16] = (arr_28 [i_14]);
                        }
                    }
                }
            }
            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                arr_67 [9] [i_11] [i_0] = ((-((((max((arr_19 [i_17] [i_17]), -9006462572891418822))) ? -1 : (arr_1 [i_0 - 4] [11])))));
                arr_68 [i_17] [2] [i_0] = (arr_46 [i_0] [i_11] [i_11] [i_11]);
                var_40 *= -4096291044494976086;
                var_41 -= (arr_3 [i_0]);
            }
        }
        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
        {
            var_42 = (arr_59 [i_0] [10] [i_0] [i_18]);
            var_43 = ((!((!(arr_9 [i_18] [i_0])))));
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 12;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 12;i_20 += 1)
            {
                {
                    var_44 -= var_1;
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 12;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 1;i_22 += 1)
                        {
                            {
                                var_45 = ((!((min((max(67, var_13)), (arr_38 [i_22] [i_20]))))));
                                arr_82 [i_0 - 3] [i_19] [i_21] [i_19] [i_20] [i_0 - 3] [i_22] = ((-(max((arr_31 [i_0 - 3]), var_4))));
                            }
                        }
                    }
                    arr_83 [i_0] [i_0] = (var_10 ? (((!(~3308126021)))) : (((!(arr_69 [i_19])))));
                    arr_84 [i_0 - 3] = var_10;
                }
            }
        }
    }
    for (int i_23 = 0; i_23 < 14;i_23 += 1)
    {
        arr_87 [i_23] = (min((arr_86 [i_23] [i_23]), (((!(arr_85 [i_23] [i_23]))))));
        var_46 = (arr_85 [i_23] [2]);
        arr_88 [i_23] = (arr_85 [7] [i_23]);

        for (int i_24 = 0; i_24 < 14;i_24 += 1)
        {
            arr_93 [i_23] = (((~var_13) ? (((var_14 && ((min((arr_89 [i_23] [i_23] [i_23]), var_13)))))) : ((max(((max((arr_90 [i_23] [i_23]), (arr_86 [i_24] [i_23])))), var_19)))));
            arr_94 [i_23] = (-(arr_92 [i_24] [i_23]));
        }
        /* vectorizable */
        for (int i_25 = 2; i_25 < 12;i_25 += 1)
        {
            var_47 *= (!65512);
            /* LoopNest 3 */
            for (int i_26 = 2; i_26 < 10;i_26 += 1)
            {
                for (int i_27 = 1; i_27 < 11;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 1;i_28 += 1)
                    {
                        {
                            arr_103 [i_23] [i_26] [7] [2] = ((!((((arr_96 [i_23] [i_23] [i_28]) % -1920128740)))));
                            arr_104 [i_23] [i_25 - 2] [i_26] [i_27] [i_23] = ((-(((!(arr_98 [i_23] [i_23] [i_28]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
