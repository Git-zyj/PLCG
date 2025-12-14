/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 |= ((1 ? 65535 : 248));
                    var_20 = 2147483584;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] [19] = (max((((0 ? 248 : 18))), ((var_14 >> (((arr_6 [12] [i_1] [i_2 - 2]) - 3005972563))))));
                        var_21 ^= (arr_4 [1]);
                        arr_13 [i_0] [i_1] [20] = 18302628885633695744;
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((((((arr_10 [i_3] [i_1] [i_2 - 1] [i_1]) ? 4294967295 : (arr_10 [i_0] [i_1] [i_2 + 3] [i_3])))) ? (~4721087312189720345) : 211));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_1] [i_2] [i_0] [20] |= (arr_16 [i_5] [i_4 + 2] [i_4]);
                            var_22 = var_14;
                        }
                        for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            arr_24 [19] [4] [i_1] [i_2] [i_4] [i_6] [i_6] = (((arr_18 [i_6 + 3] [i_6 + 3] [6] [9] [i_4 - 2]) > 243));
                            var_23 += (((arr_22 [i_4 + 2] [i_4 - 2] [i_2 - 2] [i_2 + 1] [i_2 + 2]) ? (arr_22 [i_4 + 2] [i_4 - 2] [i_2 - 2] [i_2 + 1] [i_2 + 2]) : (arr_22 [i_4 + 2] [i_4 - 2] [i_2 - 2] [i_2 + 1] [i_2 + 2])));
                            arr_25 [0] [22] [22] [i_4] [i_4] = var_11;
                            var_24 -= ((((((arr_18 [i_0] [i_1] [i_2 + 3] [i_4] [i_6]) ? (arr_18 [i_6] [i_4] [i_2] [i_1] [20]) : 0))) ? 255 : (((arr_5 [i_4] [i_6]) ? var_15 : (arr_5 [i_0] [i_0])))));
                        }
                        arr_26 [i_0] [i_0] [i_2] [i_4 - 1] = 16093215068846235876;
                        var_25 &= (((arr_2 [i_4 + 2]) ? 0 : (arr_2 [i_4 - 1])));
                        arr_27 [i_4] &= (((arr_17 [i_2] [i_2] [i_2 + 1]) >> 1));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [i_7] = 54524;
                        var_26 = (((arr_17 [i_2 + 3] [i_7 + 1] [i_7]) ? (arr_15 [i_0] [i_7 + 2] [i_2] [i_7] [i_0]) : (arr_17 [i_2 - 1] [i_7 + 1] [i_2 - 1])));
                        arr_31 [i_7] [i_2] [i_1] [1] [4] = (((((255 ? 2442752289926509194 : -1278713343))) ? var_16 : (arr_15 [i_0] [i_1] [i_0] [i_0] [i_1])));
                        var_27 = (min(var_27, ((((arr_7 [i_2 - 2] [i_7 + 2] [i_7 + 1]) ? (arr_7 [i_2 - 1] [i_7 + 2] [i_2]) : (arr_7 [i_2 + 1] [i_7 + 2] [i_7 + 2]))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        var_28 = (min(var_28, (arr_19 [i_0] [i_0] [6] [i_0] [i_0])));
                        var_29 = (max(var_29, (((0 ? (arr_29 [i_2 - 2] [i_2] [1]) : (arr_16 [i_2 - 1] [i_2 - 1] [7]))))));
                    }
                    var_30 *= (((((2047 ? 240 : 20))) ? (((arr_33 [i_2] [i_2 + 2] [i_2 + 3] [i_2]) ? (arr_33 [i_2] [i_2 + 1] [i_2 - 1] [i_2]) : (arr_33 [i_1] [i_2 - 1] [i_2 + 1] [i_2 + 1]))) : (((arr_33 [i_1] [i_2 - 1] [i_2 + 2] [22]) ? (arr_33 [i_2] [i_2 + 1] [i_2 + 2] [i_2]) : (arr_33 [i_0] [i_2 - 1] [i_2 - 1] [24])))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_31 = (arr_16 [i_9] [i_9] [i_9]);
        arr_36 [i_9] [4] &= (144115188075855871 + 2047);
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 20;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_32 = (max(var_32, (((var_9 ? 14 : var_6)))));
                                var_33 = (max(var_33, ((((arr_39 [i_11 - 1] [i_11 + 4] [i_12 + 1]) + 239)))));
                                var_34 = var_11;
                            }
                        }
                    }
                    arr_49 [i_9] [i_10] = (arr_11 [i_11 - 1] [i_11 + 2] [1] [i_11 + 3] [i_11 + 1] [1]);
                }
            }
        }
        var_35 = (arr_41 [i_9]);
        var_36 = (arr_11 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
    }
    var_37 ^= (max(13, ((var_2 ? 511 : var_11))));
    var_38 = var_2;
    #pragma endscop
}
