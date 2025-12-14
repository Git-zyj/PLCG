/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (+-0);
        arr_3 [i_0] = (~var_7);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_10 = (((arr_7 [i_2] [i_2 - 3]) || (arr_8 [i_1] [i_1] [i_2])));
                    arr_11 [i_2] = (arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_11 *= (((arr_1 [2]) < (arr_12 [0] [0] [i_5 + 1] [i_5] [i_5])));
                                var_12 = (min(var_12, (((!(arr_15 [i_2] [i_2] [i_2 + 2] [i_3] [i_2]))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 11;i_7 += 1)
            {
                {
                    arr_24 [i_7] [i_7] [i_1] [i_7] = (102 + var_2);

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_27 [i_1] [i_6] [i_6] [i_7] [i_7] [i_6] = (arr_23 [i_7 - 3] [i_7] [i_7 - 3] [i_6]);
                        var_13 = (max(var_13, var_4));
                        arr_28 [i_1] [i_7] [i_6] [2] [1] = ((!(arr_4 [i_1] [i_6])));
                        var_14 -= ((~(arr_21 [0] [i_7 - 3] [i_7 - 3] [0])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 24;i_9 += 1)
    {
        var_15 = ((!(arr_30 [i_9 + 1])));
        arr_31 [i_9] = (((((!(arr_29 [i_9])))) - var_2));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 15;i_12 += 1)
            {
                {
                    arr_39 [i_10] [i_10] [i_11] [i_12] = (arr_38 [i_10]);
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 16;i_14 += 1)
                        {
                            {
                                arr_45 [i_10] [i_13] [i_10] = (((arr_41 [i_10] [i_11] [i_10] [i_13] [i_14 - 2]) == (arr_41 [i_10] [i_11] [i_10] [i_13] [i_14 - 1])));
                                arr_46 [i_10] [i_10] [i_10] [i_10] [i_14] = (arr_41 [i_11] [i_12 + 2] [i_10] [3] [i_12]);
                                var_16 = (max(var_16, (arr_37 [i_10] [i_11] [i_12 + 2])));
                                arr_47 [0] [8] [i_13] [4] [8] [i_10] |= var_4;
                                var_17 = ((((arr_35 [i_12 + 1]) ? (arr_42 [i_10] [i_10] [i_12] [i_12 + 1] [i_13] [3]) : var_3)));
                            }
                        }
                    }
                }
            }
        }

        for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 17;i_18 += 1)
                    {
                        {
                            var_18 = (((5279 && var_3) || (((~(arr_40 [i_10] [i_18]))))));
                            var_19 = ((var_7 < ((25526 / (arr_42 [i_10] [i_10] [13] [13] [i_17] [i_18])))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 17;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((var_5 && (arr_53 [10] [i_15] [0] [i_20] [i_15]))))));
                            arr_67 [i_10] [i_20] [i_19] [14] [i_10] = (arr_55 [i_10] [i_10]);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 17;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 17;i_23 += 1)
                {
                    for (int i_24 = 1; i_24 < 1;i_24 += 1)
                    {
                        {
                            arr_76 [i_10] [i_10] [i_10] [i_22] [i_10] [i_24] = (((((-(arr_49 [i_15] [1])))) % (((arr_30 [i_22]) ? var_8 : (arr_37 [i_15] [i_23] [i_24])))));
                            arr_77 [i_10] [i_23] [15] [i_15] [i_10] = -30236;
                        }
                    }
                }
            }
        }
        for (int i_25 = 0; i_25 < 17;i_25 += 1) /* same iter space */
        {

            for (int i_26 = 0; i_26 < 17;i_26 += 1)
            {
                var_21 = (arr_29 [i_10]);
                /* LoopNest 2 */
                for (int i_27 = 1; i_27 < 16;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 17;i_28 += 1)
                    {
                        {
                            var_22 -= (((var_9 + 9223372036854775807) < (((((arr_49 [i_10] [i_10]) + 9223372036854775807)) << (((-100 + 151) - 51))))));
                            var_23 = (min(var_23, (((~(127 < var_0))))));
                            arr_88 [i_10] = (arr_59 [i_10] [i_27]);
                            arr_89 [i_10] [i_10] = arr_41 [i_27] [i_27] [i_10] [i_27] [6];
                        }
                    }
                }
            }
            for (int i_29 = 0; i_29 < 17;i_29 += 1)
            {
                var_24 = (var_1 < 685494864);
                var_25 *= (((arr_68 [2] [2]) - (arr_68 [14] [i_29])));

                for (int i_30 = 0; i_30 < 17;i_30 += 1) /* same iter space */
                {
                    var_26 = ((!(-32767 - 1)));
                    var_27 = var_7;
                    var_28 &= ((~(~-100)));
                }
                for (int i_31 = 0; i_31 < 17;i_31 += 1) /* same iter space */
                {
                    var_29 = (arr_56 [i_10] [12] [i_25] [i_10] [i_31]);

                    for (int i_32 = 0; i_32 < 17;i_32 += 1) /* same iter space */
                    {
                        arr_102 [i_10] [i_25] [i_25] [i_25] [i_25] = ((var_9 ? (arr_54 [i_10] [i_10] [12] [13] [i_10] [i_10]) : var_2));
                        var_30 = (((((arr_60 [i_25] [i_29] [i_32]) / (arr_49 [i_29] [i_31]))) * var_4));
                        var_31 = (arr_93 [i_10] [i_25]);
                    }
                    for (int i_33 = 0; i_33 < 17;i_33 += 1) /* same iter space */
                    {
                        arr_105 [i_10] [i_10] [12] [i_10] = ((!(arr_97 [i_10] [i_25] [i_29] [i_31])));
                        var_32 = var_4;
                        arr_106 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = var_9;
                        var_33 = (arr_62 [i_10] [i_10] [i_10]);
                        var_34 |= (((arr_82 [14]) ? (arr_82 [8]) : var_1));
                    }
                    arr_107 [i_25] [14] [14] &= ((((arr_75 [i_10] [16] [i_25] [16] [i_29] [i_31] [i_10]) << (var_2 + 23081))));
                    arr_108 [i_10] [i_10] [i_25] [i_29] [i_29] [i_31] = (arr_55 [i_10] [i_25]);
                    var_35 = (max(var_35, (arr_65 [i_25] [i_29])));
                }
                for (int i_34 = 0; i_34 < 17;i_34 += 1) /* same iter space */
                {
                    arr_112 [i_10] [4] [i_29] [i_10] = 1;
                    var_36 = 102;
                    arr_113 [10] [i_25] [i_29] [i_10] = 244;
                    var_37 = (min(var_37, ((((arr_52 [6] [i_25] [i_10] [2] [i_10]) || (arr_93 [10] [10]))))));
                }
                var_38 *= 64;
                /* LoopNest 2 */
                for (int i_35 = 0; i_35 < 17;i_35 += 1)
                {
                    for (int i_36 = 0; i_36 < 17;i_36 += 1)
                    {
                        {
                            arr_119 [i_10] [i_25] [6] [i_10] [i_10] [i_10] [1] = (arr_104 [i_36]);
                            var_39 = (arr_40 [i_10] [i_10]);
                            var_40 ^= ((!(arr_66 [i_10] [8])));
                        }
                    }
                }
            }
            var_41 -= ((var_6 && (arr_96 [10] [8] [16] [i_25])));
        }
        arr_120 [i_10] [6] = (arr_61 [i_10] [i_10]);
    }
    var_42 = var_6;
    var_43 = ((((!(var_7 || var_4))) ? 42755287 : (~-var_7)));
    #pragma endscop
}
