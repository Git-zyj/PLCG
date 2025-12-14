/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 *= (min((arr_5 [2]), var_2));
                arr_6 [i_0] = ((((max(var_16, var_10))) ? ((var_0 ? var_15 : (arr_4 [i_0] [i_0]))) : (max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_11 [i_2] [i_3] = ((var_1 ? var_16 : var_13));
            var_21 = (min(var_21, var_18));
        }
        for (int i_4 = 4; i_4 < 21;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
            {
                var_22 *= (~(var_6 % var_2));
                arr_17 [i_2] [i_4] [i_4] [i_5] = (arr_10 [23] [i_5]);
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_23 = (max(var_23, (((((((var_13 ? var_18 : var_0))) ? var_1 : var_11))))));
                            var_24 |= ((((arr_10 [i_4 + 3] [22]) ? (((var_4 ? var_10 : var_15))) : var_7)));
                            var_25 = (((((var_15 ? (arr_7 [i_5 + 1]) : (arr_7 [i_5 + 1])))) % (~0)));
                            var_26 = (max(((((arr_24 [i_4] [i_5] [i_5] [1] [i_5]) > var_12))), var_6));
                            var_27 = (min(var_27, (((arr_19 [22] [i_4] [i_5] [0] [i_6 - 1]) / (var_0 + var_5)))));
                        }
                    }
                }
                arr_25 [i_4] [i_4 + 3] [i_5] = ((((var_10 ? (arr_18 [i_5 + 1] [i_4] [i_4] [i_2]) : (arr_18 [i_2] [i_4] [i_4 + 3] [i_5 + 1]))) >= (max((arr_18 [i_2] [i_4] [i_4] [i_5]), (arr_18 [i_2] [i_4] [i_5] [i_5 + 1])))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
            {
                var_28 = (min(var_28, ((((arr_22 [4] [i_4] [i_8 + 1] [i_4] [i_4] [10]) ? ((var_12 ? var_0 : var_15)) : var_4)))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_29 = (max(var_29, (arr_18 [i_4] [22] [i_9] [i_9])));
                            var_30 = var_16;
                            arr_36 [i_2] [i_4] [i_8] [i_9] [i_4] = ((((-(arr_12 [i_4] [i_4])))) ? ((var_8 ? var_17 : var_6)) : (arr_33 [i_2] [i_4 - 1] [i_8] [i_10 - 1]));
                        }
                    }
                }
            }

            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                var_31 = ((var_5 ? (((((var_12 ? (arr_10 [i_11] [i_11]) : var_2))) ? ((var_6 ? var_4 : var_7)) : (((var_16 ? var_3 : var_4))))) : var_6));
                var_32 = (((var_3 ? (min(var_3, var_9) : ((((arr_39 [i_2] [5] [i_4]) ? var_6 : var_7)))))));
            }
        }
        arr_40 [i_2] = ((var_0 ? var_6 : ((var_15 ? (arr_29 [i_2]) : var_16))));
        var_33 = (arr_24 [14] [i_2] [i_2] [i_2] [14]);
        var_34 = (min(((3142501326 ? 16554749146916630466 : 26988)), (((((var_18 ? var_3 : (arr_20 [i_2]))) >= 0)))));
        var_35 = (max(((((arr_22 [22] [i_2] [1] [i_2] [1] [22]) ? (arr_22 [i_2] [8] [i_2] [i_2] [i_2] [8]) : (arr_22 [i_2] [22] [i_2] [i_2] [i_2] [22])))), (min((arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [22]), var_2))));
    }
    #pragma endscop
}
