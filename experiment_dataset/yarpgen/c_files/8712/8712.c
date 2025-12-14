/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((7 ? 65526 : 24))) ? var_11 : var_6))) ? var_9 : (((9178613186966715007 ? var_8 : var_18)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = (65520 ? 65528 : -7);
                    var_21 = (max(var_21, ((max((~-1), 8925596768699645514)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 = (((arr_12 [i_0] [i_1] [i_0] [i_1 - 1] [i_2] [5] [i_4]) || (arr_0 [i_0])));
                                var_23 ^= (((((!-7) > (arr_1 [i_0]))) ? 0 : (((max((((65512 && (arr_11 [10] [0] [12] [i_3] [i_2] [i_1] [10])))), (arr_12 [i_0] [i_0 + 2] [i_1] [i_1] [i_1] [i_1 - 1] [i_3])))))));
                                arr_14 [12] [i_0] [i_0] = ((8388096 ? 65528 : 65520));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_2] [i_1 - 1] = 35247;
                    var_24 *= 15;
                }
            }
        }
    }

    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        var_25 = (arr_16 [i_5] [12]);
        var_26 = (max(var_26, 2715087854));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    var_27 = (max(var_27, 1579879442));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_28 = (((((((~(arr_24 [1] [i_6] [i_7] [i_9])))))) <= (((var_12 % (arr_16 [9] [18]))))));
                                var_29 = ((579358722625732463 ? (((((0 || (arr_21 [i_5 - 1] [i_6]))) && (arr_23 [i_5] [20] [i_7] [i_8])))) : -29393));
                                var_30 += (arr_29 [i_9] [i_8] [15] [i_6] [2] [i_6] [2]);
                                var_31 = (((!35247) ? (max((arr_19 [i_6]), (arr_19 [i_6]))) : (~22)));
                            }
                        }
                    }
                    arr_30 [i_6] [1] [1] [i_7] = (20 ? -30 : 18446744073709551609);
                    var_32 = (((max(((((arr_20 [i_7]) ? 51409 : (arr_18 [1] [i_6] [1])))), (max((arr_22 [i_6]), 2715087838))))) ? (arr_21 [i_7 - 1] [i_6]) : (((((((arr_21 [i_5 + 3] [i_5 + 3]) ? -1 : var_8))) != (max((arr_27 [i_5] [i_6] [i_5 + 2] [i_5] [i_5]), (arr_21 [16] [1])))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 3; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        {
                            var_33 += (arr_27 [i_10] [i_13] [20] [i_13] [10]);
                            arr_45 [i_10] [11] [8] [i_13] [i_11] = ((((-(arr_34 [i_12])))) ? (arr_39 [i_10] [i_11] [15] [12]) : 53681);
                        }
                    }
                }
            }
            var_34 = ((arr_25 [0] [i_11] [0] [i_11]) ? var_15 : (arr_23 [i_10] [11] [20] [i_11]));
            arr_46 [i_11] [i_11] [16] = ((~((var_9 ? var_7 : (arr_26 [i_11] [i_11] [i_11] [i_11] [i_11])))));
        }
        for (int i_15 = 2; i_15 < 17;i_15 += 1)
        {
            var_35 ^= ((1579879454 ? (arr_23 [i_10] [i_15 - 1] [i_15] [i_15 + 1]) : (arr_23 [i_15 + 1] [1] [i_10] [i_15 - 1])));
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 15;i_17 += 1)
                {
                    {
                        var_36 = (arr_39 [i_16 + 1] [i_16 + 1] [i_15 - 1] [i_10]);
                        arr_53 [16] [i_15] [i_15] [8] [i_15] = var_15;
                    }
                }
            }
        }
        var_37 = 2147483643;
    }
    var_38 = (~var_11);
    #pragma endscop
}
