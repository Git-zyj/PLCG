/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_20 = ((((var_13 ? (arr_1 [i_1 + 3] [i_1 + 1]) : (arr_2 [i_1] [i_1 + 2]))) >= (max((arr_1 [i_1 + 3] [i_1 + 3]), var_17))));
                var_21 = ((((max(1, var_13))) * (var_8 <= -5079429677142419295)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_22 = ((((var_15 && (arr_12 [i_5] [i_5] [i_3] [i_5] [i_3] [i_5]))) ? (9223372036854775807 >= var_18) : ((var_17 >> (132 - 111)))));
                            var_23 = (min(var_23, (arr_8 [i_5])));
                            var_24 *= (max(var_9, (var_7 + -8844535259914091721)));
                        }
                    }
                }

                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_25 = 132;
                    var_26 = (!0);

                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        var_27 = (var_1 >= 6410162257665087999);
                        var_28 = var_16;
                    }
                    for (int i_8 = 3; i_8 < 17;i_8 += 1)
                    {
                        var_29 = ((1524562354711437040 ? var_10 : -9223372036854775792));
                        var_30 = ((var_18 ^ (-5079429677142419296 & var_11)));
                        var_31 = var_14;

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_32 = (min(var_32, 1));
                            var_33 = (var_17 > 1);
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    var_34 = 702601228483294625;
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_35 = (min(var_35, ((max((((!(arr_35 [i_2] [i_3] [i_10] [i_3] [i_10] [14])))), (var_0 - 5079429677142419312))))));
                                var_36 *= 1;
                                var_37 = (min(var_37, 1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_38 = ((((max(-0, (var_10 && var_17)))) == (min(var_8, var_12))));
                                var_39 *= (((var_1 >> var_14) ? var_5 : (((var_1 ? var_15 : var_17)))));
                                var_40 = (min(var_40, ((((~(min(var_16, var_11)))) | (!var_4)))));
                            }
                        }
                    }
                }
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            {
                                var_41 = min(44, (arr_13 [i_15] [i_15] [i_17]));
                                var_42 = ((!(0 || 71)));
                                var_43 = ((((((var_18 && ((max(0, var_9))))))) + (min(var_8, ((~(arr_29 [3] [i_3] [i_16] [i_17])))))));
                                var_44 = (min(var_44, (((-(max((arr_34 [i_2] [i_3] [i_2] [17]), (arr_34 [i_2] [i_3] [i_3] [i_17]))))))));
                            }
                        }
                    }
                    var_45 = (var_5 > 1);
                }
                /* vectorizable */
                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    var_46 = var_9;
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 1;i_20 += 1)
                        {
                            {
                                var_47 = -9223372036854775799;
                                var_48 = ((7 || (var_11 || 254)));
                            }
                        }
                    }

                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        var_49 *= var_7;
                        var_50 = (1 + var_13);
                        var_51 = var_12;
                    }
                    for (int i_22 = 0; i_22 < 21;i_22 += 1)
                    {

                        for (int i_23 = 0; i_23 < 21;i_23 += 1)
                        {
                            var_52 = (max(var_52, 5338584742435546945));
                            var_53 = (var_5 + 268435456);
                        }
                        var_54 = var_7;
                        var_55 = (((var_0 + 268435456) / var_16));
                        var_56 = -var_18;
                        var_57 *= (arr_57 [i_2] [i_2]);
                    }
                    for (int i_24 = 0; i_24 < 21;i_24 += 1)
                    {
                        var_58 = ((arr_47 [i_3]) ? 2669183636034231215 : var_13);
                        var_59 = (~549123872);
                    }
                    for (int i_25 = 1; i_25 < 19;i_25 += 1)
                    {
                        var_60 -= 1;
                        var_61 = (min(var_61, (((var_0 && (arr_35 [i_25] [i_25] [i_25 + 2] [i_25 + 2] [i_18] [i_25 + 2]))))));
                        var_62 = ((7209818561987322886 << (var_4 - 4481485315133819066)));
                        var_63 = (min(var_63, var_15));
                    }
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 21;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 21;i_27 += 1)
                        {
                            {
                                var_64 = ((~(arr_9 [i_2] [i_2] [i_2])));
                                var_65 = ((var_8 ? var_7 : (arr_68 [i_2] [i_3] [i_18] [10] [i_27])));
                                var_66 = (~1);
                            }
                        }
                    }
                }
                var_67 = ((-(((!(arr_30 [i_2] [i_2]))))));
            }
        }
    }

    for (int i_28 = 0; i_28 < 14;i_28 += 1)
    {
        var_68 = (2271066440 >= 12266047008106865694);
        var_69 = (1 & 1);
    }
    for (int i_29 = 0; i_29 < 22;i_29 += 1)
    {
        var_70 = (max(((var_15 ? (arr_82 [i_29] [i_29]) : (min(var_11, 4138109648)))), (arr_81 [i_29])));
        var_71 = -var_13;
        var_72 -= arr_81 [i_29];
        var_73 -= -436041151280775594;
        /* LoopNest 2 */
        for (int i_30 = 0; i_30 < 22;i_30 += 1)
        {
            for (int i_31 = 2; i_31 < 18;i_31 += 1)
            {
                {
                    var_74 = var_8;
                    var_75 = var_12;
                    var_76 = (1 > -1);
                }
            }
        }
    }
    #pragma endscop
}
