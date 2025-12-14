/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_21 = 4288065306;
        var_22 ^= 1;

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_23 = (((((-var_19 ? ((1230081094 ? var_19 : -1745)) : ((max(var_1, var_9)))))) ? (max(var_5, (((arr_1 [i_0]) ? (arr_2 [i_0] [i_1 + 1]) : var_6)))) : (min(var_8, (arr_3 [i_0] [i_1 - 1] [i_0 - 2])))));
            var_24 = (((max((arr_3 [i_0 - 2] [i_1 - 1] [i_1 + 2]), ((((arr_3 [15] [i_1] [15]) ? (arr_1 [i_0]) : var_17))))) != ((max(var_12, (var_19 % var_14))))));
            var_25 = var_17;
        }
        var_26 = 36028797018963967;
        var_27 = 1;
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_28 = ((var_13 && (arr_6 [i_3])));
                    var_29 = (((((arr_7 [i_2]) ? var_7 : (arr_5 [i_3]))) < ((var_8 & (arr_10 [i_3])))));
                    var_30 = ((var_13 ? (arr_10 [i_2 - 1]) : (arr_9 [i_2] [i_3] [i_3] [i_4])));
                    var_31 = 1;
                    var_32 = 1;
                }
            }
        }

        for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
        {
            var_33 = ((!(~var_15)));
            var_34 = (112 ^ var_14);
        }
        for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 1; i_7 < 23;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_35 = 0;
                            var_36 = (((arr_22 [i_2] [i_7] [i_8] [i_9]) == var_9));
                            var_37 = var_1;
                        }
                    }
                }
                var_38 = (((~var_18) < 1));
                var_39 = arr_21 [i_7 - 1] [i_7] [i_7] [i_7];
                var_40 = (min(var_40, var_0));
                var_41 &= (arr_13 [i_2] [i_7]);
            }
            var_42 = (min(var_42, (arr_10 [i_2])));
        }
        for (int i_10 = 1; i_10 < 23;i_10 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 23;i_13 += 1)
                    {
                        {
                            var_43 = (((((arr_18 [i_2 - 1] [i_12] [i_11] [i_2 - 1]) + 2147483647)) << (((((var_0 >= (arr_11 [i_13] [i_10] [i_2])))) - 1))));
                            var_44 = var_7;
                        }
                    }
                }
            }
            var_45 = ((var_4 & (arr_8 [i_10 - 1] [i_10 + 1] [i_2 - 1])));
            var_46 = (min(var_46, (((-(arr_33 [i_2] [4] [4] [i_2]))))));

            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                var_47 = var_13;
                var_48 = ((-(arr_24 [i_2 - 1] [i_2 - 1] [i_10] [i_10] [i_10] [i_10] [i_14])));

                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    var_49 = (((-6085208469349325377 / -752413569) | var_18));
                    var_50 = ((var_13 ? ((var_0 & (arr_28 [i_2] [i_14]))) : (arr_24 [i_2] [i_2] [i_10] [i_14] [i_2] [i_15] [i_2])));
                }
                for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
                {
                    var_51 = ((-var_17 * (((arr_38 [i_16] [i_16]) / var_6))));
                    var_52 = ((!(arr_30 [18] [i_10] [i_2 - 1])));
                    var_53 = (((((arr_5 [i_16]) && var_19)) && (((var_15 ? var_16 : var_0)))));
                }
                for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
                {
                    var_54 = (arr_42 [i_17] [i_17] [i_17] [22] [i_10 - 1] [i_2]);
                    var_55 = ((1 ? 123 : -6085208469349325377));
                }
            }
        }
        var_56 = (((arr_6 [i_2]) / (arr_42 [i_2] [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2])));
    }
    for (int i_18 = 1; i_18 < 19;i_18 += 1)
    {
        var_57 = ((((((((var_18 ? var_12 : var_2))) ? (((arr_44 [i_18] [i_18] [i_18]) + var_4)) : ((min(var_16, var_0)))))) ? ((min(var_1, 9223372036854775800))) : (arr_3 [i_18] [i_18] [i_18])));
        var_58 = ((arr_43 [i_18] [i_18]) - ((1 & (min((arr_40 [i_18 - 1] [i_18] [i_18] [i_18 - 1]), var_13)))));
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
    {
        var_59 = var_6;
        var_60 = (arr_48 [i_19] [14]);
        var_61 = arr_2 [0] [i_19];
        var_62 = (min(var_62, var_16));
    }
    for (int i_20 = 0; i_20 < 14;i_20 += 1) /* same iter space */
    {
        var_63 ^= ((min(var_0, ((var_14 ? var_12 : var_18)))));
        var_64 = (((arr_30 [i_20] [i_20] [i_20]) ? (((var_15 >= (arr_46 [6] [i_20] [i_20] [i_20] [i_20])))) : var_19));
        var_65 = (min(var_65, var_0));
    }
    #pragma endscop
}
