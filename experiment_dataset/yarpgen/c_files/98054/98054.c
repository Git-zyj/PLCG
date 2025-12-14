/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (min(((((max(var_2, var_7))) ? var_11 : ((min(var_0, var_14))))), var_8));
                var_17 = (((((((var_11 ? var_14 : var_13))) ? (min((arr_4 [i_0] [19]), 16587208394742002610)) : (min((arr_3 [17]), var_13)))) ^ (!var_6)));
            }
        }
    }
    var_18 = (min(((((((var_5 ? var_2 : var_15))) ? (~var_2) : -var_3))), (-9223372036854775807 - 1)));
    var_19 = (max((max((max(var_3, 0)), (!var_1))), ((max(((var_1 ? var_14 : var_7)), var_4)))));

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_20 = (max(var_20, var_15));
        var_21 = (arr_7 [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_22 += (((((var_13 ? (arr_16 [i_3] [1] [i_5]) : var_14))) ? var_1 : var_4));
                            var_23 = ((((var_0 ? var_14 : var_15)) / ((18446744073709551600 ? var_10 : var_14))));
                            var_24 = var_8;
                            var_25 = ((~var_5) >= -var_11);
                        }
                    }
                }
            }

            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                var_26 &= var_10;
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_27 = ((var_4 ? 16 : (((18446744073709551615 ? 808887250393901520 : (arr_24 [i_3] [i_4] [i_8] [i_9 + 2] [0]))))));
                            var_28 = (((808887250393901520 / 15192) / -7086140259353889974));
                            arr_28 [i_3] [10] [i_8] [1] [14] [i_3 + 1] [i_3] = var_15;
                            var_29 = (((-2147483647 - 1) ? var_6 : (var_3 >= var_0)));
                        }
                    }
                }
                var_30 = ((((((arr_10 [i_4] [14]) / var_11))) ? (((arr_13 [i_8] [i_4] [i_3] [i_3]) ? var_4 : var_5)) : (arr_13 [i_3] [i_3] [i_3] [i_3])));
                var_31 = (((arr_26 [i_3] [i_8] [9] [i_4 - 1] [i_3]) >= ((var_5 ? (arr_23 [i_3 + 1] [i_3] [i_8] [i_8] [1]) : var_5))));
            }
            for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
            {
                var_32 = (((((arr_0 [i_3] [i_3]) ? 1 : var_15))) ? 18446744073709551615 : (~1647141799));
                var_33 = (max(var_33, var_11));
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_34 = ((~((~(arr_13 [i_4] [i_11] [1] [i_4])))));
                            var_35 = var_15;
                        }
                    }
                }
                arr_37 [i_3] [i_3] [i_4 - 1] [i_3] = var_10;
                arr_38 [i_3] = ((((var_13 ? var_4 : var_5)) >= 0));
            }
            for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
            {
                var_36 *= (((708864054 | var_12) ? var_2 : ((var_12 ? -770850570 : var_7))));
                var_37 &= ((((-2147483620 ? var_3 : var_10)) / ((var_0 ? var_15 : var_6))));
            }
        }
        for (int i_15 = 0; i_15 < 22;i_15 += 1)
        {
            var_38 = (255 & var_1);
            var_39 = var_12;
            var_40 = (((((var_3 ? var_8 : var_7))) ? (((((arr_20 [i_3 + 1] [i_3] [i_3 + 1] [i_15]) >= 0)))) : var_1));
            arr_46 [i_3] = ((var_13 / (0 >= var_9)));
        }
        for (int i_16 = 1; i_16 < 19;i_16 += 1)
        {
            var_41 = var_6;
            var_42 &= var_8;
            var_43 = ((1 | ((var_12 / (arr_10 [i_3] [i_16 + 3])))));

            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                var_44 |= -var_3;
                var_45 = (((((var_15 ? var_6 : var_11))) ? ((var_13 ? 0 : -1647141824)) : var_14));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        {
                            arr_56 [i_3] = (((~var_10) ? ((18446744073709551607 ? (arr_42 [i_19] [21] [i_16 + 1] [i_3]) : (arr_54 [i_3] [21]))) : 16605));
                            var_46 = (min(var_46, ((((((var_7 ? (arr_54 [4] [i_19]) : var_12))) ? ((var_14 ? var_1 : (arr_53 [i_19] [10] [10] [i_3 + 1]))) : (16 < var_15))))));
                        }
                    }
                }
                var_47 = (min(var_47, ((((~var_15) | 18446744073709551615)))));

                for (int i_20 = 4; i_20 < 18;i_20 += 1)
                {
                    var_48 = (-9223372036854775807 - 1);

                    for (int i_21 = 3; i_21 < 18;i_21 += 1)
                    {
                        var_49 += var_4;
                        arr_63 [i_3] [i_20] [i_17] [i_3] = ((((var_15 ? 18446744073709551597 : var_7)) / (var_1 >= 23)));
                        var_50 = (var_8 ^ var_15);
                    }
                    for (int i_22 = 2; i_22 < 21;i_22 += 1)
                    {
                        var_51 = var_15;
                        var_52 = (((!var_7) + (var_10 / var_14)));
                        var_53 |= (((~var_15) + 32762));
                        var_54 &= (((((var_15 ? var_1 : var_6))) ? (arr_45 [7] [i_20 + 2] [7]) : (6209135230700996575 / var_3)));
                    }
                    for (int i_23 = 2; i_23 < 18;i_23 += 1) /* same iter space */
                    {
                        var_55 = var_15;
                        var_56 = (((arr_65 [3] [i_16 + 2] [3] [i_17] [15] [i_23 + 1] [i_3]) ? var_8 : (~9223372036854775807)));
                        var_57 = (~18402);
                    }
                    for (int i_24 = 2; i_24 < 18;i_24 += 1) /* same iter space */
                    {
                        var_58 = ((9 ^ (~var_1)));
                        var_59 = (((var_5 ? (arr_12 [i_3 + 1] [i_16] [4] [i_3]) : var_2)) + 375297301);
                        var_60 = ((((168557111 ? var_9 : var_4))) ? var_4 : (~var_7));
                        var_61 = (max(var_61, 50337));
                    }
                }
                for (int i_25 = 0; i_25 < 22;i_25 += 1) /* same iter space */
                {
                    arr_76 [4] &= var_5;
                    var_62 = ((~(((arr_8 [16]) ? var_11 : 255))));
                }
                for (int i_26 = 0; i_26 < 22;i_26 += 1) /* same iter space */
                {
                    arr_81 [i_3] [i_3] [1] [i_17] [i_26] [i_26] = ((((arr_33 [i_3] [i_16] [10] [i_26]) ? var_12 : var_7)) / ((18402 ? 9 : var_8)));
                    var_63 = (((((var_15 ? var_4 : (arr_24 [12] [i_17] [9] [i_16] [i_3 + 1])))) ? ((((arr_35 [i_3 + 1] [i_16 - 1] [i_17] [i_26] [i_26]) ? var_0 : var_15))) : (((-9223372036854775807 - 1) / var_14))));
                    arr_82 [i_3 + 1] [i_3 + 1] [i_17] [6] [4] &= (var_7 | ((var_9 ? var_15 : var_15)));
                }
            }
            for (int i_27 = 0; i_27 < 1;i_27 += 1)
            {
                var_64 = var_12;
                var_65 *= var_6;
            }
        }
        var_66 += ((~(15191 >= var_7)));
    }
    #pragma endscop
}
