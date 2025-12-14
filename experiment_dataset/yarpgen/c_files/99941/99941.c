/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((min(((-14141818873966196467 * (var_10 && 9429))), (((1 >> (56107 - 56089)))))))));
    var_14 = (var_3 || -56107);
    var_15 -= var_1;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [1] = ((arr_1 [i_0]) ? 0 : -112);
        arr_3 [i_0] &= ((((var_7 - (6331 && var_6))) * (((((arr_1 [i_0]) == 18446744073709551594))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] &= ((17444 < (arr_1 [10])));
        var_16 -= ((((-(arr_0 [i_1]))) % (((((arr_4 [i_1]) && var_11))))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_17 &= (((arr_7 [i_3] [i_2] [i_1]) ? (arr_1 [i_2]) : -124));
                arr_11 [i_3] [i_2] [i_3] = arr_10 [i_3];
                arr_12 [1] [1] [i_3] [i_1] = 0;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_19 [i_1] [i_1] [i_1] [i_3] [i_1] = (arr_1 [9]);
                            arr_20 [i_3] [i_2] [i_3] [i_4] [i_4] = (((1 * var_8) ? ((((arr_16 [i_5 + 2] [i_4] [i_1] [i_2] [i_2] [i_1] [i_1]) ? 9444 : (arr_5 [i_1] [i_1])))) : var_11));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_18 = ((22611 <= (arr_16 [i_1] [0] [i_2] [i_6] [i_2] [i_7] [i_6])));
                            arr_27 [i_3] [i_2] [i_2] [i_2] [i_2] = (arr_25 [4] [4] [i_7] [i_7] [i_3] [i_7] [i_7 - 2]);
                            var_19 = (((!var_9) || (var_9 || 0)));
                            var_20 = ((~(arr_4 [i_7 + 1])));
                        }
                    }
                }
            }
            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {
                var_21 = -53;
                var_22 = (max(var_22, ((14006934043893514165 >> (4883219072625063099 - 4883219072625063079)))));
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_23 = (max(var_23, ((((((arr_26 [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_2 : 1)) != (234 < 255))))));
                            var_24 = (((arr_15 [i_11] [i_10] [i_9] [i_2] [i_1]) * 21));
                        }
                    }
                }
            }
            var_25 = -61099;
            var_26 += (1751 >= (arr_18 [i_1] [i_1] [i_2] [i_2] [i_1]));
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                {
                    arr_44 [i_1] [i_1] [i_13] [i_13] = var_4;
                    var_27 = (max(var_27, 1));
                }
            }
        }
    }
    for (int i_14 = 4; i_14 < 8;i_14 += 1)
    {
        arr_47 [i_14] = (arr_40 [i_14] [i_14]);
        arr_48 [i_14] = (arr_23 [4] [i_14] [i_14] [i_14]);
        var_28 = (min(var_28, (9429 >= 6906)));
    }
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {

        for (int i_16 = 1; i_16 < 18;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 21;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    {

                        for (int i_19 = 4; i_19 < 18;i_19 += 1)
                        {
                            arr_63 [i_16] [i_16 + 3] = (((((~(((arr_58 [i_15] [i_15] [i_15]) ? 14265 : var_6))))) ? (min((max(49, 2319733855)), (~var_11))) : var_11));
                            var_29 = ((((((-((min(var_2, (arr_1 [i_18])))))) + 2147483647)) >> ((((~((-(arr_59 [i_15] [i_15] [i_17] [i_15] [i_15] [i_15]))))) - 89))));
                        }
                        for (int i_20 = 2; i_20 < 19;i_20 += 1) /* same iter space */
                        {
                            var_30 ^= (!(arr_56 [i_20 - 2] [i_20 + 2] [i_20 + 1]));
                            var_31 = 34;
                        }
                        for (int i_21 = 2; i_21 < 19;i_21 += 1) /* same iter space */
                        {
                            var_32 = -53;
                            var_33 = var_8;
                        }
                        var_34 = ((~((((!106) != (min(var_5, var_4)))))));
                    }
                }
            }
            var_35 *= 1;
            /* LoopNest 3 */
            for (int i_22 = 2; i_22 < 20;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 19;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 21;i_24 += 1)
                    {
                        {
                            arr_76 [i_16] [i_23] [i_22] [1] [i_16] [i_16] = ((~(arr_51 [i_16])));
                            var_36 = (((((+(min((arr_66 [i_15] [i_16] [i_22] [i_23] [i_24] [i_22]), var_7))))) ? (arr_57 [i_23] [i_23 + 2] [i_22 - 1]) : (51452 != 56107)));
                            var_37 -= var_10;
                            arr_77 [i_15] [i_16] [i_16] [i_15] [i_22] [i_16] [10] = (min((((arr_66 [i_15] [i_16] [1] [i_16 - 1] [i_24] [i_22]) ? (arr_70 [i_16 - 1] [i_16 + 2] [i_22 - 1] [i_16]) : 1)), 14269));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_25 = 1; i_25 < 20;i_25 += 1)
        {
            var_38 = ((arr_49 [i_25 - 1]) ? (arr_79 [i_25 - 1] [i_25 + 1] [i_25 + 1]) : var_9);
            var_39 = (max(var_39, ((((arr_68 [i_25 + 1] [i_25 + 1] [i_25 - 1] [i_25]) ? var_3 : 61099)))));
        }
        for (int i_26 = 1; i_26 < 19;i_26 += 1)
        {

            for (int i_27 = 3; i_27 < 18;i_27 += 1)
            {
                arr_87 [i_15] [i_26 - 1] [i_15] = var_2;
                var_40 = (min(var_40, (((-((((var_9 | var_7) > 14006934043893514158))))))));
            }
            var_41 *= var_11;
        }
        var_42 = (min((((-(arr_62 [i_15] [i_15] [i_15] [i_15] [i_15])))), -4021905719179740938));
    }
    #pragma endscop
}
