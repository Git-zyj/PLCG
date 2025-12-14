/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_11 = (((~var_1) ? var_0 : 37));
            var_12 += ((~(arr_3 [i_0])));
            arr_5 [7] = -85;
            var_13 = (max(var_13, (~var_0)));
            var_14 = var_4;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_15 = (((arr_2 [i_2]) && var_2));
            var_16 = ((7680768625966394498 ? var_1 : 18446744073709551610));
            var_17 = (arr_2 [i_2]);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_0] [i_0] = (var_6 & var_2);
            var_18 = var_10;
        }

        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            arr_13 [i_0] [i_0] = 16681205534743708579;
            var_19 = var_4;
        }
    }
    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        var_20 = (max(var_20, ((((-1 + 2147483647) << ((((min((arr_3 [i_5 - 1]), (arr_3 [i_5 - 1])))) - 36)))))));
        var_21 = (max(var_21, (~254038048)));
        var_22 -= var_8;

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_20 [i_5] [i_5] [i_5] = var_5;
            var_23 = var_10;
            var_24 = (arr_17 [i_6] [i_6] [i_5 - 2]);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
        {
            var_25 |= var_7;
            arr_23 [6] = ((9755715556756028315 ? (arr_15 [i_7]) : (arr_15 [i_5 + 3])));
            var_26 = var_0;
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
        {
            var_27 = (((min((!var_2), (!var_8))) ? var_6 : 9755715556756028312));
            arr_27 [5] = 770125827;
            var_28 = (((-603352075 / 4294967295) != (min((~6), var_7))));
        }
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_29 = var_1;
        var_30 = var_10;
    }

    for (int i_10 = 1; i_10 < 12;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    {
                        var_31 = var_3;
                        arr_41 [i_10 + 3] = var_1;
                        var_32 = (arr_18 [13]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    {
                        var_33 = ((((var_2 ? var_7 : var_4))) ? (min(var_8, var_1)) : (((var_0 ? (arr_32 [i_10 + 1]) : var_2))));
                        var_34 = ((-(-254038049 + 0)));
                        var_35 = ((arr_38 [5]) ? ((var_8 ? var_9 : (arr_8 [i_10] [i_10 + 1] [i_10 + 2]))) : ((var_7 ? (var_2 <= var_4) : (var_6 - var_9))));
                    }
                }
            }
            var_36 = ((-32767 - 1) * 9755715556756028288);
            arr_46 [3] = (((((var_7 / (~var_6)))) ? var_7 : (var_4 - var_7)));
        }
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            arr_50 [i_10] [i_10] = -502237191;
            arr_51 [i_10] = ((((((-2147483647 - 1) ? var_2 : (min(9755715556756028290, 23460))))) ? (((min(8592364532949083370, var_2)) | 3673226634714759410)) : var_0));

            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {

                /* vectorizable */
                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    var_37 = ((var_9 ? 52258 : var_4));
                    arr_59 [i_10] [i_10] [i_10] [i_10] &= ((var_7 ? var_1 : var_2));
                }
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    var_38 = (min(var_2, (var_2 >= var_2)));

                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        var_39 = ((!((((arr_34 [i_10 + 1] [i_10 + 1]) ? var_2 : var_3)))));
                        var_40 = (max(var_3, var_3));
                    }
                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {
                        arr_69 [1] [i_16] [1] [i_19] [i_16] [i_16] = (1922732654240775274 / 8169166801671494675);
                        var_41 = var_5;
                    }
                }
                arr_70 [i_10] [i_10] [i_10] [i_10 + 3] = (min(1, var_3));
                var_42 = ((min(var_5, (((arr_62 [i_10 + 3] [14]) & var_5)))));
            }
            for (int i_22 = 0; i_22 < 15;i_22 += 1)
            {
                var_43 *= (min(var_2, (((((8 ? 18446744073709551615 : (-2147483647 - 1)))) ? 603352064 : (~1658627755)))));
                var_44 = (((~((10 ? var_8 : var_1)))));
            }
            var_45 = ((!(((~(arr_26 [i_10 + 2]))))));
            var_46 &= (max(var_6, (((!177089152) ? (min(var_3, var_4)) : (((-2147483647 - 1) ? var_10 : -1285696975))))));
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {
            var_47 = (arr_61 [i_10 + 3] [i_10 - 1]);

            for (int i_24 = 0; i_24 < 15;i_24 += 1)
            {
                arr_78 [i_10] [i_23] [6] [i_10 - 1] = var_6;
                /* LoopNest 2 */
                for (int i_25 = 1; i_25 < 12;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 15;i_26 += 1)
                    {
                        {
                            var_48 = 1285696983;
                            var_49 = (2636339541 ? 1042100869512196550 : 0);
                            var_50 = (!12673945841230320192);
                        }
                    }
                }
                var_51 = ((1 << (((arr_31 [i_10 + 2] [i_10 + 2]) - 52270))));
            }
            var_52 = ((var_10 ? var_2 : 4294967282));
        }
        var_53 = (max(var_53, var_10));

        for (int i_27 = 0; i_27 < 15;i_27 += 1)
        {
            var_54 -= (arr_74 [i_10]);
            var_55 = (((arr_68 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) ? (arr_82 [i_27] [i_10] [14] [i_10] [i_27]) : ((((!var_3) == var_0)))));
        }
        /* vectorizable */
        for (int i_28 = 0; i_28 < 15;i_28 += 1)
        {
            var_56 = (((arr_37 [i_10] [i_10]) ? (arr_71 [i_10] [i_10] [i_10] [i_28]) : -92));

            for (int i_29 = 0; i_29 < 1;i_29 += 1)
            {
                var_57 = (var_1 ? (!var_1) : var_9);
                var_58 = (!var_9);

                for (int i_30 = 3; i_30 < 14;i_30 += 1)
                {
                    var_59 = ((!(arr_40 [2] [i_10 + 1] [i_10 + 3] [i_10] [i_10] [i_30 - 1])));
                    arr_92 [i_10] [i_29] [i_29] [i_29] = (var_7 ? (((1042100869512196539 ? var_7 : 0))) : var_8);

                    for (int i_31 = 0; i_31 < 15;i_31 += 1)
                    {
                        var_60 = 1042100869512196539;
                        var_61 = var_10;
                    }

                    for (int i_32 = 0; i_32 < 15;i_32 += 1)
                    {
                        var_62 = ((!(arr_63 [i_10] [i_10] [i_10] [i_10] [i_29])));
                        var_63 = (((arr_42 [i_10 + 3]) > (arr_42 [i_10 + 1])));
                    }
                    for (int i_33 = 0; i_33 < 15;i_33 += 1)
                    {
                        var_64 = (~1019218667);
                        arr_102 [1] [i_28] [i_29] = (var_0 >= var_0);
                        var_65 = ((var_7 ? 2147483647 : var_3));
                        var_66 = 3666131100505342355;
                    }
                    for (int i_34 = 3; i_34 < 14;i_34 += 1)
                    {
                        var_67 = (var_8 & var_10);
                        var_68 = (var_10 > var_1);
                        var_69 = var_4;
                    }
                }
            }
            var_70 = (~var_8);
        }
        arr_105 [i_10] = var_4;
    }
    var_71 = (max(var_71, var_3));
    var_72 = 17709588997684732082;
    #pragma endscop
}
