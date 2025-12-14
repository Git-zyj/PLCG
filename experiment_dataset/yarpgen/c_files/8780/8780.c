/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = ((((min((arr_0 [i_1 - 1]), 1))) ? (min((arr_0 [i_1 - 1]), 1956412831)) : (arr_0 [i_1 - 1])));
                arr_4 [i_0] [i_0] = var_1;
            }
        }
    }
    var_11 = var_7;

    /* vectorizable */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {

                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_12 &= 1;
                        arr_15 [i_2] [i_5] = (arr_11 [i_2 - 2] [i_2 - 2] [i_4] [11]);
                    }
                    arr_16 [i_2] [i_2 + 1] [i_2] [i_2] = ((24407 | (!var_6)));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_24 [i_2] [i_2] = -var_5;
                                var_13 = var_1;
                                var_14 = ((-(((arr_22 [8] [i_3]) ? var_0 : var_0))));
                                arr_25 [i_2] [i_2] [i_2] [i_2] = (arr_22 [11] [11]);
                            }
                        }
                    }
                    arr_26 [i_4] = (!15);
                    arr_27 [i_3] [i_3] [15] = ((-19874 ? (arr_10 [i_2 - 2] [i_2 + 1] [i_2 + 2]) : 29732));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    var_15 = 1;
                    var_16 -= (arr_8 [i_9] [i_2]);
                    arr_33 [9] = ((!(((-660638030 ? var_1 : (arr_19 [i_2 - 1] [i_8]))))));
                    var_17 = (max(var_17, (arr_22 [i_2 + 3] [i_2 + 1])));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 0;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 14;i_12 += 1)
            {
                {
                    arr_42 [i_10] [i_10] [i_10] = var_2;
                    var_18 = (((arr_22 [i_10] [i_10 + 1]) ? 384 : (15 - 0)));
                }
            }
        }
        var_19 = ((((min((arr_30 [i_10 + 1] [i_10 + 1] [i_10]), -107))) ? 2877698761500473700 : (((((min(1, (arr_10 [20] [i_10] [i_10 + 1])))) | 61869)))));

        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            arr_46 [8] = ((~(((arr_6 [i_10 + 1] [i_10]) ? var_9 : (arr_6 [i_10 + 1] [i_10])))));
            var_20 = (arr_8 [i_13] [i_10]);
            var_21 = (max(var_21, (arr_6 [i_10] [i_13])));
            var_22 = (((arr_2 [i_13] [i_13]) == (arr_11 [i_10] [i_13] [i_13] [i_13])));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
        {
            var_23 = 20084;
            var_24 = 132;

            for (int i_15 = 4; i_15 < 14;i_15 += 1) /* same iter space */
            {

                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    arr_53 [1] [i_14] [i_10 + 1] [i_10] [i_16] [16] = var_9;
                    var_25 *= 1;
                }
                arr_54 [1] = 29732;
                var_26 = 1926041676;
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 15;i_18 += 1)
                    {
                        {
                            var_27 += ((1 < (arr_20 [i_17] [i_14])));
                            var_28 -= 203;
                        }
                    }
                }
            }
            for (int i_19 = 4; i_19 < 14;i_19 += 1) /* same iter space */
            {
                var_29 = (var_6 != (arr_22 [i_14] [i_14]));

                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    arr_64 [i_10] [i_14] [i_14] [i_19] [6] [i_20] = (arr_43 [i_10 + 1] [i_10 + 1] [i_19 - 2]);

                    for (int i_21 = 1; i_21 < 13;i_21 += 1)
                    {
                        var_30 = 6806444437145911601;
                        arr_68 [i_10] [i_10] [0] [i_20] [i_21] [9] [i_21] = (arr_55 [14] [i_19 + 1]);
                    }
                    for (int i_22 = 2; i_22 < 16;i_22 += 1)
                    {
                        arr_72 [i_10] [i_10] [4] = (arr_49 [i_10]);
                        var_31 = var_1;
                        arr_73 [13] [i_10] [13] [i_10] [i_10] [i_10] [i_10] = (15 % 129);
                    }
                }
                for (int i_23 = 0; i_23 < 17;i_23 += 1)
                {

                    for (int i_24 = 0; i_24 < 17;i_24 += 1)
                    {
                        var_32 = (((var_6 / 1) / (arr_29 [i_10 + 1])));
                        var_33 += (arr_66 [i_19] [i_19] [i_19 - 1] [i_19 - 1] [i_19]);
                        arr_80 [i_14] [i_24] = ((var_9 ? (((2147483648 ? (arr_1 [i_10]) : 61869))) : 18446744073709551615));
                    }
                    var_34 = var_2;
                    var_35 = ((arr_47 [i_10 + 1] [i_19 - 4]) || 3973);

                    for (int i_25 = 0; i_25 < 17;i_25 += 1)
                    {
                        var_36 = (((((32767 ^ (arr_12 [i_10 + 1] [i_10 + 1] [12])))) && var_5));
                        arr_85 [i_10] [7] [i_19] [i_19 - 2] [1] [i_23] [i_25] = (((arr_78 [1] [i_10 + 1] [i_14] [i_19] [i_10 + 1] [1] [5]) ^ var_1));
                    }
                    for (int i_26 = 0; i_26 < 1;i_26 += 1)
                    {
                        var_37 = ((!(arr_78 [10] [i_14] [10] [i_23] [i_26] [14] [i_10 + 1])));
                        arr_88 [i_10] [i_10 + 1] [1] [i_10] = ((-127 - 1) == var_2);
                        arr_89 [i_10] [i_10] [14] [i_10] [i_10] [16] = ((var_0 ^ (arr_28 [7] [i_19 + 3] [i_14])));
                    }
                }
                for (int i_27 = 0; i_27 < 17;i_27 += 1) /* same iter space */
                {
                    var_38 = (arr_39 [i_10] [i_10] [i_10] [i_10]);
                    arr_92 [1] [i_10] [i_10] [i_10] [i_19 - 1] [0] = (arr_51 [i_14] [1] [i_14] [i_14]);
                    arr_93 [i_10 + 1] [i_10 + 1] [4] = (arr_12 [i_10] [9] [i_10]);
                    var_39 ^= (arr_48 [i_14] [i_14]);
                }
                for (int i_28 = 0; i_28 < 17;i_28 += 1) /* same iter space */
                {
                    var_40 = var_2;
                    arr_96 [1] [i_10] [i_10] = arr_32 [i_14];
                }
                var_41 = var_4;
            }
            for (int i_29 = 0; i_29 < 17;i_29 += 1)
            {
                arr_99 [2] [2] [8] = ((127 ? (arr_90 [i_14] [1] [i_14] [1]) : 3058497424));
                var_42 = 18446744073709551615;

                for (int i_30 = 4; i_30 < 16;i_30 += 1)
                {
                    var_43 += ((-(arr_35 [i_30 - 2])));
                    arr_102 [i_10 + 1] [i_10 + 1] [i_10] = var_6;
                    var_44 ^= (((arr_18 [2] [i_10 + 1] [i_10 + 1] [4] [i_10 + 1]) >> 1));
                }
            }
            var_45 = (arr_100 [i_10] [i_10 + 1] [i_10] [i_10 + 1]);
        }
    }
    #pragma endscop
}
