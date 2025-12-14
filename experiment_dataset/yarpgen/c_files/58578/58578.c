/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((var_0 == (max((var_15 / var_3), (var_2 + var_2)))))));
    var_19 = (max(((max(((min(var_15, var_13))), (min(var_14, var_3))))), ((var_13 ? var_7 : (max(var_14, var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((((((max((arr_1 [i_0]), (arr_2 [i_0] [4])))) == (max((arr_1 [i_0]), (arr_0 [i_1]))))) ? (max((max((arr_1 [i_1]), (arr_0 [i_0]))), ((((arr_1 [i_0]) ? (arr_2 [i_1] [0]) : (arr_3 [i_0] [2])))))) : ((max((arr_2 [i_0] [8]), (max((arr_1 [i_0]), (arr_3 [i_0] [i_0])))))))))));
                var_21 = arr_3 [i_0] [i_1];
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_22 = (arr_4 [i_1] [i_1] [4] [i_4]);
                                var_23 -= (((arr_5 [i_0] [i_0] [4]) == (((((arr_5 [i_0] [i_1] [i_2]) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_4] [i_4] [i_4] [i_4] [i_4]))) - (arr_6 [i_2])))));
                            }
                        }
                    }
                }
                var_24 = (max(var_24, ((((min(42507, 2147483642)) >> ((((((arr_7 [i_0]) ? (arr_1 [i_1]) : (arr_8 [10] [10] [i_0])))) ? (((arr_6 [i_0]) / (arr_2 [i_0] [16]))) : (arr_1 [i_1]))))))));
                var_25 = (arr_9 [i_0] [i_1] [i_0]);
            }
        }
    }
    #pragma endscop
}
