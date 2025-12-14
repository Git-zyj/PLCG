/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = ((-29018 ? -18 : ((17 ? (arr_3 [i_0 + 2] [i_0 - 1]) : (arr_3 [i_0 + 1] [i_0 + 1])))));
                var_11 = (min(var_11, (((min(2867100892, (arr_1 [i_0 + 2] [i_0 - 1])))))));
                var_12 = var_5;
            }
        }
    }
    var_13 = 1427866404;
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_14 = ((-(((!(!var_6))))));
                            var_15 = var_5;
                            var_16 = (((arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (--6038385438035764323) : (((max(((min((arr_8 [i_2]), (arr_17 [i_2])))), var_8))))));
                            arr_18 [i_4] |= 63473;
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_17 = (arr_6 [i_2]);
                    var_18 = ((-((18 ? var_9 : 7230493970731290653))));
                }
                arr_21 [i_2] = (~156341239);
                arr_22 [i_2] = ((!(arr_6 [i_2])));

                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        var_19 = (arr_5 [i_2]);
                        var_20 = (min(var_20, var_9));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_2] [i_3] [i_2] = 35;
                        var_21 = -var_1;
                    }
                    var_22 ^= -2039480402002892087;
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        arr_38 [i_2 + 4] [i_3] [i_2 + 4] [1] [i_10] |= (~var_4);
                        var_23 = (((arr_2 [i_2 - 3] [i_3 - 1] [i_10]) ? 2733926525 : var_9));
                        var_24 = ((var_9 ? (arr_0 [i_2 + 4]) : (arr_0 [i_2 + 1])));
                        var_25 = ((arr_19 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? 6 : var_4);
                    }
                    var_26 = (min(var_26, 14158477743167633311));

                    for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                    {
                        var_27 = (min(var_27, var_9));
                        var_28 = (max(var_28, (((221 ? var_4 : -8980956756848028472)))));

                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            arr_43 [i_2] [i_3 - 1] [i_10] [i_2] = (((~var_0) ? (arr_13 [i_2 + 3]) : (arr_4 [i_3 - 1])));
                            var_29 = (((arr_32 [i_2 - 2] [12]) ? (arr_34 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]) : 253));
                        }
                        var_30 = var_5;
                        var_31 = (((1 ? var_5 : 18)));
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                    {
                        var_32 ^= var_2;

                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_33 = (arr_11 [i_15] [i_3 - 1]);
                            var_34 = -19;
                            arr_51 [i_10] |= ((var_0 ? (arr_48 [i_10] [i_15]) : (arr_25 [i_10] [i_10] [i_10] [i_14])));
                        }
                        for (int i_16 = 0; i_16 < 15;i_16 += 1)
                        {
                            var_35 *= (((((18446744073709551615 ? 8 : 1))) ? 8980956756848028472 : ((((arr_39 [i_2] [i_3] [i_10] [14] [i_16]) ? -8 : (arr_26 [i_16]))))));
                            arr_54 [i_10] [i_10] [i_10] [i_10] [i_10] [i_2] = (((67076096 ? var_3 : (arr_10 [i_2] [i_10] [i_16]))));
                            var_36 = var_9;
                            var_37 -= -19;
                            var_38 *= var_4;
                        }
                    }
                }
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    var_39 = ((!(((0 ? 3 : 17464961997142963214)))));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        for (int i_19 = 4; i_19 < 13;i_19 += 1)
                        {
                            {
                                var_40 = (max(var_40, (((var_5 ? ((~(((arr_10 [i_18] [12] [12]) ? 1 : var_1)))) : var_0)))));
                                var_41 += var_6;
                            }
                        }
                    }

                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        var_42 -= ((+((-((37886 ? (arr_0 [i_17]) : (arr_45 [i_17] [i_17])))))));
                        var_43 = 1;
                        var_44 *= 13743;
                        var_45 = (0 ? 229476609 : (arr_25 [i_2] [i_2] [i_17] [i_20]));
                    }
                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {

                        for (int i_22 = 3; i_22 < 13;i_22 += 1) /* same iter space */
                        {
                            var_46 -= ((120 ? 2394365890 : ((((((arr_68 [i_2] [3] [i_17] [i_21] [i_22]) ? -5 : (arr_4 [i_2 + 2])))) ? (!var_0) : var_2))));
                            var_47 |= ((~(((-(arr_49 [i_17] [i_2] [i_2] [4] [i_17] [i_2] [i_22]))))));
                        }
                        for (int i_23 = 3; i_23 < 13;i_23 += 1) /* same iter space */
                        {
                            var_48 = var_7;
                            var_49 = 1050476503;
                            var_50 = ((((max(-49, -var_4))) ? var_5 : 8117));
                            var_51 = (((((27650 ? (arr_16 [i_21] [i_23 + 1] [i_2] [12] [i_23 - 1] [i_2]) : 1))) ? ((var_9 ? var_4 : var_2)) : ((((arr_19 [i_2] [i_3] [i_17] [4]) ? (!15049) : (!84))))));
                        }

                        for (int i_24 = 0; i_24 < 15;i_24 += 1)
                        {
                            var_52 = (min(var_52, var_7));
                            arr_75 [i_2] [i_3] [11] [i_21] [i_2] = var_2;
                            arr_76 [i_2] [i_3 - 1] [i_17] [i_17] [i_24] = 0;
                            var_53 += var_6;
                        }
                    }
                    /* vectorizable */
                    for (int i_25 = 0; i_25 < 15;i_25 += 1)
                    {
                        var_54 = (arr_78 [i_2] [i_3] [0] [i_2] [i_25]);
                        var_55 = (max(var_55, var_1));
                        var_56 = (min(var_56, (-9223372036854775807 - 1)));
                        arr_80 [i_2] [i_25] = ((((4179745350171486054 ? 8176459898921016709 : (arr_15 [i_2] [i_3])))) ? (arr_37 [i_2 - 1] [8] [11] [i_3] [5] [i_25]) : (!171));
                        var_57 -= (((arr_0 [i_2 + 3]) ? (arr_0 [i_2 - 3]) : (arr_0 [i_2 + 2])));
                    }
                    var_58 ^= ((min(((-64 ? -2940831284102566999 : 1), (arr_10 [i_17] [i_3] [i_17])))));
                    var_59 = (var_3 ? -40 : var_9);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_26 = 0; i_26 < 14;i_26 += 1)
    {
        arr_85 [i_26] [8] = 172;
        var_60 -= (((1 ? var_5 : (arr_37 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]))));
    }
    for (int i_27 = 1; i_27 < 1;i_27 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_28 = 4; i_28 < 16;i_28 += 1)
        {
            for (int i_29 = 2; i_29 < 17;i_29 += 1)
            {
                {
                    var_61 = (min(var_61, (((-(arr_0 [i_29]))))));
                    arr_93 [i_27] [10] [i_29 + 1] [i_29] = ((0 ? -14016 : 14016));
                    var_62 = (min(var_62, (~-11883)));
                }
            }
        }
        var_63 = -2147483644;
    }
    for (int i_30 = 1; i_30 < 1;i_30 += 1) /* same iter space */
    {
        var_64 |= -25;
        arr_96 [16] = ((-14016 ? 213 : 11883));
        var_65 = (max(var_65, (((!(arr_87 [15]))))));
        arr_97 [i_30] [i_30] = 20588;
    }
    for (int i_31 = 1; i_31 < 1;i_31 += 1) /* same iter space */
    {
        var_66 = (((arr_88 [i_31]) ? var_5 : 31));

        for (int i_32 = 2; i_32 < 17;i_32 += 1)
        {
            var_67 = (max(var_67, (arr_101 [i_31] [i_32] [i_32])));
            arr_104 [i_32] [i_32] = (min(-1060139787, (((((-61 ? (arr_103 [i_31 - 1] [i_32]) : (arr_100 [i_31] [i_31])))) ? var_6 : ((var_9 ? var_2 : (arr_3 [i_31] [i_31])))))));
            var_68 = var_5;
        }
        for (int i_33 = 0; i_33 < 1;i_33 += 1)
        {
            arr_107 [1] [i_33] = (arr_91 [i_31] [i_31 - 1] [11] [11]);

            /* vectorizable */
            for (int i_34 = 2; i_34 < 15;i_34 += 1)
            {

                for (int i_35 = 0; i_35 < 18;i_35 += 1)
                {
                    var_69 = (min(var_69, -95));
                    arr_114 [i_31] [i_31] [i_34 - 1] [i_35] [i_35] = var_1;
                }
                arr_115 [i_31 - 1] [i_33] = -var_1;
                var_70 = (arr_101 [i_31 - 1] [i_34 - 2] [i_34 - 2]);
            }
        }
        for (int i_36 = 0; i_36 < 18;i_36 += 1)
        {
            var_71 = var_0;

            for (int i_37 = 3; i_37 < 14;i_37 += 1)
            {
                /* LoopNest 2 */
                for (int i_38 = 0; i_38 < 18;i_38 += 1)
                {
                    for (int i_39 = 0; i_39 < 18;i_39 += 1)
                    {
                        {
                            arr_126 [i_31] [i_31] [i_31] = 4294967295;
                            var_72 = (min(var_72, (((!(!var_2))))));
                            var_73 = (min(var_73, (((~(arr_2 [i_31 - 1] [i_31 - 1] [i_37 + 1]))))));
                        }
                    }
                }
                arr_127 [10] [i_36] [i_37] = 99;
            }
            arr_128 [i_36] [i_31] = (arr_102 [i_31] [i_36]);
            var_74 = (!1468039413);
        }
        var_75 = ((min((!var_6), (arr_124 [i_31 - 1] [i_31]))));
    }
    #pragma endscop
}
