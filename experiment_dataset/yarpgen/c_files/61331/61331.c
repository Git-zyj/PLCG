/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_16 = (((((~-1355524598) ? var_13 : ((29332 ? 0 : var_13)))) <= (((arr_3 [i_0 - 1]) ? (arr_3 [i_0 - 1]) : var_6))));
            var_17 = ((((max((arr_2 [i_1]), var_3))) ? (min(((max(var_3, var_10))), (arr_2 [i_0]))) : ((var_4 ? var_1 : (max((arr_5 [i_0]), var_12))))));
            var_18 = ((-((var_9 ? (arr_0 [i_0 - 1] [i_0 - 1]) : var_6))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_19 = (((((8565160545884177708 ? -1 : (arr_4 [i_0])))) || 3));
            var_20 &= (((!var_3) >> ((((var_1 ? (arr_2 [i_2]) : var_3)) - 3745870483))));
            var_21 -= ((((var_5 ? var_0 : var_11))) ? (arr_5 [i_0]) : (arr_5 [i_0 - 1]));
            var_22 = (min(var_22, (((!(((-30 ? (arr_3 [i_0]) : var_0))))))));
            var_23 = (arr_6 [i_2] [i_0 - 1]);
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_24 = ((29306 ? -96 : 3141066667));

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_25 = var_10;
                var_26 = (max(var_26, var_2));
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_27 = ((2147483584 ? 18105884983204128952 : -13));
                var_28 = max((((((((arr_9 [i_3]) < (arr_10 [i_5]))))) / ((90 ? var_15 : var_3)))), ((((~var_8) ? ((~(arr_11 [i_0] [i_0] [i_0] [i_0]))) : ((var_9 ? (arr_9 [i_5]) : 36191))))));
                var_29 *= var_8;
                var_30 = -1;
            }
            var_31 = var_2;
            var_32 = ((var_7 ? ((var_6 ? 6824924048370778336 : ((min((arr_6 [i_3] [i_3]), (arr_2 [i_0])))))) : (((((min((arr_8 [23] [i_3]), var_9))) ? (var_10 || var_2) : (var_13 < var_4))))));
        }
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_33 = 12;

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    var_34 = var_6;
                    var_35 = var_14;
                }
                for (int i_9 = 1; i_9 < 23;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 23;i_10 += 1)
                    {
                        var_36 ^= var_14;
                        var_37 = ((~((((min(var_9, var_13))) ? ((var_11 ? var_5 : var_1)) : ((((arr_22 [i_0] [i_6] [7] [i_9] [13]) << (var_2 - 11981972687831485000))))))));
                        var_38 = min(((4294967295 ? var_8 : var_0)), ((var_0 ? -576678139 : var_0)));
                    }
                    /* vectorizable */
                    for (int i_11 = 3; i_11 < 22;i_11 += 1)
                    {
                        var_39 &= (1931235727 + 31);
                        var_40 = var_1;
                    }
                    for (int i_12 = 1; i_12 < 22;i_12 += 1)
                    {
                        var_41 = var_10;
                        var_42 = (max((((~(arr_4 [i_0 - 1])))), 3984844522));
                        var_43 = var_1;
                    }
                    var_44 = (((min((var_5 * var_13), var_15))) ? var_1 : ((((((arr_21 [i_0] [i_0] [i_0] [i_7] [i_0]) ? var_13 : var_14)) < (-500939600 <= var_14)))));
                }
                for (int i_13 = 1; i_13 < 23;i_13 += 1)
                {
                    var_45 = var_13;
                    var_46 &= ((((((var_9 ? var_8 : var_9)))) / (max(((6824924048370778336 ? var_7 : var_2)), ((min(var_15, (arr_0 [i_0] [i_0]))))))));
                    var_47 = var_12;
                    var_48 -= (max(((max(var_6, var_1))), ((var_15 ? (arr_29 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_6 - 1] [i_6 + 1]) : var_9))));
                }
            }
            var_49 = (max(var_49, var_10));
        }
        var_50 = (~-54);
        var_51 = (((var_6 ? var_9 : var_5)));

        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            var_52 = (max(var_52, ((((~var_7) ? (arr_22 [i_14] [i_14] [i_14] [i_0] [i_14]) : (!var_2))))));

            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                var_53 = ((((var_9 ? (6824924048370778336 - 0) : (((var_7 ? var_10 : var_1))))) == 12));
                var_54 = (~(min(var_12, ((2363731562 ? 1 : 0)))));
                var_55 = (max(var_12, (arr_1 [i_0] [i_0 - 1])));
            }
            var_56 &= -116;

            for (int i_16 = 3; i_16 < 22;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    var_57 += ((var_13 - (((4279811673 ? 3 : 45)))));
                    var_58 = (((max(var_7, var_9))) ? (((arr_31 [i_0 - 1] [i_0 - 1] [i_16 + 2]) ? (arr_31 [i_0 - 1] [i_0 - 1] [i_16 + 2]) : var_12)) : ((~(!var_0))));

                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        var_59 ^= (((arr_0 [i_0 - 1] [i_0 - 1]) ? ((7776392224420372034 ? (arr_44 [i_14] [3] [i_18]) : (arr_7 [i_18] [i_14]))) : var_7));
                        var_60 = ((arr_1 [i_16 - 2] [i_0 - 1]) - var_14);
                        var_61 = ((var_6 ? (arr_13 [i_0 - 1] [i_16 - 3] [i_16 - 3] [i_0 - 1]) : 73));
                    }
                }
                for (int i_19 = 0; i_19 < 24;i_19 += 1)
                {
                    var_62 = (min(var_62, (((((max(var_10, var_10))) ? var_1 : var_6)))));

                    for (int i_20 = 1; i_20 < 22;i_20 += 1)
                    {
                        var_63 = (max(var_63, (((!((!(((var_7 ? var_5 : var_7))))))))));
                        var_64 = var_4;
                    }
                }
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    var_65 = var_10;
                    var_66 = ((+((min((arr_56 [i_21] [i_21] [i_21] [i_21] [i_21]), var_14)))));

                    for (int i_22 = 1; i_22 < 1;i_22 += 1)
                    {
                        var_67 = (max((min((arr_53 [i_16 + 2] [i_14]), var_10)), (((var_9 ? var_12 : var_9)))));
                        var_68 ^= (((((~var_5) ? (var_6 < var_10) : ((var_7 ? var_15 : var_2))))) ? var_9 : var_5);
                    }
                }
                for (int i_23 = 0; i_23 < 24;i_23 += 1)
                {

                    for (int i_24 = 0; i_24 < 24;i_24 += 1) /* same iter space */
                    {
                        var_69 = (min(((var_4 ? (arr_21 [i_24] [i_14] [i_14] [i_23] [i_0 - 1]) : var_13)), ((((arr_1 [i_16 - 1] [i_0 - 1]) << (((arr_52 [i_0] [i_0] [i_0] [i_16 + 1]) - 61407)))))));
                        var_70 += (((((((((arr_5 [0]) ? var_1 : (arr_26 [i_0] [22] [i_16] [22])))) ? (((var_2 ? (arr_52 [i_14] [i_14] [i_16] [i_23]) : var_8))) : var_13))) ? ((min((min(var_8, var_3)), var_1))) : ((var_4 ? (((min(var_6, var_1)))) : ((var_14 ? var_0 : 6824924048370778336))))));
                        var_71 = var_4;
                    }
                    /* vectorizable */
                    for (int i_25 = 0; i_25 < 24;i_25 += 1) /* same iter space */
                    {
                        var_72 &= ((!var_15) >> (var_10 - 50032));
                        var_73 *= var_6;
                    }
                    var_74 *= 4294967295;
                }
                var_75 = (min((((1 << (((min((arr_32 [i_0] [i_14] [i_16] [i_16] [i_0] [i_0] [i_16]), var_7)) - 4151115576))))), ((var_0 ? (-61 == var_11) : ((0 ? (arr_2 [i_0]) : var_10))))));
            }
        }
    }
    var_76 = (!18446744073709551615);
    #pragma endscop
}
