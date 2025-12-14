/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_15 = arr_0 [13];

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            arr_13 [i_0] [6] [10] &= ((1 * (1 > 5260761422049199843)));
                            var_16 -= (arr_10 [12] [18] [i_2] [i_3] [i_4 - 1]);
                            var_17 = 1;
                            var_18 -= 237590216;
                            var_19 = (max(var_19, var_6));
                        }
                        var_20 = (((arr_5 [i_1]) ? 3897597801 : (arr_5 [i_1])));
                        var_21 = (min(var_21, 2143936897));
                        var_22 = 24655;
                    }
                }
            }
        }
        var_23 *= ((0 ? 112 : -11));
        arr_14 [i_0] = (~4994);
        var_24 = (min(var_24, (((-(arr_7 [i_0] [6] [i_0] [i_0]))))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {

                        for (int i_9 = 4; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            var_25 = (min((((1800200099 && ((max(-65, 1)))))), var_13));
                            var_26 = 3897597805;
                        }
                        for (int i_10 = 4; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_27 *= (min(var_5, (arr_26 [i_5] [i_5] [14] [2] [i_10])));
                            var_28 += -5;
                        }

                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            var_29 ^= ((18988 != (arr_21 [i_8] [i_8 - 1] [i_8])));
                            var_30 -= (((var_4 > ((min(var_9, -110))))));
                            var_31 = (min(var_31, ((min(-710254161, (max((((arr_23 [i_5] [15] [i_7] [i_8]) - -19)), (((arr_28 [i_5] [i_6] [i_7] [i_5] [i_8] [16]) ? -118 : 1)))))))));
                            var_32 = (min(var_32, (~-112)));
                        }
                    }
                }
            }
        }
        var_33 ^= var_0;
        var_34 += var_13;
    }
    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
    {

        for (int i_13 = 3; i_13 < 15;i_13 += 1)
        {
            var_35 = (min(var_35, ((min(((((max(5, (arr_3 [i_12] [14])))) ? var_1 : (var_4 * var_14))), (-18989 | 817113562))))));
            var_36 += ((~var_10) ? (max((arr_4 [i_13 + 3] [i_13 + 2] [18]), var_7)) : 4);

            for (int i_14 = 0; i_14 < 18;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        {
                            var_37 -= ((((max(-111, (arr_37 [i_13 - 2] [i_13] [i_14])))) ? (((-118 ? 13538 : -107))) : var_5));
                            var_38 = (!0);
                        }
                    }
                }

                for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
                {
                    var_39 -= (max(-18996, 1));
                    var_40 = (max(var_40, ((((max(-18989, 4463864348716445637)) ^ ((min((~var_9), 90))))))));
                }
                for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
                {
                    arr_51 [i_13] [i_12] [0] [13] [12] = min((arr_43 [i_12] [i_13] [i_13] [7]), (((min(1, 1)) ? (arr_19 [17]) : (((arr_11 [i_13]) - 118)))));
                    var_41 &= -28157;
                }
                var_42 &= (arr_38 [12] [i_13 - 3] [i_14] [i_14]);
                var_43 = (~var_12);
                var_44 += (arr_5 [8]);
            }
        }
        var_45 ^= (((42 != 3897597801) ? (max(1, 2746833550151778346)) : ((max((arr_15 [i_12] [12]), -28158)))));

        for (int i_19 = 0; i_19 < 18;i_19 += 1)
        {
            /* LoopNest 2 */
            for (int i_20 = 4; i_20 < 15;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 18;i_21 += 1)
                {
                    {
                        var_46 ^= ((-(((min(11022981412494252839, -4463864348716445637)) ^ (arr_27 [i_12] [0])))));
                        var_47 *= 53179;
                        var_48 += (max(((min((arr_3 [i_19] [7]), ((min(-22208, 1956214478)))))), ((19 ? 1816262630 : 97573901362429516))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 18;i_22 += 1)
            {
                for (int i_23 = 3; i_23 < 17;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 18;i_24 += 1)
                    {
                        {
                            var_49 = (max(var_49, (arr_62 [i_23 + 1] [4])));
                            var_50 -= (arr_50 [8] [8] [i_22] [8] [i_12]);
                            var_51 = ((-((-(arr_28 [1] [i_23 - 2] [1] [i_23 - 1] [i_23 - 1] [i_23 - 1])))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_25 = 0; i_25 < 18;i_25 += 1) /* same iter space */
        {
            var_52 = -118;
            /* LoopNest 3 */
            for (int i_26 = 0; i_26 < 18;i_26 += 1)
            {
                for (int i_27 = 4; i_27 < 16;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 18;i_28 += 1)
                    {
                        {
                            var_53 = (arr_77 [6] [i_12] [i_12] [i_12] [3] [14] [i_28]);
                            var_54 = (((2147483647 != var_2) & -32712));
                            var_55 = (max(var_55, (((!(arr_57 [i_26] [i_27] [i_27 - 2] [i_27 - 3]))))));
                        }
                    }
                }
            }
            var_56 ^= (((((~(arr_18 [i_12] [8] [6])))) ? 1 : (~2147483647)));
        }
        for (int i_29 = 0; i_29 < 18;i_29 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_30 = 0; i_30 < 18;i_30 += 1)
            {
                for (int i_31 = 0; i_31 < 18;i_31 += 1)
                {
                    for (int i_32 = 3; i_32 < 16;i_32 += 1)
                    {
                        {
                            var_57 += ((~((-1352492162 ? -6 : 1))));
                            var_58 = (min(var_58, (((329853099 - (2920377684 ^ -28164))))));
                            var_59 = (max((~8408597893779630626), (arr_64 [13] [i_30] [i_32])));
                        }
                    }
                }
            }
            var_60 &= -28165;
            arr_89 [i_29] [i_29] [i_12] = -13519;
        }
        var_61 *= ((max((arr_16 [i_12]), (-9 && 3298429254))));
        var_62 = (((max((arr_76 [6] [i_12] [i_12] [6]), 2332161327970228462))) ? 15 : (max(((-11 ? var_14 : -6)), 19216)));
    }
    var_63 = (min(var_63, -28171));
    var_64 = (min(var_64, -28135));
    /* LoopNest 2 */
    for (int i_33 = 3; i_33 < 9;i_33 += 1)
    {
        for (int i_34 = 0; i_34 < 12;i_34 += 1)
        {
            {
                var_65 *= (min(((-(arr_3 [i_33 - 3] [i_33 - 3]))), ((-(arr_3 [i_33 - 3] [i_33 - 1])))));
                /* LoopNest 3 */
                for (int i_35 = 0; i_35 < 12;i_35 += 1)
                {
                    for (int i_36 = 0; i_36 < 12;i_36 += 1)
                    {
                        for (int i_37 = 0; i_37 < 12;i_37 += 1)
                        {
                            {
                                var_66 -= (max(var_6, 2147483634));
                                var_67 = (max(var_67, (~1)));
                            }
                        }
                    }
                }
                var_68 *= (min(var_7, (((-((min(28195, 7770))))))));

                for (int i_38 = 4; i_38 < 10;i_38 += 1)
                {
                    var_69 = (max(((-(var_13 ^ 4076586426))), -5513));
                    var_70 = (min(var_70, (((((min(-32712, (max(-28201, 97868274796464708))))) ? (-127 - 1) : ((((max(var_10, (arr_91 [i_33]))) <= ((max(var_6, 19207)))))))))));
                    var_71 += (((var_9 - var_6) ? ((-((var_12 + (arr_84 [11] [i_34] [i_34] [11]))))) : 2992268745255504016));
                }
                for (int i_39 = 0; i_39 < 12;i_39 += 1)
                {
                    arr_112 [i_33 - 3] [i_34] [i_34] [i_34] = var_4;
                    var_72 += 56127;
                    /* LoopNest 2 */
                    for (int i_40 = 0; i_40 < 12;i_40 += 1)
                    {
                        for (int i_41 = 0; i_41 < 12;i_41 += 1)
                        {
                            {
                                var_73 = (min(var_73, (((((((max((arr_80 [i_33]), var_2))) * -var_9)) < 1895)))));
                                var_74 = (((~15) | 45));
                            }
                        }
                    }
                }
                var_75 += var_14;
            }
        }
    }
    #pragma endscop
}
