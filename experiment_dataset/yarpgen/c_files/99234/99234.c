/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_18 = (((((var_14 ? 196 : 14))) ? (((21129 ? 65525 : var_0))) : 1077191861));
                    var_19 = arr_1 [i_0 + 2];
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_20 ^= (((((24 ? 65525 : 65508))) < ((((min(11, (arr_7 [i_0] [10])))) ? (arr_6 [i_0 + 3] [i_1] [i_3]) : ((0 ? (arr_9 [20] [i_1] [18] [i_1]) : 100663296))))));

                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        arr_13 [i_0] [i_3] [i_1] [i_0] = (arr_8 [10] [i_1] [i_3] [15]);
                        var_21 = (((max(((208482256 >> (((arr_4 [i_0] [9] [i_0 - 1]) - 2180137453392321973)))), ((15248 ? 98 : var_14))))) ? ((min((arr_10 [21] [i_0 - 1] [i_0 + 3]), var_2))) : (!-1706209073));
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_22 |= 793477993;
                        var_23 = (((arr_12 [i_0]) % -274));
                        var_24 -= (((((arr_0 [1]) ? var_12 : 25541)) != var_5));
                        var_25 = (!(((var_7 ? 9 : (-2147483647 - 1)))));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_26 = ((-(((arr_15 [i_0] [i_0] [i_5] [20]) ? 0 : var_11))));
                            var_27 = (arr_16 [i_6] [i_5] [i_1]);
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_28 = ((var_13 >= ((var_3 ? var_2 : var_0))));
                            arr_21 [i_0 + 2] [12] [i_0] [i_5] = ((-((3217775434 ? (arr_19 [i_7] [i_0] [i_3] [i_0] [i_0]) : (arr_11 [i_3] [i_3] [1])))));
                            var_29 = -24;
                        }
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_24 [i_0 + 1] [i_1] [i_0] [5] = ((((min(0, var_13))) ? (((arr_8 [1] [i_1] [i_1] [4]) ? ((min(var_17, 25))) : var_3)) : ((1 - ((min((arr_1 [i_0]), (arr_16 [3] [3] [i_8]))))))));

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_30 = (max(var_30, (((((min(14, (min(var_3, 65526))))) ? (arr_7 [i_0] [16]) : (((!(((10 ? var_3 : 2016)))))))))));
                            var_31 = ((+(((arr_19 [i_8] [i_0] [i_0] [i_0] [i_0]) ? (arr_19 [i_8] [i_0] [i_0 - 1] [i_0] [i_0]) : var_4))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            arr_30 [22] [i_1] [1] [i_0] [0] = 1;
                            arr_31 [i_10] [i_0] [i_3] [i_3] [i_0] [i_0] = -var_12;
                        }
                        var_32 = ((((((min(885654024653429810, 2810156973)) == (((min((-127 - 1), 5))))))) << (((max((min((arr_18 [i_0] [i_1] [i_1] [i_1] [19]), 2666240001)), 7294370023512776252)) - 7294370023512776233))));
                    }
                }
                for (int i_11 = 1; i_11 < 23;i_11 += 1)
                {
                    var_33 = (((var_9 - 5) ? ((-(arr_19 [i_11 + 1] [i_0] [i_0 + 3] [i_0] [i_0 + 3]))) : -var_9));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_34 = ((-(((arr_26 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_12 - 1] [i_13] [i_0 + 2]) ? (arr_26 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_12] [i_12 + 2] [i_13] [i_0 + 2]) : var_3))));
                                arr_39 [i_0 + 2] [10] [i_11 + 1] [i_1] [i_1] |= ((-((18446744073709551607 ? -32759 : 48967))));
                            }
                        }
                    }
                }
                arr_40 [i_0] [i_0] [i_1] = (arr_7 [i_0 + 1] [7]);
            }
        }
    }
    var_35 = (max(var_35, var_2));
    #pragma endscop
}
