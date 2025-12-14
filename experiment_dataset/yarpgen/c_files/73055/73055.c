/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_17 = ((!(var_0 ^ var_8)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [i_2] [i_2] = ((var_4 >= ((var_16 >> (var_15 - 2948471509432367967)))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((!(!var_12)));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = (~var_0);
                        arr_15 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = -var_15;
                        var_18 += ((-(var_16 | var_12)));
                    }
                }
            }
            var_19 ^= var_0;
            var_20 = (~var_14);
        }
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            var_21 = var_11;
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_27 [i_0] [i_4] [i_6] = var_6;
                            var_22 = var_1;
                            var_23 = (-(292633062 || 9223372036586340352));
                        }
                    }
                }
            }
            arr_28 [i_0] [i_4] = (var_14 - var_13);
            var_24 = (~var_9);
        }
        for (int i_8 = 2; i_8 < 20;i_8 += 1)
        {
            var_25 = (((var_16 >= var_8) * var_15));
            var_26 = ((var_15 / var_13) ? var_15 : var_6);
            arr_31 [i_0] = (var_13 == var_9);
            var_27 = (var_1 && var_14);
        }

        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            var_28 = (var_2 ^ var_12);
            var_29 ^= (var_2 ^ var_0);
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_30 += ((var_9 ? var_6 : var_8));
                            var_31 = (((var_16 ? var_13 : var_8)) + var_2);
                            arr_45 [i_0] [i_10] [i_11] [i_12] [i_13] [i_11] = var_9;
                            var_32 = (!var_0);
                            var_33 = (((~var_16) == var_14));
                        }
                    }
                }
            }
            var_34 = (var_2 > var_16);
            arr_46 [i_0] [i_0] = (5294 >> 28);
        }
        for (int i_14 = 3; i_14 < 20;i_14 += 1)
        {

            for (int i_15 = 2; i_15 < 21;i_15 += 1)
            {
                var_35 *= (!var_4);
                arr_52 [i_0] [i_0] [i_0] [i_0] = var_16;
                var_36 ^= var_4;
                var_37 = (max(var_37, (((~((var_2 ? var_14 : var_16)))))));
            }
            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                var_38 = ((var_2 ? var_2 : var_4));
                arr_56 [i_16] = -49;
                arr_57 [i_14] [i_14] [i_14] = var_15;
            }
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        {
                            var_39 &= (var_1 << var_11);
                            arr_66 [i_18] [i_18] = ((-var_13 >> (var_9 >= var_12)));
                            var_40 = ((var_6 * (var_11 < var_10)));
                            var_41 = (max(var_41, ((((!1) ? -var_4 : var_13)))));
                            arr_67 [i_0] [i_0] [i_17] [i_0] [i_0] = ((!(!var_1)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 21;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 22;i_21 += 1)
                    {
                        {
                            var_42 = -var_16;
                            var_43 = (!var_13);
                        }
                    }
                }
                var_44 |= (31 == 6);
            }
            for (int i_22 = 4; i_22 < 21;i_22 += 1)
            {
                var_45 = ((var_0 ? var_6 : var_12));
                arr_75 [i_0] [i_0] [i_14] [i_0] = var_7;

                for (int i_23 = 0; i_23 < 22;i_23 += 1)
                {
                    arr_78 [i_0] [i_14] [i_22] [i_23] = (((var_12 >> (var_16 - 16825838640001296295))) - (var_7 <= var_1));
                    var_46 &= var_11;
                    var_47 = (((var_1 == var_8) != (var_6 ^ var_5)));
                    arr_79 [i_0] [i_0] [i_0] [i_0] = ((!(var_14 && var_0)));
                }
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 22;i_24 += 1)
                {
                    for (int i_25 = 1; i_25 < 19;i_25 += 1)
                    {
                        {
                            arr_85 [i_0] [i_0] = ((var_7 && var_14) < var_8);
                            arr_86 [i_0] [i_0] [i_14] [i_0] [i_24] [i_0] [i_25] = (((var_4 - var_16) || (~var_5)));
                            var_48 = (((var_6 == var_1) ? -var_16 : var_0));
                            var_49 = var_4;
                            var_50 = (((~var_8) ? var_16 : (((1 ? -28125 : 92)))));
                        }
                    }
                }
            }
            arr_87 [i_14] = (~var_10);
            var_51 = (((!var_5) - (var_1 / var_4)));
        }
    }
    for (int i_26 = 0; i_26 < 20;i_26 += 1)
    {
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 20;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 20;i_28 += 1)
            {
                {
                    arr_97 [i_26] [i_26] [i_28] = ((!(!var_0)));
                    arr_98 [i_26] = (((~((-1499003857 ? 485 : 183)))));
                    arr_99 [i_26] [i_26] [i_26] [i_28] = (((var_9 ^ var_7) || ((((var_15 >= var_1) ^ var_0)))));
                    var_52 ^= ((((~(1 < 181)))) || 1);
                    var_53 = var_5;
                }
            }
        }
        var_54 -= ((((var_13 ? var_11 : var_8) + (!var_11))));
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 20;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 20;i_30 += 1)
            {
                {
                    arr_106 [i_26] [i_29] [i_30] [i_29] = (((var_0 | var_3) ? (((var_5 < (var_0 <= var_6)))) : (((!var_16) >> ((((var_7 ? var_3 : var_4)) - 923242105))))));
                    var_55 = (((((~(var_14 | var_11)))) + ((-1392431971 - ((var_3 ? var_16 : var_10))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_31 = 0; i_31 < 24;i_31 += 1)
    {
        for (int i_32 = 0; i_32 < 24;i_32 += 1)
        {
            {
                var_56 = (max(var_56, ((((var_12 || var_4) << (((((var_0 * var_16) - (var_14 == var_5))) - 16481206680840198249)))))));
                arr_113 [i_31] [i_32] [i_31] = (((((!(((var_12 << (var_13 - 3626577086))))))) | var_7));
                arr_114 [i_32] [i_32] [i_31] = ((!(var_9 / var_3)));

                for (int i_33 = 0; i_33 < 1;i_33 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_34 = 0; i_34 < 1;i_34 += 1)
                    {
                        for (int i_35 = 3; i_35 < 21;i_35 += 1)
                        {
                            {
                                var_57 *= ((var_7 ? (((var_5 - var_14) ? (!var_12) : (121 | 32))) : ((~(var_1 > var_13)))));
                                var_58 = var_9;
                                var_59 = ((+((((((var_14 + 2147483647) << (var_15 - 2948471509432367997)))) ? var_4 : var_12))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_36 = 0; i_36 < 24;i_36 += 1)
                    {
                        for (int i_37 = 0; i_37 < 24;i_37 += 1)
                        {
                            {
                                var_60 = ((((((!var_10) ^ (var_13 != var_2)))) != -var_10));
                                var_61 = var_8;
                            }
                        }
                    }
                    var_62 = var_12;
                }
            }
        }
    }
    var_63 -= ((!(var_7 >= var_13)));
    var_64 = (min(var_64, ((((var_5 >= var_13) > (!var_15))))));
    #pragma endscop
}
