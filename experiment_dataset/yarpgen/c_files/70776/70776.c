/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((min(((109 ? 3086090342 : -35)), (((~((var_11 ? var_19 : var_14))))))))));

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_21 = ((!(((1357881352 ? -2216856438066861768 : 64)))));
        arr_4 [i_0 - 2] [4] = (arr_0 [i_0]);
        arr_5 [i_0] = (arr_3 [i_0]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 = (max(var_13, (((!(((arr_7 [17]) || (arr_7 [i_1]))))))));
        arr_8 [i_1] [i_1] = (min(((min(var_6, (arr_7 [i_1])))), (max(42, var_19))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_23 |= -2887024806;
        var_24 = ((~((((max(var_18, (arr_10 [i_2])))) ? ((var_18 & (arr_9 [i_2]))) : (~var_19)))));
        arr_11 [i_2] [i_2] = ((((((((var_10 ? (arr_10 [i_2]) : (arr_10 [15])))) ? ((((!(arr_10 [i_2]))))) : (max(519402856, 2))))) || (((!614056427) || ((max(var_5, (arr_10 [i_2]))))))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_25 = (((arr_19 [i_3 - 1] [i_3 + 2] [i_4]) ? ((((arr_14 [i_5] [i_3] [i_2]) ? 8 : 254))) : ((+(((arr_9 [7]) ? (arr_16 [i_4] [i_4] [i_4] [i_5]) : (arr_17 [i_5] [i_3] [i_2])))))));
                        var_26 = (max(((((min(255, 6))) ? ((var_16 ? (arr_13 [i_2]) : var_12)) : ((var_1 ? var_5 : var_5)))), (((-((var_12 - (arr_17 [5] [5] [i_4]))))))));
                        arr_21 [i_2] = ((((var_7 ? ((var_15 ? (arr_15 [21] [21] [i_4]) : (arr_14 [i_2] [i_3] [i_5]))) : ((var_17 ? var_0 : 3775564449))))) ? ((((((var_4 ? 172 : (arr_13 [i_3]))) > (!-614056427))))) : ((~(min(var_13, var_0)))));
                        arr_22 [i_2] [1] [i_2] [i_5] = var_2;
                        arr_23 [i_2] [i_3] [6] [4] [i_2] [i_2] = ((-((((((arr_18 [i_2] [i_4]) ? -32743 : (arr_10 [i_2])))) ? var_6 : -57))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
