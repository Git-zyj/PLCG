/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = ((~((min(1, 24256)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = (min(((-(arr_3 [i_4 + 1]))), var_6));
                                arr_11 [i_3] [16] [i_3] &= 8468940698937521853;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_14;
    var_20 = -var_2;
    var_21 = max(var_8, (!5131807003568302116));

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_22 ^= (max(154719589411079724, (((~(min(23, var_5)))))));
        var_23 = min(((var_14 ? -var_15 : 3385664148)), 0);
        var_24 = (((((~(arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) <= (((arr_12 [i_5]) ? var_16 : var_4))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            var_25 = (var_9 ? -7006785722083803581 : (arr_17 [i_6]));
            var_26 = ((~(arr_17 [i_6])));
            arr_20 [i_6] [1] = 5131807003568302087;
            var_27 = ((((2092756581 ? var_15 : var_6)) <= (arr_18 [i_6 + 1] [i_6] [i_7])));
        }
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 16;i_9 += 1)
            {
                {
                    arr_27 [i_9] [i_6] = (~-1);
                    var_28 = var_15;
                    var_29 = ((var_16 - (((arr_21 [i_6] [i_6]) ? 32754 : 18446744073709551596))));
                }
            }
        }
        arr_28 [i_6] [i_6] = (var_2 > 0);
        var_30 -= -59488;
    }
    for (int i_10 = 1; i_10 < 15;i_10 += 1) /* same iter space */
    {
        var_31 &= (((((-(arr_24 [i_10 + 1] [1] [i_10])))) ? (((((arr_24 [i_10 - 1] [0] [12]) > (arr_24 [i_10 + 2] [14] [i_10]))))) : (((arr_24 [i_10 + 1] [10] [i_10]) - (arr_24 [i_10 + 2] [6] [i_10])))));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 16;i_13 += 1)
                {
                    {
                        var_32 = ((~(((((var_2 << (var_5 - 35022)))) ? (-32766 | var_14) : (min((arr_39 [i_10] [i_10] [0]), var_8))))));
                        arr_42 [i_10] [i_11] [i_10] [i_12] [17] = ((((((max((arr_35 [i_10] [i_10] [i_13]), var_7)))) > 5131807003568302116)));
                    }
                }
            }
        }
        var_33 = var_13;
        arr_43 [i_10] = var_13;
        var_34 = -32741;
    }
    #pragma endscop
}
