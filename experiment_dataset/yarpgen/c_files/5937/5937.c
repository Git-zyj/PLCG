/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = var_1;
    var_18 = (((~var_5) * var_7));
    var_19 *= var_12;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = ((!((max((max((arr_3 [14]), var_0)), (arr_3 [i_0 - 4]))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_1] [i_2] [i_3] [i_4] |= ((+(((arr_2 [i_3 + 3]) + (arr_5 [i_0] [i_0])))));
                                var_20 = (max(var_20, ((+(min(((min((arr_10 [13] [1] [i_2] [1]), var_0))), (arr_12 [i_3] [i_1])))))));
                                var_21 |= (min((((((arr_0 [i_0 - 3]) > var_7)) ? (var_11 % var_9) : (arr_2 [i_3]))), (((arr_1 [i_0 - 4] [i_3 + 1]) << (var_1 - 4097572719)))));
                                arr_14 [i_1] [i_3] [i_1] [i_2] [i_1] [i_1] [i_1] = var_13;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_1] = (arr_8 [i_0] [i_1] [16] [i_0 + 1]);

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_22 = var_14;
                            arr_22 [i_0] [11] [i_2] [15] [i_1] = var_14;
                            var_23 = ((((-(arr_3 [i_6]))) <= var_0));
                        }
                        arr_23 [16] [i_1] [i_2] [i_1] = (((arr_2 [i_0 - 2]) ? var_8 : (((var_8 ? var_11 : (arr_8 [i_0] [i_1] [1] [1]))))));
                        var_24 &= arr_1 [i_2] [i_2];
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_25 = (max((((arr_27 [9] [i_0 - 3] [i_0 - 3] [i_7] [i_8]) * (arr_21 [i_0 + 3] [15] [i_0 + 2] [i_0] [i_0]))), var_9));
                            arr_30 [i_0] [i_1] [i_2] [i_1] [i_8] = ((~(((var_9 || var_0) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_3 [i_0 + 1])))));
                            arr_31 [i_1] [i_7] [11] [i_1] [12] [i_1] = (~1342);
                            arr_32 [12] [17] [i_2] [i_1] [16] [17] [i_8] = ((var_10 || ((min(var_12, var_6)))));
                            var_26 = (((-(arr_10 [i_0] [i_0 + 2] [i_0] [i_0 + 2]))));
                        }
                        arr_33 [i_1] [i_1] [i_2] [i_7] = (((arr_24 [i_0 + 1] [1] [i_0 + 2] [i_0]) ? -var_10 : -var_5));
                        arr_34 [i_0] [i_1] [i_1] [i_0] [i_7] = ((var_8 * (((!(arr_3 [i_7]))))));

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            var_27 = -var_9;
                            arr_37 [i_9 - 1] [i_1] [i_0] [i_1] [i_0] = ((arr_20 [i_0 - 4] [i_1] [i_0 - 4] [i_0 - 1]) ? var_6 : (arr_18 [i_0] [i_1] [1] [i_2] [i_9 - 1] [i_2] [i_0 + 1]));
                            arr_38 [i_0] [i_0] [i_2] [10] [i_1] = ((~(arr_12 [i_0 + 3] [i_0 - 1])));
                        }
                    }
                    arr_39 [i_0] [i_1] = ((((((arr_16 [i_0 - 4] [1] [2] [i_0 + 3] [i_2]) ? (arr_11 [i_0 + 2] [i_1] [i_2] [i_1] [1] [i_0]) : (arr_16 [i_0 + 1] [16] [1] [i_1] [15])))) ? (~var_4) : (arr_11 [i_0 + 1] [i_1] [i_2] [i_2] [i_0] [i_2])));
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    var_28 ^= var_0;

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_29 = (((((~(arr_18 [i_0] [i_0] [i_0] [1] [i_0] [i_0] [i_0])))) ? (arr_3 [i_1]) : (arr_10 [i_10] [15] [i_10] [i_10])));
                        var_30 -= var_2;
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {

                        for (int i_13 = 1; i_13 < 19;i_13 += 1)
                        {
                            arr_49 [i_1] [i_1] [9] = ((+(((arr_27 [i_1] [20] [1] [i_1] [i_1]) ? (arr_48 [i_1] [i_1] [12] [i_1] [i_1]) : (arr_47 [16] [i_1] [1])))));
                            var_31 = var_10;
                            var_32 = ((~((var_12 ^ (arr_35 [i_1] [7] [i_12] [i_1] [i_1] [i_1])))));
                            var_33 |= (~var_14);
                        }
                        arr_50 [i_1] = var_3;
                        arr_51 [i_1] [i_1] [i_10] [i_12] = ((-(arr_8 [i_1] [10] [i_12] [8])));
                    }
                }
                arr_52 [i_1] = ((((((arr_47 [i_0] [1] [20]) ? (arr_11 [i_0] [i_1] [9] [i_0 - 2] [i_1] [i_0]) : (arr_11 [i_0] [i_1] [19] [i_0 - 3] [i_1] [16])))) ? (~var_9) : var_0));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        {
                            var_34 = (((((-(arr_57 [i_1] [i_0 - 4] [i_0 + 3] [i_0 + 2])))) ? -var_7 : (((arr_57 [i_1] [i_0 - 2] [i_0 - 3] [i_0 - 1]) + (arr_57 [i_1] [i_0 + 1] [i_0 + 2] [i_0 - 2])))));
                            var_35 = ((-(((!((((arr_5 [i_0] [i_1]) ? var_9 : var_9))))))));

                            for (int i_16 = 0; i_16 < 21;i_16 += 1)
                            {
                                var_36 = var_9;
                                arr_61 [i_0] [16] [i_14] |= (arr_55 [i_15]);
                                arr_62 [i_1] [i_0] [i_1] = (((((var_0 ? var_14 : var_6))) << (-var_3 + 14)));
                                var_37 = (((((~(!0)))) ? var_13 : ((min(((min(var_5, var_5))), (arr_36 [i_0 - 3] [i_0 + 2] [i_0] [i_0 - 3] [i_0]))))));
                                var_38 = (((~(arr_35 [i_1] [i_15] [i_14] [i_1] [i_0] [i_1]))));
                            }
                            var_39 = ((-((((arr_7 [i_0] [1] [i_1] [i_14] [i_15] [i_15]) ? (arr_27 [10] [20] [10] [i_15] [10]) : (arr_44 [i_1] [1] [1] [i_1]))))));
                            var_40 ^= var_14;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
