/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((var_7 ? (((min((-62 != var_8), var_0)))) : var_8));

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_11 &= ((-62 ? -62 : -960591210328353762));
        var_12 &= ((((min(2429769281804106746, 62))) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_13 = (max(var_13, (arr_4 [i_1] [i_1])));
        var_14 = (min(var_14, ((((arr_3 [i_1 - 1]) ? (arr_2 [i_1 + 1]) : (arr_3 [i_1 + 1]))))));
    }
    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_15 *= (((-69 ? ((3083025953 ? (arr_8 [i_3]) : (arr_8 [i_2]))) : (arr_7 [i_2 - 1]))));
            var_16 = (min(var_16, ((max((max((arr_5 [i_3 - 1] [i_3 - 1]), (arr_5 [i_3 - 1] [i_3]))), ((((67 & var_1) ? (arr_7 [i_2 - 3]) : (((!(arr_8 [i_2]))))))))))));
            var_17 |= (-67 && 0);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_13 [10] [10] |= (10 ? ((45439 ? (arr_11 [11]) : (arr_5 [i_2] [18]))) : (arr_5 [i_2 - 4] [i_2 - 4]));

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_18 = (min(var_18, (arr_15 [i_2 - 1] [i_2 - 3])));

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_19 ^= 67;
                    var_20 &= (arr_17 [i_4] [i_4] [i_5] [i_5]);

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_21 *= (((arr_7 [i_4]) != (arr_18 [i_2] [i_6] [i_2] [i_2])));
                        var_22 += (arr_14 [i_5] [i_2] [i_2]);
                    }
                }
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    var_23 -= ((var_5 ? (arr_17 [i_2] [i_2 - 3] [i_8 + 2] [i_8 + 1]) : (arr_12 [i_4] [i_5] [i_5])));
                    var_24 *= ((~(arr_18 [i_2] [i_5] [i_2] [i_2 - 2])));
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_25 = (min(var_25, 8974));
                    var_26 ^= arr_18 [i_2] [i_9] [4] [i_9];
                }
                var_27 ^= (arr_20 [i_2] [18] [i_5] [i_2] [i_2 - 2]);
            }
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                var_28 = (max(var_28, (~1215)));
                var_29 *= ((67 ? 3504919515 : ((-67 ? -64 : (arr_29 [4] [i_4] [i_2 - 3])))));
                var_30 = (max(var_30, ((((arr_19 [i_2 - 1] [i_10]) ? ((16045740688444988855 ? 0 : 128)) : -67)))));
                var_31 *= -69;
            }
            var_32 &= (~4094);
        }
        for (int i_11 = 2; i_11 < 16;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        var_33 = (min(var_33, var_7));
                        var_34 &= (min((((((-5851757505989591810 ? 1612740940070700644 : 255)) > -62))), ((((arr_34 [i_12]) >> 26)))));
                        var_35 &= (((((-(arr_32 [i_11])))) != (min((arr_36 [i_2] [12] [8]), (arr_35 [i_2 - 1] [i_11] [i_11] [i_12])))));
                        var_36 = (min(var_36, ((((arr_15 [5] [i_11 + 2]) ? (min(-20, (min((arr_31 [i_11]), (arr_26 [i_11]))))) : ((~(max(2199022731264, (-127 - 1))))))))));
                        var_37 |= (max((((((arr_19 [i_13] [i_11 + 2]) > (arr_38 [i_12] [i_11 - 2] [i_12] [i_11 - 2] [i_11 - 2] [i_12]))) ? (arr_9 [i_2] [i_11] [i_12]) : var_6)), (((~(arr_34 [i_11]))))));
                    }
                }
            }
            arr_40 [i_11 - 1] [i_11] [i_2 - 3] &= var_8;
            var_38 |= (arr_19 [i_2] [i_11]);
            var_39 += (((((arr_22 [0] [i_11] [0] [12] [0] [i_11]) >> 20)) << (9354268014186344718 - 9354268014186344686)));
        }

        for (int i_14 = 1; i_14 < 17;i_14 += 1)
        {
            var_40 = (min(var_40, -65535));
            var_41 = (min(var_41, (arr_14 [i_2] [i_14 + 1] [i_2])));
        }
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    {
                        var_42 *= ((~(arr_20 [i_2] [12] [10] [i_2] [i_2])));
                        var_43 = (max(var_43, ((((arr_49 [i_2] [i_15 - 1] [i_16]) != (max((((55882 ? var_6 : var_5))), (max(4811790043460027718, -21)))))))));
                        var_44 += (((((arr_37 [i_15 + 3] [14] [i_15 + 3]) / (arr_45 [i_2] [8]))) != (((((arr_47 [i_2] [i_15] [2] [i_17]) <= 0))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
