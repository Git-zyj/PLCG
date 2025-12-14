/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [2] [i_1] |= var_4;
            var_19 = (var_15 ? (arr_0 [i_1] [i_0]) : ((var_15 ? var_0 : var_3)));
            var_20 = (var_9 - var_1);
            arr_7 [i_0] = ((var_4 + (arr_4 [i_0] [i_1])));
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_21 = (((((var_7 ? ((1352886895 ? 16197 : 0)) : (~0)))) ? ((((((60 ? 98 : 16193))) ? var_4 : ((38 ? 16193 : -61))))) : var_5));
                var_22 = var_11;
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_23 = (max(var_23, ((min(16193, (((arr_19 [i_2 + 1] [i_2] [i_2] [i_2] [i_6] [i_2]) ? (((arr_18 [i_0] [i_2] [i_6] [i_5] [i_6]) ? 60 : var_5)) : (var_2 > var_9))))))));
                            var_24 &= ((((min(var_2, var_6))) ? ((var_3 ? var_12 : 8)) : var_13));
                        }
                    }
                }
                var_25 = min(-9, -1385794283);
            }
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                arr_24 [i_2] [i_2 + 2] [i_7] = var_10;
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 8;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_26 = (((((var_3 ? var_11 : var_16)))) ? ((max((max((arr_10 [i_0] [i_0] [7]), var_8)), var_3))) : (((var_0 / (arr_13 [i_0] [9] [9])))));
                            var_27 = (arr_3 [i_9] [i_2] [i_2]);
                        }
                    }
                }
                arr_31 [i_0] [i_2] [9] [9] = (~-var_10);
            }

            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                var_28 = (min(var_28, ((var_15 ? (~60) : (((arr_30 [1] [1] [i_2 - 1] [i_0] [i_0] [i_0]) & var_6))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            arr_38 [i_0] [i_11] [i_2] [i_11] [i_12] [i_0] = ((var_13 ? ((max((arr_23 [i_2] [i_2]), (arr_23 [i_2] [i_2])))) : var_2));
                            var_29 = -var_12;
                        }
                    }
                }
                arr_39 [i_2] = (((((max(var_3, var_9))) ? ((var_1 ? var_11 : var_15)) : ((var_2 ? var_10 : var_3)))));
            }
        }
        arr_40 [i_0] = (((((var_17 ? (arr_27 [i_0]) : var_4))) ? ((min(var_16, 1))) : (min(var_12, var_9))));
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 16;i_15 += 1)
            {
                {
                    arr_48 [i_13] [i_13] [i_13] = ((!((((arr_46 [i_15 - 1] [i_14] [i_15]) ? var_4 : var_7)))));
                    arr_49 [i_13] [i_14] [i_15] = ((var_4 ? (~var_5) : (~var_1)));
                    arr_50 [i_13] [i_14] [i_15] = (min(((1 ? 1 : 56)), ((8 ? 9 : 49339))));
                }
            }
        }
    }
    #pragma endscop
}
