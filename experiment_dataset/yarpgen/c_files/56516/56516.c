/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((var_13 / ((var_7 ? ((var_10 ? var_4 : 28964)) : ((var_19 ? var_16 : -78408460))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_21 = (min(var_21, (((26538 ? var_10 : var_2)))));
            arr_7 [i_0] = (-78408460 && var_13);
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_0] = (((((78408452 ? (arr_4 [i_0] [i_2] [i_2]) : var_19))) % var_7));

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_22 = ((251 ? 18446744073709551605 : (arr_0 [i_2 - 2] [i_2])));

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_23 |= ((arr_5 [i_0]) ? var_5 : var_10);
                        arr_20 [i_0] [i_3] [i_3] [i_3] [i_5] = (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_24 += var_15;
                        var_25 += var_13;
                        var_26 = (var_10 && -var_12);
                    }
                    var_27 = ((var_16 != (arr_13 [i_4] [i_2] [i_3] [i_2 + 1])));
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_28 = var_3;
                    var_29 ^= -1;
                    var_30 ^= (((((var_3 ? var_12 : var_7))) ? (arr_18 [i_0] [i_2] [i_3] [i_6] [i_2 - 1]) : (1100667822 - -9522)));
                }
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    arr_28 [i_0] [i_0] [21] [i_3] [i_7] [i_7] = (((arr_27 [i_7 + 1] [i_2 - 1] [i_2 - 2] [i_2 - 1]) > (0 << 1)));
                    var_31 -= (((arr_13 [i_3] [i_7] [i_3] [i_7 - 1]) / (arr_26 [i_0] [18] [i_0] [i_7 - 1])));
                    var_32 = ((131 ? 9387 : 15));
                    var_33 &= ((((var_14 ? var_16 : (arr_12 [4]))) - 31097));
                }
                var_34 = (min(var_34, (var_18 - var_0)));

                for (int i_8 = 4; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    arr_33 [i_0] [i_2 - 2] [i_8] [i_8] = var_0;
                    var_35 += 55414;
                    var_36 = (max(var_36, ((((~var_4) && (arr_30 [i_0] [i_3] [i_0] [i_0]))))));
                }
                for (int i_9 = 4; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    var_37 &= ((var_7 << (var_0 - 2581141593247898792)));
                    var_38 = (((var_4 && var_16) ? var_3 : 1));
                }
                for (int i_10 = 1; i_10 < 20;i_10 += 1)
                {
                    var_39 = var_9;
                    var_40 = var_12;
                }
                var_41 = ((var_4 ? (var_2 != var_12) : ((var_5 ? 19 : 78408452))));
                var_42 = var_1;
            }
        }
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            var_43 = ((((4226215500 ? 31 : 1)) - var_19));
            var_44 = (min(var_44, (((((-1 ? 1 : 32736)) != (var_5 & 96))))));
        }
        for (int i_12 = 2; i_12 < 18;i_12 += 1)
        {
            arr_45 [i_0] [i_0] [i_12] = var_2;
            arr_46 [i_12] [i_0] |= (var_13 != var_11);
            var_45 = ((var_0 ? (var_14 - 133) : var_17));
        }
        var_46 += 115;
        arr_47 [i_0] [i_0] = var_3;
        var_47 &= (((var_15 << (var_10 - 239))));
    }
    for (int i_13 = 1; i_13 < 19;i_13 += 1)
    {
        var_48 = (((((1 ? (arr_12 [i_13 + 1]) : (arr_12 [i_13 - 1])))) ? (min(-9223372036854775789, -20)) : (((var_19 ? 6 : var_14)))));
        arr_50 [i_13] = (((3802369257 * var_10) ? (var_6 - var_0) : (8862038890062701492 && 2129464743679292382)));
    }
    for (int i_14 = 2; i_14 < 10;i_14 += 1)
    {
        var_49 = 926083151553000551;
        var_50 += ((max(-var_0, ((var_19 ? var_16 : var_17)))));
    }
    var_51 = (min(var_51, (((~(var_5 / var_0))))));
    var_52 = var_19;
    #pragma endscop
}
