/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((var_8 ? var_8 : var_8))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 |= var_0;
        arr_2 [i_0] = var_9;
        var_12 = var_8;
        var_13 = (((((-(arr_0 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : var_0));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = (((arr_5 [i_1] [i_1]) ? var_1 : (~var_0)));
        var_14 &= var_7;

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_10 [i_1] [i_1] = ((((((((var_1 ? (arr_8 [i_1]) : (arr_0 [i_2] [i_1])))) ? ((var_7 ? var_0 : (arr_6 [15]))) : (((!(arr_0 [i_1] [1]))))))) ? var_6 : ((var_2 ? var_9 : (((arr_1 [i_1] [i_1]) ? var_8 : (arr_0 [i_1] [i_1])))))));
            arr_11 [i_1] [i_1] [i_1] = (arr_4 [i_1]);
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_15 = var_7;
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_16 = var_0;
                    var_17 = (~var_1);
                    arr_21 [i_3] [i_4] [i_4] [i_3] = var_3;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_18 = arr_0 [9] [9];

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            arr_29 [i_6] [i_6] [i_7] = ((var_8 ? var_9 : (((arr_1 [i_6] [6]) ? var_2 : (arr_6 [i_7])))));
            arr_30 [i_6] = (((((var_1 ? var_4 : (arr_1 [i_6] [i_7])))) ? (arr_26 [i_7]) : (((var_1 ? (arr_24 [i_6] [i_7]) : var_9)))));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_33 [10] [i_6] = ((~(arr_23 [i_6])));
            var_19 = (arr_22 [i_6]);

            for (int i_9 = 2; i_9 < 10;i_9 += 1)
            {
                var_20 = (arr_0 [i_6] [i_6]);
                var_21 = (arr_6 [i_6]);
            }
        }
        for (int i_10 = 4; i_10 < 10;i_10 += 1)
        {
            var_22 = var_7;
            var_23 = (var_9 ? (arr_6 [1]) : ((-8013601904626409676 ? var_5 : 3345327916)));
        }
        var_24 = (max(var_24, var_2));
        var_25 = (((((var_8 ? var_1 : var_9))) ? var_1 : (arr_36 [i_6] [i_6])));
    }
    var_26 = ((var_8 ? ((var_8 ? ((var_7 ? var_7 : var_7)) : (((var_4 ? var_3 : var_1))))) : (((((17846 ? 45 : 17846))) ? (((var_7 ? var_5 : var_6))) : ((var_9 ? var_7 : var_5))))));
    var_27 = var_8;
    #pragma endscop
}
