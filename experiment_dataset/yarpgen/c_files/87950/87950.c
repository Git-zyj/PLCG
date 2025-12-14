/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) >> ((var_9 ? var_2 : (arr_0 [i_0] [i_0])))));

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_1] [i_0] [i_1] = ((arr_5 [i_0] [i_1 - 3] [5]) ? (arr_5 [i_1] [i_0] [i_0]) : ((var_1 ? var_6 : var_8)));
            var_10 = var_2;
        }
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = var_7;
        var_11 = var_5;

        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            var_12 = arr_14 [i_2];
            var_13 = var_4;
            var_14 *= (arr_10 [i_2]);
        }
        var_15 ^= (var_7 | var_9);
    }
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        var_16 = (((arr_4 [i_4] [i_4] [i_4]) + ((var_7 ? (arr_1 [10] [i_4]) : (arr_2 [i_4])))));

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                arr_25 [i_4] [i_4] [i_6] [i_4] = (var_6 * var_8);
                arr_26 [i_4] [i_4] [i_6] = (arr_24 [i_4] [i_5] [i_5]);
                var_17 &= (((arr_5 [i_5] [i_5] [i_5]) == var_1));
                arr_27 [i_6] [i_5] [i_5] = ((((0 && 173000716) ? (arr_11 [i_6]) : (arr_22 [0] [0] [0] [0]))));
                var_18 &= ((var_7 ? var_0 : var_7));
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    {
                        var_19 *= ((var_6 == (((((arr_32 [i_8] [i_7] [i_5] [i_8]) ^ var_6)) - (((var_6 + 2147483647) << (arr_28 [4] [i_7] [i_8])))))));
                        var_20 = (arr_5 [i_4 - 2] [i_4 - 2] [i_8]);
                    }
                }
            }

            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_21 = var_8;
                            var_22 += var_6;
                            arr_44 [i_4] [12] [i_10] [12] [12] [i_11] = var_6;
                            var_23 = var_1;
                        }
                    }
                }
                var_24 = (min(var_24, var_4));
                var_25 -= (arr_37 [i_4] [i_5] [7]);
                var_26 = (((arr_14 [i_5]) ? var_4 : (((arr_4 [i_4] [i_4] [i_4]) ? (var_2 && 2411401589) : var_7))));
            }
            /* vectorizable */
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                var_27 |= ((var_7 < (var_5 | var_1)));
                arr_48 [i_4] [i_4] [i_12] = var_1;
                var_28 -= (arr_2 [i_4]);
                var_29 &= var_1;
            }
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                var_30 = 4294967295;
                arr_53 [i_4] [i_4] [i_4] [i_4] = var_9;
                arr_54 [i_4 + 1] [i_5] [i_4 + 1] = var_9;
            }
        }
        for (int i_14 = 1; i_14 < 1;i_14 += 1)
        {
            var_31 = var_4;
            arr_58 [6] [i_14] [0] = var_9;
            var_32 = var_9;
        }
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            var_33 = ((((((arr_8 [i_15]) > var_5))) - var_7));

            /* vectorizable */
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                arr_64 [i_4] [i_4] [i_16] = var_5;
                arr_65 [i_16] = var_7;
            }
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 11;i_19 += 1)
                    {
                        {
                            arr_75 [i_18] = var_9;
                            var_34 = (min(var_34, (((((var_8 + 2147483647) << ((((var_0 ? (arr_49 [i_19] [i_15]) : var_9)) - 1371348365))))))));
                            var_35 -= ((((((arr_4 [i_17] [i_18] [i_18]) ? var_3 : var_8))) ? (arr_59 [i_4] [i_4] [i_17]) : var_4));
                            var_36 = var_6;
                        }
                    }
                }
                arr_76 [i_4 + 1] = (arr_14 [1]);
                var_37 = ((((var_5 ? var_9 : var_0))));
                var_38 = (min(var_38, (arr_55 [i_15] [i_15])));
            }
            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                arr_80 [i_4] [i_4] [i_4] = (var_9 * var_3);
                arr_81 [i_4] [11] = ((1 ? 1 : 12526));
                var_39 = (((arr_35 [3] [3] [i_4]) ? (arr_70 [10] [1] [i_15] [i_15] [2]) : (arr_49 [i_4] [i_4])));
                var_40 = (max(var_40, ((((arr_2 [i_4]) < var_2)))));
                /* LoopNest 2 */
                for (int i_21 = 3; i_21 < 12;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 12;i_22 += 1)
                    {
                        {
                            arr_88 [i_4] [i_15] [i_4] [9] [i_15] [i_21] [i_21] = ((((((arr_2 [i_4]) ? var_4 : var_6))) ? (arr_19 [i_21] [i_21]) : ((var_5 ? ((var_3 | (arr_10 [i_22]))) : var_2))));
                            arr_89 [i_21] [i_15] [i_20] [i_15] [i_21] [i_15] [i_20] = var_2;
                        }
                    }
                }
            }
            var_41 = (((((2024716314 ? -12541 : 1136050079))) <= var_9));
        }
        var_42 -= (((var_8 * (arr_41 [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_4]))));
    }
    for (int i_23 = 0; i_23 < 22;i_23 += 1)
    {
        var_43 -= (var_3 ? var_9 : (arr_91 [i_23]));
        arr_92 [0] [0] &= ((var_4 ? var_3 : var_8));
    }
    var_44 = (var_7 | var_6);
    var_45 &= var_1;
    var_46 += var_1;
    #pragma endscop
}
