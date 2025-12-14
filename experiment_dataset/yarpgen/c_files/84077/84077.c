/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max(var_9, var_0))) ? (min(4835757621593400075, (~var_8))) : var_0);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_17 = ((arr_6 [i_0 - 1] [i_1] [15]) & ((min(((((arr_0 [4]) & (arr_6 [9] [1] [1])))), (~21)))));
                var_18 = (max(var_18, var_11));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_19 = (~var_4);
                var_20 = (((((arr_2 [i_0]) + 9223372036854775807)) >> (var_8 - 28)));
                var_21 = (4294967274 & 6328);
                var_22 ^= (arr_1 [i_3]);
            }
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                var_23 = var_8;
                var_24 = (max(var_24, (((((arr_1 [i_1]) % (arr_1 [i_1])))))));
                var_25 = (min((((var_12 | (arr_10 [i_0] [1] [i_0] [14])))), (arr_12 [1] [i_1] [12])));
                var_26 = (((((var_11 & (var_11 <= var_2)))) >= ((var_7 ? 4294967258 : var_14))));
            }
            var_27 = ((((var_7 > (arr_11 [18]))) ? (((var_12 / var_13) ? var_13 : (arr_8 [9] [i_0] [i_1] [18]))) : (min((var_9 ^ var_0), (((~(arr_1 [i_0]))))))));
            var_28 = var_3;
            var_29 = var_11;
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_30 = (max(var_30, var_9));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_24 [i_0] [12] [i_7] [12] [14] |= ((-(-57 == 0)));
                        var_31 ^= (min((max((((-(arr_6 [6] [16] [16])))), (arr_19 [10] [i_5] [10] [18]))), (((-(arr_5 [i_5] [i_6 - 1] [i_5]))))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_32 = (min(var_32, (arr_9 [i_6 + 1] [i_7] [i_0 - 1])));
                            var_33 = ((~(arr_0 [9])));
                            var_34 = ((var_5 && var_4) + (~var_5));
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 17;i_9 += 1)
                        {
                            var_35 = (((arr_29 [i_7] [1]) > 4294967259));
                            var_36 = (((arr_5 [i_9] [10] [1]) ? (arr_5 [i_9 - 1] [i_0 - 1] [i_6 + 1]) : var_2));
                        }
                        var_37 *= (-(((arr_11 [i_7]) ? (~var_2) : (((arr_14 [i_0] [i_5] [i_6 - 1]) % var_13)))));
                    }
                }
            }
        }
        var_38 = var_2;
        var_39 = (max((((((var_12 ? var_3 : var_0))) ? ((var_7 ? var_3 : var_2)) : (((var_2 | (arr_8 [i_0] [i_0] [1] [0])))))), (((var_13 << (var_0 + 562193516750983798))))));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        var_40 = (-(~var_0));
        var_41 = (max(var_41, var_5));
        arr_32 [19] = ((arr_30 [i_10]) / (arr_31 [i_10]));
    }
    var_42 &= var_0;
    #pragma endscop
}
