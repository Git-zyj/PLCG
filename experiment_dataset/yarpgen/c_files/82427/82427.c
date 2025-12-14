/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_5, (((var_0 ? ((var_5 ? var_9 : var_9)) : var_3)))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        arr_2 [7] = 24721;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (((arr_6 [i_0] [i_1] [i_2] [2]) ? ((var_4 * (arr_4 [i_0] [i_1] [1]))) : (arr_3 [i_0] [i_0 + 1])));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] [i_1] [i_3] = (arr_1 [i_1]);
                            arr_13 [i_0 - 3] [i_1] [i_2] [i_2] [i_0] [i_0] = 21;
                            var_14 ^= ((-(arr_5 [i_0] [i_4])));
                            var_15 = (arr_5 [i_0] [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_16 = ((14344 ? 24741 : 31164));
                            arr_16 [i_0] = var_7;
                        }

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_17 = (((((65529 ? (arr_5 [i_0] [i_3 - 1]) : 6787001337664371272))) ? (arr_4 [i_0] [i_1] [i_0]) : var_6));
                            var_18 *= -34378;
                        }
                        var_19 = var_11;
                        arr_20 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = ((((((arr_7 [i_1] [i_1] [i_1]) ? 9223372036854775806 : (arr_11 [i_0] [i_1] [5] [1] [i_2] [i_3] [8])))) ? ((((arr_5 [i_3 - 1] [i_1]) < (arr_1 [i_1])))) : (arr_4 [i_0] [i_1] [1])));
                    }
                    arr_21 [i_0] [i_1] [2] [2] = (((var_3 + 9223372036854775807) << (((arr_17 [i_0] [i_0 - 4] [i_0 + 2] [i_0 - 3] [i_0 - 3]) - 3))));
                }
            }
        }
        var_20 = (-((6787001337664371278 ? (arr_5 [i_0] [i_0]) : (arr_7 [i_0] [i_0] [1]))));
        var_21 = (max(var_21, -6787001337664371283));
        arr_22 [i_0 + 2] = (arr_14 [i_0 - 4] [i_0] [i_0 + 2] [i_0 - 4] [i_0]);
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_28 [i_8] [i_8] [i_8] = (((arr_24 [1]) ? (((-((max(-112, -1)))))) : (min(var_3, (arr_25 [i_8] [i_8] [i_8])))));
            var_22 += ((((((((min(var_9, (arr_25 [i_7] [i_7] [i_7]))))) ^ (arr_26 [i_7] [i_7] [i_7])))) ? (!-6787001337664371294) : (arr_23 [i_7])));
            var_23 = (max(var_23, (((min(((((arr_24 [i_7]) << (((arr_23 [i_7]) - 224))))), (((arr_23 [i_7]) ? (arr_26 [i_7] [i_7] [i_7]) : (arr_27 [i_7] [i_7] [i_8])))))))));
        }

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            var_24 = (max(var_24, (((var_0 ? (max(1539906432, -9223372036854775806)) : (arr_23 [i_7]))))));

            for (int i_10 = 1; i_10 < 8;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    var_25 = (!1);
                    var_26 = (min(var_26, ((((arr_36 [i_11] [i_9] [i_11] [i_10]) ? (arr_26 [i_7] [i_11] [i_7]) : (arr_26 [i_9] [i_10] [i_10 + 3]))))));
                }

                /* vectorizable */
                for (int i_12 = 2; i_12 < 10;i_12 += 1)
                {
                    var_27 ^= ((~((-(arr_25 [i_7] [i_9] [i_12])))));

                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        arr_42 [i_7] [0] = (((arr_38 [1] [i_9] [i_10 + 3] [i_12]) || (arr_35 [i_7] [i_9] [i_10 - 1] [i_10] [i_13] [i_7])));
                        arr_43 [i_7] [i_9] [i_7] [i_12] [i_7] [i_9] = ((+(((arr_23 [i_7]) ? var_0 : (arr_33 [i_9] [9])))));
                        var_28 = (((arr_27 [i_10 - 1] [i_13] [4]) ? ((24722 ? 163 : -6791)) : -var_7));
                    }
                }
                var_29 = (((((~(0 > -1088)))) ? ((-var_7 ? ((((arr_32 [i_7] [i_7] [i_7] [0]) % 8191))) : (arr_26 [i_9] [i_9] [i_10]))) : -2437083113881174638));
            }
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            var_30 = 1404107904604808240;
            arr_46 [i_14] = (((arr_32 [i_7] [i_14] [i_14] [i_14]) > ((~(arr_36 [i_7] [i_7] [i_7] [i_14])))));

            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_31 = (max(var_31, ((((arr_26 [i_7] [i_7] [i_7]) % (-8191 / 45))))));
                var_32 = (arr_40 [i_7] [i_7] [i_7] [i_7] [9] [i_7] [i_7]);
            }
            arr_49 [i_7] [7] = (-15789 * 494618165);
            arr_50 [i_7] [i_14] [i_7] = (((arr_47 [i_7] [i_7] [i_14] [i_14]) ? var_11 : (arr_47 [i_7] [i_7] [0] [1])));
        }
    }
    var_33 = (max(2489017679, 179));
    #pragma endscop
}
