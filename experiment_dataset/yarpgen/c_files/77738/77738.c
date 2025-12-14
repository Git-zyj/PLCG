/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_1));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 -= (arr_0 [i_0]);

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_14 = (max(var_3, var_9));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_15 = (((min(var_7, var_6)) <= ((~(arr_8 [i_2 + 1] [i_2 + 2] [i_1] [i_2])))));
                            arr_14 [i_1] = var_10;
                        }
                        var_16 += ((((var_9 >> (-8025 + 8086))) & (((min(var_2, -8025))))));
                        arr_15 [i_1] = (arr_7 [i_0] [i_1] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_17 = (~var_7);
                        var_18 = var_11;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_2] [i_6] [i_1] [i_6] = (max((~var_9), (var_1 ^ var_0)));
                                var_19 = -8025;
                                var_20 = (min(var_20, var_5));
                                var_21 |= (((-491312915 ? 0 : 229)));
                            }
                        }
                    }

                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        var_22 = var_3;
                        var_23 &= ((((min((arr_13 [i_2 + 3] [i_8]), (arr_13 [i_2 - 1] [i_0])))) ? (min(var_6, var_3)) : (((-(arr_13 [i_2 + 3] [i_8]))))));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_24 = ((((min(var_8, var_0))) || (-2147483630 && var_8)));
                        arr_30 [i_1] [i_1] = max(((var_2 ? (arr_29 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_1] [i_2] [i_2]) : var_0)), ((min((arr_6 [i_1]), ((-97 ? 491312915 : 8026))))));
                        arr_31 [i_1] [i_1] [8] [1] [i_1] = (max((max(var_4, var_2)), (((arr_11 [i_0]) ? (arr_11 [i_9]) : var_6))));
                    }
                    for (int i_10 = 4; i_10 < 22;i_10 += 1)
                    {
                        arr_34 [i_0] [19] [i_1] [i_2] [8] [i_10] = min(var_4, (min((~var_7), ((max(var_5, 18))))));
                        var_25 ^= ((!(((var_4 ? var_6 : (arr_3 [i_0] [i_1] [i_0]))))));
                    }
                }
            }
        }
        var_26 = 8118690069854674883;

        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            arr_37 [i_11] [17] = (max((max(var_11, (arr_29 [i_0] [17] [i_0] [i_11] [i_0] [i_0]))), (max(var_0, 11750739895913060664))));
            var_27 = var_6;
            arr_38 [i_11] [i_11] [i_11] = arr_7 [i_0] [i_0] [i_11];
        }
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            var_28 &= (min((min(3, 11750739895913060664)), ((var_11 ? -97 : (max(var_6, var_8))))));
            var_29 = (max(-var_4, ((max((arr_7 [i_0] [i_0] [i_12]), var_0)))));
        }
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                {
                    arr_47 [15] [1] [i_13] [21] = (max((min(1608330681, var_1)), ((max(var_5, var_5)))));
                    var_30 ^= 512;
                }
            }
        }

        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            arr_51 [i_15] [i_15] = var_6;

            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                var_31 = ((~(max(var_1, var_10))));
                var_32 *= ((-8011 ? ((min((max(1, 491312944)), (max(-8047, 550560254))))) : (max(((var_1 ? var_4 : var_10)), (((~(arr_44 [i_0] [i_16]))))))));
            }
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                var_33 = (min(var_33, ((min((arr_52 [i_17] [i_15] [9]), (max((arr_17 [i_0] [15] [i_0] [i_0] [i_0]), var_11)))))));
                var_34 -= var_0;
                var_35 += var_8;
            }
            for (int i_18 = 1; i_18 < 1;i_18 += 1)
            {
                arr_58 [i_0] [i_15] [i_18] [i_18] = (max((!550560264), (max((arr_46 [i_18 - 1]), 491312936))));
                var_36 = var_4;

                /* vectorizable */
                for (int i_19 = 1; i_19 < 19;i_19 += 1)
                {
                    var_37 = ((-8118690069854674876 / ((64512 ? var_4 : var_9))));

                    for (int i_20 = 0; i_20 < 23;i_20 += 1)
                    {
                        var_38 = (max(var_38, (((var_10 / (arr_12 [i_0] [i_0] [i_0] [1] [i_19 - 1] [i_19] [i_20]))))));
                        var_39 = var_3;
                        var_40 += (~4294967295);
                        var_41 = (max(var_41, ((((arr_17 [i_19 - 1] [i_18 - 1] [i_18] [i_18 - 1] [i_18]) / (arr_3 [i_0] [i_15] [i_18 - 1]))))));
                    }
                }
                for (int i_21 = 2; i_21 < 20;i_21 += 1)
                {
                    arr_69 [i_0] [i_15] [i_15] = ((~((min(var_2, var_0)))));
                    arr_70 [i_15] [i_21] = (max(((1572231012 ? (arr_19 [i_21 - 1] [i_21 - 1] [0] [i_21 + 2]) : var_11)), var_2));
                    arr_71 [i_15] [i_15] [i_21] [i_21] [i_21] [i_21] = (max(var_5, (max((max(var_6, var_1)), (~var_6)))));
                }
                for (int i_22 = 1; i_22 < 21;i_22 += 1)
                {
                    var_42 -= var_2;
                    var_43 = ((((max((((arr_72 [i_15] [i_15] [i_18] [i_18] [i_22]) + var_6)), var_1))) ? var_7 : ((((max(118, var_2))) ? var_7 : ((max((arr_21 [i_15] [4] [9] [i_22] [i_0] [i_0]), var_1)))))));
                    var_44 = (min((arr_43 [i_0]), (max(var_4, (!11197238970765730795)))));
                }
            }
        }
    }
    for (int i_23 = 0; i_23 < 10;i_23 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 10;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 10;i_25 += 1)
            {
                {
                    var_45 += (max(((min((arr_24 [i_24] [i_23]), var_3))), (min(var_6, 0))));

                    for (int i_26 = 1; i_26 < 8;i_26 += 1)
                    {
                        var_46 += (((((max(var_2, 29))) ? 105 : (!var_5))));
                        var_47 = (min(var_5, ((((min(8026, var_9))) ? 4032 : (~6082953060262691081)))));
                        var_48 = 32768;
                        arr_86 [7] [i_26] [i_25] [i_26] = (min((max((var_5 ^ var_4), 550560254)), var_11));
                    }
                }
            }
        }
        var_49 = var_0;
    }
    for (int i_27 = 0; i_27 < 10;i_27 += 1) /* same iter space */
    {

        for (int i_28 = 0; i_28 < 10;i_28 += 1)
        {
            arr_91 [i_27] = ((((max((arr_21 [i_27] [i_27] [i_27] [i_27] [2] [14]), (arr_2 [i_27])))) / (max(18446744073709551605, var_10))));
            var_50 *= ((max(var_9, (arr_16 [i_27] [i_27] [i_27] [i_28] [i_28] [i_27]))));
        }
        /* LoopNest 3 */
        for (int i_29 = 0; i_29 < 10;i_29 += 1)
        {
            for (int i_30 = 1; i_30 < 1;i_30 += 1)
            {
                for (int i_31 = 2; i_31 < 8;i_31 += 1)
                {
                    {
                        var_51 = var_8;
                        var_52 ^= (((var_1 != var_5) ? (((~var_5) | (((arr_21 [i_27] [i_27] [i_30] [i_27] [i_29] [i_27]) ? 25089 : var_2)))) : (max(((4294967295 ? var_0 : 127)), ((max(var_3, 1)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
