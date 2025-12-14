/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (min(39091, (var_6 / 26445)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((((!(var_10 & var_0))) ? (~var_2) : (max(5576010979154578739, 26445)))))));

                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_1 - 1] [i_1 - 1] [i_0] = (max((min(1783472651, (39082 * 1))), (((min(26436, 65))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_13 += (-8897033410019707193 | 52);
                        var_14 = (((!var_6) - var_10));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_15 = (min(var_15, (((((var_8 ? 1 : 1)) << ((var_0 ? 1 : -1392423330)))))));
                            arr_13 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] = ((-(!17770717436586185018)));
                            arr_14 [i_0] [i_4] [i_2 + 1] [i_3] [i_4 - 1] = -var_1;
                        }
                    }
                    var_16 = (max((~1), ((var_9 | (min(1316545426, var_6))))));
                }
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    arr_17 [i_1] |= (!(var_9 - -var_1));

                    for (int i_6 = 3; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_1 - 1] [i_5 - 2] [i_6] = var_2;

                        for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            var_17 = 1316545426;
                            var_18 = (min((!1), (max(-63, (var_6 / 1)))));
                        }
                        for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_8] [i_6 + 1] [i_5] [i_1 - 1] [i_0] = (((((((var_9 ? var_6 : 64529))) % ((44 ? -27 : 15)))) - (((2978421857 % (1 < 64529))))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(((-(var_3 & var_4))), (!var_7)));
                        }
                        for (int i_9 = 1; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            var_19 = (((!-1392423350) && (!-1)));
                            var_20 *= (((-22398 | 0) - -1));
                        }
                        arr_32 [i_0] [i_1 - 1] [i_5] [i_6 - 1] = (811530037 % var_1);
                        var_21 = (!9442);
                    }
                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        arr_36 [i_0] [i_0] [i_5 - 1] [i_10 + 1] = (~((7 ? var_6 : var_9)));
                        var_22 = 3928089813692077110;

                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            var_23 *= (((((127 ? 131071 : 1))) - (~-9223372036854775794)));
                            var_24 -= ((131067 >> (131067 != -44)));
                        }
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            var_25 = (((((62525 ? 0 : 18371257))) && 63934));
                            var_26 = (min(var_26, (!18446744073709551615)));
                        }

                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            var_27 = ((-(1 >= var_3)));
                            var_28 = 18446744073709551615;
                            var_29 = (min(var_29, (var_7 % 39091)));
                            var_30 = ((~(var_10 - 21)));
                        }
                        var_31 = ((!(~1)));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 12;i_15 += 1)
                        {
                            {
                                var_32 = 59;
                                arr_52 [i_0] [i_1 - 1] [i_1 - 1] [i_5 + 1] [i_0] [i_15 - 3] = (((!-131071) % (((var_2 ? -85 : var_1)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 16;i_17 += 1)
                        {
                            {
                                arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((-29608 * (!var_10))) << ((((min(var_10, 131093)) > ((min(32766, var_3))))))));
                                var_33 = ((+(((var_2 < var_1) % (var_1 ^ 708689086)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 3; i_18 < 12;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 16;i_19 += 1)
                        {
                            {
                                var_34 += (((((-((var_5 ? var_10 : 32109))))) && (var_1 % var_2)));
                                var_35 = (min(var_35, (((var_3 ? (min(4375877301991521623, 708689070)) : (((min(131093, -1685467070)))))))));
                                arr_63 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((!var_5) & var_4));
                                var_36 = ((((((var_10 ? -1 : var_2) == (((var_2 ? 216 : 7))))))));
                                arr_64 [i_5 - 1] [i_5 - 1] [i_18 + 4] [i_19] [i_0] [i_19] [i_5 - 1] = (max(((var_8 / ((min(var_5, -1))))), -131098));
                            }
                        }
                    }
                }
                for (int i_20 = 0; i_20 < 16;i_20 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_21 = 1; i_21 < 12;i_21 += 1)
                    {
                        for (int i_22 = 3; i_22 < 14;i_22 += 1)
                        {
                            {
                                arr_73 [i_20] [i_20] [i_20] [i_21 - 1] [i_20] |= ((!((min(-17929214, var_6)))));
                                arr_74 [i_20] [i_21 + 4] [i_22] = (!1);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 16;i_23 += 1)
                    {
                        for (int i_24 = 2; i_24 < 15;i_24 += 1)
                        {
                            {
                                var_37 = (max(var_37, ((min((var_9 / 5955628085456709731), -var_0)))));
                                var_38 |= 0;
                                var_39 |= max(((((min(-131099, 1))) ? (max(1, 9504645460270848148)) : (4294967277 < 3586278214))), ((min(var_2, ((var_6 ? var_10 : var_1))))));
                                arr_83 [i_20] = ((+((var_7 ? (1024 & 0) : (!0)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 16;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 16;i_26 += 1)
                        {
                            {
                                var_40 = (min(var_40, var_10));
                                arr_88 [i_0] [i_0] [i_0] [i_0] [i_0] [i_26] [i_0] = (!((((var_7 ? 60 : 496)))));
                            }
                        }
                    }
                }
                for (int i_27 = 0; i_27 < 16;i_27 += 1) /* same iter space */
                {
                    arr_91 [i_0] [i_1] [i_27] = 2480024867;
                    arr_92 [i_27] [i_1 - 1] [i_0] |= ((!(((var_0 ? 4216341125 : (708689094 * var_6))))));
                    var_41 = (max(var_41, ((min(1, (var_1 | 3586278210))))));
                }
                var_42 = (!var_6);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_28 = 0; i_28 < 13;i_28 += 1)
    {
        for (int i_29 = 0; i_29 < 13;i_29 += 1)
        {
            {

                for (int i_30 = 0; i_30 < 13;i_30 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_31 = 0; i_31 < 1;i_31 += 1)
                    {
                        for (int i_32 = 2; i_32 < 12;i_32 += 1)
                        {
                            {
                                var_43 = (2556980798 + 992);
                                var_44 = var_6;
                                var_45 *= ((var_4 + ((max(var_7, 1)))));
                            }
                        }
                    }
                    var_46 = ((!(2749778847 * -81)));
                }
                /* LoopNest 3 */
                for (int i_33 = 3; i_33 < 10;i_33 += 1)
                {
                    for (int i_34 = 0; i_34 < 1;i_34 += 1)
                    {
                        for (int i_35 = 2; i_35 < 12;i_35 += 1)
                        {
                            {
                                var_47 = ((max(408850853381576817, 32485)));
                                var_48 = (-var_1 / -var_10);
                            }
                        }
                    }
                }
            }
        }
    }
    var_49 = (((((var_7 >= var_8) & (var_1 & var_3))) >> 0));
    #pragma endscop
}
