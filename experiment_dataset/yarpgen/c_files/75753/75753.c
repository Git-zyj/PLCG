/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(((((max(1427320994, 667137848))) != -var_5)))));
    var_11 -= ((var_4 << ((((max(51140, (var_9 != 14396)))) - 51108))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_12 = (((min(((18446744073709551615 ? (arr_0 [i_0]) : (arr_2 [i_0]))), (arr_2 [i_0]))) - (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = 14385;
                    var_14 = ((min(((((var_7 + 9223372036854775807) >> (((arr_5 [i_0]) - 102))))), (min((arr_6 [10] [10]), var_4)))));
                    arr_9 [i_0] [i_1 + 3] [i_2] [i_2] = (min(((((var_7 + 9223372036854775807) >> (var_7 + 2667183395964969027)))), ((var_6 - (arr_0 [i_1 + 3])))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_15 *= ((-((14377 ? -866642872 : (((arr_12 [i_2] [i_2]) ? var_4 : (arr_11 [5] [0])))))));
                            var_16 ^= ((min((arr_14 [i_1 + 3] [0] [i_1] [i_1] [i_1] [i_1 - 2]), (arr_14 [i_0] [i_0] [i_0] [6] [i_1] [i_1 - 2]))));
                            arr_16 [i_0] |= (min(var_1, (((-(((arr_10 [i_0] [i_0] [i_0] [0]) ? 757318603 : var_3)))))));
                        }
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_3] = (((!(arr_18 [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1] [i_3] [i_1 - 2] [i_1]))));
                            arr_20 [i_0] [i_1] = ((((min(var_4, ((min(65535, 14384)))))) ? (((max((arr_0 [i_1 - 2]), 51140)))) : ((((((arr_4 [9]) ? var_4 : var_7))) ? (arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [0] [i_3]) : -var_1))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_23 [i_0] [i_1] [i_3] = min(9151, var_9);
                            var_17 += 10208634254496066599;
                            arr_24 [3] [i_1] [i_2] [2] [i_0] = ((((((arr_17 [i_1 - 1] [i_1 + 3]) ? (arr_22 [i_1 + 1] [i_1 + 4]) : (arr_8 [i_1 + 4] [i_1 + 4] [i_1 + 3] [i_1 - 1])))) ? (((arr_22 [i_1 + 3] [i_1 + 3]) ? (arr_8 [i_1 + 3] [i_1 + 2] [i_1 + 1] [i_1 + 1]) : (arr_17 [i_1 - 2] [i_1 + 4]))) : (((max(51140, 14412))))));
                        }
                        var_18 += (((((-((51142 ? 51140 : (arr_2 [i_1])))))) ? 6379523366831419054 : var_5));
                        arr_25 [i_0] [i_1] [i_2] [i_3] = ((min((((16930 ? (arr_14 [i_0] [i_1] [i_1] [1] [i_3] [i_3]) : 14366))), (max((arr_17 [i_0] [i_1]), (arr_7 [i_0] [5] [5] [i_3]))))));
                        var_19 = (max(var_19, (((((!(((18446744073709551602 - (arr_1 [i_0])))))) ? ((min(1052616562, (arr_0 [i_1 + 2])))) : (min((arr_10 [i_0] [2] [i_2] [2]), (((arr_21 [i_3] [i_2] [9] [i_1] [i_0]) ? var_5 : 18446744073709551615)))))))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] [i_7] = (!var_6);

        /* vectorizable */
        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            var_20 = ((~65534) == (((var_0 + 9223372036854775807) >> (var_9 - 114))));
            var_21 = (min(var_21, (((arr_14 [i_8] [i_8] [i_8] [2] [i_7] [i_7]) == 37837))));
            var_22 = ((var_9 ? (arr_30 [i_7]) : ((var_0 ? var_3 : (arr_12 [i_8] [i_7])))));
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
        {
            var_23 += min(var_9, (arr_30 [i_9]));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    {
                        arr_44 [2] [i_10] [i_10] [i_7] = (((((arr_30 [i_9]) - (arr_30 [i_11]))) >> (!var_8)));
                        var_24 = ((((min((arr_21 [i_7] [i_7] [i_7] [i_7] [i_7]), (arr_21 [i_7] [i_7] [5] [i_7] [i_7])))) ? ((~(arr_10 [i_7] [1] [1] [i_11]))) : (arr_30 [i_7])));
                        var_25 = ((((max(18446744073709551615, (min(109, var_0))))) ? (((arr_11 [9] [9]) ? var_3 : var_2)) : var_5));
                    }
                }
            }
        }
        var_26 = -138;
    }
    #pragma endscop
}
