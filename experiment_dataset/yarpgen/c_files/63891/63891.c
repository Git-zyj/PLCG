/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_17 ^= ((167 ? (arr_4 [i_0 + 2] [i_0 + 2]) : (arr_4 [i_0 - 1] [i_0 - 1])));
            var_18 *= ((!(arr_0 [4] [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_1] = -76;
                        var_19 &= var_10;
                        var_20 -= (((arr_8 [i_0 + 2]) <= var_0));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 17;i_5 += 1)
            {
                {
                    var_21 = ((-(max(var_1, (arr_5 [i_0])))));
                    var_22 ^= ((((var_3 ? (arr_9 [i_5 - 2] [i_4] [i_4] [i_5]) : (arr_14 [i_0 + 2]))) / ((-((1150359871 ? -38 : var_7))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 20;i_6 += 1)
    {
        var_23 = (((arr_19 [i_6 + 1]) / (arr_19 [i_6 - 1])));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        arr_33 [i_6] [i_6] [i_9] = (arr_19 [i_6 - 1]);

                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            var_24 = ((((arr_23 [i_7] [i_9] [i_10]) >= var_5)));
                            arr_37 [i_10] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((var_10 > (arr_24 [i_6 - 3] [i_6 + 2] [i_6 - 3])));
                        }
                        var_25 = ((-58 ? (arr_27 [i_6 - 3] [i_6 + 3] [i_6 + 1] [i_6 + 1]) : (arr_27 [i_6] [i_6 + 1] [i_6 + 1] [i_6])));
                    }
                    for (int i_11 = 3; i_11 < 21;i_11 += 1)
                    {
                        var_26 = 127;

                        for (int i_12 = 2; i_12 < 21;i_12 += 1)
                        {
                            var_27 = 127;
                            var_28 = var_6;
                        }
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            arr_47 [i_6] [i_11] = arr_29 [i_11 - 3] [i_11 - 3];
                            var_29 = (((arr_30 [i_6] [i_6 + 1] [i_6]) ? var_10 : (arr_30 [i_6 - 1] [i_6 + 3] [i_6])));
                            arr_48 [i_6] [i_13] [i_11] [i_6] [i_6] = (((arr_29 [i_11 - 1] [i_7]) ? (arr_29 [i_6] [i_7]) : ((var_9 ? 4294967168 : var_11))));
                        }
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {

                        for (int i_15 = 3; i_15 < 20;i_15 += 1)
                        {
                            var_30 = ((-4294967142 ? -7914290657850604852 : var_11));
                            var_31 = 4294967164;
                            var_32 ^= ((var_5 > (arr_25 [6])));
                        }
                        arr_54 [i_6] [i_6] = ((-(arr_30 [i_14] [i_6 - 1] [i_6 + 1])));
                    }
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        arr_57 [i_16] [i_8] [i_6] [8] [i_6] = (((((-(arr_28 [i_6] [i_6] [i_7] [i_16])))) ? (((var_3 ? (arr_28 [i_6] [i_7] [i_8] [i_7]) : 59))) : 1975133527972268357));
                        arr_58 [i_6] [i_7] [i_8] [i_6] [i_6] = var_2;
                    }

                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        arr_63 [i_6] = -38;
                        var_33 = -5;
                        var_34 = ((127 < (arr_46 [i_6] [i_6] [i_6] [i_6 + 2] [i_6 + 1] [i_6] [i_6])));
                    }
                    for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
                    {
                        var_35 -= var_14;
                        var_36 = 4294967169;
                        var_37 *= (((arr_21 [i_6 + 3] [i_7]) + -65));
                    }
                    for (int i_19 = 0; i_19 < 23;i_19 += 1) /* same iter space */
                    {
                        var_38 = ((~(arr_43 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])));
                        arr_69 [i_6] [i_6] [i_19] = ((~(arr_62 [i_19] [i_8])));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 24;i_20 += 1)
    {
        for (int i_21 = 2; i_21 < 22;i_21 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_22 = 0; i_22 < 24;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 24;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 24;i_24 += 1)
                        {
                            {
                                arr_84 [i_20] [i_21] [i_20] [i_23] [i_24] [i_24] = (((((arr_72 [i_20] [i_20]) <= 64))) ^ (((arr_77 [i_20] [i_20] [i_21 - 2]) ? (arr_83 [i_20] [i_20] [i_20] [i_21 + 2] [i_21] [i_21] [i_21 - 2]) : (arr_83 [i_21] [22] [i_20] [i_21] [i_20] [i_21] [i_21 + 2]))));
                                var_39 = (((((((((arr_72 [i_20] [i_20]) && (arr_76 [i_24])))) <= (!var_3)))) < (!106)));
                                var_40 = (!-var_15);
                                arr_85 [i_23] [i_23] [i_22] [12] [i_23] [i_22] [i_20] = 1757987386;
                                var_41 = ((((((arr_78 [i_20]) / (arr_82 [i_20] [i_21 + 1] [i_20])))) ? (((!(arr_78 [i_22])))) : ((max(-68, var_5)))));
                            }
                        }
                    }
                }
                arr_86 [i_20] [i_20] = (-var_12 + (min(var_11, (arr_74 [i_20] [i_20]))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_25 = 1; i_25 < 12;i_25 += 1)
    {
        for (int i_26 = 2; i_26 < 11;i_26 += 1)
        {
            for (int i_27 = 0; i_27 < 13;i_27 += 1)
            {
                {
                    var_42 = (((~var_6) ? var_9 : (arr_6 [i_26] [i_26 - 1] [i_26])));
                    arr_94 [i_26] [i_25] = ((!(arr_44 [i_25 + 1] [i_26 + 1] [i_26] [i_26] [i_25 + 1] [i_26 + 1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_28 = 0; i_28 < 13;i_28 += 1)
    {
        for (int i_29 = 0; i_29 < 13;i_29 += 1)
        {
            {
                arr_101 [i_28] = (min(((((arr_17 [i_28] [i_29] [i_29]) < (arr_29 [i_28] [i_29])))), (arr_16 [i_28] [i_28] [i_28])));
                /* LoopNest 2 */
                for (int i_30 = 4; i_30 < 12;i_30 += 1)
                {
                    for (int i_31 = 2; i_31 < 11;i_31 += 1)
                    {
                        {
                            arr_106 [i_28] [i_29] = (((~(arr_74 [i_29] [i_28]))));
                            var_43 = ((((-(arr_68 [i_28] [i_29] [i_30 - 4])))) ? (arr_79 [i_30] [i_30] [i_30 + 1] [i_31 - 2]) : 1073741823);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
