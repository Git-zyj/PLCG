/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((((min(64, (arr_4 [i_0] [i_0 + 1] [i_1 - 4])))) ? (((arr_0 [i_1 - 1] [i_1 + 1]) ? ((~(arr_3 [i_0] [i_1]))) : 240)) : (arr_0 [i_0] [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 ^= ((!(arr_1 [i_0])));
                                var_14 ^= ((var_7 ? ((max(((~(arr_3 [i_1] [i_1]))), 29772))) : (((((var_4 ? var_3 : var_11))) ? ((255 ? (arr_5 [i_1]) : 36)) : 255))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_15 = (max(var_15, 18762));
                            var_16 = ((((!((min(var_11, 1))))) ? var_5 : (max(((min(36, 1))), (arr_1 [i_0])))));
                            var_17 = ((((max(44, 2714527322))) ? (((arr_1 [i_0 - 1]) / ((max(45139, (arr_12 [i_0 + 1] [i_5] [i_5])))))) : (max((arr_7 [3]), ((~(arr_8 [i_0] [i_0 + 1] [i_0] [i_0 + 1])))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [i_1] [i_7] [i_9] = (((!var_0) ? (((!((min(var_0, 13)))))) : ((((max((arr_9 [i_0] [i_0 - 1] [13] [i_7] [2] [i_0 + 1]), 2714527322))) ? (arr_7 [i_9 + 1]) : 22))));
                                arr_23 [6] [i_7] [i_7] [i_7] [i_1 + 2] [i_7] [i_0] = (min((((-(((arr_8 [1] [i_1 + 1] [i_1 + 1] [i_8]) ? (arr_0 [i_8] [i_9 - 1]) : (arr_13 [7] [i_9] [7] [i_8])))))), (((~22) ? (((max((arr_10 [13] [i_7] [1] [i_7] [i_1 + 1] [i_0] [6]), 22)))) : (max(70368743129088, 111))))));
                                var_18 = ((-(max(4294967275, (arr_17 [1] [i_7] [i_7 - 1] [i_7] [i_0])))));
                            }
                        }
                    }
                }
                var_19 = (max(((114384163 ? ((min(var_1, (arr_13 [i_1] [12] [i_1 + 1] [12])))) : (arr_18 [i_0 - 1] [i_1] [i_0] [i_0] [i_1] [i_0 - 1]))), ((((max(222, 34))) ? 82 : ((var_3 ? 255 : 231))))));
            }
        }
    }
    var_20 = ((((min(8982798837574007536, var_3) | 0))));
    #pragma endscop
}
