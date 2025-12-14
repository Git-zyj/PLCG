/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_6;
    var_11 |= var_6;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_12 = (min(var_12, (((-var_8 ? (((((var_8 ? var_1 : (arr_1 [i_0]))) | (max((arr_1 [i_0 - 2]), var_7))))) : ((-(arr_0 [i_0 + 1] [i_0 + 2]))))))));
        var_13 = (arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_14 = (((arr_3 [i_0 - 1]) == (arr_2 [i_0] [i_0 + 1] [i_0 + 2])));
                        var_15 = var_1;
                        arr_8 [i_0] [i_1] [i_1] [i_0] = ((!((((arr_6 [i_1] [i_1] [i_1 - 1] [i_0 + 2] [i_0 - 2]) ? (((((arr_5 [i_0] [10] [i_3]) || var_1)))) : (arr_6 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_2]))))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_16 -= var_2;
            arr_11 [i_0] [i_0] [i_4] = ((((var_9 ? (arr_5 [i_0] [i_0] [i_0]) : var_0)) + -11));
        }
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        arr_20 [6] [i_7] [i_7] [i_0 - 2] = var_0;
                        var_17 = ((((~((var_3 + (arr_12 [i_7] [i_7]))))) >= var_8));
                    }
                }
            }
            arr_21 [i_5] = ((((max((-11 * var_6), (arr_16 [i_0] [i_5])))) ? (10 + -11) : var_7));
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_18 -= (max(var_8, var_2));
            arr_25 [i_0] = arr_5 [i_0] [i_8] [i_0];
            arr_26 [i_0] [3] = ((~((max((arr_14 [i_0 + 1] [i_0 + 2]), var_6)))));
            var_19 &= (arr_13 [i_0 + 2] [i_0 - 2] [i_0 - 2]);
        }
        arr_27 [i_0 - 1] [i_0 - 1] = ((-(((~var_1) & (~var_3)))));
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_20 = (max((arr_29 [i_9]), (arr_29 [i_9])));
        arr_30 [i_9] = ((-(((arr_28 [i_9]) ? (arr_29 [i_9]) : (arr_29 [i_9])))));
        arr_31 [i_9] [i_9] = var_9;
        var_21 = (max(var_21, var_3));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                {
                    var_22 = ((var_6 != ((((((arr_35 [i_11] [i_9] [i_9] [i_9]) ? var_3 : 15)) == (((var_1 >= (arr_29 [i_9])))))))));
                    arr_36 [i_9] [i_10] [i_10] [i_9] = ((((var_6 >= (arr_34 [i_11] [i_11] [i_11] [i_9])))));

                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_23 = (min(var_23, -11));
                        var_24 = var_0;
                    }
                    for (int i_13 = 3; i_13 < 20;i_13 += 1) /* same iter space */
                    {
                        var_25 = (max((((arr_35 [i_9] [i_13 + 2] [i_11] [i_13]) ^ var_1)), (arr_35 [18] [i_13 + 2] [i_11] [18])));
                        var_26 = 15;
                        var_27 = (min(var_27, ((((34 - (arr_32 [i_10] [i_11] [i_11])))))));
                        var_28 = ((+(((arr_35 [i_13 - 3] [9] [i_9] [i_13 + 1]) ? var_1 : (arr_38 [i_13 - 3] [i_13] [i_13] [i_13 + 2] [i_13 + 1] [i_13])))));
                    }
                    /* vectorizable */
                    for (int i_14 = 3; i_14 < 20;i_14 += 1) /* same iter space */
                    {
                        var_29 ^= (((arr_42 [i_10] [i_14 + 2] [i_14] [i_14 + 1] [i_14 - 1]) ^ (((var_4 ? var_1 : (arr_29 [i_11]))))));
                        arr_44 [i_9] [i_9] [i_11] [i_14] = ((var_9 | (arr_41 [i_10] [i_10] [i_11])));
                    }
                    var_30 = ((~(arr_42 [i_9] [i_10] [i_11] [i_11] [i_10])));
                    arr_45 [i_9] [i_9] [1] [i_11] = (arr_41 [i_9] [i_10] [i_10]);
                }
            }
        }
    }
    var_31 *= var_3;
    #pragma endscop
}
