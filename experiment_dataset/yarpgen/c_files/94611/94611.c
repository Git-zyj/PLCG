/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    var_21 = (max(((((var_16 * var_9) > var_0))), (((((19 ? var_13 : 57109186385368929))) ? var_17 : ((var_16 ? var_3 : var_8))))));
    var_22 = ((!(((90 ? -88 : 0)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((+((1 ? (~164) : 0))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_23 = var_15;
                        var_24 = ((((min(var_10, (arr_5 [i_0] [i_1] [i_3])))) ? (arr_5 [i_2] [i_1] [i_0]) : (((!(arr_5 [1] [1] [i_3]))))));
                        var_25 = (1047552 / 315308800);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_15 [i_4] = ((((((arr_10 [i_0] [i_1] [i_4] [i_5]) ? (arr_10 [i_5] [i_4] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [9] [6])))) ? ((~(arr_10 [i_0] [i_1] [i_4] [i_1]))) : ((((arr_10 [i_0] [i_0] [i_4] [i_0]) ? 161 : var_5)))));
                        arr_16 [i_0] [i_1] [i_4] [i_5] = (max(0, (~109)));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_19 [i_6] [i_5] [i_4] [i_1] [i_0] = (max((((10755069504671252745 ? 52 : -87))), (max((arr_8 [i_0]), (arr_17 [i_6] [i_1] [i_4] [i_5] [i_6] [i_6])))));
                            var_26 = ((((((~1) ? var_7 : (arr_7 [i_0] [i_1])))) ? ((1566534029421783294 ? (arr_18 [i_0] [i_1] [2] [7] [i_6] [i_0]) : 1)) : var_15));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_27 = (arr_3 [i_0] [i_0]);
                            arr_23 [i_0] = (((((!(arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) < (!var_10)));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_18;
                            arr_25 [8] [i_1] [i_4] [i_4] [i_4] = arr_14 [11] [i_4] [i_4] [i_4];
                            var_28 = ((var_9 ? (arr_11 [i_0] [i_4] [1]) : (((arr_11 [i_5] [i_1] [i_0]) ? (arr_11 [i_7] [i_5] [i_0]) : (arr_9 [i_7] [i_4])))));
                        }
                    }
                }
            }
            var_29 = ((~((-(arr_14 [i_0] [i_0] [i_0] [i_1])))));

            /* vectorizable */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                var_30 = ((~(arr_10 [14] [i_1] [i_1] [i_1])));
                var_31 = (arr_6 [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 20;i_10 += 1)
                    {
                        {
                            arr_33 [i_10] [1] [i_8] [i_1] [i_0] = var_8;
                            var_32 = 103;
                        }
                    }
                }
                var_33 = (arr_4 [i_8]);
            }
        }
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                {
                    var_34 = 107;
                    arr_42 [i_11] [i_12] [21] = ((((max(8271073576057584093, 11336)))) ? (((((-20 + 2147483647) >> (((arr_26 [i_13] [i_12] [i_11]) - 138)))))) : (var_12 | 4156567406278100948));
                }
            }
        }
        var_35 = max((((!(((4294967289 ? 100 : (arr_12 [i_11] [i_11]))))))), (max((arr_31 [i_11] [21] [i_11] [i_11] [i_11]), var_5)));
    }
    var_36 = ((((max(((max(var_0, var_1))), (~31203)))) ? (!255) : var_6));
    #pragma endscop
}
