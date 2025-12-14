/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_11 ? var_14 : var_6)) - (max(var_14, var_12)))) - ((((var_14 + var_14) ? var_2 : -var_7))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 = (max(var_18, ((max(2147483647, ((+(max((arr_0 [i_0]), (arr_0 [i_0]))))))))));
        var_19 = ((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 2]) : (((arr_0 [i_0 + 2]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 2]))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, (((814084939 ? -2147483647 : -1417638862)))));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_21 = (min(var_21, (((-var_9 & (arr_6 [2] [2] [2] [i_0]))))));
                            var_22 = (min(var_22, (((arr_5 [11] [i_2 + 2] [i_1 - 1]) - ((((arr_4 [i_3 + 1] [i_2 + 1] [i_1] [i_0 - 1]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2]))))))));
                            arr_12 [i_0 - 1] = (((((((~(arr_0 [i_0])))) ? (((arr_10 [i_0] [i_1 - 2] [i_1 - 2] [16] [i_0] [i_3 - 2] [i_4]) / (arr_6 [i_4] [i_3 - 3] [i_1] [i_0]))) : (arr_10 [i_0] [i_1] [i_1 + 1] [i_3 - 2] [i_3 - 1] [i_4] [i_3 - 2])))) ? ((-(arr_6 [i_0] [i_1 + 1] [i_2] [i_4]))) : (arr_8 [i_4]));
                            arr_13 [i_1] [i_3] [i_3] [i_3] [i_3] [i_1] = (((arr_6 [18] [12] [12] [i_3]) != (((arr_7 [i_1] [10] [i_1] [i_1 + 1] [i_1] [i_1]) ^ (~var_13)))));
                        }
                    }
                }
            }
        }
        var_23 = max(((min((arr_3 [i_0] [i_0 + 1] [i_0 + 2]), (arr_3 [i_0] [i_0 + 1] [i_0 + 1])))), (max((arr_7 [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1]), (arr_7 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 2] [i_0]))));
        var_24 = (((arr_7 [12] [12] [i_0] [17] [i_0] [11]) ? ((~(arr_6 [i_0] [i_0] [i_0] [i_0]))) : ((-(max((arr_5 [i_0 + 2] [i_0 + 2] [i_0]), var_15))))));
    }
    var_25 = (max(var_5, var_3));
    #pragma endscop
}
