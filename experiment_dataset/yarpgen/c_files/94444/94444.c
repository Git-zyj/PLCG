/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((((var_12 ? (var_10 & 3454960189) : (((30624 ? 1487543411 : -92)))))) & (~var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = (arr_3 [i_0]);
                                var_18 = (~((var_7 ? -109 : 67108864)));
                                arr_13 [i_0] [i_0] [7] [i_3] [i_4 + 1] = ((~((var_14 ? ((var_10 ? -46 : (-127 - 1))) : -26761))));
                            }
                        }
                    }
                    var_19 = (arr_2 [i_0] [i_1]);
                    arr_14 [i_0] [i_0] [8] [i_0] = (((((504726673 | (arr_4 [i_2] [i_0] [i_0])))) ? (arr_1 [i_0] [i_1]) : (((arr_11 [i_0] [i_1 - 1] [i_1 + 1] [i_1 - 1] [8] [i_2]) / (arr_4 [i_2] [i_1] [4])))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((-1 ? ((((((arr_8 [i_6] [i_5] [i_2] [i_2] [i_0] [i_0]) < 34528)) ? (((arr_3 [i_6]) & 3321323686)) : 3229))) : (((((arr_5 [i_0] [i_1]) + 3643030418879519795)) + -1735566793)))))));
                                arr_19 [i_0] [i_1 - 1] [12] [i_5] [i_5] [i_5] [i_6] = (((arr_15 [i_6] [i_6] [4] [i_2] [i_1] [i_0]) / var_15));
                                var_21 = 1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_0] = (arr_2 [i_0] [i_2]);
                                var_22 = ((((min(79, ((7673 ? var_12 : 3384618350))))) ? (((-6419169303024955817 / -18903) / ((((arr_22 [i_0] [i_1] [i_2] [i_7] [i_7] [i_8]) ? var_4 : var_3))))) : (((var_13 ? ((~(arr_6 [i_0] [i_0] [i_0]))) : (max(26670, var_15)))))));
                                var_23 = ((((((((var_6 ? var_1 : 0))) ? ((var_7 ? 523954136 : -117)) : (arr_18 [i_8] [i_7] [i_7] [8] [i_7] [i_0] [i_0])))) ? (arr_23 [i_0] [i_1] [1] [i_7] [i_8] [i_8]) : (((~32) ? ((((arr_21 [i_7] [i_7] [i_2 + 1] [0]) ? (arr_10 [0] [i_1] [i_1] [i_1] [i_1 + 1] [i_1]) : var_10))) : (arr_7 [i_1 + 1] [i_1 + 1] [i_7] [i_8])))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        arr_30 [6] [i_9] = (arr_28 [6]);
        arr_31 [i_9] = (((((~((var_1 ? 2199023255552 : (arr_27 [i_9])))))) ? (((var_4 * 0) ? ((var_2 | (arr_28 [i_9]))) : (((var_0 ? var_11 : (arr_27 [i_9])))))) : (((((255 / (arr_29 [i_9] [i_9]))) * 0)))));
        var_24 = (arr_28 [i_9]);
    }
    #pragma endscop
}
