/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_3 > var_13) / var_12)) << ((((((var_5 ? var_1 : var_1))) || (var_8 < var_14))))));
    var_17 = (64797 + 755);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [12] = (arr_0 [i_0] [i_0]);
        var_18 += (arr_0 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (64806 > 1);
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            arr_17 [i_1] [i_3] [i_4] = (((arr_1 [i_0]) ? ((((arr_8 [i_0] [i_2 + 1] [i_4]) ? (arr_4 [i_0] [23]) : (arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] [2])))) : (((arr_11 [i_1] [i_1]) ? (arr_6 [i_4]) : (arr_0 [i_0] [i_1])))));
                            arr_18 [i_2] [i_2] [i_2] [i_2] = (((arr_4 [i_4] [i_1]) ? (((arr_10 [i_0] [i_1] [i_0] [i_3] [i_4]) << (((((arr_2 [i_2]) + 1069212497)) - 12)))) : (((arr_12 [i_0] [i_1] [5] [i_4]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_12 [i_3] [i_3] [i_3] [i_3])))));
                            var_19 = ((((((arr_5 [i_0]) ? (arr_6 [i_3]) : (arr_1 [i_4])))) ? (((arr_0 [5] [i_3]) + (arr_9 [i_0] [i_0] [i_0] [i_0]))) : ((((arr_16 [9] [i_0] [i_1] [i_2] [i_1] [i_1] [i_1]) + (arr_13 [i_0] [i_0] [i_2] [i_2] [i_4] [i_4]))))));
                        }
                    }
                }
            }
            var_20 = (((1396634621 & 752) || (((arr_5 [16]) <= (arr_2 [i_0])))));
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 20;i_7 += 1)
            {
                {
                    arr_27 [i_5] [i_5] [i_6] [i_7] = ((((((((arr_21 [i_7 + 4] [i_7]) + 2147483647)) << (((((arr_2 [i_6]) + 1069212483)) - 12))))) ? (((arr_22 [i_6]) & (arr_6 [i_5]))) : (arr_6 [i_6])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_21 = (((((arr_9 [i_8] [i_6 - 1] [i_8] [6]) - (arr_29 [i_5] [i_5] [i_7 - 4] [i_8] [1]))) > (((((arr_9 [0] [0] [i_8] [0]) != (arr_2 [i_8])))))));
                                arr_34 [i_5] [i_5] [i_6] [i_5] [i_8] [i_6] [11] = ((((((arr_1 [i_6]) & (arr_8 [i_5] [i_6 - 1] [i_7])))) ? (((arr_29 [i_5] [4] [i_7] [i_8] [i_9]) & (arr_22 [i_6]))) : (((arr_16 [i_5] [i_5] [i_5] [i_5] [i_7] [i_8] [i_8]) ? (arr_10 [i_5] [i_5] [i_5] [i_8] [i_9]) : (arr_29 [i_7] [i_7] [i_7] [i_7] [i_7])))));
                                arr_35 [i_5] [i_6] [i_5] [i_7] [i_7 - 1] [i_8] [i_9] = (((arr_2 [i_7]) != ((((arr_10 [i_5] [i_6] [i_7] [i_6] [i_9]) != (arr_11 [i_7] [i_9]))))));
                                arr_36 [i_5] [14] [14] [14] [i_8] [i_6] = (arr_16 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
                            }
                        }
                    }
                }
            }
        }
        var_22 = (((((arr_31 [i_5] [i_5] [i_5] [i_5] [i_5]) % (arr_23 [i_5] [i_5]))) >= ((((arr_11 [i_5] [i_5]) << (arr_33 [i_5] [1] [1] [i_5] [i_5] [i_5]))))));
        arr_37 [i_5] [i_5] |= ((((((arr_0 [i_5] [i_5]) ? (arr_10 [i_5] [1] [i_5] [4] [i_5]) : (arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [1])))) < (((arr_19 [i_5]) ? (arr_13 [i_5] [i_5] [1] [i_5] [i_5] [i_5]) : (arr_0 [i_5] [i_5])))));
        var_23 = (((((arr_15 [i_5] [i_5] [21] [i_5] [i_5] [i_5] [i_5]) > (arr_24 [i_5] [i_5] [i_5] [i_5])))) < ((((arr_13 [0] [i_5] [i_5] [i_5] [i_5] [17]) == (arr_25 [i_5] [i_5] [i_5] [1])))));
    }
    #pragma endscop
}
