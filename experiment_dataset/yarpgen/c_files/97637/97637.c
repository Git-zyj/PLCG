/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_1] = var_8;
            arr_6 [i_0] [0] [i_1] &= 171;
            var_15 = (max(var_15, (((var_4 ? var_6 : (arr_0 [9] [11]))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_16 = ((!(arr_3 [i_0] [i_2] [10])));
            arr_10 [3] [9] [9] = 2938691434;
            var_17 |= -88;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                var_18 = (min(var_18, ((((arr_12 [i_4] [i_4 + 2] [i_4]) ? -var_13 : (arr_3 [6] [i_4 + 2] [6]))))));
                arr_17 [i_3] [i_3] = (((((arr_3 [i_0] [i_3] [i_3]) - var_1)) <= ((((arr_0 [9] [i_4]) ? var_3 : (arr_2 [2]))))));
            }
            arr_18 [i_0] [i_3] = (arr_0 [i_0] [4]);
        }
        var_19 &= (((arr_8 [i_0] [i_0]) ? (max(2147483647, (-2147483647 - 1))) : (((((arr_8 [i_0] [9]) + 2147483647)) << (((((arr_8 [i_0] [i_0]) + 962439243)) - 5))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        arr_21 [i_5] [0] &= ((((96 ? (arr_20 [i_5] [1]) : (arr_19 [i_5]))) | -353346831));
        var_20 = 17;
    }

    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        var_21 ^= (((max(((-(arr_22 [15]))), (arr_24 [i_6 - 2] [i_6 - 2])))) ? (((min(var_11, var_9)) | (!168))) : (((((arr_23 [i_6] [i_6 + 2]) >= (arr_23 [i_6 - 2] [i_6 - 2]))))));
        var_22 = (((((arr_23 [i_6] [i_6 - 2]) ^ (arr_23 [i_6] [i_6 - 2])))) || var_7);
    }
    for (int i_7 = 3; i_7 < 13;i_7 += 1)
    {
        arr_27 [i_7] = (((var_7 + 2147483647) << (((max((((arr_26 [6]) - (arr_22 [i_7]))), (((-(arr_26 [i_7])))))) - 18446744073709551490))));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_23 = var_13;
            var_24 = (min(var_24, 1933933321));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            var_25 ^= (((((-(arr_28 [0])))) <= var_5));
            var_26 += ((-(arr_24 [i_7 + 1] [i_7 - 1])));
            arr_33 [i_7] [i_7] [i_7] = (!var_10);
            arr_34 [i_9] = ((-((((arr_25 [i_9] [8]) == -815216952)))));
            var_27 = ((var_2 ^ (arr_24 [i_7 + 2] [i_9])));
        }

        for (int i_10 = 3; i_10 < 14;i_10 += 1)
        {
            arr_37 [9] [i_7 - 1] [i_7] &= (max(((max((arr_25 [0] [i_10]), (var_6 == var_3)))), (min((arr_22 [i_7 - 3]), (arr_22 [i_7 + 1])))));
            arr_38 [i_7] [i_7] [i_7] = (arr_30 [i_7]);
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
        {
            var_28 = (882752460 + 1560826400);
            var_29 = (((((((arr_30 [i_7]) || -815216952)))) | ((var_11 ? -815216952 : (arr_32 [14])))));
            arr_41 [5] = (arr_30 [i_7]);
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
        {
            var_30 = (min(var_30, (arr_29 [i_12])));
            arr_45 [i_7 - 2] [i_12] = (max((max((arr_42 [14] [14] [14]), (arr_32 [i_12]))), (((((max((arr_30 [i_7]), 9626470586311018474))) ? (~2147483635) : (!16930237459207759899))))));
        }
    }
    #pragma endscop
}
