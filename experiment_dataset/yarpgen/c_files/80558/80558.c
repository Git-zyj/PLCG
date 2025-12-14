/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (((((arr_0 [i_1]) - var_14)) ^ (arr_0 [i_3])));
                                var_18 *= ((-1 ? (((arr_2 [i_0 + 1]) / (arr_9 [i_0 - 1] [i_4 + 2] [i_0 - 1]))) : ((var_8 ? (arr_2 [i_0 - 3]) : (arr_2 [i_0 - 1])))));
                                var_19 = (((((((((arr_6 [i_0] [i_1] [i_2]) ? (arr_13 [13] [i_0] [i_2] [i_2] [i_2]) : var_10))) ? 3133720679 : (((arr_1 [i_0]) ? 1 : (arr_2 [0])))))) ? ((((((-8393 + 2147483647) >> (3133720679 - 3133720677)))) ? (((arr_4 [12] [i_0]) ? 3133720679 : (arr_14 [i_0] [i_0] [i_0] [i_0] [1] [1]))) : 86)) : (arr_15 [i_4] [i_4] [i_4 - 1] [1] [i_4] [i_4] [i_4])));
                                var_20 = (max(var_20, var_1));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] [i_0] = 1568466129116658631;
                    var_21 *= ((((((arr_11 [i_0] [i_0 - 3] [i_0] [i_1]) + var_10))) ? ((1 ? (arr_15 [3] [i_0] [3] [9] [9] [i_0 + 1] [i_1]) : (arr_11 [i_0] [i_0 - 2] [i_0 - 2] [i_0]))) : (arr_11 [i_0] [i_0 - 3] [i_1] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
