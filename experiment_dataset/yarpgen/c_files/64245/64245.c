/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((0 ? 1 : 1));
    var_14 = (max(var_14, ((((!38614) + 47)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_11 [9] [i_1] = (((((-4 >= -19710) | (arr_0 [i_0]))) << (var_5 >= var_12)));

                    for (int i_3 = 3; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        arr_15 [i_3] [i_1] [i_1] [21] = (max((arr_0 [i_3 - 3]), (max((min(var_10, 63766)), ((min((arr_10 [14] [i_1]), var_9)))))));
                        var_15 = (max(var_15, ((((arr_5 [i_0] [i_3 + 2]) ? ((var_2 ? ((1 ? 0 : 1)) : (arr_5 [i_0] [i_0]))) : ((((var_3 >= (arr_2 [i_0]))) ? 167 : var_0)))))));
                        arr_16 [i_1] = var_6;
                    }
                    for (int i_4 = 3; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [7] [1] = ((((((((arr_2 [21]) ? 1 : (arr_5 [i_1] [8])))) ? ((var_11 ? (arr_1 [i_1] [i_2]) : var_9)) : (~var_9))) | (((-18 + 63058) ? 134 : 759))));
                        var_16 = (min(var_16, ((((var_10 ? (arr_17 [i_0 + 2] [i_0] [i_0] [i_2] [i_4]) : (((arr_2 [i_0 - 1]) ? var_7 : (arr_1 [i_1] [16])))))))));
                        arr_20 [i_0] [i_0] [i_0] [i_1] [16] = ((+(((arr_18 [i_0 + 3] [i_0] [i_0] [4]) ? var_7 : (arr_6 [i_1] [i_2])))));
                        var_17 = (((((1 ? (arr_17 [2] [i_4] [i_0] [14] [i_2]) : 118))) ? var_3 : (((((arr_2 [13]) + var_2))))));
                    }
                    for (int i_5 = 3; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_18 = ((1 ? (((arr_10 [3] [5]) ? ((((arr_13 [1] [i_1] [17] [i_5]) > (arr_14 [i_1] [1] [i_2] [13])))) : (arr_6 [i_1] [i_5]))) : (((1 >= 1) ? (arr_0 [i_0]) : (var_9 < var_0)))));
                        arr_24 [i_1] [i_1] [i_1] [i_5 + 1] = var_0;
                        var_19 = (arr_2 [i_2]);
                    }
                    arr_25 [i_0] [i_1] [8] [i_2] = (0 + 98);
                }
            }
        }
    }
    var_20 += var_4;
    #pragma endscop
}
