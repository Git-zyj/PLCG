/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 134217728;
        var_16 = ((((((-2147483647 - 1) ? ((var_5 ? var_2 : (-2147483647 - 1))) : (var_0 | var_12)))) ? var_13 : var_9));
        var_17 = ((~(((!((max(var_1, var_0))))))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] |= (var_15 << (var_1 - 1744420875));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_18 = (min(var_18, (var_9 + 0)));
                    var_19 = var_0;
                    var_20 = ((-(~var_9)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_21 = (max(var_21, var_10));
                                arr_20 [i_1] [i_2] [i_3] [i_3] [i_1] |= var_7;
                                var_22 = (min(var_22, 0));
                                var_23 = var_9;
                                arr_21 [i_1] [i_2 - 1] [i_2] [i_4] [i_4] [i_5] = (((((var_1 ? (-2147483647 - 1) : 66))) ? var_0 : 66));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        arr_31 [i_9] [i_7] [i_7] = (var_0 != var_8);

                        for (int i_10 = 1; i_10 < 24;i_10 += 1) /* same iter space */
                        {
                            arr_34 [i_6] [i_6] [i_9] [i_9] [i_10] = 117;
                            arr_35 [i_7] [i_8] [i_9] [i_10] = ((var_13 ? 0 : ((var_9 ? var_14 : 117))));
                            arr_36 [i_10 + 1] [i_9] [18] [i_9] [i_10] = ((-((var_14 << (var_11 - 1433901116)))));
                            arr_37 [i_9] [i_9] [16] [i_9] [i_6] [i_9] = (((!2017623513) ? 3656812055 : (0 < var_14)));
                        }
                        for (int i_11 = 1; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            var_24 ^= var_11;
                            var_25 *= ((2111815783 >> (var_13 + 1593847213)));
                            arr_42 [i_11] [i_9] [i_8] [i_8] [i_7] [i_9] [i_6] = (var_4 << 1);
                            var_26 += var_13;
                        }
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            var_27 ^= ((var_0 ? 189 : var_11));
                            arr_46 [i_9] [i_9] = var_3;
                            var_28 = (max(var_28, (1 + var_5)));
                            var_29 |= ((var_15 ? 0 : var_9));
                            var_30 = 2017623513;
                        }
                    }
                }
            }
        }
        var_31 = ((-var_14 ? (var_10 | var_8) : 2));
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                {
                    arr_54 [i_15] [i_15] [i_14] [i_13] = 110;
                    arr_55 [i_13] [i_14] [i_15] = (((((var_15 ? var_6 : var_6))) + var_3));
                }
            }
        }

        /* vectorizable */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        {
                            arr_66 [i_19] [i_16] [i_18] = 13843930460470785168;
                            var_32 = ((var_1 ? (~32767) : var_1));
                            arr_67 [i_13] [i_19] [i_19] [i_17] [i_18] [i_19] [i_19] = ((1 ? (!var_4) : var_2));
                            var_33 = (min(var_33, ((var_10 ? 2277343783 : var_0))));
                            arr_68 [i_13] [18] [i_13] [i_19] = ((11 ? 66 : var_11));
                        }
                    }
                }
            }
            arr_69 [i_13] = (~var_7);
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 25;i_20 += 1)
        {
            var_34 = (max(var_34, ((((((var_6 ? var_2 : var_12))) ? var_10 : 2017623513)))));
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 25;i_21 += 1)
            {
                for (int i_22 = 3; i_22 < 22;i_22 += 1)
                {
                    {

                        for (int i_23 = 0; i_23 < 25;i_23 += 1)
                        {
                            var_35 = (~0);
                            arr_82 [i_13] [i_20] [i_20] [i_21] [i_23] [i_23] [i_23] = -var_14;
                            arr_83 [i_21] [i_21] [i_21] [i_20] [i_23] = -646543335;
                        }

                        for (int i_24 = 0; i_24 < 25;i_24 += 1)
                        {
                            arr_88 [i_13] [i_13] [i_13] [i_13] [i_21] [i_21] = ((-var_10 ? var_0 : 3126791833));
                            arr_89 [i_13] [i_21] [i_21] [i_22] = var_12;
                        }
                        for (int i_25 = 0; i_25 < 25;i_25 += 1)
                        {
                            var_36 = var_9;
                            var_37 = (max(var_37, var_13));
                        }
                    }
                }
            }
            arr_93 [i_13] [8] = ((var_2 + (!var_4)));
            arr_94 [5] [5] = var_15;
        }
        /* vectorizable */
        for (int i_26 = 0; i_26 < 25;i_26 += 1)
        {
            var_38 = (~var_14);
            /* LoopNest 3 */
            for (int i_27 = 3; i_27 < 24;i_27 += 1)
            {
                for (int i_28 = 1; i_28 < 24;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 25;i_29 += 1)
                    {
                        {
                            var_39 = 189;
                            var_40 = 425893741;
                        }
                    }
                }
            }
            var_41 += (((((var_15 ? var_6 : 12189498793015787832))) ? var_9 : 1684946326915263591));
            var_42 = (!-1);
        }
        var_43 = (max(((((max(var_5, var_15))) ? 3670016 : var_1)), var_6));
        var_44 = 10333016480368935545;
    }
    /* LoopNest 2 */
    for (int i_30 = 0; i_30 < 17;i_30 += 1)
    {
        for (int i_31 = 1; i_31 < 15;i_31 += 1)
        {
            {

                /* vectorizable */
                for (int i_32 = 0; i_32 < 17;i_32 += 1)
                {
                    arr_116 [i_30] [i_30] [i_30] [i_30] = ((25951 >= (-127 - 1)));
                    arr_117 [i_32] [i_32] [i_32] [1] = var_11;
                    arr_118 [i_30] [i_31] [11] = var_6;
                }

                /* vectorizable */
                for (int i_33 = 0; i_33 < 17;i_33 += 1)
                {
                    arr_122 [i_33] [i_33] = -19946;

                    for (int i_34 = 2; i_34 < 16;i_34 += 1) /* same iter space */
                    {
                        arr_126 [i_30] [i_30] [i_30] [8] [i_33] [i_30] = (~1);
                        arr_127 [i_33] = -var_2;
                    }
                    for (int i_35 = 2; i_35 < 16;i_35 += 1) /* same iter space */
                    {
                        arr_130 [i_31] [i_33] = ((var_0 ? var_14 : var_7));
                        var_45 = (((var_13 && var_10) ? var_8 : (!var_0)));
                    }
                }
                for (int i_36 = 0; i_36 < 17;i_36 += 1)
                {
                    var_46 = var_5;
                    arr_133 [i_36] = ((+((((~180) == -var_4)))));
                    var_47 ^= (var_0 * -var_2);
                    var_48 |= (max((((918464433 == (max(2096896, 2427678674))))), var_13));
                }
                for (int i_37 = 0; i_37 < 17;i_37 += 1)
                {
                    var_49 = (32767 | 32767);
                    var_50 = var_15;
                    var_51 = (min(var_51, (((18446744073709551589 << ((((1684946326915263591 - (((min(255, 1)))))) - 1684946326915263581)))))));
                    var_52 = (((~var_8) / ((var_12 ? var_4 : var_12))));
                    arr_137 [i_30] [i_30] [i_37] = ((((var_3 ? var_13 : var_6))) ^ var_1);
                }
                /* vectorizable */
                for (int i_38 = 3; i_38 < 16;i_38 += 1)
                {
                    var_53 *= var_3;
                    var_54 |= ((~(-1 % var_4)));
                }
            }
        }
    }
    var_55 = ((((max((!var_14), ((50331648 ? 10333016480368935545 : var_0))))) ? (((((max(1684946326915263591, var_1))) ? ((var_8 ? -1 : 1)) : ((0 ? var_8 : var_13))))) : (min(var_0, var_2))));
    #pragma endscop
}
