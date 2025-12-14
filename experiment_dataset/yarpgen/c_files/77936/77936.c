/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 |= (max((max((min(8386560, (arr_1 [i_0]))), 19)), 9));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            var_18 |= (((((11476408329081981259 ? -32 : 9))) ? (arr_3 [i_0]) : ((401931366578772853 ? var_7 : (arr_0 [i_0])))));
            arr_4 [i_0] [i_0 + 2] [i_0] = ((((arr_3 [i_0]) > var_6)));
            var_19 = ((-(arr_1 [i_1])));
            arr_5 [i_0] [i_1] [8] = ((+((var_12 ? (arr_0 [i_1]) : 9))));
        }
        var_20 = (arr_3 [i_0]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_12 [i_2] [i_3] = (28 | (arr_9 [i_2] [i_2] [i_3]));
            var_21 = ((((var_5 | (arr_6 [i_2] [i_3]))) ^ var_14));
        }
        var_22 |= (((((0 ? 48 : 18446744073709551615))) ? (-751185059006284427 && 6199) : 127));
        var_23 = (arr_7 [i_2]);
        var_24 = (~18446744073709551614);
    }
    var_25 = (((max(var_3, 0))));

    /* vectorizable */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        arr_16 [i_4] |= (arr_15 [i_4]);

        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            var_26 |= (((arr_17 [i_4] [i_4 - 1]) ? -10034276712990509962 : (var_2 && var_9)));
            var_27 |= ((((((arr_13 [i_5 + 1]) + 1359022974630141144))) ? 3883914045264123348 : ((((arr_15 [i_5]) | var_16)))));
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_22 [i_4] [i_4] [i_6] = (((((var_9 | (arr_13 [i_4])))) ? (((arr_14 [i_6]) ? (arr_15 [i_6]) : (arr_17 [4] [i_6]))) : ((-22 ? (arr_17 [i_4] [14]) : var_7))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    {
                        arr_29 [i_4] [4] [1] [4] [i_4] |= (((((var_13 >> (123 - 92)))) / ((36505 ? (arr_24 [i_8] [i_8 + 1] [i_8] [i_8]) : var_0))));
                        arr_30 [i_8] [i_8] [i_7] [i_7] [i_4] [i_4] = (((arr_23 [i_8 - 1] [i_4 - 1] [i_4] [i_4]) ? (arr_24 [i_6] [i_6] [i_6] [i_6]) : (((arr_13 [i_4]) ? (arr_20 [14] [i_4]) : var_3))));
                        var_28 = ((24 ? (arr_28 [i_8] [i_8 + 1] [14] [i_8 + 1] [i_8 + 1]) : (arr_23 [i_8] [i_8 + 1] [i_8] [i_8 - 2])));
                        var_29 = (arr_20 [i_4] [i_4]);
                        var_30 = (((var_14 | var_10) >> (-5345112173676489960 + 5345112173676489974)));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        arr_33 [i_9] [i_9] = 9;
        var_31 |= (((((var_13 != -5) - ((-95 ? -32 : 3)))) != (((((arr_18 [i_9]) ? (arr_28 [i_9] [i_9] [i_9] [i_9] [i_9]) : (arr_15 [i_9])))))));
        var_32 = ((((!(arr_17 [i_9] [i_9]))) ? (~250) : 18446744073709551614));
        arr_34 [i_9] [i_9] = ((((((arr_31 [i_9]) * (arr_14 [i_9])))) ? (((1 ? ((-(arr_18 [i_9]))) : -22))) : ((127 ? (5029333785201938905 * 29057) : ((((arr_7 [1]) ? 8 : 130)))))));
    }
    var_33 = ((max((var_3 & 172), var_4)));
    #pragma endscop
}
