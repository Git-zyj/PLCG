/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (var_13 + var_6);

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_15 &= (max(((~(arr_0 [i_0]))), var_13));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        var_16 |= ((var_1 ? (min((min(18446744073709551615, 44296)), (~var_10))) : (((-1 ? ((18446744073709551615 ? var_6 : 18)) : ((max(var_4, (arr_2 [i_0] [i_1] [i_3])))))))));
                        var_17 = (max(var_17, (arr_7 [i_0] [i_2] [i_3])));
                    }
                }
            }
        }
        var_18 = (max(var_18, ((min((((((var_4 ? (arr_8 [i_0] [i_0] [0] [i_0]) : var_2))) ? var_0 : 18446744073709551615)), (max(20, 12368)))))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_19 -= var_10;
        var_20 ^= 18446744073709551615;

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_21 ^= 14;

            /* vectorizable */
            for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_22 = (max(var_22, var_1));
                        var_23 &= var_3;
                        var_24 &= var_7;
                    }
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        var_25 = (min(var_25, (arr_26 [6] [i_5] [i_6] [i_7])));
                        var_26 &= ((9223372036854775807 <= (((1146077805 ? (arr_2 [i_4] [i_4] [i_7]) : (arr_8 [i_5] [i_6 - 1] [13] [i_9]))))));
                        var_27 += var_12;
                    }
                    var_28 ^= ((18446744073709551611 ? (arr_20 [i_6 - 1] [i_6] [i_6 - 2] [i_6 - 1]) : var_0));
                    var_29 &= (((arr_13 [i_6 + 1] [i_6 + 1]) ? var_4 : (arr_13 [i_6 - 1] [i_6 + 1])));
                }
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    var_30 *= ((arr_20 [12] [i_4] [i_6] [i_10]) >> (((arr_23 [i_5] [i_6 + 1] [i_6 - 1] [i_10] [i_10]) - 144)));
                    var_31 = (min(var_31, (((var_9 ? (arr_3 [i_4] [i_6] [i_6 - 1]) : (arr_3 [i_5] [13] [i_6 + 1]))))));
                    var_32 = (max(var_32, (((-(arr_5 [i_6 - 1] [i_6 - 1] [i_6 + 1]))))));
                }

                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_33 &= ((var_0 ? (!12368) : 18446744073709551615));
                        var_34 = (min(var_34, (arr_1 [i_11] [i_12])));
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        var_35 &= 18446744073709551609;
                        var_36 = (max(var_36, (arr_28 [i_6 + 1] [i_6 - 1] [i_13] [i_6 + 1])));
                        var_37 |= ((!(arr_20 [i_13] [i_11] [i_11] [i_4])));
                    }
                    var_38 = (min(var_38, var_11));
                    var_39 *= var_8;
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 18;i_15 += 1)
                    {
                        {
                            var_40 = (max(var_40, (arr_13 [i_6] [i_4])));
                            var_41 *= (((arr_9 [i_14] [i_5] [i_15 - 2] [i_5] [i_6 + 1]) ? (arr_20 [i_4] [i_4] [i_4] [i_14]) : -72));
                            var_42 &= var_6;
                        }
                    }
                }
            }
            for (int i_16 = 2; i_16 < 18;i_16 += 1) /* same iter space */
            {
                var_43 = (max(var_43, (((((((((31 ? 0 : 53167))) ? (max(1, 18446744073709551585)) : 1))) ? 0 : var_6)))));
                var_44 -= (max(((~(arr_3 [i_4] [i_4] [i_16 - 2]))), var_9));
                var_45 = (max(var_45, ((min(((+((var_9 ? (arr_8 [i_16] [i_16] [i_5] [12]) : var_13)))), var_1)))));
                /* LoopNest 2 */
                for (int i_17 = 3; i_17 < 15;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 17;i_18 += 1)
                    {
                        {
                            var_46 = (min(var_46, var_3));
                            var_47 += var_11;
                        }
                    }
                }
                var_48 = (min(var_48, ((((!90) ? (arr_35 [i_4]) : ((15 ? 0 : 4294967289)))))));
            }
            for (int i_19 = 2; i_19 < 18;i_19 += 1) /* same iter space */
            {
                var_49 = (max(var_49, (((max(var_12, 18446744073709551602))))));
                var_50 = (max(var_50, var_11));
                var_51 -= var_6;
            }
            for (int i_20 = 0; i_20 < 19;i_20 += 1)
            {

                for (int i_21 = 0; i_21 < 19;i_21 += 1)
                {
                    var_52 -= var_7;
                    var_53 = (max(var_11, (((var_9 ? (arr_48 [i_4] [i_5] [i_20] [i_21]) : (arr_48 [i_4] [i_4] [i_20] [i_21]))))));
                    var_54 &= (min((((var_11 ? (arr_45 [i_4] [i_20] [i_4]) : var_5))), (min((arr_25 [i_4] [i_5] [8] [i_5] [i_20] [i_20] [i_21]), (arr_25 [i_4] [i_20] [i_20] [i_21] [i_4] [i_4] [i_4])))));
                }
                var_55 ^= (((((var_1 & (arr_28 [i_4] [i_5] [i_4] [i_4])))) ? var_0 : ((((var_6 ? var_1 : var_0)) & (((min(var_1, (arr_29 [i_4] [i_5] [i_4] [i_4])))))))));
                var_56 ^= (var_0 ? ((max(var_7, (!255)))) : 71);
                var_57 &= 3674;
                var_58 = var_12;
            }
            var_59 = 409573785;
        }
        for (int i_22 = 0; i_22 < 19;i_22 += 1)
        {
            var_60 = (min(var_60, ((min(((-8799232256080862992 ? 2183774743 : 1370121507)), 31711)))));

            /* vectorizable */
            for (int i_23 = 0; i_23 < 19;i_23 += 1)
            {

                for (int i_24 = 0; i_24 < 19;i_24 += 1) /* same iter space */
                {
                    var_61 -= (((arr_19 [i_24] [i_22]) ? (arr_15 [i_22]) : (arr_32 [i_24] [i_24] [i_4] [i_4] [i_4])));
                    var_62 &= ((var_10 ? var_0 : var_0));
                    var_63 -= (arr_57 [i_4] [i_4]);
                    var_64 = (min(var_64, (((~(arr_18 [i_4] [i_22] [i_23] [i_24]))))));
                }
                for (int i_25 = 0; i_25 < 19;i_25 += 1) /* same iter space */
                {

                    for (int i_26 = 0; i_26 < 19;i_26 += 1)
                    {
                        var_65 = (max(var_65, var_3));
                        var_66 ^= ((var_4 ? (arr_64 [i_4] [i_26] [i_23] [i_25] [i_26]) : (arr_64 [i_4] [i_4] [i_23] [i_25] [i_26])));
                        var_67 ^= (((((var_13 ? var_8 : 18446744073709551563))) ? var_2 : 1915100332));
                        var_68 = (~var_0);
                    }
                    var_69 += ((!(arr_41 [i_4] [i_25] [i_23])));
                }
                var_70 ^= var_11;
                var_71 = (max(var_71, (arr_56 [i_4] [i_22] [i_23])));
            }
            /* vectorizable */
            for (int i_27 = 0; i_27 < 19;i_27 += 1)
            {

                for (int i_28 = 2; i_28 < 18;i_28 += 1) /* same iter space */
                {
                    var_72 *= (~var_11);
                    var_73 = (min(var_73, (!8)));
                    var_74 = (max(var_74, (3765317568176833514 / var_7)));
                }
                for (int i_29 = 2; i_29 < 18;i_29 += 1) /* same iter space */
                {
                    var_75 = var_3;
                    var_76 -= (arr_36 [i_4] [i_22] [i_27] [i_22] [i_27] [i_29 - 1]);
                }
                var_77 -= ((var_13 ? var_12 : var_1));
                /* LoopNest 2 */
                for (int i_30 = 0; i_30 < 19;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 19;i_31 += 1)
                    {
                        {
                            var_78 |= ((1 ? -95 : -72));
                            var_79 ^= (4294967271 - -1);
                            var_80 = (min(var_80, var_6));
                            var_81 = (min(var_81, var_0));
                        }
                    }
                }
                var_82 |= var_8;
            }
            for (int i_32 = 0; i_32 < 19;i_32 += 1)
            {

                for (int i_33 = 0; i_33 < 19;i_33 += 1)
                {
                    var_83 = (min(var_83, ((((min((arr_22 [16] [i_22] [i_22] [i_4] [i_32] [i_33]), (min(var_2, var_3)))) ^ 159)))));
                    var_84 &= (min((max(var_4, (arr_34 [i_22] [i_22] [i_4]))), var_13));
                }
                var_85 = (min(var_85, (arr_36 [i_4] [i_4] [i_22] [i_22] [i_32] [i_32])));
            }
            var_86 |= (arr_13 [i_4] [i_4]);
            var_87 = (max(var_87, (((4294967281 & ((~(~var_12))))))));
        }
    }
    #pragma endscop
}
