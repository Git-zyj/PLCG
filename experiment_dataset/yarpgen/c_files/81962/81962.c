/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 ^= var_1;
        arr_3 [i_0] = ((((var_14 ? (arr_1 [i_0]) : (arr_0 [i_0]))) >= (min(1, ((224 ? 197 : 1))))));
    }

    /* vectorizable */
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = var_6;
        var_20 |= (((arr_4 [0]) ? var_18 : (arr_5 [i_1] [1])));
        var_21 = 1;
    }
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        var_22 |= (min((arr_2 [1] [i_2]), (arr_8 [i_2] [i_2])));

        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_20 [i_2] [i_5] [i_3] [i_5] [i_3] = (min(0, (min(var_14, var_17))));
                            var_23 *= (((((arr_18 [i_2] [i_2] [i_5]) * ((0 ? (arr_11 [i_3] [i_6]) : -733254275)))) * (((1 + 73) ? (arr_4 [i_5]) : 1))));
                            arr_21 [i_3] [1] [i_4] [i_5] [i_6] = (((min(var_5, var_15)) ? ((min((arr_14 [i_2] [0] [i_2] [i_5] [i_6]), (1 > 3)))) : (((((1 ? (arr_0 [i_5]) : var_6))) ? 0 : (arr_4 [i_3])))));
                            arr_22 [i_6] [i_3] [i_4] [i_3] [i_2] = (i_3 % 2 == zero) ? (((((((var_16 ? var_14 : 62)) >> (min(0, 0)))) >> (((arr_19 [i_3] [i_3] [i_5] [i_6]) - 535674707))))) : (((((((var_16 ? var_14 : 62)) >> (min(0, 0)))) >> (((((arr_19 [i_3] [i_3] [i_5] [i_6]) - 535674707)) + 260431207)))));
                        }
                    }
                }
                arr_23 [i_4] [i_4] [i_4] &= (min(((133 * (arr_10 [i_2 - 2] [i_2 - 3] [i_4]))), (((~(arr_2 [i_2] [i_4]))))));
                var_24 = ((arr_2 [i_2] [i_2 - 2]) <= (!var_16));
                var_25 *= 1;
            }
            var_26 = (((~(((!(arr_13 [i_3] [i_2] [12])))))) <= ((((((arr_15 [1] [i_2] [i_3] [i_3]) ? -8 : (arr_2 [i_2] [i_3])))) ? var_5 : (arr_15 [1] [i_2] [i_3] [i_3]))));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
        {
            arr_26 [i_2] [1] [i_2] &= 0;
            var_27 = ((((min((((arr_2 [i_7] [i_7]) < (arr_7 [i_2] [i_7]))), var_16))) ^ ((~(arr_13 [1] [i_7] [10])))));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_30 [i_8] = ((~((((1 ? 1 : var_16)) & var_12))));
            var_28 = (min(var_28, ((((arr_16 [0] [i_8] [i_8] [i_8] [i_2] [i_2]) ^ (((arr_18 [1] [i_2 - 1] [0]) >> (0 >= 1))))))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_29 = ((arr_14 [i_2 - 1] [i_9] [i_2] [i_2] [i_9]) ? (arr_14 [i_2 + 1] [i_2 + 1] [4] [i_2] [1]) : (arr_14 [i_2 - 2] [i_9] [i_2] [i_2] [i_2]));
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_30 -= -192;
                            var_31 = ((0 ^ (1 <= 1)));
                            var_32 |= var_12;
                            arr_43 [i_11] [i_9] [i_10] = (arr_0 [i_2 - 2]);
                        }
                    }
                }
            }
        }
    }
    var_33 ^= min(var_6, (((!(var_11 ^ 1)))));
    #pragma endscop
}
