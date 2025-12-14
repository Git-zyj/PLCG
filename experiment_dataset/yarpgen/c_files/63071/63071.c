/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 = (arr_5 [1] [i_0 + 1] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_11 = ((~(max(1, (arr_14 [i_0] [8] [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                                var_12 = var_4;
                            }
                        }
                    }
                    var_13 = (max(((((var_1 != var_0) >= ((var_1 ? -36 : 30))))), (((~(arr_13 [i_0]))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_14 = (20 / (arr_11 [1] [i_0 + 1]));
                        var_15 = (((arr_7 [i_0] [i_0] [i_0 + 1]) % -43));
                        var_16 += ((var_2 ? (arr_13 [i_1]) : ((var_9 ? var_8 : (arr_12 [i_0 + 1] [i_0] [i_1] [i_1] [0] [4] [i_5])))));
                        arr_17 [i_0] [i_0] = ((-var_4 ? (var_6 <= 19) : ((5 ? var_2 : var_4))));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_17 = ((max(var_5, (-32767 - 1))));
                        arr_22 [i_0] [i_2] = (((((~((max(-40, 21)))))) > (min((arr_13 [i_0]), (arr_11 [i_0 + 1] [i_1])))));

                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            arr_26 [i_0 + 1] [i_7 + 1] [i_2] [i_6] [i_0] = (max(((((max(0, (arr_8 [i_0])))))), ((((max(-60, 35))) ? ((min(0, (arr_16 [13] [i_7 + 3] [i_0])))) : (16750095341027490514 | var_7)))));
                            var_18 = (arr_18 [i_0] [i_1] [i_2] [i_7]);
                        }
                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            var_19 += (!var_7);
                            var_20 -= (min(9764479588666928127, ((-239 ? ((((60 != (arr_1 [i_6]))))) : (arr_6 [i_6])))));
                            arr_29 [i_0] [i_1] [i_2] [i_6] [i_0] = (((((arr_27 [i_0]) ? var_0 : (arr_24 [10] [i_8] [i_8 + 1] [i_8 + 2] [i_8] [i_8] [i_8 + 1])))) && (((~(!110)))));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            arr_34 [i_0] [9] [i_2] [i_6] [i_0] = ((var_2 | ((max(1286909971, -1286909965)))));
                            arr_35 [i_0] [i_1] [15] [i_0] = 243;
                            var_21 = 51;
                        }
                        var_22 = (max(((min(33, (max(-21, 1))))), 41778));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_23 = ((30 ? 14884066344059318308 : 55));
                            var_24 |= (((min((((arr_40 [i_0] [i_1] [i_2] [i_2] [1]) ? (arr_37 [i_11] [i_10] [i_2] [i_1]) : 1696648732682061093)), 11509945030207177663)) >> 1));
                            var_25 = (min((arr_8 [1]), (min((var_3 & var_7), ((max(var_8, (arr_30 [i_0] [i_2]))))))));
                        }
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            var_26 ^= (max((arr_33 [i_10] [i_1] [i_2] [i_10] [i_12] [i_10] [i_0 + 1]), (min(-34, 0))));
                            arr_46 [i_2] [i_1] |= (max((max(((min(var_2, var_1))), (min(var_7, 41963)))), var_4));
                        }
                        var_27 = (max((((14884066344059318327 || (((~(arr_24 [4] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))))))), (min(0, (arr_13 [i_0])))));
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_28 = ((-(arr_8 [i_1])));
                        var_29 = (max(var_29, (1286909964 >= 23572)));
                    }
                }
            }
        }
    }
    var_30 |= (max((var_3 | var_8), (max(var_4, var_8))));
    var_31 = var_5;
    #pragma endscop
}
