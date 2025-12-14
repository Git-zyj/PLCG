/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 1] [i_2] = (max((!0), (arr_0 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [8] [i_2] [5] [19] [i_2] [16] [i_4] = ((-(arr_5 [i_2 - 2] [i_1] [i_4 + 1])));
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_4 + 1] = 103;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] = (((((var_5 ? (arr_8 [i_0 - 1] [i_0 - 2] [i_2 + 2] [i_2 + 1]) : (arr_8 [3] [i_0 - 2] [i_2 + 1] [i_2 + 3])))) ? ((((arr_8 [i_0] [i_0 - 1] [i_2 - 2] [i_2 + 2]) ? (arr_8 [i_0] [i_0 - 1] [i_2 - 3] [i_2 - 2]) : 1))) : (min(10767176734406103839, (arr_8 [i_0] [i_0 + 1] [i_2 - 3] [i_2 - 2])))));
                                arr_20 [i_0] [i_2] [16] = (arr_8 [i_0 + 1] [14] [1] [i_0]);
                            }
                        }
                    }
                    var_18 = (((~1) ? (arr_11 [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_0 - 1] [i_2]) : (min((arr_11 [i_2] [2] [i_2 + 2] [i_2] [i_2 + 3] [i_0 - 2] [i_2]), (arr_11 [i_2] [i_2] [i_2 + 4] [14] [i_2 - 3] [i_0 - 2] [i_2])))));
                    arr_21 [i_2] [i_2] = (min((((arr_9 [i_1] [i_2 + 1] [4]) / 1)), (((arr_14 [i_2] [i_2 + 1] [i_2] [i_2] [i_2]) ? (arr_9 [i_2] [i_2 + 1] [i_2]) : (arr_14 [5] [i_2 + 1] [i_2 + 1] [i_2] [4])))));
                }
            }
        }
    }
    var_19 = max(220, var_14);

    /* vectorizable */
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_20 = (((arr_8 [18] [i_7] [i_7] [i_7]) + 1));
        var_21 = (~var_3);
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (((((~-6286759329182065617) << ((((var_8 ? var_3 : 1)) - 1))))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    var_23 = ((var_15 % (((-32767 - 1) ? -var_1 : (arr_9 [i_9] [20] [20])))));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                var_24 = (min(((1 ? (arr_30 [i_11 - 1] [0]) : (arr_18 [i_8] [i_8] [i_8] [16]))), ((min((arr_24 [i_8] [1]), (min(1, 1)))))));
                                arr_37 [i_8] [i_8] [i_10] [i_11 + 2] [i_12] = (((min((((arr_7 [i_8] [i_9] [i_11 + 1] [i_12]) ? (arr_27 [11] [i_10]) : 1)), 43274)) << ((((-24334 ? (arr_29 [i_11 + 1] [4]) : 1)) - 14181))));
                                arr_38 [i_8] [i_9] [i_10] [i_8] [2] [i_12] [i_12] = ((~((((7473508572684931800 || (arr_22 [i_9])))))));
                                arr_39 [16] [i_8] [i_8] [12] = (((arr_15 [i_8] [0] [16] [i_10] [i_11 + 1] [i_12]) || ((max(var_15, (arr_17 [i_8] [i_9] [i_10] [i_11] [i_12]))))));
                            }
                        }
                    }
                }
            }
        }
        arr_40 [i_8] = ((((arr_16 [i_8] [12]) - 1)));
        var_25 = (max(1765610022, 7504849822777216459));
        var_26 = (max(var_3, (arr_1 [18])));
    }

    /* vectorizable */
    for (int i_13 = 1; i_13 < 14;i_13 += 1)
    {
        arr_43 [i_13] = 19000;
        var_27 = (min(var_27, -var_2));
        var_28 = (arr_26 [i_13 - 1]);
        var_29 = ((((1558557004 || (arr_27 [i_13] [i_13])))));
    }
    for (int i_14 = 1; i_14 < 15;i_14 += 1)
    {
        arr_46 [i_14] = 1;
        var_30 = (min((arr_16 [4] [4]), (max((arr_16 [i_14 + 2] [i_14 - 1]), (arr_16 [i_14] [i_14])))));
    }
    var_31 = ((((min(((2736410292 ? var_17 : 1)), (((var_6 ? var_5 : var_9)))))) ? var_1 : var_17));
    #pragma endscop
}
