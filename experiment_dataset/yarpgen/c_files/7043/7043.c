/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = ((((~(-127 - 1))) & 1));
                                var_17 += 121;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_5] [i_1] = (-7935 >= 1);
                        var_18 += -813;
                        var_19 += var_13;
                        arr_20 [i_1] [10] [i_5] [i_6 - 2] [i_6 - 2] = ((!(arr_2 [i_1 - 3])));
                    }
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        arr_25 [i_1] [i_1 + 2] [i_1 + 2] [i_7 + 1] = ((var_10 ? (arr_4 [8] [i_1 - 4] [10]) : (arr_4 [1] [i_7 + 1] [i_5 + 1])));
                        var_20 = (~10712567346472108359);
                    }
                    arr_26 [i_0] [i_1] [i_1] = 61440;
                    arr_27 [7] [i_0] [i_1] [i_5 + 1] = (!56);
                    var_21 = (max(var_21, (arr_17 [i_0] [i_1] [i_1] [i_1 - 3] [i_1] [10])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 8;i_9 += 1)
                        {
                            {
                                arr_36 [i_0] [i_0] [i_5 + 2] [i_5] [i_1] [1] [1] = var_15;
                                var_22 *= ((var_0 ? (arr_3 [i_1 + 2] [i_8]) : (arr_1 [i_9 + 3])));
                                var_23 = (min(var_23, ((((arr_13 [i_5 + 2] [i_1 + 3] [i_1] [i_0]) ^ var_4)))));
                                arr_37 [1] [i_0] [i_1] [i_1] [5] [i_9] = arr_6 [i_1] [i_5];
                            }
                        }
                    }
                }
                for (int i_10 = 1; i_10 < 9;i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 9;i_12 += 1)
                        {
                            {
                                arr_47 [i_1] [i_1] [i_10] = var_13;
                                var_24 = (arr_23 [i_0] [i_0] [i_10]);
                                arr_48 [5] [i_1] [i_10] [i_10] [i_11] [i_1] [i_12] = (-809 || -3542284602941002341);
                                arr_49 [i_10] [i_10] [i_10] [8] [2] [i_10] [8] &= (arr_34 [6] [i_12 - 2] [i_12] [i_12] [i_12 - 2]);
                            }
                        }
                    }
                    var_25 = 11110;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        arr_52 [i_13] = ((~(arr_51 [i_13] [i_13])));
        var_26 = (min(var_26, (~24)));
        /* LoopNest 2 */
        for (int i_14 = 3; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 22;i_15 += 1)
            {
                {

                    for (int i_16 = 1; i_16 < 21;i_16 += 1)
                    {
                        arr_59 [i_13] [i_13] [i_13] [20] [i_13] = ((((((arr_56 [i_13] [i_14] [13] [i_16]) ? (arr_54 [i_14] [i_14] [i_14]) : (arr_50 [i_15] [i_15])))) <= ((var_12 - (arr_58 [i_16 - 1] [10] [i_15 + 1] [0])))));
                        var_27 += (~23362);
                        arr_60 [i_13] [i_13] = (!var_4);
                    }
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        var_28 = (arr_62 [i_15 + 1] [i_15 - 3] [i_15] [i_15] [i_15 - 1]);

                        for (int i_18 = 1; i_18 < 21;i_18 += 1)
                        {
                            arr_66 [i_13] [5] [i_13] [i_13] [4] [i_14] [i_18] = (((61445 % -64) * (arr_62 [i_15 + 1] [i_15 + 1] [i_15 - 3] [i_14 - 2] [i_14 - 1])));
                            var_29 -= ((~((-118 ? -3340180373330600630 : var_7))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 0;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 1;i_20 += 1)
                        {
                            {
                                arr_71 [i_13] [i_13] [i_13] [i_13] [i_20] = var_0;
                                var_30 -= (~-1003754110);
                                var_31 = (~1);
                                var_32 = (((arr_54 [i_19] [i_19] [i_19 + 1]) >> (((arr_54 [i_19 + 1] [i_19 + 1] [i_19 + 1]) - 41115))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_21 = 0; i_21 < 1;i_21 += 1)
    {
        var_33 = (arr_54 [19] [i_21] [i_21]);
        var_34 = (max(var_34, (~var_6)));
    }
    #pragma endscop
}
