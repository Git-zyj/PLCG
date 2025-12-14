/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((-82366568144727532 ? 14538 : 14535)))) % (14532 || -1)));
    var_15 |= (var_11 - var_10);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = var_5;
        var_17 = (((((var_1 < (arr_0 [i_0] [i_0])))) & var_2));

        for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
        {
            var_18 = 14;
            var_19 = ((!(((var_8 ? 14535 : var_4)))));
        }
        for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
            {
                var_20 ^= 4238299074896640385;
                arr_11 [i_0] [i_2 + 2] [i_3] = ((-(32767 ^ 37062)));
                var_21 = (min(var_21, (((var_2 == (529603981 && var_2))))));
                arr_12 [i_3] [i_3] [i_3] = var_9;
            }
            for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
            {
                var_22 = (min(var_22, ((((-17162 <= (arr_14 [1] [i_2 - 1] [4] [i_4])))))));
                var_23 = 407710925;
                var_24 = (arr_5 [i_0] [12] [i_4]);
                var_25 = 29507;
            }
            for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
            {
                var_26 = (((var_9 ^ var_8) < 28477));
                var_27 -= (2 % var_6);
                var_28 = ((arr_15 [i_5 - 3] [i_2 - 1] [i_2 - 1] [i_2 + 1]) ^ -var_2);
            }
            var_29 = (max(var_29, ((((var_9 == var_8) ? (!var_8) : (~var_0))))));

            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {
                var_30 = (max(var_30, (((~(arr_16 [i_2]))))));
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            arr_27 [i_0] [1] [i_6] [i_7] [i_0] [i_2] = (var_5 & 63);
                            var_31 = 14208444998812911227;
                            var_32 ^= ((var_8 / (((28480 - (arr_9 [i_0] [i_6] [i_6]))))));
                            arr_28 [i_0] [i_2] [i_2] [i_2] [i_7 + 3] [i_8] = var_8;
                        }
                    }
                }
                arr_29 [i_0] = ((!(4507484227819207808 - 71)));
                arr_30 [i_0] [2] = var_13;
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                arr_35 [i_0] [i_9] [8] &= ((((var_9 << (((arr_6 [i_0] [12] [i_9]) - 5931)))) <= var_8));
                var_33 = (((arr_13 [i_2 + 1] [i_2 - 1] [i_2 + 2]) * (18446744073709551615 == var_12)));
            }
            for (int i_10 = 1; i_10 < 13;i_10 += 1)
            {
                var_34 -= ((18446744073709551615 ^ (((-80 ? var_5 : var_4)))));
                arr_38 [i_2] [i_2 - 1] [i_10] [i_10] = ((-(~var_9)));

                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {
                    arr_41 [i_10] = (95 >= 235);
                    var_35 = (min(var_35, var_10));
                }
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    arr_44 [i_0] [i_0] [i_2] [i_10] [i_10] = (arr_26 [i_10 + 1] [i_10] [i_2] [0] [7] [i_2 + 2] [i_2 + 2]);
                    arr_45 [i_10] [i_10] [i_10] [i_0] = -32755;
                    var_36 = ((~(((-1259463802 < (arr_9 [i_0] [i_0] [i_0]))))));
                    var_37 = 1;
                }
                arr_46 [i_10] [i_2] [i_2] = var_11;
            }
        }
        for (int i_13 = 1; i_13 < 12;i_13 += 1) /* same iter space */
        {

            for (int i_14 = 1; i_14 < 13;i_14 += 1)
            {
                var_38 = (((var_13 && 2) == (var_1 + -33)));
                var_39 = (max(var_39, (var_1 > var_13)));
                var_40 ^= ((-126 >= (~var_0)));
            }
            var_41 = (min(var_41, (((~(~var_1))))));
        }
        var_42 = ((215 <= (var_1 % 1)));
        var_43 = (min(var_43, ((((~var_9) ? ((136 ? 4132955090825816354 : 14546)) : 82)))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 22;i_15 += 1)
    {
        arr_54 [i_15] = (arr_53 [i_15] [0]);

        for (int i_16 = 1; i_16 < 21;i_16 += 1) /* same iter space */
        {

            for (int i_17 = 1; i_17 < 20;i_17 += 1)
            {
                arr_60 [i_17] [i_16 - 1] [i_17] = var_5;
                var_44 = (var_8 ? var_6 : 18446744073709551615);
                var_45 = ((var_11 ? (arr_57 [i_16]) : (25096 >= var_8)));
            }
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                var_46 = var_12;
                var_47 = (-75 & -21826);
                var_48 = (max(var_48, (~var_10)));
                var_49 = (~var_4);
            }
            arr_63 [i_15] |= (!169);
            arr_64 [i_16] &= -var_9;
        }
        for (int i_19 = 1; i_19 < 21;i_19 += 1) /* same iter space */
        {
            var_50 = var_12;
            var_51 |= (var_10 ^ var_13);
        }
        for (int i_20 = 1; i_20 < 21;i_20 += 1) /* same iter space */
        {
            var_52 = ((~((var_0 ? (arr_53 [i_15] [i_20]) : 1494365594))));
            arr_69 [i_15] = ((((1 ? 6460268779302910681 : 1))) <= (~6105131469793029574));
        }
        var_53 = (min(var_53, var_10));
    }
    #pragma endscop
}
