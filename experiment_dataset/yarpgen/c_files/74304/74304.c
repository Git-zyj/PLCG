/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((~(arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_16 = (((arr_6 [i_0] [i_0] [i_1]) ? var_12 : ((((arr_2 [i_0]) ? var_8 : (arr_2 [i_0]))))));
            var_17 = ((var_15 * (arr_0 [13])));
            arr_8 [i_0] [i_0] [i_1] = (arr_6 [21] [i_0] [i_1]);
        }
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_18 *= (((arr_9 [i_0] [i_2] [i_2 + 1]) && (arr_6 [i_0] [i_2 - 2] [i_0])));
            arr_11 [i_0] [i_0] [i_0] = ((-(arr_5 [i_0])));

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                var_19 += var_11;
                var_20 = arr_4 [i_3];
            }
            for (int i_4 = 1; i_4 < 24;i_4 += 1)
            {
                var_21 = (((arr_10 [i_2 - 1]) ? (arr_10 [i_0]) : 2143289344));
                arr_16 [i_4] = (arr_5 [i_4 + 1]);
                var_22 ^= arr_6 [i_4] [i_2] [i_4];
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                arr_21 [i_2] [20] [20] [i_5] = (((((var_14 ? (arr_6 [15] [i_2] [18]) : var_0))) ? var_0 : (arr_5 [i_0])));
                arr_22 [i_0] [i_2] [i_5] = var_4;
                var_23 = (var_15 ? var_7 : (arr_2 [i_0]));
            }
            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                arr_25 [i_6] [i_2] = (!(arr_12 [i_2 + 3] [i_2 - 2] [1]));
                arr_26 [i_2] [i_2] [i_6] = (arr_13 [i_6] [i_6] [i_6] [i_6 - 2]);
                var_24 &= (arr_17 [i_6 - 1] [i_6] [i_6]);
                var_25 = ((var_12 || (arr_13 [i_6] [13] [i_6 + 1] [20])));
                arr_27 [i_0] [i_6] [i_6] = ((arr_6 [i_2 + 1] [i_0] [i_6 - 3]) ? var_0 : var_11);
            }
            var_26 = (((arr_12 [i_0] [i_2 - 2] [i_2]) ? (arr_12 [i_0] [i_2 + 1] [i_0]) : (arr_12 [i_0] [4] [i_2])));
        }
        arr_28 [i_0] = ((~((var_11 ? 106 : var_13))));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_27 *= -113;
        arr_32 [4] [i_7] = var_4;

        /* vectorizable */
        for (int i_8 = 4; i_8 < 14;i_8 += 1)
        {
            arr_35 [i_7] [i_7] [i_8] = var_9;

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_28 = (min(var_28, ((((((255 ? (arr_29 [i_8]) : (arr_29 [i_7])))) ? var_6 : var_7)))));
                var_29 ^= (arr_19 [i_8] [i_7] [i_7]);
                var_30 = (-41 ? ((var_11 ? (arr_2 [i_9]) : (arr_19 [i_7] [i_8] [i_8]))) : (var_5 > var_1));
                var_31 = ((var_5 ? ((var_15 ? (arr_14 [i_8]) : (arr_19 [1] [i_8] [i_8]))) : var_2));
            }
        }
        var_32 = (arr_24 [i_7] [i_7]);
        var_33 |= ((-5471982060986769704 ? (arr_6 [i_7] [i_7] [i_7]) : (min((max(3668305956, -2143289365)), (arr_7 [i_7])))));
    }
    for (int i_10 = 1; i_10 < 20;i_10 += 1)
    {
        arr_40 [i_10] [12] = 1;
        arr_41 [i_10] = (max(((-27490 ? var_14 : ((((arr_15 [i_10]) ? (arr_9 [3] [i_10] [3]) : var_3))))), ((((((var_14 ? 1 : 69))) == (max(var_1, var_12)))))));
    }
    var_34 = ((((((var_1 ? -119 : var_6)))) ? 74 : var_8));
    var_35 += (((((var_1 ? (var_14 <= var_14) : (max(var_11, var_12))))) ? ((2023832575 ? var_2 : var_3)) : (var_1 && var_3)));
    #pragma endscop
}
