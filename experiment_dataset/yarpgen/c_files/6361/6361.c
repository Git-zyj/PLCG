/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_20 = (!-var_18);
        var_21 = ((-(var_8 & var_5)));
        arr_2 [i_0] [i_0 + 2] = var_11;
        var_22 = (~2097152);
        var_23 = ((~(var_12 ^ var_4)));
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] = (((var_3 < var_8) * ((((var_12 > var_2) & (~var_13))))));
        var_24 = var_7;

        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            arr_9 [i_2] [i_2] = var_11;

            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    arr_16 [i_1 - 2] [i_1 - 2] [i_3] [i_4] [i_2 - 1] [i_2] = var_17;

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_25 = (((var_9 && 1023) * (!106)));
                        var_26 = (~var_1);
                    }
                    for (int i_6 = 4; i_6 < 22;i_6 += 1)
                    {
                        var_27 = (max(var_27, 536870912));
                        arr_21 [i_2] [i_4] [i_3 - 1] [i_2 + 1] [i_2] = (((~var_14) ^ var_9));
                        var_28 = (!var_13);
                    }

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_29 = ((!(((~(~1742860617))))));
                        arr_25 [15] [i_2 - 1] [i_3 + 2] [i_2] [i_7] = var_8;
                        arr_26 [i_1 + 1] [i_2] [i_3] [i_3 + 1] [i_4] [i_7] [i_7] = var_8;
                        var_30 = (var_19 & var_14);
                        arr_27 [i_2] [i_4] [i_3 - 2] [i_2 - 2] [i_2] = (var_0 || var_15);
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        var_31 = ((var_8 % (var_15 % var_2)));
                        arr_32 [i_2] [i_2] = (var_8 && var_13);
                    }
                    for (int i_9 = 2; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        var_32 = (((~(!var_3))));
                        var_33 -= var_16;
                        var_34 = ((~((~(~var_6)))));
                        var_35 = ((-(var_11 || var_3)));
                    }
                }
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_36 = (var_12 || var_16);
                    var_37 = (max(var_37, (((!(((-(!var_18)))))))));
                }
                for (int i_11 = 2; i_11 < 22;i_11 += 1)
                {
                    var_38 = var_11;
                    arr_40 [i_3 - 2] [i_2] [i_1] = var_18;

                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        arr_44 [i_2] [i_1] [i_2] [i_3] [i_11 - 1] [i_12] [i_11 - 1] = ((-((var_17 % (var_11 ^ var_5)))));
                        var_39 = var_9;
                        var_40 = ((-((-(!var_12)))));
                        var_41 = ((((!var_14) < -var_1)));
                    }
                    var_42 -= -var_6;
                    var_43 = var_9;
                }

                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {

                    for (int i_14 = 1; i_14 < 21;i_14 += 1)
                    {
                        var_44 = (((var_14 % var_16) || (~var_16)));
                        var_45 = var_3;
                    }
                    arr_49 [i_2] [i_2] [i_2] [4] = (+-var_1);
                    arr_50 [i_1] [i_1] [i_1 - 1] [i_2] = 1023;
                    var_46 = var_5;
                }
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    var_47 -= (((((!var_18) ^ (var_15 || var_9))) * (~var_6)));
                    var_48 = (var_1 > var_8);
                    var_49 = ((var_8 ^ ((((!(~var_12)))))));
                }
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    arr_59 [i_1] [i_2] [i_2] [i_3] [i_16] = var_0;
                    var_50 = ((-(((var_11 && var_2) % var_3))));
                    arr_60 [i_2] [i_2 - 1] [14] [i_2 - 1] = ((var_19 >= (!var_15)));
                    arr_61 [i_1 - 2] [i_2 + 1] [i_3] [i_2] = var_13;
                }
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    var_51 = (min(var_51, var_19));

                    for (int i_18 = 1; i_18 < 24;i_18 += 1)
                    {
                        var_52 ^= ((((!var_19) && (var_11 && var_17))));
                        arr_68 [i_1 - 1] [i_2] [i_2 - 1] [i_3] [i_17] [i_2] = var_5;
                    }
                    for (int i_19 = 1; i_19 < 22;i_19 += 1)
                    {
                        arr_71 [i_1 - 1] [i_1 - 1] [22] [i_1] [i_1 - 1] [i_2] [i_1 - 2] = ((-((((var_3 > var_12) > var_16)))));
                        var_53 = (var_5 || var_15);
                    }
                    for (int i_20 = 0; i_20 < 25;i_20 += 1)
                    {
                        var_54 = (106 >= 1016);
                        var_55 &= var_7;
                        var_56 = (((!var_2) && (((-(!var_14))))));
                        arr_74 [i_2] [i_2] [i_3 - 1] [i_17] [i_20] = ((!(!var_5)));
                    }
                    /* vectorizable */
                    for (int i_21 = 1; i_21 < 23;i_21 += 1)
                    {
                        var_57 = ((-(~var_5)));
                        arr_78 [i_1] [i_2 - 1] [i_3 + 1] [15] [i_2] [i_21 - 1] [i_2 - 1] = (!var_0);
                    }
                }
            }
            for (int i_22 = 4; i_22 < 22;i_22 += 1) /* same iter space */
            {
                var_58 = ((!(~var_14)));
                var_59 -= (((-(var_16 % var_13))));
            }
            for (int i_23 = 4; i_23 < 22;i_23 += 1) /* same iter space */
            {
                var_60 = (~var_2);
                var_61 ^= (!var_15);
            }
            var_62 = ((~(var_16 * var_12)));
        }
        var_63 = ((!(((!var_15) >= var_14))));
    }
    for (int i_24 = 0; i_24 < 12;i_24 += 1)
    {
        var_64 = var_2;

        for (int i_25 = 0; i_25 < 12;i_25 += 1)
        {
            var_65 = var_11;

            for (int i_26 = 0; i_26 < 12;i_26 += 1)
            {
                var_66 &= ((!((!(~var_4)))));

                for (int i_27 = 0; i_27 < 12;i_27 += 1)
                {
                    var_67 ^= var_18;
                    arr_95 [i_25] [i_25] [i_24] [i_25] [i_25] = (((!(!var_7))));
                }
                for (int i_28 = 0; i_28 < 12;i_28 += 1)
                {
                    arr_98 [i_24] [i_24] [i_25] [i_24] [i_28] [i_28] = -var_6;
                    var_68 = (!-var_2);
                    arr_99 [i_24] [i_24] [i_24] [i_25] [i_26] [i_28] = (var_19 % var_14);

                    /* vectorizable */
                    for (int i_29 = 0; i_29 < 12;i_29 += 1)
                    {
                        arr_102 [i_24] [i_25] [i_26] [i_28] [i_24] [i_24] [i_24] = -var_9;
                        var_69 = ((-(var_14 > var_2)));
                    }
                    for (int i_30 = 2; i_30 < 10;i_30 += 1)
                    {
                        var_70 = var_9;
                        var_71 = ((!(((var_11 || var_2) || var_1))));
                    }
                }
                for (int i_31 = 0; i_31 < 12;i_31 += 1) /* same iter space */
                {
                    arr_109 [i_24] [i_26] [i_25] [i_24] = (var_4 < var_13);
                    var_72 = ((!(((~(~var_12))))));
                }
                for (int i_32 = 0; i_32 < 12;i_32 += 1) /* same iter space */
                {
                    var_73 = (((!(var_1 >= var_4))));

                    for (int i_33 = 4; i_33 < 10;i_33 += 1)
                    {
                        var_74 = -var_14;
                        var_75 = (~(~var_19));
                        var_76 = (min(var_76, var_12));
                        arr_115 [i_24] [i_25] [i_26] [i_24] [i_24] = (~((((var_9 % var_17) > (!var_6)))));
                    }
                    for (int i_34 = 1; i_34 < 10;i_34 += 1)
                    {
                        arr_119 [i_34 + 1] [i_24] [i_26] [i_32] [i_24] = (~((-(~var_19))));
                        var_77 = (!var_7);
                    }
                    for (int i_35 = 0; i_35 < 12;i_35 += 1)
                    {
                        var_78 = var_9;
                        var_79 = (max(var_79, (((!(var_8 ^ var_2))))));
                        var_80 ^= ((!(((-(~var_2))))));
                        var_81 = var_15;
                    }
                    var_82 = ((+((((var_17 * var_1) < -var_19)))));
                }
                /* LoopNest 2 */
                for (int i_36 = 1; i_36 < 8;i_36 += 1)
                {
                    for (int i_37 = 0; i_37 < 12;i_37 += 1)
                    {
                        {
                            var_83 = var_13;
                            arr_128 [i_25] [i_26] [i_24] [i_37] = (((!var_10) & ((-(var_6 > var_11)))));
                            arr_129 [i_24] [i_24] = (((~(!var_1))));
                            arr_130 [i_37] [i_36 + 2] [i_26] [i_24] [i_25] [i_24] [i_24] = (((~(~var_5))));
                        }
                    }
                }
            }
        }
        var_84 -= (var_14 / var_12);
        arr_131 [i_24] [i_24] = var_9;
    }
    for (int i_38 = 1; i_38 < 20;i_38 += 1)
    {
        arr_134 [i_38] = var_8;
        var_85 = ((((var_10 % (~var_18)))) ^ -var_16);
        var_86 = (var_15 * var_0);
        var_87 = var_15;
    }

    for (int i_39 = 0; i_39 < 23;i_39 += 1)
    {
        var_88 -= ((+((((~var_12) >= var_10)))));
        var_89 = var_10;
    }
    var_90 ^= ((~(!var_10)));
    var_91 = ((var_12 > (!var_1)));
    #pragma endscop
}
