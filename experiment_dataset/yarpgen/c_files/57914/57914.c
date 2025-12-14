/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_1] [i_3] [i_4] = (((((arr_10 [i_0 - 3] [i_1] [6] [i_0 - 2] [i_0 - 2]) >> (var_5 - 1619050414))) >> (((~-51) - 32))));
                            arr_16 [i_4] [i_1] [i_2] [i_0 - 1] [i_2] = ((((((arr_11 [i_3 - 1] [i_2 - 2] [i_1 + 2]) >> var_15))) ? var_7 : (!2509310134)));
                            var_20 = (max(var_20, (arr_12 [i_1 + 2] [i_1] [i_1] [i_4] [i_1 + 2] [i_4] [i_4 + 1])));
                            arr_17 [i_0] = (((var_1 + var_3) % (arr_2 [i_4 - 1])));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_21 = var_14;
                            var_22 ^= var_1;
                            var_23 = ((arr_0 [i_1 + 2]) ? (arr_7 [i_2 - 1]) : (arr_7 [i_2 + 1]));
                            var_24 *= -var_4;
                        }
                        var_25 = (max(var_25, ((((arr_18 [i_3] [i_0] [i_1] [i_0] [i_0] [i_0]) + var_8)))));
                        arr_20 [i_0] [i_0] [i_0 - 1] [2] [4] = (((((775834677 ? (-2147483647 - 1) : -78))) + var_5));

                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            var_26 = (var_2 ? (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 1]) : var_15)) : var_4);
                            var_27 += (var_9 ^ (((arr_12 [i_0 - 2] [i_1 - 1] [i_2 - 4] [i_3 - 1] [i_3 + 1] [i_6 - 2] [i_6 - 2]) ? (arr_23 [i_0 + 1] [i_0 + 1] [0] [i_0] [i_6 - 3] [i_6]) : (((arr_8 [8] [i_3 - 1]) ? (arr_4 [i_2] [12]) : var_17)))));
                            var_28 = var_0;
                            arr_25 [i_0] |= (((((arr_9 [i_2] [i_1 + 2] [i_1] [i_1]) ? var_5 : (arr_12 [i_3] [13] [1] [3] [i_1 + 1] [i_1] [i_1]))) == (((-(arr_12 [i_6] [11] [i_6] [i_2] [i_1 + 2] [i_0] [i_0]))))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_29 = var_15;
                            var_30 = (arr_23 [i_0] [i_1] [i_2] [i_3 + 1] [11] [i_7]);
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            arr_32 [i_8] = (arr_0 [i_0 - 2]);
                            arr_33 [i_3] [i_1] [i_8] [9] [i_1] [8] = ((((((-(arr_23 [i_0] [i_1] [i_2] [i_1] [i_1] [i_3]))) ? var_1 : (arr_14 [i_0] [i_1] [i_2] [6])))));
                            var_31 = (max(var_31, (arr_0 [i_1])));
                            var_32 -= var_4;
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        {
                            arr_44 [i_10] [i_10] [i_11] [i_12] = (~45128);
                            arr_45 [i_0 - 1] [i_0 - 1] [i_10] [i_11] [i_10] = var_16;
                            var_33 = (max(var_33, ((-(var_12 + var_3)))));
                        }
                    }
                }
                var_34 -= (arr_43 [i_0] [i_0 + 1] [i_0 - 1] [i_9] [i_9 - 1] [i_0 - 1]);
            }
            arr_46 [8] [i_9] [8] = var_9;
            var_35 -= -2717237053;
        }
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            arr_49 [i_13] [i_0] [i_13] = (((arr_38 [i_13] [i_0] [i_0]) != 2717237053));
            /* LoopNest 3 */
            for (int i_14 = 2; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        {
                            var_36 = (arr_6 [i_0] [1] [i_15]);
                            var_37 |= arr_3 [i_13];
                        }
                    }
                }
            }

            for (int i_17 = 3; i_17 < 12;i_17 += 1)
            {
                var_38 |= ((!(arr_52 [i_0 - 1] [4] [i_17 - 3] [i_0])));
                var_39 = var_1;
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 11;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        {
                            var_40 -= (arr_57 [i_0] [i_13]);
                            var_41 *= var_18;
                            var_42 = (min(var_42, (arr_61 [8] [i_17] [i_19] [i_19])));
                            arr_68 [i_17] [i_13] [i_17] = (((arr_19 [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_0]) == (((arr_19 [i_0 - 3] [i_0 - 2] [i_0 - 1] [i_0 - 3] [i_0]) ? (arr_19 [i_0 - 3] [i_0 - 1] [i_0 + 1] [i_0 - 3] [i_0 - 3]) : (arr_19 [i_0 - 1] [i_0 - 2] [i_0 - 3] [i_0 - 1] [i_0])))));
                            arr_69 [i_0] [i_13] [i_0] [i_0] [i_0] [i_0] [i_0] = -var_10;
                        }
                    }
                }
                var_43 ^= (((arr_29 [i_0] [i_13] [2] [i_0] [i_0] [i_13]) ? var_10 : (arr_31 [i_17] [i_17] [i_17] [i_0] [i_0] [i_0 - 1] [i_17])));
            }
        }
    }
    for (int i_20 = 0; i_20 < 17;i_20 += 1)
    {
        var_44 = (arr_70 [i_20]);
        arr_74 [i_20] [i_20] = var_13;
    }
    var_45 = var_9;
    var_46 = var_15;
    #pragma endscop
}
