/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 171;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 6;i_4 += 1)
                    {
                        {
                            arr_14 [i_2] = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_4 - 1]);
                            var_12 ^= (((arr_4 [i_4 + 3] [i_4 + 4] [i_2 - 1]) >> (arr_4 [i_4 + 4] [i_4 + 4] [i_2 - 1])));
                        }
                    }
                }
                arr_15 [i_2] [0] = (((30509 ? var_8 : (arr_13 [i_2] [i_1]))));
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_19 [i_0] [i_1] [i_0] [i_1] = (((((var_8 % 1023) * (arr_0 [i_5] [i_1]))) <= 9));
                var_13 += ((9 ? (arr_18 [i_0] [8] [i_5]) : (((var_10 ? (arr_0 [2] [i_0]) : (arr_1 [4] [i_1]))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_14 = -67;
                            var_15 *= ((var_0 ? (((!(arr_13 [i_5] [i_0])))) : (((var_3 || ((!(arr_5 [i_0]))))))));
                            var_16 *= ((var_3 ? (((((arr_16 [i_0] [i_0]) + 18446744073709551596)))) : var_6));
                            var_17 = ((-(arr_0 [i_1] [i_7])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 8;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        {
                            var_18 *= (((arr_0 [i_0] [i_0]) || var_3));
                            arr_28 [i_9] = (arr_23 [i_0]);
                            arr_29 [i_9] [i_9] = (((var_11 + var_11) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : var_9));
                            var_19 = ((((((arr_11 [9] [i_1] [i_1] [i_1] [0]) - 10318982327014899009))) > ((((arr_4 [i_8 + 2] [i_8 + 2] [i_9 + 1]) ? var_4 : var_2)))));
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_20 ^= ((-1 ? 9 : 18446744073709551615));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 7;i_12 += 1)
                    {
                        {
                            var_21 *= ((-13 < (arr_5 [i_1])));
                            var_22 += var_2;
                            var_23 = (arr_26 [i_12] [i_12] [i_12] [i_12] [i_12]);
                        }
                    }
                }
                arr_37 [i_0] [i_1] [i_10] = ((((var_10 ? ((((arr_16 [i_0] [i_0]) && -3))) : (arr_7 [i_0] [i_1] [i_0] [i_10]))) != var_11));
            }
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    var_24 = 191;
                    arr_44 [i_0] [i_1] [0] = ((~(arr_23 [i_1])));

                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        var_25 = arr_11 [i_0] [i_1] [i_13] [i_14] [1];
                        arr_47 [i_0] [i_0] = (+-13);
                    }
                    arr_48 [i_0] [i_0] [i_0] [i_0] = (((!(arr_9 [6] [7] [i_13] [i_1] [i_0] [i_0]))));
                    var_26 = ((arr_12 [0] [0] [i_13] [i_14] [i_13] [i_1]) ? (((13697 + (((var_1 != (arr_4 [i_0] [i_1] [i_0]))))))) : (25 % var_9));
                }
                var_27 = (((var_5 + 2147483647) >> (((((arr_23 [i_0]) & ((10632 ? (arr_1 [i_0] [i_1]) : var_0)))) - 52))));
            }
            arr_49 [7] [7] = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [2]);
        }
    }
    for (int i_16 = 3; i_16 < 10;i_16 += 1)
    {
        var_28 *= var_0;
        arr_52 [i_16] = ((~(((((var_4 % (arr_51 [i_16 - 1] [i_16])))) ? var_1 : (arr_51 [i_16] [i_16 + 1])))));
    }
    for (int i_17 = 0; i_17 < 11;i_17 += 1)
    {
        arr_56 [i_17] = var_8;
        arr_57 [i_17] [i_17] = var_5;
        arr_58 [6] = (((arr_50 [i_17] [i_17]) ? (-15 >= -126) : ((~(arr_51 [i_17] [i_17])))));
    }
    for (int i_18 = 2; i_18 < 20;i_18 += 1)
    {
        arr_62 [i_18] [i_18] = (i_18 % 2 == 0) ? ((((((arr_61 [i_18]) + (((((arr_60 [i_18]) + 2147483647)) >> (((arr_61 [i_18]) - 30)))))) > (((((-75 ? var_1 : var_7)) != (arr_59 [i_18 - 1]))))))) : ((((((arr_61 [i_18]) + (((((arr_60 [i_18]) + 2147483647)) >> (((((arr_61 [i_18]) - 30)) - 13)))))) > (((((-75 ? var_1 : var_7)) != (arr_59 [i_18 - 1])))))));
        var_29 = ((!(arr_59 [i_18])));
    }
    var_30 = var_1;
    #pragma endscop
}
