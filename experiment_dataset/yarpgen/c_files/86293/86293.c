/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(112, 127));
    var_16 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        var_18 |= (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_19 = (arr_0 [i_0]);
                var_20 = (((arr_7 [i_0] [i_0] [i_2]) != (arr_4 [i_0] [i_1] [i_2])));

                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_21 = ((-6917279350085453986 * ((-(arr_8 [i_0] [i_1] [i_2])))));
                        var_22 = var_5;
                        var_23 = 65535;
                        var_24 = (max(var_24, (arr_10 [i_0])));
                    }
                    var_25 = ((var_7 == (arr_1 [i_2])));
                    var_26 = (((arr_12 [i_0] [i_1] [i_2] [i_2] [7]) ? (arr_10 [i_0]) : (arr_9 [i_0] [i_0] [i_2] [i_3])));
                    var_27 = 46204;
                    var_28 = (var_1 && var_8);
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_29 = (i_0 % 2 == 0) ? ((((arr_9 [i_0] [i_1] [i_2] [i_5]) >> (((arr_14 [i_0] [i_1] [i_2] [i_5] [i_0] [i_2]) - 117))))) : ((((arr_9 [i_0] [i_1] [i_2] [i_5]) >> (((((arr_14 [i_0] [i_1] [i_2] [i_5] [i_0] [i_2]) - 117)) + 68)))));
                    var_30 = 7353;
                    var_31 = 3850;
                    var_32 = (((arr_6 [i_0] [i_1] [i_2] [i_5]) >= 1));
                    var_33 = ((((arr_2 [i_0]) ? 0 : (arr_7 [i_5] [i_0] [i_1]))) * (((0 ? var_14 : 12))));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_34 = ((((~(-32767 - 1))) <= (((-8510 + 2147483647) >> (352000800 - 352000772)))));
                        var_35 = -var_4;
                        var_36 = ((-(arr_11 [i_0] [i_0] [i_2] [i_6])));
                    }
                    var_37 = (((arr_16 [i_0] [i_1] [8] [i_6]) ? var_1 : (arr_18 [i_6] [i_2] [i_1] [i_0])));
                    var_38 = (((~0) != var_11));
                    var_39 = var_11;
                }
            }
            var_40 = (9223372036854775807 ^ 24);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        var_41 = (((arr_17 [i_0] [i_1] [6] [i_1] [i_0]) ^ -8));
                        var_42 = (min(var_42, ((~(arr_9 [i_0] [i_1] [i_0] [i_9])))));
                        var_43 = (max(var_43, (arr_8 [i_9] [i_1] [i_0])));
                    }
                }
            }
            var_44 = (((((var_6 >= (arr_14 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0])))) ^ ((((arr_20 [i_0] [1] [i_0]) == (arr_16 [i_0] [i_0] [i_1] [i_1]))))));
        }
        for (int i_10 = 1; i_10 < 9;i_10 += 1)
        {
            var_45 = ((~(arr_25 [i_10 + 1] [i_0])));

            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                var_46 += ((arr_25 [i_0] [2]) ? var_7 : (arr_30 [i_11] [7] [i_10 + 1]));
                var_47 &= (arr_6 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1]);
            }
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                var_48 = (arr_8 [i_10 + 1] [8] [i_10 + 1]);
                var_49 = var_14;
                var_50 = (i_0 % 2 == zero) ? (((((((-(arr_0 [i_0]))) + 2147483647)) >> (73 & var_5)))) : (((((((((-(arr_0 [i_0]))) - 2147483647)) + 2147483647)) >> (73 & var_5))));
            }
            var_51 = var_3;
            var_52 = arr_12 [i_0] [i_0] [i_0] [i_0] [i_0];
            var_53 = (~var_9);
        }

        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            var_54 = var_9;
            var_55 = (((arr_8 [i_13] [i_13] [i_13]) ? 3759280296 : var_2));
            var_56 = (min(var_56, (arr_40 [i_0])));
            var_57 ^= var_14;
            var_58 = (((2200973934 <= 156) << (((arr_35 [0] [i_13]) + 49))));
        }
        for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
        {
            var_59 = ((-(((arr_12 [i_0] [i_0] [i_0] [1] [i_14]) & (arr_32 [i_0] [i_0] [i_0] [i_14])))));
            var_60 = ((!((((arr_15 [7] [7] [i_0] [i_14] [i_0]) ? -1 : (arr_4 [i_14] [0] [i_0]))))));
        }
        for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
        {
            var_61 = (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]);
            var_62 = (65274 == 11378);
        }
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            var_63 = (!var_2);
            var_64 = ((var_1 <= (arr_4 [i_0] [i_16] [i_16])));
        }

        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            var_65 += ((6793718837242976654 ? 44 : 13612));
            var_66 = (!54707);
            var_67 = ((!(arr_38 [i_0])));
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 21;i_18 += 1)
    {
        var_68 = var_8;
        var_69 = var_3;
        var_70 = ((~((2784193720977767423 / (arr_52 [i_18])))));
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 21;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 18;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 21;i_21 += 1)
                {
                    {
                        var_71 = 28;
                        var_72 = (514982179022202325 & (2045725685 <= var_4));
                    }
                }
            }
        }
    }
    #pragma endscop
}
