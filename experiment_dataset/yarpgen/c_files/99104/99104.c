/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] = (max((max(5240326758905302991, 5240326758905302982)), ((var_2 - (((var_4 - (arr_6 [i_0] [i_0] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1 - 1] [18] = var_4;
                                var_11 += ((((max((max(1, var_0)), 2147483639))) ? 31664924 : ((((arr_10 [i_4] [i_4] [i_3] [i_0] [1] [i_0]) ? ((min((arr_11 [i_1]), (arr_13 [i_4] [i_2] [i_3] [i_2] [i_2] [16] [i_0])))) : (arr_3 [i_3]))))));
                            }
                        }
                    }
                    var_12 = (min(var_12, ((((arr_6 [9] [i_1 + 1] [i_2 + 2]) > (((arr_6 [i_0] [i_1 - 1] [i_2 - 1]) ? (arr_6 [i_1 + 2] [i_1 - 2] [i_2 + 1]) : (arr_6 [i_0] [i_1 - 1] [i_2 + 1]))))))));
                }
            }
        }

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_13 = (max(((~(max(var_8, 3131849408)))), ((min(((var_0 ? var_5 : var_3)), (var_7 / var_5))))));
            var_14 |= ((((max((!var_6), (arr_6 [i_0] [i_0] [i_0])))) ? ((((arr_0 [i_0]) ? (arr_5 [i_0] [i_5] [i_0]) : (~80)))) : (min(1, (max(var_0, (arr_17 [i_5])))))));
            arr_18 [i_5] = ((arr_16 [i_0] [i_5]) ? ((var_2 ? (((arr_16 [i_0] [i_5]) ? (arr_1 [19]) : (arr_0 [i_0]))) : ((~(arr_12 [17] [i_5] [i_5] [i_5] [i_0] [i_0] [i_0]))))) : ((251 ? 241 : -403459138)));
        }
        arr_19 [i_0] = ((((-(max(var_2, var_9)))) & (((max(-14823, var_6))))));
    }
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        var_15 = 1163117887;
        var_16 = (255 + -1);
        var_17 -= var_4;
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {

                /* vectorizable */
                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    var_18 = var_2;

                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        var_19 = (var_5 != -4);
                        var_20 = (min(var_20, ((((arr_0 [i_7 + 1]) ? (arr_0 [i_7 + 1]) : (arr_0 [i_7 + 1]))))));
                    }
                }
                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    arr_36 [2] [2] [12] |= (((((arr_16 [i_7 + 1] [i_7 + 1]) >= var_3)) ? (((max((arr_16 [i_7] [i_7 + 1]), (arr_16 [i_7 + 1] [i_7 + 1]))))) : (((arr_16 [i_7] [i_7 + 1]) ? (arr_16 [i_7 + 1] [i_7 + 1]) : 11076466574178365638))));
                    arr_37 [8] &= ((((arr_23 [i_7] [i_7 + 1]) ? 7829532560814679561 : (arr_28 [i_7 + 1] [i_8] [i_11 - 1]))));
                    var_21 -= ((min((arr_25 [i_7 + 1]), (~5390168237766058021))));
                    arr_38 [i_7] [i_7] [i_7 + 1] [i_7] = ((-12 > (min(-745582074, 1))));
                }

                for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                arr_46 [i_7] [i_7] = ((var_2 ? (((arr_10 [i_7] [i_7] [i_8] [i_12] [i_13] [i_14]) ? ((3851186889 ? var_3 : (arr_43 [i_12]))) : ((~(arr_39 [i_7 + 1] [i_7 + 1] [i_7] [i_7]))))) : var_4));
                                arr_47 [i_7] [i_7] [i_12] [i_13] [1] [i_14] [i_14] = ((((arr_45 [i_7] [11] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]) + 2147483647)) << ((((((arr_13 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1] [i_7]) || (arr_13 [i_7] [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])))) - 1)));
                            }
                        }
                    }
                    var_22 -= (((((var_1 ? ((-(arr_5 [i_7 + 1] [i_7 + 1] [i_7]))) : var_7))) ? (((arr_9 [i_7 + 1]) ? (((1 ? (arr_43 [i_8]) : (arr_21 [i_7] [i_8])))) : ((192 ? 1 : 3131849411)))) : ((((15800 >= (arr_6 [i_7 + 1] [i_7 + 1] [i_7 + 1])))))));
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
                {
                    arr_52 [i_15] [i_7] [i_15] = (arr_25 [i_7 + 1]);
                    arr_53 [i_7] [i_7] [i_15] = (arr_29 [9] [i_8] [9]);
                }
                for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
                {
                    var_23 ^= ((((max(var_3, var_2)))) | var_4);
                    arr_57 [i_7] [12] [i_8] [i_16] |= (min(var_6, (min((((-2073968237 ? -3270 : 120))), (((arr_5 [i_7] [i_8] [i_7]) ? var_6 : var_2))))));
                    var_24 += ((-(min((arr_6 [i_7 + 1] [i_7] [i_7 + 1]), (arr_6 [i_7 + 1] [i_7 + 1] [i_7 + 1])))));
                    var_25 += ((((arr_28 [i_7 + 1] [i_8] [i_7]) <= ((var_2 ? (arr_49 [i_8] [i_8] [i_16] [i_8]) : (arr_56 [i_7] [i_8] [i_8] [3]))))));
                }
                for (int i_17 = 0; i_17 < 16;i_17 += 1)
                {
                    var_26 = (min((max((max((arr_1 [i_7 + 1]), var_2)), (arr_17 [i_7 + 1]))), (max((~6401303454190205134), -var_7))));
                    var_27 ^= ((var_0 > ((min((arr_12 [i_7] [i_7 + 1] [i_8] [14] [i_17] [i_17] [i_17]), 68)))));
                }
            }
        }
    }
    var_28 = var_9;
    #pragma endscop
}
