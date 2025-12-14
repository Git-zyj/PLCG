/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!var_14) != var_11));
    var_20 = (min(((~((max(var_14, var_0))))), 5895));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_14 [i_1] [i_2 - 1] [i_0] [i_0] [i_1] = arr_10 [5] [i_3] [i_2] [i_3];
                        arr_15 [i_0] [i_0] [i_1] [i_0] = (arr_8 [i_2 - 1] [i_2 + 1] [i_2 - 1]);
                        var_21 = (max(var_21, (arr_12 [i_0] [i_2 - 2] [i_2] [i_2 - 2] [i_1])));
                        arr_16 [i_1] [i_1] [0] [i_2] [5] [i_3] = (((((arr_13 [i_2 - 2] [i_2 - 2] [i_2] [i_2 + 1] [i_2 - 2]) + 2147483647)) >> 0));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        arr_20 [3] [i_1] [i_1] [i_1] = (arr_8 [i_0] [i_2 - 1] [i_2 + 1]);
                        var_22 &= -27796;
                        var_23 = (arr_5 [i_1]);
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_23 [i_1] [i_2] = ((((max((~var_7), var_18))) ? ((min(((min(1, 1))), (min(var_0, (arr_11 [i_5] [i_2] [i_1] [i_0])))))) : 116));
                        arr_24 [i_1] [i_1] [i_2 - 1] [i_5] = ((var_11 ? (arr_22 [i_0] [i_1]) : ((var_17 ? (arr_11 [i_1] [i_2 - 1] [i_5 - 1] [i_5]) : (arr_11 [i_1] [i_2 + 1] [i_5 - 1] [i_5])))));

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            var_24 = (min(var_24, var_0));
                            var_25 = (((arr_25 [i_5] [i_5 - 1] [i_5] [i_5] [i_5 - 1]) / (arr_18 [i_5] [i_1] [i_5] [6])));
                            arr_27 [i_5 - 1] [i_1] [i_1] [i_1] [i_1] = ((-1 ? (arr_26 [i_2] [i_2] [i_2] [i_2] [i_2 - 1]) : (~1)));
                        }
                        arr_28 [i_1] [i_1] [7] [i_1] = var_1;
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_33 [2] [i_0] [i_1] [i_7] = (((((arr_8 [i_2 - 1] [6] [i_7]) ? -80 : (arr_13 [i_2 + 1] [i_2] [i_2] [i_7] [8]))) >= ((((arr_10 [i_2 - 1] [i_2] [i_2 - 1] [i_7]) > var_12)))));
                        var_26 = (max(var_26, var_3));
                        var_27 = (arr_10 [i_0] [i_0] [i_2] [i_0]);
                    }
                    arr_34 [i_0] [i_1] [i_0] [i_0] = 1;
                    arr_35 [i_1] [i_1] [i_2] [i_2] = (arr_13 [i_0] [i_1] [i_2] [i_2] [i_0]);
                }
                for (int i_8 = 1; i_8 < 8;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        arr_40 [i_1] [i_1] = (((((arr_19 [i_0] [i_1] [i_0] [i_0]) >> (arr_0 [i_0]))) & ((((max(113, (arr_8 [2] [i_1] [i_0])))) ? (((arr_2 [i_0] [i_0]) ? var_5 : var_7)) : ((max(var_0, var_1)))))));

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_45 [i_0] [i_1] = min((((arr_19 [i_8] [i_1] [i_8 - 1] [i_8 - 1]) ? (arr_19 [i_8] [i_1] [i_8 - 1] [i_8]) : (arr_19 [9] [i_1] [i_8 - 1] [i_8 - 1]))), (arr_19 [0] [i_1] [i_8 - 1] [i_8]));
                            arr_46 [i_0] [i_0] [i_1] [7] [i_0] = ((~(arr_32 [i_0] [i_1])));
                            arr_47 [i_1] [i_1] [i_1] = (1 >= var_14);
                            var_28 = (max(var_28, (((((((arr_9 [i_0] [i_1]) ? ((137438949376 ? var_7 : var_18)) : (arr_41 [i_8] [i_8] [i_8 + 2] [i_8] [i_8 + 2])))) ? (arr_2 [i_0] [i_1]) : (((((min(-32748, 116))) >= ((var_2 ? (arr_10 [i_0] [i_1] [i_8] [i_9]) : var_16))))))))));
                        }
                        for (int i_11 = 2; i_11 < 7;i_11 += 1)
                        {
                            var_29 = ((-((-(arr_42 [i_11 - 1] [i_1])))));
                            var_30 = ((1 != (arr_11 [i_8 - 1] [i_8 + 1] [i_11 + 1] [i_11 + 2])));
                            var_31 = 5591120482969439035;
                        }
                        arr_50 [i_0] [i_1] [i_8] [i_1] = (arr_8 [i_0] [8] [i_9]);
                        arr_51 [i_0] [i_1] [i_8] [6] |= (arr_3 [i_9]);
                    }
                    arr_52 [i_8] [i_1] [i_8] [i_1] = ((((~(arr_2 [i_1] [i_1]))) & ((var_18 ? -97 : 126))));
                }
                for (int i_12 = 4; i_12 < 9;i_12 += 1)
                {
                    var_32 = (min(var_32, ((max((arr_44 [i_0] [i_12 + 1] [i_12]), ((18446744073709551615 ? var_10 : 2654140012608640741)))))));
                    arr_55 [9] [6] [i_1] = (((((1 ? var_17 : 0)) & (arr_49 [i_1] [i_0] [i_12 - 2] [i_12] [i_0]))));
                    var_33 = ((((min((((arr_12 [i_0] [i_12] [i_12] [i_0] [i_0]) ? (arr_39 [i_0] [i_0] [i_0] [i_1]) : var_0)), ((var_6 ? 4 : (arr_0 [5])))))) && ((max((-76 - -85), ((max(56, 51))))))));
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 8;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 9;i_14 += 1)
                        {
                            {
                                arr_61 [i_0] [i_1] [2] [i_1] = ((((((var_5 ? -23151 : var_15)) ? (arr_7 [i_1] [i_1] [i_14]) : var_12))));
                                var_34 = 71;
                            }
                        }
                    }
                }
                var_35 = 3;
                var_36 = var_16;
            }
        }
    }
    var_37 -= (max(0, ((~((-32760 ? var_6 : var_10))))));
    #pragma endscop
}
