/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_8 || ((((((1 ? 31979 : 3971535454))) ? (((min(-31980, 64)))) : 3564955302)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = ((!((max((max((arr_6 [i_0] [i_2 + 4] [i_2 + 4] [i_4]), 100)), var_9)))));
                                arr_11 [i_0] [i_1] [i_2 + 1] [i_3 + 1] [i_4] = (i_1 % 2 == zero) ? (((var_5 % (max(var_2, ((((arr_2 [i_1]) + (-9223372036854775807 - 1))))))))) : (((var_5 % (max(var_2, ((((arr_2 [i_1]) - (-9223372036854775807 - 1)))))))));
                                arr_12 [i_0] [i_1] [i_0] [i_3 + 1] [i_1] [i_4] = ((((((((arr_0 [i_0] [i_4]) || (arr_5 [i_0] [i_0]))) ? 31987 : ((~(arr_9 [i_0] [i_1])))))) ? (max((arr_9 [i_3 + 1] [i_2 + 2]), (arr_0 [i_3 + 1] [i_3]))) : (((arr_0 [i_1 - 1] [i_1]) ? (arr_0 [i_1 - 2] [i_1 - 1]) : (arr_0 [i_1 - 2] [i_1 - 2])))));
                            }
                        }
                    }
                    var_14 += ((((((arr_6 [i_0] [i_1 - 2] [i_2 + 4] [i_0]) * (arr_3 [i_0])))) ? ((((arr_6 [i_0] [i_1 + 1] [i_1 - 1] [i_0]) - (arr_3 [i_0])))) : (arr_0 [i_0] [i_2 + 2])));
                }
            }
        }
    }
    var_15 = (max(var_15, ((var_11 ? var_10 : var_3))));
    #pragma endscop
}
