/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (max(var_12, var_1));
        var_13 = (min(var_13, (~var_4)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_14 = arr_2 [2];
        var_15 = ((min(var_2, (-2147483647 - 1))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_16 = (~var_3);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        var_17 &= ((~((~(min((arr_9 [0] [0] [i_2] [0]), var_4))))));
                        var_18 -= (((arr_8 [4] [i_4 + 1] [i_4] [4]) >= (((arr_8 [10] [i_4 + 3] [i_4] [10]) ? (arr_8 [1] [i_4 + 1] [i_4 - 1] [1]) : 1))));
                        var_19 = ((-((((~(arr_3 [i_1] [i_1]))) << ((var_11 ? var_5 : var_8))))));
                    }
                }
            }
            var_20 = max(((+(((arr_13 [i_1] [i_1] [i_1]) ? var_11 : var_5)))), (arr_8 [i_1] [i_1] [i_1] [10]));
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_21 ^= 15154951913472944958;

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_22 = ((-(((arr_5 [i_5] [i_5] [i_6]) / ((var_4 ^ (arr_9 [i_6] [i_6] [i_6] [i_6])))))));
            var_23 = (max(var_23, (21 >= var_1)));
            var_24 *= ((~(((~204) ? ((0 ? 13988136139086635015 : (arr_5 [i_5] [6] [i_5]))) : (arr_5 [i_5] [i_6] [i_6])))));
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {

                        for (int i_10 = 2; i_10 < 15;i_10 += 1)
                        {
                            var_25 = arr_10 [i_7] [10] [i_7];
                            var_26 = (max(var_26, (((~(((~var_11) | (arr_17 [i_10]))))))));
                            var_27 = ((~-21) ? (((~2101463443882651310) ? 10075727216942183152 : 13622488299864687344)) : ((((((18446744073709551615 >= (arr_0 [i_7] [i_7]))))) % var_10)));
                        }
                        var_28 = (min(var_28, (((8519550582276879891 ? ((((~2000621986) ? -12836 : 61117))) : 2328790493)))));
                        var_29 = (max(var_29, var_10));
                        var_30 = (min(var_30, (!1)));
                    }
                }
            }
            var_31 = (((((((17875457857456059936 > (arr_18 [i_5] [i_7 - 1])))))) ? var_1 : var_10));
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            var_32 = (min(var_32, (((-var_11 ? -6870231295105359858 : ((4294967295 / (max(var_9, (arr_14 [i_5] [i_11] [i_5] [i_11] [i_5] [i_5]))))))))));
            var_33 = (((((var_6 > var_7) ? -10075727216942183166 : var_0)) - (((~33554432) ? 10244136183274954400 : (!var_6)))));
        }
    }
    var_34 = (max(var_34, ((((~1) ? var_5 : 2147483625)))));
    #pragma endscop
}
