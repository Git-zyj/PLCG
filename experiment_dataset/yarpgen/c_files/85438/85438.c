/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((max((var_5 <= var_7), var_10)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_21 = (((((var_9 ? var_0 : (arr_2 [i_0] [i_0 + 1])))) ? (!var_0) : -var_5));
        var_22 = var_0;
        arr_4 [i_0] = (((9200092078738969804 > 9200092078738969804) >> (((arr_0 [12]) - 124))));
        var_23 = ((var_12 ? (224 + var_4) : ((var_11 ? (arr_0 [i_0 + 1]) : 9246651994970581816))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_9 [i_0] [i_0] = 25;
            var_24 = 56490;
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_12 [i_0] = (((var_9 < 11697) != (9200092078738969800 * 17609)));
            arr_13 [i_2] [i_0 - 1] [i_0 - 1] = (var_9 ^ (arr_8 [i_2]));
        }
        for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_25 = ((3531268849 ? (arr_3 [i_0 + 1]) : var_5));
            arr_17 [i_0] [i_3] [i_3] = 17572062232439714098;
            var_26 = (min(var_26, (~var_8)));
            var_27 = 162;
        }
        for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_28 *= ((9246651994970581793 ? var_15 : var_19));
            var_29 = ((var_5 ^ (~3531268847)));
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        arr_26 [i_5] = var_3;

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_29 [i_6] [i_6] = var_2;

            /* vectorizable */
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                arr_33 [i_6] = ((var_3 << (((arr_0 [i_7]) - 122))));
                var_30 = (min(var_30, ((((31034 ? var_14 : (arr_1 [i_6])))))));
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 11;i_9 += 1)
                {
                    {
                        var_31 = var_15;

                        for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                        {
                            arr_41 [i_6] [12] [i_6] = var_2;
                            var_32 = ((((min((max(3838, 3531268849)), (arr_38 [i_9] [i_9] [i_9 + 2] [i_9] [i_6])))) || var_14));
                        }
                        for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                        {
                            var_33 = (((((var_4 ? var_2 : var_11))) ? 9246651994970581816 : (((arr_27 [i_6]) % var_5))));
                            var_34 = (((((248 | (arr_38 [i_5] [i_5] [i_5] [i_9 + 2] [i_6])))) ? ((((var_1 | var_7) ^ ((var_4 ? -1 : (arr_30 [i_5] [i_5] [10])))))) : 8796485935810917241));
                            var_35 = (((arr_42 [i_5] [i_6] [i_11] [i_6] [i_5]) | 3531268849));
                        }
                        for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                        {
                            var_36 = (arr_21 [i_5] [i_5]);
                            var_37 = (min(var_37, ((((((var_6 ? var_11 : (arr_40 [i_12] [10] [i_8] [i_5]))))) || 15362161615727788637))));
                            var_38 -= (((min(1771235195664520709, (arr_45 [i_12] [i_6] [i_9 - 1] [i_9] [i_9 + 1]))) > (arr_14 [i_12])));
                            arr_48 [i_9] [i_6] [i_9] [i_6] [i_12] [i_12] [i_9] = (((var_8 + 2147483647) >> ((((0 ? (max((arr_46 [i_5] [7] [i_9 + 1] [i_5] [7] [i_6] [i_6]), (arr_36 [i_12] [i_9] [i_5] [i_5]))) : (arr_39 [i_9 - 2] [i_9 - 2] [i_9 + 2] [i_9 - 2] [i_12]))) - 3535))));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                        {
                            arr_51 [i_5] [i_5] [i_6] [i_5] [i_5] = (((0 ? 396363530 : 3838)));
                            arr_52 [i_6] = var_3;
                            var_39 = (max(var_39, (arr_36 [i_9] [i_9 - 2] [i_9 - 1] [i_9 + 1])));
                        }
                        var_40 = (min(var_40, ((min(((~(arr_35 [i_9 + 1] [i_9 - 1] [i_9] [i_9 + 2]))), var_8)))));
                        arr_53 [i_9] [i_6] [i_6] [i_6] [i_5] = 120;
                    }
                }
            }
            arr_54 [i_5] [i_6] [i_5] = ((max((arr_40 [i_6] [i_5] [i_5] [i_5]), (arr_49 [i_6] [i_6] [i_5] [i_6] [i_5] [i_6] [i_5]))));
            arr_55 [i_6] [i_6] = (((33828 ? var_10 : (arr_25 [i_5] [i_6]))));
        }
    }
    var_41 = (((var_7 + 9223372036854775807) >> (var_12 - 27159)));
    /* LoopNest 3 */
    for (int i_14 = 2; i_14 < 22;i_14 += 1)
    {
        for (int i_15 = 2; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                {
                    var_42 = (min(var_42, (arr_57 [10])));
                    var_43 = (min(var_43, (((arr_58 [i_16] [i_16]) != -20767))));
                    var_44 = (max(var_44, (((~var_2) ? (((((((var_19 ? var_8 : 17631)) + 2147483647)) >> (((arr_57 [i_14]) - 10419590952538444227))))) : ((min(1, var_7)))))));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        for (int i_18 = 2; i_18 < 20;i_18 += 1)
                        {
                            {
                                arr_70 [i_14] [i_15] [i_14] [i_15] [i_14] [i_14] [i_14] = ((((((arr_67 [i_16] [i_14 - 2]) < (arr_65 [i_14]))))) ? ((min((arr_63 [i_14] [i_17] [i_15]), 11695))) : (var_4 || 4521));
                                arr_71 [i_14] [i_14] [i_16] [i_14] [i_18 - 1] [i_15] [i_17] = (min(var_3, ((1 >> (var_15 - 24125)))));
                                var_45 = (((((max(-11706, var_17)))) ? var_0 : -11715));
                                var_46 = (max(var_46, ((((((arr_65 [i_15 + 2]) ? -31028 : (arr_65 [i_15 + 1]))) < (((arr_65 [i_15 - 2]) ? var_15 : (arr_65 [i_15 - 2]))))))));
                            }
                        }
                    }
                    var_47 = (min(var_47, (arr_56 [i_14 - 2])));
                }
            }
        }
    }
    var_48 = ((var_10 ? ((((var_10 ? var_7 : var_1)) % 31)) : (((((max(var_8, var_9)) < (var_19 < var_19)))))));
    #pragma endscop
}
