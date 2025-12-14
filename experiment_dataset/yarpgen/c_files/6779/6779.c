/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((-var_10 ? ((2138188886790943693 ? 34 : var_11)) : var_1)));
    var_15 = ((~((17229 ? (((var_7 ? -107 : var_8))) : var_9))));
    var_16 = (max(var_16, ((((var_6 - var_6) ? var_8 : (!24))))));
    var_17 -= var_9;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 -= ((var_13 ? var_12 : -var_11));
        var_19 = ((var_9 ? ((((var_13 ? var_0 : var_5)))) : 124));

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                arr_7 [i_2] = 24;
                arr_8 [i_2] = (((37 >= var_10) * (!2354886401)));

                /* vectorizable */
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    var_20 *= ((var_4 ? var_8 : var_3));
                    var_21 = (min(var_21, (!var_12)));
                    var_22 = -var_4;
                }
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_7;
                            arr_20 [i_0] [i_0] [i_1] [i_0] [i_1] [i_5] [i_6 + 1] = ((var_11 ? 22 : 21936));
                        }
                    }
                }
                var_23 += 37;
                var_24 = (min(var_24, var_4));
            }
            var_25 = var_3;
        }
        for (int i_7 = 4; i_7 < 19;i_7 += 1)
        {
            arr_24 [i_7 - 2] [i_0] = (4280508943236892625 == var_13);
            var_26 = ((((-((var_11 ? var_7 : 4286578688)))) ^ (-9223372036854775807 - 1)));
            var_27 ^= var_3;

            /* vectorizable */
            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                var_28 = (!var_3);
                var_29 = var_13;
                var_30 += 775122806;
            }
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {

                for (int i_10 = 1; i_10 < 18;i_10 += 1) /* same iter space */
                {
                    var_31 = var_9;
                    var_32 = ((-(((!(((var_1 ? var_4 : 18446744073709551606))))))));
                    var_33 = (var_13 ? -var_9 : 89);
                }
                for (int i_11 = 1; i_11 < 18;i_11 += 1) /* same iter space */
                {
                    var_34 = (max(var_34, var_9));
                    var_35 = (((var_5 ? 2 : ((var_12 ? 3950 : 0)))));
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 18;i_12 += 1) /* same iter space */
                {
                    arr_40 [i_0] [i_7 - 2] [i_9] [i_12 + 1] = -61077;

                    for (int i_13 = 2; i_13 < 20;i_13 += 1)
                    {
                        var_36 = (min(var_36, var_11));
                        var_37 = (min(var_37, var_1));
                        arr_44 [i_0] [i_9] [16] [i_13] = var_0;
                        var_38 = 1940080894;
                    }
                    var_39 = -119;
                    var_40 = 3950;
                }
                for (int i_14 = 4; i_14 < 19;i_14 += 1)
                {
                    arr_47 [i_0] [i_7] [i_9] [i_0] = ((((-127 - 1) ? -119 : 72057594037895168)));
                    var_41 += var_10;
                    var_42 = -var_13;
                }
                var_43 = (min(var_43, -var_9));
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                var_44 &= 32450;
                var_45 = var_0;
            }
            for (int i_16 = 1; i_16 < 19;i_16 += 1)
            {
                arr_54 [i_7 - 1] [i_7] [i_7] &= (((-112 + 2147483647) >> (-var_2 - 37)));

                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    arr_57 [i_0] [i_7] [i_7 + 2] [i_7] [i_16 + 2] [i_7] &= ((-52076 ? -var_1 : (!var_4)));
                    var_46 = 3519844489;
                    arr_58 [2] [i_17] [i_16] [i_17] [14] [i_7 + 1] = ((var_9 || (((-(((-127 - 1) ? var_2 : var_6)))))));
                }
                for (int i_18 = 2; i_18 < 20;i_18 += 1)
                {
                    arr_61 [i_18] = (var_1 - var_3);
                    var_47 ^= ((-((((-127 - 1) ? var_2 : -8632542725712491840)))));
                    var_48 = (min(var_48, (!var_4)));
                }
                var_49 = -65518;
            }
            arr_62 [i_0] [i_0] &= -4;
        }

        for (int i_19 = 1; i_19 < 20;i_19 += 1)
        {
            arr_65 [i_0] [i_19] [i_19] = ((-17 ? 47736 : var_8));

            /* vectorizable */
            for (int i_20 = 0; i_20 < 21;i_20 += 1)
            {
                var_50 = var_11;
                arr_68 [i_19] [i_19] [i_19] = -32450;
                var_51 = var_9;
            }
        }
    }
    for (int i_21 = 0; i_21 < 16;i_21 += 1)
    {
        arr_73 [i_21] [i_21] = var_0;

        for (int i_22 = 0; i_22 < 16;i_22 += 1)
        {
            arr_77 [i_22] [i_22] [i_22] = ((((var_1 < var_11) ? 0 : ((-105 ? var_12 : 11)))));
            var_52 = (max(var_52, (((52 ^ ((var_0 ? var_8 : var_13)))))));
        }
        for (int i_23 = 3; i_23 < 14;i_23 += 1)
        {
            arr_82 [i_23] [i_21] [13] = ((!(var_0 >= -var_5)));
            arr_83 [i_23] [i_23] [i_23] = -32749;
            var_53 = (var_1 / var_13);
            var_54 = (min(var_54, (!var_7)));
        }
        var_55 = var_11;
        var_56 = ((-var_10 ? ((-(-32767 - 1))) : (var_13 - 15275)));
        var_57 = ((-var_11 != ((~((32764 ? (-127 - 1) : -32759))))));
    }
    #pragma endscop
}
