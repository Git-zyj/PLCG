/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                arr_8 [i_2] [2] [i_0] &= (-206 & ((var_5 >> (((var_6 - var_5) + 238579820)))));
                arr_9 [i_2] = ((((max((arr_7 [19] [0] [i_2 - 1] [i_2]), (arr_1 [i_0 - 1])))) ? (var_2 || var_8) : ((min((var_2 == var_2), var_9)))));
            }
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_10 = (~var_3);
                    arr_14 [i_0] [i_3] [i_3] [i_4] = var_6;
                    var_11 = (min(var_7, (!1)));
                    arr_15 [i_0] [12] [i_3] [i_3] [i_4] [i_4] = (arr_12 [i_0] [i_1] [i_3] [i_4]);
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_12 = (max(var_12, (1 && 1)));
                    arr_20 [i_0 + 1] [i_1] [i_3] = (max(((min(1, (min(1, 0))))), (-var_5 & var_8)));
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    arr_23 [2] [i_3] [i_3] [i_6] = ((((-(var_4 % var_3))) << (((var_7 - var_6) - 896333446))));
                    var_13 = ((((((arr_21 [i_3]) ^ (arr_21 [i_3])))) ? (((var_1 | 1) ? (var_0 | var_7) : ((~(arr_4 [6]))))) : (((~(4294967286 | 0))))));
                }
                var_14 = var_5;
                var_15 = (((min((1 | 1601588743), ((max(94, -16))))) >> (-1 + 22)));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_16 = (max(var_16, ((((arr_21 [0]) / (arr_21 [0]))))));
                var_17 = ((-(!var_9)));

                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    var_18 = var_8;
                    var_19 = arr_19 [i_8 + 1] [16] [i_0 - 1];
                }
                var_20 = (arr_12 [i_0 - 1] [0] [i_0] [i_0 - 1]);
            }
            var_21 = ((!((((arr_25 [i_0 + 1] [i_0 + 2] [i_0] [i_0]) ? (arr_25 [i_0 + 2] [i_0 + 1] [i_0] [i_0]) : (arr_25 [i_0 - 1] [i_0 + 2] [i_0] [i_0]))))));
            var_22 = ((((~(arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 1])))) >= (min((arr_4 [i_0 + 2]), var_5)));

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_23 = (max(var_23, (((!(~var_8))))));

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    var_24 = ((!((((arr_11 [i_9] [i_1] [21]) & (((((arr_2 [i_0]) > var_2)))))))));
                    var_25 = var_1;
                }
                for (int i_11 = 1; i_11 < 21;i_11 += 1)
                {
                    arr_35 [i_9] = (var_5 % -var_7);
                    arr_36 [19] [i_9] [i_11] = min(var_9, ((max(17, 14052))));
                    var_26 |= (((var_5 == ((var_0 & (arr_7 [i_0 + 1] [i_1] [i_9] [20]))))) ? var_3 : ((max((arr_1 [i_0 + 2]), ((var_9 - (arr_5 [6])))))));
                }
            }
        }
        /* vectorizable */
        for (int i_12 = 2; i_12 < 20;i_12 += 1)
        {
            var_27 = (max(var_27, ((((~var_6) == ((((arr_25 [i_0] [i_12 - 1] [i_12 + 2] [i_0]) != var_2))))))));
            arr_41 [i_12 + 2] = (751426401 / 48995);
            arr_42 [i_0] [i_12] [i_0 + 1] = (((var_2 | (arr_29 [i_0] [i_12 + 2] [20]))));
            var_28 = (((((arr_27 [i_12] [i_12] [i_0 + 1] [i_0] [i_0]) ? var_6 : var_1)) * var_5));
        }
        for (int i_13 = 2; i_13 < 21;i_13 += 1)
        {
            var_29 -= min((((+(min((arr_24 [i_13 + 1] [i_13] [13] [1]), (arr_21 [14])))))), (~-3785014773));
            var_30 = (min(var_30, ((((max((((var_5 ? var_1 : (arr_24 [i_0] [i_0] [i_0] [i_0])))), (min((arr_4 [i_0]), var_6)))) % (((max(var_9, (arr_25 [12] [i_0] [i_0 + 2] [14]))))))))));
        }
        /* vectorizable */
        for (int i_14 = 4; i_14 < 19;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                var_31 = (~-var_2);
                var_32 = ((-((-(arr_11 [i_14] [i_14 - 1] [i_15])))));
                var_33 *= -var_6;
            }
            arr_49 [i_14 + 3] [i_0 - 1] = var_7;
        }
        arr_50 [8] = (((!98) ? (min(var_8, ((~(arr_16 [i_0] [i_0] [1] [i_0]))))) : ((max(var_2, (max(var_9, var_2)))))));
        var_34 = (((arr_4 [i_0]) ? var_0 : ((((var_5 ? (arr_33 [i_0] [i_0] [i_0] [9]) : var_6)) * (((arr_2 [19]) * (arr_26 [i_0] [i_0 + 1])))))));
    }
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        var_35 = (((((((arr_52 [i_16]) && var_3)))) * ((var_4 * (arr_0 [i_16])))));
        var_36 = (max(var_36, ((min((max(((-(arr_30 [i_16]))), (var_4 / var_9))), ((((var_2 - var_7) ? (((!(arr_47 [i_16])))) : var_5))))))));

        for (int i_17 = 2; i_17 < 14;i_17 += 1)
        {
            var_37 = (9223372036854775806 <= 2097420831);
            var_38 = (var_3 && -var_7);
        }
        for (int i_18 = 0; i_18 < 16;i_18 += 1)
        {
            arr_60 [i_16] [i_18] = (max((max(((max(var_2, var_4))), (arr_46 [i_16]))), (!var_1)));
            arr_61 [i_18] [0] [i_16] = (max((((arr_25 [i_16] [i_16] [i_16] [i_16]) != (max(var_0, var_8)))), ((!((max(var_9, var_0)))))));
            var_39 = (max((((arr_54 [i_16] [i_18]) ? (((var_1 ? var_1 : (arr_55 [i_18] [i_16] [i_16])))) : ((-(arr_46 [i_18]))))), var_6));
        }
        for (int i_19 = 1; i_19 < 12;i_19 += 1)
        {
            arr_65 [i_16] [i_16] [i_16] = (max((1 <= 1580049490), ((((var_4 - (arr_43 [i_16] [i_19]))) >> ((((arr_1 [i_16]) || var_4)))))));
            var_40 ^= ((-(arr_53 [i_19 + 2])));
        }
        for (int i_20 = 0; i_20 < 16;i_20 += 1)
        {
            arr_69 [12] [i_20] [11] = ((!(((-(min(var_9, var_7)))))));
            var_41 ^= (min(((~(~var_8))), (!var_6)));
        }
    }
    /* vectorizable */
    for (int i_21 = 1; i_21 < 1;i_21 += 1)
    {
        var_42 = ((~(arr_0 [i_21 - 1])));
        arr_74 [i_21] = ((var_8 >> (((~var_5) + 238579811))));
        arr_75 [i_21] [i_21] = (arr_24 [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21]);
    }
    for (int i_22 = 0; i_22 < 21;i_22 += 1)
    {

        for (int i_23 = 4; i_23 < 17;i_23 += 1)
        {
            arr_84 [i_22] [i_22] = (min((max(15831244396248275225, 1)), ((min((arr_34 [i_23 + 4] [i_23] [3] [i_23] [i_23]), ((max(0, 241))))))));
            var_43 += ((!((min((arr_3 [i_23 + 2] [i_23 - 4] [i_23 - 1]), var_8)))));
            var_44 = (((min(-var_8, ((((arr_78 [i_22] [i_22]) <= var_7))))) & (((((var_6 || (arr_80 [i_22] [i_22]))) ? ((((!(arr_13 [i_22] [i_22] [i_23] [i_23]))))) : (min((arr_78 [1] [i_22]), (arr_83 [i_23] [i_23] [i_23 + 2]))))))));
        }
        /* vectorizable */
        for (int i_24 = 0; i_24 < 21;i_24 += 1)
        {
            var_45 = ((!(arr_22 [i_22])));
            var_46 = (min(var_46, var_6));
            var_47 = var_6;
        }
        for (int i_25 = 0; i_25 < 21;i_25 += 1)
        {
            var_48 = (((min((~var_7), (min((arr_25 [i_25] [i_25] [i_22] [i_22]), var_2)))) & (((-((((arr_0 [3]) <= (arr_90 [i_22])))))))));
            var_49 |= var_2;
            arr_91 [i_22] [i_22] = ((((var_1 * (var_1 * var_6))) << (((var_9 | var_4) - 3433372901))));
            var_50 = (((((-(!36)))) ? (((min(var_1, var_2)) % var_1)) : ((min(((-(arr_38 [i_25] [i_25] [i_25]))), var_0)))));
        }
        for (int i_26 = 4; i_26 < 19;i_26 += 1)
        {
            var_51 = (max((min(var_3, (arr_5 [i_22]))), ((min(414057090, 21165)))));
            arr_95 [i_22] [i_22] = (!208);
            var_52 *= (min(((((!3012198193140903998) < var_2))), (min((max(var_9, var_3)), (((arr_79 [i_22] [4]) ^ var_1))))));

            /* vectorizable */
            for (int i_27 = 0; i_27 < 21;i_27 += 1)
            {
                arr_99 [i_22] = (arr_18 [i_26] [i_22] [10] [i_26 - 1]);
                arr_100 [i_22] [i_26] = var_4;
            }
        }
        arr_101 [i_22] [i_22] = (min((max((min(var_5, var_5)), ((((arr_85 [i_22]) < var_8))))), (min((~var_9), ((((arr_27 [i_22] [i_22] [i_22] [i_22] [i_22]) <= (arr_18 [17] [i_22] [i_22] [17]))))))));
    }
    var_53 = (((max((max(2319973981, 1)), (((202 >> (32767 - 32764)))))) << (15434545880568647618 - 15434545880568647617)));
    #pragma endscop
}
