/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, (((-((((arr_6 [i_1 - 2] [i_0] [i_0 - 1] [i_0 - 2]) >= (arr_6 [i_1 - 4] [0] [i_0 - 3] [i_0 + 1])))))))));
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] [i_0] [i_0 - 1] = (max((!var_6), (max((arr_3 [i_0] [i_1 - 1] [i_2]), 129))));
                                var_12 += ((+(max((arr_4 [i_0 + 2] [i_1 + 1] [i_2]), (arr_9 [3] [i_0] [i_0 - 1] [i_1 - 3])))));
                            }
                        }
                    }
                    var_13 &= var_5;
                    var_14 = ((((((arr_10 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2]) ? (min(var_0, 0)) : (((var_0 < (arr_12 [i_0 + 2] [i_1] [i_0] [i_1] [i_1]))))))) ? (arr_10 [i_1 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2]) : (((!(arr_3 [i_0] [i_1 - 3] [i_2]))))));
                    arr_16 [i_2] = ((~((var_2 ? (arr_9 [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_1 + 1]) : (arr_10 [11] [i_1] [i_1 + 1] [i_1 - 4])))));
                    arr_17 [i_0] [i_1] [i_2] [11] = ((~((((((-127 - 1) ? 0 : 0))) ? 6 : (-9223372036854775807 - 1)))));
                }
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
