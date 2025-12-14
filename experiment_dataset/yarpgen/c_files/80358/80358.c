/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [9] [9] = (arr_2 [i_0]);
        arr_4 [i_0] = (((var_9 ? (arr_0 [1]) : var_8)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (var_5 ? ((((((var_12 ? var_0 : var_3))) ? ((var_10 ? (arr_1 [1]) : var_11)) : var_4))) : var_7);
        var_15 = (arr_2 [i_1]);
        arr_8 [i_1] = (arr_6 [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_16 = ((var_4 ? (arr_6 [i_2]) : (arr_12 [i_3])));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 9;i_6 += 1)
                    {
                        {
                            var_17 = var_8;
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] = var_11;
                        }
                    }
                }
            }
            var_18 = (arr_11 [i_2]);
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] = (((arr_2 [i_8]) ? (arr_16 [i_2] [i_2] [i_8]) : var_9));
                        arr_28 [i_8] [i_2] [i_3] [i_2] [i_2] = (arr_24 [i_8] [i_7] [i_2]);
                    }
                }
            }
            var_19 = (max(var_19, (((var_0 ? (arr_0 [i_2]) : var_5)))));
        }
        for (int i_9 = 2; i_9 < 9;i_9 += 1)
        {
            arr_32 [i_2] [i_9] [i_2] = var_13;
            var_20 = (arr_19 [i_9] [i_2] [i_2] [i_2] [i_2]);
            arr_33 [i_2] = var_6;
            arr_34 [i_2] [i_9] [i_2] = var_4;
            arr_35 [i_2] [i_2] = var_9;
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 9;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_21 = (((((32751 ? 65535 : 1))) ? (arr_38 [i_11] [i_2]) : var_2));
                arr_41 [i_2] = var_7;
                arr_42 [i_2] [i_2] [i_2] [i_2] = (arr_24 [i_10] [i_10] [i_10]);
            }
            var_22 -= (arr_2 [i_10 + 1]);
        }
        var_23 = (arr_13 [i_2] [i_2]);
        var_24 = var_9;
        arr_43 [i_2] [i_2] = var_10;
    }
    /* LoopNest 3 */
    for (int i_12 = 1; i_12 < 12;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 11;i_14 += 1)
            {
                {
                    var_25 = var_2;
                    arr_51 [i_14] [1] [i_14] = 4007418932205160881;
                    var_26 ^= arr_48 [i_12 + 2];
                }
            }
        }
    }
    #pragma endscop
}
