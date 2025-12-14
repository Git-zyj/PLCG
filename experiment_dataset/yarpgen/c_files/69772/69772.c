/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 99;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 23;i_4 += 1)
                            {
                                arr_16 [i_0] [i_1 - 2] [i_2] [i_2] [i_4] = var_1;
                                var_13 = (max(var_13, (((16 + ((max(0, (((-372568778 || (arr_7 [i_3] [i_2] [i_0] [i_0]))))))))))));
                                var_14 = ((((0 ? (arr_4 [i_0] [i_1] [i_0]) : (((0 > (arr_0 [i_0])))))) <= (min(var_3, 99))));
                                var_15 = (var_9 + (arr_11 [i_0]));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                var_16 = 99;
                                arr_21 [i_0] [i_5] [i_2] [i_5] [i_5] [i_3] = (!var_7);
                                var_17 = (((arr_8 [i_3 - 1] [i_3 + 1] [i_2 - 1] [i_1 + 1]) > (arr_1 [i_2])));
                                arr_22 [i_0] [i_5] [i_2] [i_3] [i_5] [i_5] [i_2] = ((!(arr_9 [i_5] [i_3] [i_0])));
                            }
                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                arr_26 [i_6] [i_1] [i_2] [i_1] [i_0] = ((+(((arr_5 [i_1 + 2] [i_2 - 2]) * (arr_18 [i_0] [i_1] [i_1 + 1] [i_1] [i_3 - 1])))));
                                arr_27 [i_3] [i_1] [i_2] [i_2] [i_1 - 2] [i_0] = (((arr_6 [i_1] [i_1] [i_1 - 1]) || (((var_4 ? (arr_6 [i_1] [i_1 - 2] [i_1]) : ((81 ? 3 : 0)))))));
                            }
                            var_18 = max(((0 ? 0 : 1)), ((((max(var_5, (arr_14 [i_1] [i_1] [i_1 + 2] [i_1] [i_1] [i_1])))) ? (((arr_0 [i_0]) ? 0 : var_0)) : ((var_9 ? (arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] [i_2]) : 6)))));
                            arr_28 [i_3 - 1] [i_2] [i_1] [i_0] = (arr_13 [i_0] [i_1] [i_2] [i_1] [i_0] [i_0]);
                            var_19 = (min(var_19, var_4));
                        }
                    }
                }
                arr_29 [i_0] [i_0] [i_0] = -1748612202;
            }
        }
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_20 -= (((arr_15 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) / (min(var_6, (((var_8 & (arr_32 [i_7]))))))));
        var_21 += ((1 & ((~(~var_8)))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        arr_36 [i_8] = 1882493217;
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 18;i_11 += 1)
                {
                    {
                        arr_43 [i_8] [12] [i_8] [i_8] [i_8] [i_8] |= 255;
                        arr_44 [i_10] [i_9] [i_11] = (((arr_24 [i_11 - 1] [i_11 - 1] [i_11] [i_11]) - ((var_1 ? (arr_35 [i_10]) : 254))));
                        var_22 = ((-2766273 ? -2147483637 : 1899669361));
                        arr_45 [i_8] [i_10] [i_11] [i_8] = ((arr_37 [i_10] [i_10] [i_10]) ? (arr_24 [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11 + 3]) : (-4 - 4));
                        var_23 = (~1);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 19;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 18;i_13 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_24 = (~712323693);
                            var_25 += (((max((((arr_5 [i_13] [i_13]) << (arr_53 [i_15] [i_13] [i_12 + 1]))), (arr_46 [i_12]))) & var_2));
                        }
                    }
                }
                var_26 = max((max((arr_10 [i_12] [i_12] [i_12] [i_12 + 1]), 942044506)), (min(var_2, (arr_10 [i_12] [i_12] [i_12] [i_12 - 1]))));
                arr_57 [i_12 - 1] = ((-((var_11 ? (arr_41 [i_13] [i_13] [i_13 + 2] [i_13] [i_13 - 2] [i_13]) : (arr_9 [i_13] [i_13 + 2] [i_12 - 1])))));
                var_27 = (((((((arr_31 [i_12]) ? (arr_50 [i_13] [i_13]) : (arr_20 [i_13] [i_13] [i_12])))) ? (var_11 % 1312382821) : var_5)) * (((arr_55 [i_12 - 1] [i_12 + 1] [i_13 - 1] [i_13 - 2]) ? (arr_55 [i_12 + 1] [i_12 - 1] [i_13 + 1] [i_13 + 1]) : (arr_55 [i_12 + 1] [i_12 - 1] [i_13 + 2] [i_13 - 1]))));
            }
        }
    }
    #pragma endscop
}
