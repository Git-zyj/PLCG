/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_6, 2025867555));
    var_14 = (~1229);

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_15 = ((~((var_9 ? 2269099741 : 38006))));
        var_16 = (arr_1 [i_0]);
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_17 = (max(var_17, var_0));

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            arr_10 [i_1 - 1] [i_1] [i_1 - 1] = ((~(arr_8 [i_2])));
            var_18 = ((~(min(4294967284, ((min((arr_4 [i_1]), 30666)))))));
            var_19 *= (max(((((((arr_5 [12]) ? 0 : var_7))) ? (~18446744073709551615) : (arr_9 [i_1]))), var_3));
            var_20 ^= 1;
        }
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            arr_14 [i_1] [i_3] = ((~((~(min(var_2, (arr_12 [i_1 - 1] [i_1 - 1] [i_1])))))));
            arr_15 [i_1 - 2] [i_1] [i_1] = var_5;
            arr_16 [i_1] = (min((min((arr_12 [i_1 + 1] [i_3 - 2] [i_1]), (arr_3 [i_1 - 1]))), ((min(var_0, (arr_3 [i_1 + 1]))))));
            var_21 = (min(var_21, (~var_0)));
        }

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_19 [i_4] &= ((+((max((arr_9 [i_4]), (min((arr_4 [i_4]), (arr_5 [i_4]))))))));
            arr_20 [i_1 - 1] [i_1] = -var_2;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_29 [i_1] [i_4] [i_1] [i_4] [7] = 11;
                            arr_30 [i_7 - 1] [i_1] [i_5] [i_1] [i_1] = ((((min(((var_5 ? var_7 : var_3)), ((var_1 ? (arr_9 [8]) : var_12))))) ? (((arr_7 [i_7] [1] [1]) ? (((1 ? 1 : 85))) : ((var_2 ? -18 : (arr_3 [12]))))) : ((min((arr_22 [i_7]), (~1))))));
                            var_22 = (((1 ? 1581 : (min(2025867555, 75)))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {

            /* vectorizable */
            for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
            {
                var_23 = ((+(((arr_32 [i_1] [i_1]) ^ (arr_12 [i_1] [8] [i_1])))));
                arr_36 [i_1] [i_8] [i_9] [8] = (~((~(arr_6 [i_9] [i_8] [i_1 - 1]))));
                var_24 = (-95 / 32757);
                var_25 = var_5;
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 2; i_11 < 12;i_11 += 1) /* same iter space */
                {
                    arr_42 [i_8 - 3] [i_8] [i_8 - 3] [i_1] = (~var_8);
                    arr_43 [i_1] [i_1] = ((min(((~(arr_12 [1] [i_8 - 2] [i_1])), ((max((arr_8 [i_10]), 2025867553)))))));

                    /* vectorizable */
                    for (int i_12 = 4; i_12 < 12;i_12 += 1) /* same iter space */
                    {
                        arr_47 [i_11] [i_1] [i_1] [i_1] = 2025867555;
                        arr_48 [i_1 - 2] [i_12] [i_10] [i_1 - 2] [i_10] [i_1] = var_10;
                        var_26 = (min(var_26, 32767));
                    }
                    for (int i_13 = 4; i_13 < 12;i_13 += 1) /* same iter space */
                    {
                        var_27 = ((~((-((65535 ^ (arr_13 [i_1] [i_1])))))));
                        var_28 = (min(var_28, (((((min((max(var_2, var_3)), (arr_7 [4] [i_8 - 3] [i_8 - 3])))) ? (((arr_32 [i_13] [i_13]) ? (arr_38 [i_1 - 1] [i_8] [i_13]) : ((0 ? 1 : 4294967295)))) : var_1)))));
                        var_29 += ((0 ? 10179 : 6197702316457581189));
                    }
                    arr_52 [i_1] [i_8] [i_10] [i_11] = (~var_7);
                    var_30 = (((((var_1 ? (arr_12 [7] [i_8] [i_1]) : (((var_10 ? 19110 : var_8)))))) ? var_6 : var_4));
                }
                for (int i_14 = 2; i_14 < 12;i_14 += 1) /* same iter space */
                {
                    var_31 ^= (arr_53 [i_10] [i_10] [i_10] [12] [i_10] [i_10]);
                    var_32 = ((max(((min(10827, (-127 - 1)))), ((var_9 ? 65535 : var_5)))));
                    var_33 = ((0 ? 1 : 34857));
                    var_34 *= var_6;
                    arr_55 [i_14] [i_1] [i_1] [i_1 - 3] = (arr_22 [i_10]);
                }
                var_35 &= var_8;
            }
            var_36 = 0;
        }
        var_37 = ((16748 ? 75 : -32315));
    }
    /* vectorizable */
    for (int i_15 = 3; i_15 < 12;i_15 += 1) /* same iter space */
    {

        for (int i_16 = 3; i_16 < 12;i_16 += 1)
        {

            for (int i_17 = 2; i_17 < 11;i_17 += 1)
            {

                for (int i_18 = 2; i_18 < 12;i_18 += 1)
                {
                    var_38 = (max(var_38, (((-((var_11 / (arr_54 [i_15] [i_15] [i_17] [i_18]))))))));
                    arr_67 [i_15] [i_15] [i_15 - 1] [12] [8] [i_15] = (var_12 ^ 0);
                    arr_68 [i_15 + 1] [11] [i_15] = 4294967281;
                }
                arr_69 [i_15 - 1] [i_15] [4] [1] = var_8;
                var_39 = arr_63 [1] [i_15] [i_15] [i_15];
                var_40 = ((var_7 ? var_4 : (arr_23 [i_15 - 2] [i_15] [4] [i_16 - 1] [i_17])));
            }
            for (int i_19 = 2; i_19 < 12;i_19 += 1)
            {
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 11;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 10;i_21 += 1)
                    {
                        {
                            arr_78 [i_15] = ((((((arr_51 [i_21 - 2] [i_20] [1] [2] [2]) ? var_1 : var_4))) ? 562949953421311 : (54 ^ var_5)));
                            var_41 = (((arr_31 [9] [1] [i_21]) ? 95 : ((1 ? 1 : 91))));
                        }
                    }
                }
                arr_79 [i_19] [i_19] [i_19] [1] |= 60999;
                var_42 = (((arr_23 [i_15 + 1] [i_15] [i_15 - 2] [4] [2]) ? (arr_50 [i_15] [i_15 - 2] [i_15] [i_15 - 2] [9]) : (arr_50 [i_15] [i_15 + 1] [i_15] [i_15] [10])));
            }
            /* LoopNest 2 */
            for (int i_22 = 2; i_22 < 12;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 12;i_23 += 1)
                {
                    {
                        var_43 = var_7;
                        arr_84 [i_15] [9] [4] [i_23 - 1] = -var_5;
                        var_44 = var_1;
                    }
                }
            }
            var_45 = (arr_50 [i_16] [8] [i_15] [7] [i_15 - 1]);

            for (int i_24 = 0; i_24 < 1;i_24 += 1)
            {
                arr_88 [i_15 - 2] [i_15 - 3] [i_15] [i_24] = ((var_2 ? (arr_70 [i_15 - 1] [5] [i_24]) : (arr_56 [i_15])));
                var_46 = (~4174792483757485889);
            }
        }
        var_47 = (max(var_47, (((~(arr_28 [i_15 + 1] [i_15 - 3] [i_15 - 2] [i_15 + 1] [6]))))));
    }
    for (int i_25 = 3; i_25 < 12;i_25 += 1) /* same iter space */
    {
        var_48 = (max((((~var_8) ? (((1 ^ (arr_77 [i_25 - 3] [i_25 - 1])))) : ((9223372036854775807 ? var_11 : var_1)))), 0));
        var_49 = (max(var_49, (((1 ? 55 : (arr_64 [i_25] [i_25] [i_25] [i_25 + 1]))))));
    }
    var_50 = (min(((min(var_2, ((min(var_5, var_7)))))), ((~(~var_11)))));
    var_51 = ((~(min(-24772, (max(var_9, var_6))))));
    #pragma endscop
}
