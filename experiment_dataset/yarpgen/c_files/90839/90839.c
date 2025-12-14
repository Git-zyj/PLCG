/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [10] [0] [i_2] [10] [i_2] &= ((+((((((arr_5 [i_1] [i_1] [i_1]) < 3643265167))) & (arr_10 [i_2 + 1] [i_0 + 1] [i_0 + 1] [i_3])))));
                            arr_12 [i_0] [i_0] [i_1] [i_3] [i_2 + 1] [i_3] = (arr_7 [i_0] [i_1]);

                            for (int i_4 = 1; i_4 < 11;i_4 += 1)
                            {
                                var_14 -= ((((((arr_4 [i_0 + 1] [i_2 - 1]) | ((-4937850338314823506 / (arr_3 [i_0 + 1])))))) || (((((min((arr_9 [i_0] [i_0] [i_0] [i_3] [i_3] [i_4]), 401))) | 1058758782)))));
                                var_15 |= ((((max(1, ((93 ? (arr_0 [i_4]) : 416))))) ? 1 : (((arr_9 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0]) >> (2147450880 - 2147450859)))));
                                arr_15 [10] [i_3] [i_3] [i_3] [i_3] [i_3] = ((((min((arr_13 [i_0 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]), (arr_6 [i_0 + 1])))) ? ((max((arr_6 [i_0 - 1]), (arr_6 [i_0 + 1])))) : (arr_13 [i_0 - 1] [i_2 + 1] [i_2 + 2] [i_2 + 2])));
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_3] = min((max((arr_7 [i_0 - 1] [i_4 - 1]), (arr_7 [i_0 - 1] [i_4 + 1]))), ((max((arr_14 [i_0] [i_1] [i_1] [i_3] [8] [i_2]), (var_11 || var_12)))));
                                var_16 &= ((385 ? ((max((arr_6 [i_0 + 1]), (arr_6 [i_0 + 1])))) : 8282146250772981451));
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                var_17 = ((((((arr_0 [i_2 + 1]) ? 385 : (arr_0 [i_2 + 2])))) ? 1 : (((arr_0 [i_2 - 1]) - (arr_0 [i_2 - 1])))));
                                var_18 = ((!(((0 - (var_9 << 0))))));
                            }
                            var_19 = (min(((48191 % ((((arr_18 [i_3]) && var_13))))), 17329));
                        }
                    }
                }
                arr_19 [i_0] [i_0] [i_0] = (((arr_7 [i_0] [i_1]) ? (arr_0 [i_0 + 1]) : (max(48171, var_2))));
                arr_20 [i_0] [4] = (((((-4858168057595401290 / var_10) ? (((33 ? 13774 : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_1])))) : (arr_1 [i_0] [1]))) * ((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1]))))));
            }
        }
    }
    var_20 -= 8;
    #pragma endscop
}
