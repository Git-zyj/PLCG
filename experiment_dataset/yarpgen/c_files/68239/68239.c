/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = var_2;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            var_20 = var_2;
            var_21 = ((((59 ? (arr_6 [i_0]) : 536866816)) < var_18));
            var_22 -= (((arr_7 [i_0]) ? (~4997212020734619265) : -2934370363668079759));
            arr_8 [i_1] = 536866816;
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_2] &= (((var_16 < 2934370363668079758) >> 7));
            var_23 -= (!var_6);
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_24 = (max(((((((arr_10 [i_0] [i_3] [i_0]) ? var_5 : (-2147483647 - 1)))) | var_2)), (arr_7 [i_0])));
            var_25 = (min(var_25, var_8));
            var_26 ^= (arr_16 [i_0]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_27 = (max(var_27, (((~(arr_14 [i_0] [i_4]))))));
            var_28 ^= (((arr_15 [i_0]) ? var_10 : var_0));
            var_29 = ((var_0 ? var_2 : (var_8 / var_1)));
            var_30 = arr_6 [i_0];

            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                var_31 |= var_7;
                var_32 = var_8;

                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_33 = (arr_19 [i_0] [i_0] [i_0]);
                    arr_26 [i_0] [i_0] &= (((arr_10 [i_0] [i_5 - 2] [i_5]) ? var_3 : var_15));
                }
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_34 |= (arr_15 [i_4]);
                    arr_31 [18] [i_4] [i_7] [i_8] = (((arr_27 [i_0]) ? (arr_10 [i_0] [i_4] [i_7]) : 7417));
                    arr_32 [i_0] [i_4] = (((((arr_15 [i_0]) % 1466246832441197985)) <= ((((((arr_7 [i_0]) + 9223372036854775807)) << (255 - 255))))));

                    for (int i_9 = 2; i_9 < 22;i_9 += 1)
                    {
                        var_35 = (((arr_11 [i_4] [i_7] [i_0]) << (2146435072 - 2146435069)));
                        arr_35 [0] [i_4] [i_4] [i_4] [i_4] [i_4] = (((arr_24 [i_0] [i_0] [i_7] [3]) ? (arr_6 [i_0]) : -261378167));
                        arr_36 [i_0] [i_4] [i_7] [i_4] [i_9] = (var_17 ? var_0 : (arr_6 [i_9 - 1]));
                        var_36 = (arr_12 [i_4] [i_8]);
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_37 = (max(var_37, var_13));
                        var_38 = (max(var_38, (((2934370363668079784 || (506340510 | var_9))))));
                        var_39 = ((((((arr_25 [i_0] [i_7] [i_7] [i_8] [i_10] [1]) - (arr_21 [i_8] [i_8])))) ? (arr_37 [i_0] [i_7] [i_8]) : ((((arr_24 [i_0] [i_4] [i_4] [i_8]) && (arr_28 [i_0] [i_4]))))));
                        var_40 += (((((~1) + 2147483647)) << (((-231576329 + 231576333) - 4))));
                        var_41 &= (arr_10 [i_10] [14] [i_10]);
                    }
                    for (int i_11 = 3; i_11 < 22;i_11 += 1)
                    {
                        var_42 = (var_5 ? (arr_40 [i_11] [i_11] [i_11] [i_11] [i_11 - 2]) : 2146435072);
                        arr_44 [i_0] [i_0] [i_7] [i_7] [i_7] = (arr_30 [i_0] [i_0] [i_8] [i_8] [i_11] [i_8]);
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        var_43 = (min(var_43, (((~(arr_7 [i_0]))))));
                        var_44 = (min(var_44, (((26 ? (var_8 << var_0) : var_19)))));
                    }
                }
                for (int i_13 = 4; i_13 < 22;i_13 += 1)
                {
                    arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((5177154122423477088 ^ (arr_5 [i_13 - 4] [i_4] [i_4])));
                    arr_52 [i_0] [i_0] [i_0] [i_7] [i_13] = (((((var_12 / (arr_14 [i_0] [i_4])))) ? -47 : (arr_25 [i_13 + 1] [i_13 + 1] [i_7] [i_13] [i_13] [i_0])));
                }
                var_45 = (min(var_45, (arr_41 [20] [i_0] [i_7] [i_7] [8])));
                arr_53 [i_0] = -6081368886992803189;
            }
            for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 22;i_16 += 1)
                    {
                        {
                            var_46 = (arr_58 [6] [i_15]);
                            var_47 = (arr_25 [i_16] [i_16] [i_16] [i_16 - 1] [i_16 - 2] [i_16]);
                            var_48 *= (arr_50 [1] [i_4] [i_14] [i_0]);
                        }
                    }
                }

                for (int i_17 = 4; i_17 < 22;i_17 += 1)
                {
                    var_49 = (max(var_49, (!4)));
                    var_50 = (~(arr_5 [i_17 - 3] [i_17] [i_17]));
                    var_51 = (14920 & var_7);
                }
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    arr_68 [i_0] [i_4] [i_14] [i_18] [i_14] = var_7;
                    var_52 = var_15;
                }
                arr_69 [i_14] [i_4] [i_14] [i_14] = arr_17 [i_0] [i_4] [i_14];
            }
        }
    }
    for (int i_19 = 0; i_19 < 23;i_19 += 1) /* same iter space */
    {
        arr_74 [i_19] = var_16;
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 23;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 21;i_21 += 1)
            {
                {
                    arr_81 [i_19] [4] = (((arr_15 [i_19]) ? var_1 : ((((!((((arr_1 [i_19]) ? var_11 : var_1)))))))));
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 23;i_22 += 1)
                    {
                        for (int i_23 = 2; i_23 < 21;i_23 += 1)
                        {
                            {
                                var_53 = (min(var_53, (((min((((var_5 || (arr_77 [i_21] [i_23]))), 31)))))));
                                var_54 = (min(var_54, (arr_49 [10] [i_20] [i_21] [i_21 + 2])));
                                var_55 |= -25736;
                            }
                        }
                    }
                    var_56 = (min(var_56, (arr_85 [i_19] [i_19] [i_21] [i_19])));
                    var_57 -= (var_5 || var_5);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 23;i_24 += 1)
        {
            for (int i_25 = 3; i_25 < 22;i_25 += 1)
            {
                for (int i_26 = 1; i_26 < 22;i_26 += 1)
                {
                    {
                        var_58 = (min(var_58, 170));

                        for (int i_27 = 0; i_27 < 23;i_27 += 1)
                        {
                            var_59 ^= ((((((arr_11 [i_19] [i_19] [i_19]) / (arr_11 [i_19] [i_19] [i_19])))) ? (max((arr_11 [i_19] [i_19] [i_19]), 1610898911)) : (arr_11 [i_19] [i_24] [i_19])));
                            var_60 = (max(var_60, (!-6081368886992803189)));
                            arr_99 [i_19] [i_19] [i_25] [i_26] [i_27] [i_27] [i_25] = var_8;
                        }
                    }
                }
            }
        }
    }
    for (int i_28 = 0; i_28 < 23;i_28 += 1) /* same iter space */
    {
        var_61 = (((((arr_75 [i_28]) ^ (arr_47 [i_28] [i_28])))) ? (arr_33 [i_28] [i_28] [i_28] [i_28]) : (min((arr_7 [i_28]), -49)));
        var_62 += (max(((var_11 ? var_15 : (arr_56 [i_28] [i_28] [i_28]))), (((arr_56 [i_28] [i_28] [i_28]) ? 138 : (arr_56 [i_28] [19] [1])))));
        arr_103 [i_28] [i_28] = (((arr_94 [i_28] [i_28] [i_28] [i_28]) || (((var_9 ? 2460087600 : var_15)))));
    }
    var_63 -= 221;
    var_64 = ((var_0 * (((var_16 <= ((var_5 ? 1 : var_8)))))));
    #pragma endscop
}
