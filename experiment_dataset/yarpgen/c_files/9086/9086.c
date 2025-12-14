/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_2));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_21 = (-var_2 - var_15);
        var_22 = (min(var_22, ((((arr_1 [15]) != (max((arr_1 [i_0 - 2]), (arr_3 [i_0 - 1] [i_0 - 2]))))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_23 = (min(var_23, (((4095 ? var_3 : (arr_0 [i_0 + 1] [i_1 + 1]))))));
            var_24 += (((arr_2 [i_1 + 2]) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 + 1])));
        }
        var_25 -= (min((max((max(-2076157280, 27)), ((var_18 / (arr_2 [i_0]))))), -2076157280));
        arr_6 [i_0] = ((((min(((min(-50, var_0))), (arr_4 [i_0])))) ? var_13 : var_4));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_26 = (((((min(137, 2076157279)) / (((arr_2 [i_2]) / var_8)))) != (((-2076157280 >= (arr_2 [i_2]))))));
        var_27 -= ((!((((((-2076157280 & (arr_4 [i_2])))) ? (((var_19 ? var_0 : 1879048192))) : (min(2850, 63)))))));
        var_28 += ((var_4 && ((((arr_7 [i_2]) ? var_16 : ((((arr_4 [i_2]) ? (arr_1 [i_2]) : (arr_2 [8])))))))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_29 = var_0;
        arr_12 [i_3] = ((((arr_10 [i_3]) | (arr_11 [i_3]))) > (arr_10 [i_3]));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_30 = (arr_22 [i_7] [i_3] [18] [i_4] [i_3] [3] [i_3]);
                            arr_23 [i_3] [i_6] [2] [i_4] [i_7] [6] = ((0 > (arr_15 [i_4] [i_5 + 3] [i_4] [i_4])));
                        }
                    }
                }
                arr_24 [i_4] [i_5 + 3] [7] [i_4] = (((arr_17 [i_3] [3] [i_5 - 2] [i_4]) ? (13406551743459470476 != -2076157258) : (2076157279 || var_16)));
                var_31 = (((arr_15 [i_4] [i_4] [i_5 + 2] [i_4 + 2]) != (arr_15 [i_4] [i_4] [i_5 - 2] [i_3])));
            }
            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    var_32 = var_11;
                    arr_30 [11] [11] [i_4] [11] = (((arr_14 [i_4]) & (arr_22 [i_3] [i_3] [20] [9] [1] [i_3] [i_9])));
                    var_33 = ((var_0 < (~var_3)));
                    arr_31 [i_4] [i_8] [i_4] [i_4] = (((arr_13 [i_8 - 1] [i_8 + 1]) - (arr_13 [i_8 - 1] [7])));
                }
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 21;i_11 += 1)
                    {
                        {
                            arr_38 [i_3] [i_4] [i_3] [i_3] [i_3] [i_3] [i_3] = (((arr_35 [i_10 + 1]) ? (arr_35 [i_10 - 1]) : (arr_35 [i_10 + 1])));
                            var_34 = 4294967287;
                            var_35 = (11 >> 0);
                            var_36 = (arr_26 [i_11 - 1] [i_4] [i_4] [i_10]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_37 = ((33554431 ? var_6 : (arr_15 [i_4] [i_12 + 3] [i_12 - 1] [i_12 - 1])));
                            arr_45 [5] [i_4] [i_4] [5] [5] = var_15;
                        }
                    }
                }
            }
            for (int i_14 = 1; i_14 < 21;i_14 += 1)
            {
                var_38 = -2076157289;
                var_39 += ((var_3 < ((((arr_36 [i_3] [i_3] [i_3] [i_3] [2] [i_3] [i_3]) > var_0)))));
            }
            var_40 = (max(var_40, var_17));
        }
        arr_48 [i_3] |= (min(1, ((-var_11 ? (var_1 | 18446744073709551615) : var_11))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_41 = ((var_9 << (var_5 - 1962467533)));
        var_42 = ((~(-1543812554 & 4294967287)));
    }
    var_43 = ((var_12 == (((((var_9 >> (var_4 - 82)))) ? var_1 : (max(var_17, 1362064822251534097))))));
    var_44 = (min(var_44, ((-(max((!var_6), (~var_11)))))));
    #pragma endscop
}
