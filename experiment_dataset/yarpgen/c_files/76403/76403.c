/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_10 = (2595258471329294734 >= 8657348405828548886);
        arr_4 [i_0] [i_0] = (((arr_1 [i_0 + 1] [i_0 + 1]) ? var_0 : (arr_1 [i_0 + 1] [i_0])));
        arr_5 [i_0] = -5814602603207140528;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_11 = (var_5 >= var_5);
        var_12 = (((arr_1 [i_1] [i_1]) | -5814602603207140528));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = 873614464;
        arr_13 [i_2] [i_2] = (((arr_0 [12] [i_2]) / (arr_0 [i_2] [i_2])));
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_13 = (max(var_13, (var_6 | var_0)));
        var_14 = ((!(((-5814602603207140528 ? 5814602603207140528 : (arr_16 [11]))))));
        var_15 ^= ((var_7 * (((var_5 << (((arr_17 [i_3]) - 96)))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_24 [i_4] [i_4] [i_4] = (var_8 && var_4);
            arr_25 [i_4] [13] [i_4] = -5814602603207140528;
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                arr_31 [i_4] [0] [0] [i_4] &= (((var_6 ^ 1080863910568919040) - ((var_3 ? var_5 : var_1))));
                arr_32 [i_4] [i_4] [i_6] [i_7] = ((((var_1 ? (arr_20 [i_4]) : (arr_16 [i_4]))) | (arr_30 [i_4] [i_6] [i_6] [i_7])));
            }
            var_16 = (!var_0);
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            arr_35 [i_4] [i_4] [3] = ((-var_5 ? var_0 : (arr_16 [i_4])));
            var_17 = (((((var_9 ? (arr_33 [15] [i_4] [i_8]) : 0))) ? (!var_8) : var_6));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            arr_38 [10] |= var_9;
            var_18 = ((8047256018603422021 / (arr_26 [15] [i_9])));
        }
        arr_39 [i_4] = (((((-8047256018603422022 | (arr_17 [i_4])))) ? ((-18 ? var_4 : var_4)) : var_8));
        var_19 |= (var_8 || 24);
        arr_40 [i_4] = (((arr_17 [i_4]) ? var_4 : var_8));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
    {
        arr_44 [i_10] = ((arr_18 [i_10]) / 32768);
        arr_45 [i_10] = (arr_21 [i_10]);
        arr_46 [i_10] = (arr_14 [i_10]);
    }
    #pragma endscop
}
