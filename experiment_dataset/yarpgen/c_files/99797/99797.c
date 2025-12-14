/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((((min(var_5, var_4))) ? -1003993936 : ((var_1 ? var_3 : var_11)))))));
    var_13 = (var_2 >= var_1);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_1] [i_2 - 3] [i_3] [i_4] = (((-17888 / var_6) ? ((var_10 % (arr_5 [i_1 + 2] [i_0 - 1]))) : (max((17858 == 15297890886791251600), var_11))));
                                arr_18 [i_0] [i_3] [i_3] [i_1 + 2] [i_4] [i_1] = ((((min(var_6, var_1))) ? (((((var_2 ? (arr_15 [i_3 + 1] [i_0] [i_0]) : (arr_16 [i_4] [i_3] [i_2] [i_1] [i_0 - 4] [i_0 - 3])))) ? (((arr_7 [i_4] [i_3] [i_4] [i_3 + 2]) ? 34279 : -5753680259507515427)) : ((max(var_3, 1))))) : (((-((max((arr_13 [i_0 + 1] [i_1]), (arr_10 [1] [i_1 + 2] [i_3 - 1] [i_2 + 1] [i_3] [i_2 + 1])))))))));
                                arr_19 [i_0] [i_1 - 1] [i_1] [i_4] [i_4] = (max((((max(var_0, 36)) + ((((arr_6 [i_3 + 2] [i_4] [i_4]) ? 21395 : 97))))), ((var_3 ? ((min(251, -1225073519))) : (((arr_13 [23] [i_0]) ? var_1 : var_4))))));
                            }
                        }
                    }
                }
                arr_20 [i_0 - 4] [16] [i_1] = ((-((((min(var_6, 1397433647927373723)) > ((((arr_6 [i_0] [i_1] [i_1]) ? 36 : 55759))))))));
            }
        }
    }
    #pragma endscop
}
