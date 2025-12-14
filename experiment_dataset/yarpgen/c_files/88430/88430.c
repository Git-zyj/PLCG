/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_11 = 32767;
        var_12 = ((((max(-1, var_2))) ? var_10 : (!var_3)));
        var_13 |= ((!((!((max(var_1, var_4)))))));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_14 -= -var_2;
            arr_8 [i_2] = 0;
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            arr_11 [i_1 + 2] [10] = (56 <= ((max(-43, 1))));
            var_15 = var_0;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_16 = 93;

            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {

                for (int i_6 = 4; i_6 < 9;i_6 += 1)
                {
                    var_17 -= 0;
                    var_18 ^= -var_4;
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_19 = var_4;
                    var_20 = var_3;
                    arr_22 [i_5] [i_5] [i_5] = -var_2;
                }
                for (int i_8 = 2; i_8 < 10;i_8 += 1)
                {
                    arr_27 [i_8] [i_5 - 1] [i_5] [i_5] [i_1 - 3] [i_1 - 1] = var_6;
                    arr_28 [i_1] [i_5] [0] = var_9;
                    var_21 ^= 1151795604700004352;
                }
                var_22 = var_7;
                var_23 = (~1);
                var_24 = (var_10 * (var_7 >= var_0));
                var_25 = (~var_7);
            }
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                var_26 = (min(var_26, var_8));
                arr_31 [i_9] [i_4] [i_1] = (~var_4);
                arr_32 [i_1] [9] [i_9] = ((var_2 ? -94 : 1));
            }
        }
        /* vectorizable */
        for (int i_10 = 4; i_10 < 9;i_10 += 1)
        {
            var_27 = (min(var_27, (!1)));

            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    var_28 = -var_1;

                    for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                    {
                        arr_44 [i_1] [i_10] [i_10 - 3] = (var_0 || var_1);
                        arr_45 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_10] [i_13] = ((((93 ? var_1 : var_0)) & (-108 && 0)));
                        arr_46 [i_1] [i_10 - 1] [3] [i_10] [i_13] = -15;
                        arr_47 [i_10] = (!var_6);
                        var_29 = (~var_2);
                    }
                    for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                    {
                        arr_50 [i_1 - 1] [i_10 - 2] [i_11] [i_10] [i_14] = -var_3;
                        var_30 = 3628080737;
                    }
                }
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    var_31 = 74;
                    var_32 = (~var_8);
                    var_33 = ((~((65533 ? 2985718816196140922 : 18446744073709551600))));
                }

                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    arr_58 [i_10 - 2] [3] [i_10] [i_10] [i_10] = ((var_5 + var_6) ? ((4294967295 << (var_7 - 146))) : var_0);
                    var_34 = var_7;
                    arr_59 [i_1] [i_10] = (2242169707 <= var_6);
                }
            }
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                var_35 = (max(var_35, (((var_6 ? var_2 : -115)))));
                var_36 = (min(var_36, (var_10 != -79)));
                arr_62 [i_17] [4] [4] [i_1 + 1] |= (19464 | 85);
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 8;i_19 += 1)
                    {
                        {
                            arr_67 [i_1 + 2] [i_10] [i_1 + 2] [i_10] [i_1 + 2] = var_2;
                            var_37 = ((var_7 ? var_5 : var_2));
                            var_38 = var_10;
                        }
                    }
                }
            }
        }
        var_39 = 84;
    }
    for (int i_20 = 3; i_20 < 9;i_20 += 1) /* same iter space */
    {
        var_40 += (!9223372036854775807);
        var_41 = (((var_10 ? var_3 : ((max(var_7, var_4))))) == ((((var_10 ? 2560371251 : 99)))));
        arr_71 [i_20] = 108;
        var_42 = ((((min(var_5, 222))) ? (((-74 + 2147483647) << 0)) : ((var_2 >> (217 - 186)))));
    }
    for (int i_21 = 0; i_21 < 13;i_21 += 1)
    {

        for (int i_22 = 3; i_22 < 11;i_22 += 1)
        {
            var_43 = ((var_3 == var_8) - ((((min(116, 104))) ? (min(var_1, 56)) : (~-63))));
            var_44 = (max(var_44, 1989133847));
            var_45 = (+-43159);
        }
        var_46 = (min(var_46, (((-var_7 / ((3 ? var_7 : ((max(202, var_0))))))))));
        arr_78 [7] = (((~var_6) ? (~675977757) : (((((-10438 ? 116 : 67))) & (127 ^ 6489839837174348919)))));
    }

    /* vectorizable */
    for (int i_23 = 0; i_23 < 12;i_23 += 1)
    {
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 12;i_24 += 1)
        {
            for (int i_25 = 2; i_25 < 11;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 12;i_26 += 1)
                {
                    {
                        var_47 = ((var_2 << (var_10 - 2353177046)));
                        var_48 &= (1976520233722673076 >= var_2);
                        var_49 = ((-63 ? -6030546990537544938 : 0));
                    }
                }
            }
        }
        var_50 = (((-17303 ? var_7 : 9223372036854775807)));
    }
    /* vectorizable */
    for (int i_27 = 0; i_27 < 1;i_27 += 1)
    {
        var_51 = (!9223372036854775807);

        for (int i_28 = 1; i_28 < 23;i_28 += 1)
        {
            arr_95 [i_27] [23] [i_28] &= (~-6030546990537544938);

            for (int i_29 = 0; i_29 < 25;i_29 += 1)
            {
                var_52 = (((5368102430678398279 ? 4027616408 : 554161235)) + (!var_10));
                arr_98 [14] |= -312208371;
                var_53 = ((-64 <= ((-79 ? var_7 : var_6))));
            }
            arr_99 [19] = ((-(65 ^ var_8)));
            arr_100 [6] [i_27] = (13 ? 3994288630 : 1);
        }
        for (int i_30 = 0; i_30 < 25;i_30 += 1)
        {
            /* LoopNest 2 */
            for (int i_31 = 2; i_31 < 23;i_31 += 1)
            {
                for (int i_32 = 2; i_32 < 22;i_32 += 1)
                {
                    {
                        var_54 = (var_6 < 78);
                        var_55 = 0;
                        var_56 = ((~((659144908 << (((-64 + 75) - 10))))));
                    }
                }
            }
            arr_112 [i_27] [i_27] = (341410850 + -78);
        }
        for (int i_33 = 2; i_33 < 23;i_33 += 1)
        {
            var_57 += (var_1 | var_2);
            var_58 = (~var_3);
            var_59 = -var_1;
        }
        var_60 = -6030546990537544949;
        arr_115 [i_27] [i_27] = var_3;
    }
    /* vectorizable */
    for (int i_34 = 0; i_34 < 15;i_34 += 1)
    {
        var_61 = var_8;
        arr_119 [i_34] = (((((var_5 ? var_2 : -554161227))) <= var_10));
    }

    /* vectorizable */
    for (int i_35 = 0; i_35 < 22;i_35 += 1)
    {
        var_62 = (!var_5);
        var_63 = ((var_8 ? var_5 : 62));
        var_64 = ((17302 ? var_4 : 82));
        var_65 = ((var_4 << (var_10 - 2353177027)));
    }
    /* vectorizable */
    for (int i_36 = 0; i_36 < 12;i_36 += 1)
    {
        arr_125 [i_36] [i_36] = var_1;
        arr_126 [i_36] = (!var_10);
    }
    for (int i_37 = 0; i_37 < 15;i_37 += 1)
    {
        var_66 = ((78 >> (((((min(17302, 4294967295)) << (var_3 - 3562770565612468398))) - 2214653))));
        var_67 = (min(-0, var_1));
        var_68 = (min(var_68, (((-8868976510803392725 ? 723007923 : 554161235)))));
        var_69 = (((((~var_4) + 2147483647)) << (((((((var_8 ? var_2 : var_10))) ? (((-554161236 ? -554161236 : var_0))) : ((var_6 ? var_0 : var_5)))) - 3740806060))));
    }
    #pragma endscop
}
