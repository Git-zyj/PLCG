/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 += var_3;
        var_15 = ((((max(var_5, 19161))) >= ((((min(var_1, var_9))) ? var_9 : var_2))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_10 [i_1] [i_2] [i_2] [3] = var_8;
                    arr_11 [i_1] [i_2] [i_2] = (!var_13);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_16 [i_2] = (arr_13 [i_1]);
                                arr_17 [i_2] [i_2] [5] [i_4] [0] = (var_9 >= var_7);
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_20 [i_2] = ((-var_0 ? var_10 : ((var_2 ? var_7 : var_10))));
                        var_16 ^= ((var_13 & (((-19167 ? 1 : 127)))));
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    arr_25 [i_2] [i_2 - 3] [i_2] = ((-var_5 ? var_3 : var_1));
                    var_17 = arr_4 [i_1];

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_18 += (((var_3 | var_5) ? (((var_1 ? var_10 : (arr_8 [11] [i_7] [i_2] [i_1])))) : var_5));
                        var_19 = var_4;
                    }
                    for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_9] [i_2] [i_2] [i_1] = var_10;
                        var_20 = var_13;
                    }
                    for (int i_10 = 1; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        arr_36 [i_1] [8] [2] [1] [i_7] [i_10 - 1] &= ((var_9 >> (((~var_12) - 8573853702640881769))));
                        arr_37 [i_1] [i_2] [i_2] [i_7] [i_10] [i_10] = (~var_1);
                        var_21 ^= (var_6 | (var_4 - var_4));
                    }
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_22 = var_9;
                                var_23 = (((arr_18 [i_1] [i_13] [i_11] [i_13] [i_2]) ? (((!(((-(arr_24 [i_2]))))))) : (((1099241055 - 80) + -var_6))));
                            }
                        }
                    }
                    var_24 = max((arr_27 [i_1] [i_2] [i_2] [i_2]), (((((var_5 ? var_4 : var_5))) ? ((var_1 ? var_9 : var_13)) : ((var_10 ? var_13 : (arr_28 [i_1] [i_2] [0] [i_2]))))));
                    var_25 = arr_35 [i_1] [12] [i_11];
                }
                var_26 = var_2;
                arr_46 [i_2] = ((~(arr_15 [1] [i_2] [i_2] [6] [5] [13] [13])));
                var_27 = (min(var_27, (arr_13 [i_1 - 1])));
            }
        }
    }
    #pragma endscop
}
