/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 = (((-95 + 2147483647) << (((arr_1 [i_0 - 1] [i_0]) - 1))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_1] [i_1] [i_1] = arr_0 [i_0 - 1];
                    var_18 += 0;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_19 = (min((((((18446744073709551615 * (arr_14 [i_3]))) > var_0))), (~var_0)));
        var_20 |= var_11;
        var_21 += var_15;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_22 &= (-14737 ? (arr_14 [14]) : (arr_14 [4]));

        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_23 &= ((~(arr_16 [10])));
            var_24 &= (((arr_14 [10]) == (8031390607586265493 && -29)));

            for (int i_6 = 3; i_6 < 18;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {

                    for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        var_25 &= var_8;
                        arr_28 [i_4] [i_4] [1] [i_7] [3] = ((1 ? var_3 : var_13));
                        arr_29 [i_7] [i_4] [i_6] = ((18446744073709551615 / (arr_24 [i_4] [i_6] [i_6] [i_6] [i_8 - 1])));
                    }
                    for (int i_9 = 1; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        var_26 = ((115 <= (arr_31 [i_4] [i_4] [i_6 - 1] [i_6 - 2] [i_4] [i_9 + 1])));
                        var_27 = (arr_16 [i_4]);
                        arr_34 [i_4] [12] [i_9] = 8031390607586265474;
                    }
                    for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_4] [i_10 + 1] [i_6] [2] [i_10 + 1] = 6104491691303219433;
                        var_28 ^= (((arr_37 [i_10 - 1] [i_5] [i_7] [i_7] [i_5] [i_6 - 3]) ? var_13 : var_12));
                        arr_39 [i_4] [i_5] [i_4] [i_7] [16] [i_6] [i_10 - 1] |= (((arr_18 [i_4] [i_5] [i_6]) ? var_3 : var_0));
                        var_29 = (min(var_29, (arr_36 [16])));
                    }
                    var_30 &= var_16;
                    var_31 = (((arr_19 [i_6 - 1] [i_4]) ? (arr_14 [i_4]) : (arr_19 [i_6 + 2] [i_4])));
                }
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_32 ^= -115;
                            var_33 += (arr_24 [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_6 + 2] [i_6 + 2]);
                        }
                    }
                }
                var_34 = 18446744073709551613;
                arr_45 [i_4] [i_4] = var_1;
            }
            arr_46 [i_4] = ((8031390607586265474 ? 1 : 6315690488136014303));
        }
        for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
        {

            for (int i_14 = 1; i_14 < 19;i_14 += 1)
            {
                var_35 = 26807;
                var_36 -= var_15;

                for (int i_15 = 1; i_15 < 19;i_15 += 1) /* same iter space */
                {
                    var_37 = var_12;
                    arr_56 [i_4] [i_13] [i_14] [i_15] = var_7;
                    arr_57 [i_4] [i_14 - 1] [14] &= (-6315690488136014304 < var_5);
                    var_38 += -var_5;
                }
                for (int i_16 = 1; i_16 < 19;i_16 += 1) /* same iter space */
                {
                    var_39 = (((arr_22 [i_14 + 1] [i_16 + 1] [i_16 - 1] [i_16 - 1]) > var_4));
                    var_40 -= ((!(arr_31 [0] [6] [i_4] [i_14 + 1] [i_14 + 1] [i_16 - 1])));
                }
                arr_60 [i_4] [i_13] [i_14] = var_4;
            }
            for (int i_17 = 2; i_17 < 17;i_17 += 1)
            {
                var_41 = (min(var_41, (arr_40 [i_17 - 2] [6] [i_17 - 2])));
                var_42 |= (-(arr_32 [8] [i_17 + 2]));
            }
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                arr_66 [i_18] [i_4] [i_18] |= arr_20 [i_4] [8] [i_18];
                var_43 += (((arr_15 [i_18] [i_13]) << (((-32112 + 32141) - 19))));
                var_44 ^= (arr_63 [19] [i_18] [i_4] [i_4]);
                var_45 = (((((arr_53 [i_18] [i_4] [i_4]) == var_9)) ? 0 : 1));
            }
            for (int i_19 = 0; i_19 < 20;i_19 += 1)
            {
                arr_70 [2] [i_13] [i_19] [i_19] &= arr_54 [i_4] [i_13];
                var_46 = -7266428659404485429;
            }
            var_47 = (max(var_47, (var_0 / 2020637938)));
            var_48 = ((((-26793 ? var_9 : -351418033)) >= 351418046));
            var_49 = (max(var_49, 7598333833265684961));
        }
        for (int i_20 = 0; i_20 < 20;i_20 += 1)
        {
            arr_73 [i_4] = 693586264;
            /* LoopNest 2 */
            for (int i_21 = 4; i_21 < 17;i_21 += 1)
            {
                for (int i_22 = 2; i_22 < 19;i_22 += 1)
                {
                    {
                        var_50 = (max(var_50, (((~(arr_65 [8]))))));
                        var_51 |= 1;
                        arr_82 [i_4] [i_4] [i_21] [i_4] = -var_9;
                        arr_83 [i_4] [i_20] [i_21] [i_4] [i_22] = ((var_4 <= (var_8 % 1600603989)));
                        var_52 = ((0 / (arr_21 [i_21 + 3] [i_22 - 1] [i_22 - 2] [i_22 - 1])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 20;i_23 += 1) /* same iter space */
    {
        arr_87 [i_23] = var_5;
        arr_88 [i_23] = ((3173121586308567333 ? (arr_14 [2]) : (arr_50 [i_23] [14] [i_23])));
    }

    for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
    {
        var_53 = (max(((127 ? (arr_75 [i_24] [i_24] [i_24]) : -26810)), (arr_81 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])));
        arr_91 [i_24] = (max(-2095282938, (arr_79 [18] [i_24] [1] [18])));
    }
    /* vectorizable */
    for (int i_25 = 0; i_25 < 1;i_25 += 1) /* same iter space */
    {
        var_54 &= 28100;
        var_55 = var_4;
        var_56 -= (~-var_16);
        var_57 = 8955;
        /* LoopNest 2 */
        for (int i_26 = 2; i_26 < 12;i_26 += 1)
        {
            for (int i_27 = 0; i_27 < 13;i_27 += 1)
            {
                {
                    arr_101 [i_27] [i_26 - 2] [i_25] [i_25] |= (arr_15 [i_26] [i_26]);
                    var_58 = ((~((0 >> (2095282943 - 2095282935)))));
                }
            }
        }
    }
    for (int i_28 = 0; i_28 < 1;i_28 += 1) /* same iter space */
    {
        var_59 = (((var_4 + 9223372036854775807) >> (arr_0 [i_28])));

        for (int i_29 = 0; i_29 < 13;i_29 += 1)
        {
            var_60 = (min(var_60, (((((min(2199684352, (arr_78 [i_28] [i_28] [i_29] [i_29] [i_29])))) ? (((var_10 << var_12) ? 1 : -var_5)) : (min(((-(arr_47 [4]))), (var_1 ^ 106))))))));
            var_61 = (max(6907193512972607845, ((((-9397 + 2147483647) << (!255))))));

            for (int i_30 = 0; i_30 < 1;i_30 += 1)
            {
                arr_109 [0] [i_29] [i_29] [i_28] = 17225;
                var_62 = (min(var_62, var_2));
                arr_110 [i_28] = ((max(351418023, (~-34))));
                arr_111 [i_28] [i_28] = (((arr_41 [i_28] [i_29] [i_29] [i_28] [i_30]) + (((min(((((arr_3 [i_28]) < 2199684357))), (min(var_5, 30))))))));
                var_63 = (((!var_0) ? 8191 : ((var_14 ? (arr_74 [i_28] [i_28] [i_28]) : (14672553346750800224 == 16352)))));
            }
            var_64 &= ((var_7 || (~var_15)));
        }
    }
    var_65 = 1;
    var_66 = (((var_11 / var_6) & (~var_4)));
    var_67 = (((var_10 + var_3) / var_8));
    #pragma endscop
}
